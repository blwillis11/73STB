class Extended_PreStart_EventHandlers {
    class weapons {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class weapons {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class weapons {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
