#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Removes the jamming functionality of a radio jammer.
 *
 * Arguments:
 * 0: Radio jammer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["BNA_KC_jammer_removeJammer", [_jammer]] call CBA_fnc_serverEvent;
 *
 * Public: No
 */

params ["_jammer"];
private ["_index"];
TRACE_1("fnc_removeJammer",_jammer);

if (!isServer) exitWith {false;};

_index = _jammer getVariable [QGVAR(activeJammerIndex), -1];
if (isNull _jammer or {_index < 0}) exitWith {false};

GVAR(activeJammers) deleteAt _index;
_jammer setVariable [QGVAR(activeJammerIndex), nil, true];
_jammer setVariable [QGVAR(isActive), nil, true];

publicVariable QGVAR(activeJammers);
true;