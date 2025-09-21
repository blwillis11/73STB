#include "script_component.hpp"

class CfgPatches
{
    class main
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { };             // Addon dependencies
        authors[] = {                       // Authors
            "Salmon",
            "73rd S-4 Team"
        };
        author = AUTHOR;                   // MACRO
        VERSION_CONFIG;
    };

    class XADDON: ADDON { // just in-case anything requires "acex_main"
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods {
    class PREFIX {
        dir = "@73STB";
        name = "73rd STB Mod V2";
        picture = ""; // 256x256            // Picture displayed in expansions menu.
        hidePicture = "true";               // Hide the picture in the expansions menu.
        hideName = "true";                  // Hide the name in the expansions menu.
        actionName = "Website";             // Text displayed in the action button in the main menu.
        action = CSTRING(URL);              // Website URL, that is opened when the action button is clicked.
        //description = "";                 // Short description, that is displayed in the main menu.
    };
};
