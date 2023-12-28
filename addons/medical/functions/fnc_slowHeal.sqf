#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Slowly heals a unit over time.
 *
 * Arguments:
 * 0: The unit to heal <OBJECT>
 * 1: Delay between healing actions <NUMBER>
 *
 * Return Value:
 * CBA Per Frame Handler ID, -1 if error, or nothing if unit is already healed <NUMBER>
 *
 * Examples:
 * [player, 10] call BNA_KC_medical_fnc_slowHeal;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_delay", 0, [0]]
];
private ["_function", "_condition", "_exitCode", "_healHandler", "_fullHealed"];
TRACE_2("fnc_slowHeal", _unit, _delay);

if (isNull _unit) exitWith {-1;};
if (!(_unit isKindOf "CAManBase")) exitWith {-1;};
if (_unit getVariable [QGVAR(slowHealHandler), -1] isEqualTo -1) exitWith {WARNING_1("Tried to assign slow heal handler to %1, but unit is already being healed.", _unit); -1;};

_function = {
    params ["_handle", "_unit"];
    private ["_wounds", "_bloodLevel"];

    if (isGamePaused) then {continue};

    _wounds = _unit getVariable ["ace_medical_openWounds", createHashmap];
    _bloodLevel = _unit getVariable ["ace_medical_bloodVolume", 6];
    _painLevel = _unit getVariable ["ace_medical_pain", 0];

    INFO_4("Slow Healer %1 | (Pre-Treatment) _wounds=%2, _bloodLevel=%3, _painLevel=%4", _handle, _wounds, _bloodLevel, _painLevel);

    _fullHealed = true;

    if (count _wounds > 0) then {
        private ["_bodyPart", "_bodyPartWounds"];
        _fullHealed = false;

        _bodyPart = selectRandom keys _wounds;
        _bodyPartWounds = _wounds get _bodyPart;
        _bodyPartWounds deleteAt (random count _bodyPartWounds);

        if (count _bodyPartWounds > 0) then {
            _wounds set [_bodyPart, _bodyPartWounds];
        } else {
            _wounds deleteAt _bodyPart;
        };
    };

    _unit setVariable ["ace_medical_openWounds", _wounds, true];

    if (_bloodLevel < 6) then {
        _fullHealed = false;
        _bloodLevel = _bloodLevel + GVAR(bactaBloodRestoreAmount);
    } else {
        _bloodLevel = 6;
    };

    _unit setVariable ["ace_medical_bloodVolume", _bloodLevel, true];

    if (_painLevel > 0) then {
        _fullHealed = false;
        _painLevel = _painLevel - GVAR(bactaPainReductionAmount);
    } else {
        _painLevel = 0;
    };

    _unit setVariable ["ace_medical_pain", _painLevel, true];

    INFO_4("Slow Healer %1 | (Post-Treatment) _wounds=%2, _bloodLevel=%3, _painLevel=%4", _handle, _wounds, _bloodLevel, _painLevel);

    if (_fullHealed) then {
        [_unit, _unit] call ace_medical_treatment_fnc_fullHeal;
    };

    // Update aim effect and blood loss
    [_unit] call ace_medical_engine_fnc_updateDamageEffects;
    [_unit] call ace_medical_status_fnc_updateWoundBloodLoss;
};

_condition = {
    params ["_handle", "_unit"];
    alive _unit and !(_unit call FUNC(isFullyHealed));
};

_exitCode = {
    // params ["_handle", "_unit"];
};

_healHandler = [
    _function,
    _condition,
    _exitCode,
    _delay,
    [_unit]
] call EFUNC(core,tempPFH);

_unit setVariable [QGVAR(slowHealHandler), _healHandler];
_healHandler;