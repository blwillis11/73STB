#include "script_component.hpp"
params ["_unit", "_bodyPart"];

private _index = ALL_BODY_PARTS find toLowerANSI _bodyPart;

private _has = false;
if (_index >= 0) then {
	_has = HAS_TOURNIQUET_APPLIED_ON(_unit,_index);
};

_has
