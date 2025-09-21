params ["_medic", "_patient", "_bodypart"];

private _partIndex = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find _bodyPart;
private _pressures = _patient getVariable ["v73_medical_pressuredParts",[false,false,false,false,false,false]];
_pressures set [_partIndex,true];
_patient setVariable ["v73_medical_pressuredParts",_pressures,true];
