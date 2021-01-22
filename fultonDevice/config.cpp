class cfgPatches
{
	class fultonAddon
	{
		units[]={};
		weapons[]={"fultonDevice","cargoFulton"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","A3_Weapons_F_Items","ace_interact_menu","ace_interaction","ace_main","A3_Characters_F","A3_Air_F","A3_Armor_F","A3_Data_F"};
	};
};

class cfgFunctions
{
	class DaD
	{
		class fultonFunctions
		{
			tag="DaD";
			requiredAddons[] = {"A3_Data_F"};
			class fultonLift {file="fultonDevice\fultonLift.sqf";};
			class cargoLift {file="fultonDevice\cargoLift.sqf";};
		};
	};
};



class cfgWeapons
{
	class Default;
	class ItemCore;
	class ToolKitItem;
	class ToolKit;
	class fultonDevice: ToolKit
	{
		access=0;
		scope=2;
		displayName="Fulton Recovery Device";
		descriptionShort="A Fulton Recovery System. Attach to a newfriend and watch him go!";
		class ItemInfo: ToolKitItem
		{
			mass=20;
		};
	};
	class cargoFulton: ToolKit
	{
		access=0;
		scope=2;
		displayName="Cargo Fulton Device";
		descriptionShort="A Fulton Recovery System for recovering cargo and vehicles.";
		class ItemInfo: ToolKitItem
		{
			mass=50;
		};
	};
};

class cfgVehicles
{
	//class Item_Base_F;
	//class WeaponHolder;
	//class ReammoBox;
	//class Strategic;
	//class Building;
	//class Static;
	//class All;
	//class Item_Toolkit;
	//class Item_fultonDevice: Item_Toolkit
	//{
	//	access=0;
	//	scope=2;
	//	displayName="Fulton Recovery Device";
	//	descriptionShort="A Fulton Recovery System. Attach to a newfriend and watch him go!";
	//};

	class All;
	class AllVehicles;
	class Ship;
	class Man;
	class Air;
	class Thing;
	class ThingX;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonLift
				{
					displayName="Attach Fulton";
					condition = "[ACE_player,'fultonDevice'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_fultonLift";
				};
			};
		};
	};
	class Land;
	class LandVehicle;
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
	class Plane: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
	class Ship_F: Ship
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
	class ReammoBox_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class fultonCargo
				{
					displayName="Attach Cargo Fulton";
					condition = "[ACE_player,'cargoFulton'] call ace_common_fnc_hasItem && !isPlayer _target && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            statement="[_player, _target] spawn DaD_fnc_cargoLift";
				};
			};
		};
	};
};