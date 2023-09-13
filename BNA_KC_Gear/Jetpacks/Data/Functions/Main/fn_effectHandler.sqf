/*
 * Authors: Clock, modified by DartRuffian
 * Handles spawning the visual effects for jetpacks. Effects are deleted when unit can no longer jetpack or touches the ground.
 * Modified from the same system from JLTS's Jumppacks
 *
 * Arguments:
 * 0: Unit to spawn the effects on <Object>
 *
 * Return Value:
 * None
 *
 * Example:
 * ['BNA_KC_Jet_JetpackFired', BNAKC_Jetpacks_fnc_effectHandler] call CBA_fnc_addEventHandler;
 */


params ["_unit"];

// Contants and macros
#define POS_SPINE3 [-0.009, -0.008, 0.356]
#define GET_STRING(config, defaultValue) (if (isText (config)) then {getText (config)} else {defaultValue})
#define GET_ARRAY(config, defaultValue) (if (isArray (config)) then {getArray (config)} else {defaultValue})

// Don't play effects for units on the ground or who can't jetpack
if (!(_unit call BNAKC_Jetpacks_fnc_canUseJetpack) or isTouchingGround _unit) exitWith {};

private _jetpack = backpack _unit;

// Obtain effect point names
private _effectPoints = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effectPoints", []);
private _effectTypes  = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_effects", []);
private _defaultColor = [1, 1, 1]; // Can't include [] with commas inside in a macro
private _lightColor   = GET_ARRAY(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_lightColor", _defaultColor);
if (_effectPoints isEqualTo []) exitWith {}; // Don't spawn effects if there aren't any effect points

private _totalEffects = missionNamespace getVariable ["BNA_KC_Jet_totalEffects", 0];
if (_totalEffects + (count _effectTypes * count _effectPoints) > BNA_KC_Jet_ParticleLimit) then
{

    // Particle "slots" remaining
    private _remainingSlots = (BNA_KC_Jet_ParticleLimit - _totalEffects) min 0;
    format ["_remainingSlots = %1", _remainingSlots] call BNAKC_fnc_devLog;

    _remainingSlots = floor (_remainingSlots / count _effectPoints);
    format ["_remainingSlots = %1", _remainingSlots] call BNAKC_fnc_devLog;

    _effectTypes = _effectTypes select [0, _remainingSlots];
    if (_remainingSlots == 0) then { _effectTypes = []; };
    format ["_effectTypes = %1", _effectTypes] call BNAKC_fnc_devLog;
};

[
    {
        params ["_unit", "_effectPoints", "_effectTypes", "_lightColor"];

        private _effectSources = _unit getVariable ["BNA_KC_Jet_effectSources", []];

        // Spawn effects for each effect point
        {
            // Get the effect's location in the model
            private _positionModelEffectpoint = (backpackContainer _unit) selectionPosition [_x, "Memory"];

            // [0, 0, 0] is the default value if the point does not exist
            if !(_positionModelEffectpoint isEqualTo [0, 0, 0]) then
            {
                // Calculate effect position relative to player model
                private _offsetEffect = (_positionModelEffectpoint vectorDiff POS_SPINE3);

                if (currentWeapon _unit != "") then
                {
                    // Extra offset if unit is holding a weapon, animation causes the jetpack to move but not the points
                    _offsetEffect = _offsetEffect vectorAdd [-0.12, 0, 0.1];
                };
                // Spawn all of the effects, attach to player, save to array
                {
                    private _effect = "#particlesource" createVehicle [0, 0, 0];
                    _effect setParticleClass _x;
                    _effect attachTo [_unit, _offsetEffect, "aimPoint"];
                    _effectSources pushBack _effect;
                } forEach _effectTypes;
            };

            // Create light, but only one
            if ("#lightpoint" in (_effectSources apply { typeOf _x })) then { continue };

            private _lightSource = "#lightpoint" createVehicle [0, 0, 0];
            _lightSource setLightColor _lightColor;
            _lightSource setLightAmbient [0, 0, 0];
            _lightSource setLightBrightness 0.5;
            // Attach to player
            _lightSource attachTo [_unit, [0, -0.4, 0], "aimPoint"];
            // Save for later removal
            _effectSources pushBack _lightSource;
        } forEach _effectPoints;

        // Save for later removal upon landing by the jetpack handler
        _unit setVariable ["BNA_KC_Jet_effectSources", _effectSources, true];

        // Update total effects, used for setting a cap of jetpack effects
        private _totalEffects = missionNamespace getVariable ["BNA_KC_Jet_totalEffects", 0];
        _totalEffects = _totalEffects + count _effectSources;
        missionNamespace setVariable ["BNA_KC_Jet_totalEffects", _totalEffects, true];
    },
    [_unit, _effectPoints, _effectTypes, _lightColor],
    0.15
] call CBA_fnc_waitAndExecute;