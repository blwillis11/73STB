params ["_medic", "_patient", "_bodyPart"];

private _pressures = _patient getVariable ["v73_medical_pressuredParts",[false,false,false,false,false,false]];

private _partIndex = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find _bodyPart;

(!(_pressures select _partIndex)) && ([_medic, _patient, _bodyPart, "FieldDressing"] call ace_medical_treatment_fnc_canBandage)


//(([_medic, _patient, _bodyPart, "FieldDressing"] call ace_medical_treatment_fnc_canBandage) AND (v73_enable_holdpressure) AND !([_patient, _bodyPart] call ace_medical_treatment_fnc_hasTourniquetAppliedTo) AND (_this call ace_medical_treatment_fnc_canCPR))

