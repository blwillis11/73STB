#include "script_component.hpp"
params ["_medic", "_patient", "_bodyPart", "_arg4", "_arg5", "_usedItem"];

if ([_patient, _bodyPart] call STB73_fnc_hasTourniquetAppliedTo) exitWith {
	private _msg = ["There is already a tourniquet on this body part!", 1.5] call ACEFUNC(common,displayTextStructured);
};

[_patient, _usedItem] call ace_medical_treatment_addToTriageCard;
[_patient, "activity", LSTRING(Activity_appliedTourniquet), [[_medic, false, true] call ACE_common_fnc_getName]] call ace_medical_treatment_addToLog;

[STB73_fnc_tourniquetLocal, [_patient, _bodyPart], _patient] call CBA_fnc_targetEvent;
