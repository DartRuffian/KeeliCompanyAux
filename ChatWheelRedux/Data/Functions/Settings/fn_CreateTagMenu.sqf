/*
 * Author: DartRuffian
 * Creates a diary tab showing all available tags and what they are replaced with.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call CWR_CreateTagMenu;
 */

// Normal text settings:
// "<font size='13' face='RobotoCondensed'>Normal Text</font>"

// Main menu that everything will be in
player createDiarySubject ["CWR_TagsSubject", "Chat Wheel Tags"];

// List form of text
private _tags =
[
    [
        "[contact]",
        '[contact] will prompt the user to open a submenu and select a distance after selection an option. This tag adds quite a bit to the message: <br />  - "Contact!" is added to the beginning <br />  - The direction the player is facing <br />  - The bearing the player is facing <br />  - The selected distance ("Close!", "Mid!", "Far!") is added to the end of the message.',
        ["Infantry [contact]!", "Contact! Infantry North, bearing 0! Close!"]
    ],
    [
        "[weapon]",
        "[weapon] will be replaced with the name of the weapon the player is currently holding.",
        ["I'm holding a [weapon]!", "I'm holding a MX!"]
    ],
    [
        "[launcher]",
        "[launcher] is not intended to be used with custom messages, but is compatible. [launcher] will open the launcher sub-menu, with rocket launcher related options. Such as 'Permission to fire?', 'Clear backblast!', etc.",
        ["[launcher]", "Permission to fire?"]
    ],
    [
        "[status]",
        '[status] will prompt the user to open a submenu and select a status of Green, Yellow, Orange, Red, or Black. The selected option then replaced "[status]".',
        ["Status [status]!", "Status Red!"]
    ],
    [
        "[vl-ABC]",
        '[vl-ABC] is used to play voicelines for specific actions. The "ABC" part of the tag is the class defined in "CWR_VoiceLines", so in this case, a random file from configFile >> "CWR_VoiceLines" >> "ABC" >> "voiceLines" will be played. If no voicelines are set up, the tag is still removed from the message but no sound effect is played.',
        ["[vl-NeedMedic]I need a medic!", "I need a medic!"]
    ]
];
reverse _tags; // Records are created in reverse order, this makes it appear in the same order it's written in

// Orange: c48214
// Blue  : 99cccc
// Green : bdcc9c

private _FormatTitle =
{
    params ["_str"];

    _str = "<font color='#99cccc' size='20' face='RobotoCondensedBold'>" + _str + "</font>";
    _str;
};

private _FormatSubtitle =
{
    params ["_str"];

    _str = "<font color='#bdcc9c' size='15' face='RobotoCondensedBold'>" + _str + "</font>";
    _str;
};

private _FormatCode =
{
    params ["_str"];

    _str = '<font face="etelkaMonospacePro" size="10">"' + _str + '"</font>';
    _str;
};

_separator = if (CWR_TagMenu_UseNewLine) then [{ "<br />becomes<br />" }, { " <font size='11'>→</font>   " }];

// The records are somewhat finnicky, if you add a record to a different a submenu, you can't access the previous submenu.
// Submenus and records are also added from bottom to top, so everything needs to be added in reverse.
// Two loops are needed (one for each submenu) because you wouldn't be able to add the title to first submenu if both were in the same loop.
{
    // Example usages of tags
    private _raw = _x#2#0 call _FormatCode;
    private _formatted = _x#2#1 call _FormatCode;
    
    player createDiaryRecord ["CWR_TagsSubject", ["Examples", ((_x#0 call _FormatSubtitle) + "<br />" + ([_raw, _formatted] joinString _separator))], taskNull, "NONE", false];
} forEach _tags;
player createDiaryRecord ["CWR_TagsSubject", ["Examples", "Tag Examples" call _FormatTitle], taskNull, "NONE", false];

{
    // List of each tag and what it does
    player createDiaryRecord ["CWR_TagsSubject", ["Message Tags", ((_x#0 call _FormatSubtitle) + "<br />" + _x#1)], taskNull, "NONE", false];
} forEach _tags;
player createDiaryRecord ["CWR_TagsSubject", ["Message Tags", "Message Tags" call _FormatTitle], taskNull, "NONE", false];