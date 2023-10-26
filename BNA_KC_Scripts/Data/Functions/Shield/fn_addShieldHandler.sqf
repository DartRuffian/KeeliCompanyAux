/*
 * Author: DartRuffian
 * Damage handler for a shielded vehicle.
 *
 * Arguments:
 * vehicle: The vehicle to create the handler for
 *
 * Return Value:
 * None
 *
 * Examples:
 * (vehicle player) call BNAKC_fnc_addShieldHandler;
 */


#include "script_component.sqf"
params [["_vehicle", objNull, [objNull]]];
private ["_hasShield", "_regenTime", "_regenRate"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};

_vehicle addEventHandler
[
    "Killed",
    {
        params ["_vehicle", "", "", ""];
        private ["_regenHandler"];
        _vehicle call BNAKC_fnc_deactivateShield;

        _regenHandler = _vehicle getVariable ["BNA_KC_Shield_regenHandler", -1];
        [_regenHandler] call CBA_fnc_removePerFrameHandler;
        _vehicle setVariable ["BNA_KC_Shield_regenHandler", nil, true];

        _fullCrew = (fullCrew _vehicle) apply {_x#0};
        {
            _x allowDamage true;
        } forEach _fullCrew;
    }
];
_vehicle addEventHandler
[
    "Deleted",
    {
        params ["_vehicle"];
        private ["_regenHandler"];
        _vehicle call BNAKC_fnc_deactivateShield;

        _regenHandler = _vehicle getVariable ["BNA_KC_Shield_regenHandler", -1];
        [_regenHandler] call CBA_fnc_removePerFrameHandler;
        _vehicle setVariable ["BNA_KC_Shield_regenHandler", nil, true];
    }
];

_vehicle addEventHandler
[
    "GetOut",
    {
        params ["_vehicle", "_role", "_unit", "_turret", "_isEject"];
        _unit allowDamage true;
    }
];

_vehicle setVariable
[
    "BNA_KC_Shield_damageHandler",
    _vehicle addEventHandler
    [
        "HandleDamage",
        {
            params ["_vehicle", "_selection", "_damage", "", "", "", "", ""];
            private ["_oldHealth", "_newHealth", "_currentTime", "_lastHit"];

            _oldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
            _newHealth = (_oldHealth - _damage) max 0;
            _vehicle setVariable ["BNA_KC_Shield_health", _newHealth, true];

            if (_damage > 0) then
            {
                ["BNA_KC_shieldHealthChanged", [_vehicle, _oldHealth, _newHealth]] call CBA_fnc_localEvent;
            };

            if (_newHealth isEqualTo 0) then
            {
                _vehicle call BNAKC_fnc_deactivateShield;
            };

            _currentTime = time max serverTime; // serverTime returns 0 in SP
            _lastSound = _vehicle getVariable ["BNA_KC_Shield_lastSound", -SHIELD_HIT_SOUND_TIME];

            if ((_currentTime - _lastSound) >= SHIELD_HIT_SOUND_TIME) then
            {
                playSound3D [format ["lsb_sounds\deflector\shield_hit%1.wss", floor (random 7) + 1], _vehicle];
                _vehicle setVariable ["BNA_KC_Shield_lastSound", _currentTime];
            };

            _vehicle setVariable ["BNA_KC_Shield_lastHit", _currentTime, true];
            // Re-apply damage to vehicle, prevents being healed when hit
            _vehicle getHit _selection;
        }
    ],
    true
];

_regenTime =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenTime",
    BASE_SHIELD_REGEN_TIME
] call BIS_fnc_returnConfigEntry;

_regenRate =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_regenRate",
    BASE_SHIELD_REGEN_RATE
] call BIS_fnc_returnConfigEntry;

_vehicle setVariable
[
    "BNA_KC_Shield_regenHandler",
    [
        {
            _this#0 params ["_vehicle", "_regenTime", "_regenRate"];
            private ["_currentTime", "_lastHit", "_shieldMaxHealth", "_oldHealth", "_newHealth"];

            if (isGamePaused) then {continue};

            _currentTime = time max serverTime;
            _lastHit = _vehicle getVariable ["BNA_KC_Shield_lastHit", _currentTime];
            if (_currentTime >= (_lastHit + _regenTime)) then
            {
                _shieldMaxHealth =
                [
                    (configFile >> "CfgVehicles" >> typeOf _vehicle),
                    "BNA_KC_Shield_maxHealth",
                    BASE_SHIELD_HEALTH
                ] call BIS_fnc_returnConfigEntry;
                _oldHealth = _vehicle call BNAKC_fnc_getShieldHealth;
                _newHealth = (_oldHealth + _regenRate) min _shieldMaxHealth;

                if (_oldHealth != _newHealth) then
                {
                    _vehicle setVariable ["BNA_KC_Shield_health", _newHealth, true];
                    ["BNA_KC_shieldHealthChanged", [_vehicle, _oldHealth, _newHealth]] call CBA_fnc_localEvent;
                };
            };
        },
        _regenTime,
        [_vehicle, _regenTime, _regenRate]
    ] call CBA_fnc_addPerFrameHandler,
    true
];