class cfgPatches
{
	class crimmas
	{
		units[]={};
		weapons[]={"ACE_coofVac"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","A3_Weapons_F_Items","ace_interact_menu","ace_interaction","ace_main","A3_Characters_F"};
	};
};

class cfgFunctions
{
	class DaD
	{
		class vacFunctions
		{
			tag="DaD";
			requiredAddons[] = {"A3_Data_F"};
			class vacFunc {file="crimmas\coof.sqf";};
		};
	};
};

class cfgWeapons
{
	class Default;
	class ItemCore;
	class CBA_MiscItem;
	class ACE_ItemCore;
	class ACE_atropine;
	class ACE_coofVac: ACE_atropine
	{
		access=0;
		scope=2;
		displayName="COVID Vaccine";
		descriptionShort="A vaccine for COVID-19. Certified 100% microchip free by Bill Gates!";
		descriptionUse = "A vaccine for COVID-19. Certified 100% microchip free by Bill Gates!";
	};
};

class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_ArmRight
			{
				class vaccCoofR
				{
					displayName="Vaccinate";
					condition = "[ACE_player,'ACE_coofVac'] call ace_common_fnc_hasItem && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            //statement="[_player, _target] remoteExec ['DaD_fnc_fultonLiftFunc', _target]";
		            statement="[_player, _target] call DaD_fnc_vacFunc";
		            //statement="[[_player, _target], 'DaD_fnc_fultonLiftFunc'] call BIS_fnc_spawnOrdered";
		            icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
				};
			};
			class ACE_ArmLeft
			{
				class vaccCoofL
				{
					displayName="Vaccinate";
					condition = "[ACE_player,'ACE_coofVac'] call ace_common_fnc_hasItem && alive _target";
					//condition="true";
		            exceptions[] = {};
		            showDisabled=0;
		            //statement="[_player, _target] remoteExec ['DaD_fnc_fultonLiftFunc', _target]";
		            statement="[_player, _target] call DaD_fnc_vacFunc";
		            //statement="[[_player, _target], 'DaD_fnc_fultonLiftFunc'] call BIS_fnc_spawnOrdered";
		            icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
				};
			};
		};
	};
};