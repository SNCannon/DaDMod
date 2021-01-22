class cfgPatches
{
	class mortarFix
	{
		units[]={};
		weapons[] = {"potato_vz99_carryWeapon"};
		requiredVersion=0.1;
		requiredAddons[]={"potato_vz99"};
	};
};

class cfgWeapons
{
	class Default;
	class LauncherCore;
	class Launcher;
	class Launcher_Base_F;
	class potato_vz99_carryWeapon: Launcher_Base_F
	{
		class WeaponSlotsInfo
		{
			mass=100;
		};
	};
};