params ["_attacher", "_target"];

_vac = _target getVariable "vaccinated";

if (isNil "_vac") then {
	_attacher removeItem "ACE_coofVac";
	_target setVariable ["vaccinated", true, true];

	systemChat format ["%1 vaccinated", name _target];

	_oldVal = missionNamespace getVariable "numVaccinated";

	if (isNil "_oldVal") then
	{
		missionNamespace setVariable ["numVaccinated", 0, true]; 
		_oldVal = 0;
	};

	missionNamespace setVariable ["numVaccinated", _oldVal + 1, true];
} else {
	systemChat format ["%1 is already vaccinated", name _target];
};