#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Plays a sound effect when a unit is unable to jetpack in certain conditions.
 *
 * Arguments:
 * 0: The unit to play the sound effect on <OBJECT>
 *
 * Return Value:
 * True if a sound was played, otherwise false
 *
 * Example:
 * player call FUNC(playErrorSound);
 */

params ["_unit"];
private ["_lastErrorSound"];
TRACE_1("fnc_playErrorSound",_unit);

_lastErrorSound = _unit getVariable [QGVAR(lastErrorSound), -ERROR_SOUND_COOLDOWN];

if (isNull (objectParent _unit) and
    {(CBA_missionTime - _lastErrorSound) >= ERROR_SOUND_COOLDOWN} and
    {_unit call ace_common_fnc_isAwake} and
    {!(_unit getVariable ["TAS_ATRT_isRiding", false])} and
    {!(_unit call EFUNC(core,inFeatureCamera))}
) exitWith {
    playSound3D ["\MRC\JLTS\jumppacks\sounds\error.wss", _unit];
    _unit setVariable [QGVAR(lastErrorSound), CBA_missionTime];
    true;
};

false;