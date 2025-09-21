params ["_unit", "_bodyPart"];

private _index = ALL_BODY_PARTS find toLowerANSI _bodyPart;

_index >= 0 && {
	HAS_TOURNIQUET_APPLIED_ON(_unit, _index)
};