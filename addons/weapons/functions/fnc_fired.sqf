#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Called when a unit fires a weapon or throws a grenade.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/events-framework.html#21-fired-event-handlers-ace_common
 *
 * Return Value:
 * None
 *
 * Examples:
 * fired = "_this call BNA_KC_weapons_fnc_fired";
 */

// TODO: Update to used "Exploded" EH for grenades
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
private ["_simulation"];

_simulation = [
    (configFile >> "CfgAmmo" >> _ammo),
    "simulation",
    ""
] call BIS_fnc_returnConfigEntry;

if (toLowerANSI _simulation in ["shotgrenade", "shotsmoke", "shotsmokex"]) then {
    _this call FUNC(grenadeHandler);
};