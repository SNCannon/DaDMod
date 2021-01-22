class cfgPatches
{
	class cswFix
	{
		units[]={};
		weapons[] = {"CSW_LVOA_C_Base","CSW_LVOA_C_Black_TOB","CSW_FNC","CSW_CAWS"};
		requiredVersion=0.1;
		requiredAddons[]={"CSW_LVOA_C","CSW_FNC","CSW_CAWS"};
	};
};

class cfgWeapons
{
	class Default;
	class RifleCore;
	class Rifle;
	class Rifle_Base_F;
	class CSW_LVOA_C_Base: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			mass=61.7;
		};
	};
	class CSW_LVOA_C_Black_TOB: CSW_LVOA_C_Base
	{
		class WeaponSlotsInfo
		{
			mass=61.7;
		};
	};
	class CSW_FNC: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			mass=84.7;
		};
	};
	class CSW_CAWS: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			mass=82;
		};
	};
};