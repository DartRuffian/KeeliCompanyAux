#include "script_component.hpp"

["CBA_settingsInitialized", {
    ["acex_fortify_objectPlaced", LINKFUNC(objectPlaced)] call CBA_fnc_addEventHandler;
}] call CBA_fnc_addEventHandler;