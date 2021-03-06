params ["_attacher", "_target"];

_target setVehicleLock "LOCKED";
_attacher removeItem "cargoFulton";
_prop = createVehicle ["Sign_Sphere200cm_Geometry_F", [getPosATL _target select 0,getPosATL _target select 1,(getPosATL _target select 2) + 20]];
_bal = createVehicle ["Land_Camping_Light_F", [getPosATL _target select 0,getPosATL _target select 1,(getPosATL _target select 2) + 25]];
_bal setPosATL [getPosATL _target select 0, getPosATL _target select 1, (getPosATL _target select 2) + 15];
_prop attachTo [_bal, [0,0,0]];
waitUntil {_bal distance _target < 10};
_rope = ropeCreate [_bal, [0,0,-.4], _target, [0,0,0], 100];

sleep .3;

_count1 = 0;
while {_count1 <= 300 && getPosATL _bal select 2 < 90 && alive _bal && alive _target && alive _prop && ropeAttachedObjects _bal select 0 == _target} do {_count1 = _count1 + 1; _bal setVelocity [0,0,10]; sleep .1;};

_mass = getMass _target;
_target setMass 2;

while {getPosATL _bal select 2 < 2000 && alive _bal && alive _prop && alive _target && ropeAttachedObjects _bal select 0 == _target} do {
	if (velocity _bal select 2 < 5) then {deleteVehicle _bal; _prop setDamage 1; ropeDestroy _rope;} else {_bal setVelocity [0,0,50]};
	sleep .1;
};

if (side group _target getFriend side _attacher < 0.6 && alive _bal && alive _target && alive _prop && ropeAttachedObjects _bal select 0 == _target) then {
	{
		moveOut (_x select 0);
		(_x select 0) remoteExec ["deleteVehicle", 0];
		if (missionNamespace getVariable ["fultonMode","normal"] == "normal") then {
			[side _attacher, 1] call BIS_fnc_respawnTickets;
		};
		if (missionNamespace getVariable ["fultonMode","normal"] == "riot") then {
			_cR = missionNamespace getVariable ["captiveRioters", 0];
			_cR = _cR + 1;
			missionNamespace setVariable ["captiveRioters", _cR,true];
		};
		"An enemy unit has been captured via Fulton recovery" remoteExec ["systemChat", 0, false];
	} forEach fullCrew _target;
	_name = getText (configFile >> "CfgVehicles" >> typeOf _target >> "displayName");

	if (_attacher diarySubjectExists "fulton") then {
		[player, ["fulton", format ["%1", _name]]] remoteExec ["createDiaryRecord", 0, true];
	} else {
		[player, ["fulton", "Fulton Manifest"]] remoteExec ["createDiarySubject", 0, true];
		[player, ["fulton", format ["%1", _name]]] remoteExec ["createDiaryRecord", 0, true];
	};

	_target remoteExec ["deleteVehicle", 0];
	"A vehicle has been captured via Fulton recovery" remoteExec ["systemChat", 0, false];
} else {
	if (side group _target getFriend side _attacher < 0.6 || !alive _bal || !alive _target || !alive _prop || ropeAttachedObjects _bal select 0 != _target) then {
		"Fulton recovery failed!" remoteExec ["systemChat", 0, false];
		if (getPosATL _target select 2 < 0) then {
			_target setPosATL [getPosATL _target select 0, getPosATL _target select 1, 0];
		};
		_target setMass _mass;
	} else {
		{
			moveOut (_x select 0);
			(_x select 0) remoteExec ["deleteVehicle", 0];
		} forEach fullCrew _target;
		_target remoteExec ["deleteVehicle", 0];
		"A friendly vehicle was extracted via Fulton recovery and returned to their faction" remoteExec ["systemChat", 0, false];
	};
};

_bal remoteExec ["deleteVehicle", 0];
_rope remoteExec ["ropeDestroy", 0];
_prop remoteExec ["deleteVehicle", 0];