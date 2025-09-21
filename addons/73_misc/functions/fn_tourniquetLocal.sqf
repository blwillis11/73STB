params ["_patient", "_bodyPart"];

private _partIndex = ALL_BODY_PARTS find toLowerANSI _bodyPart;

private _tourniquets = GET_TOURNIQUETS(_patient);
_tourniquets set [_partIndex, CBA_missionTime];
_patient setVariable [VAR_TOURNIQUET, _tourniquets, true];

[_patient] call EFUNC(medical_status, updateWoundBloodLoss);

private _nearPlayers = (_patient nearEntities ["CAManBase", 6]) select {
	_x call EFUNC(common, isPlayer)
};
[QEGVAR(interact_menu, clearConditionCaches), [], _nearPlayers] call CBA_fnc_targetEvent;