#include "script_component.hpp"

GVAR(activeJammers) = createHashmap;
GVAR(jammerHandler) = -1;
GVAR(interferenceFactor) = 0.625;

["CBA_settingsInitialized", {
    [QGVAR(addJammerLocal), {
        params ["_hash", "_jammer", "_radius", "_strength"];
        TRACE_4("addJammerLocal",_hash,_jammer,_radius,_strength);
        if (isServer) exitWith {}; // For singleplayer
        GVAR(activeJammers) set [_hash, [_jammer, _radius, _strength]];

        if (GVAR(jammerHandler) < 0) then {
            GVAR(jammerHandler) = [] call FUNC(jammerHandlerClient);
        };
    }] call CBA_fnc_addEventHandler;

    [QGVAR(removeJammerLocal), {
        params ["_hash"];
        TRACE_1("removeJammerLocal",_hash);
        if (isServer) exitWith {};
        GVAR(activeJammers) deleteAt _hash;
    }] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;