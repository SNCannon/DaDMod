class cfgPatches
{
	class wieselStab
	{
		units[]={"I_LT_01_AT_F","I_LT_01_cannon_F"};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Armor_F_Tank_LT_01"};
	};
};

class cfgVehicles
{
	class All;
	class AllVehicles;
	class Land;
	class LandVehicle;
	class Tank;
	class Tank_F;
	class LT_01_base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class LT_01_AT_base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class I_LT_01_AT_F: LT_01_AT_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				stabilizedInAxes = 3;
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","ace_hot_3_2Rnd","ace_hot_2MP_2Rnd","ace_hot_3_2Rnd","ace_hot_3_2Rnd","V_UAS_Base_127x99_Mk300F3_100Rnd","V_UAS_Base_127x99_SSB5_100Rnd","V_UAS_Base_127x99_SSB5_100Rnd","V_UAS_Base_127x99_Mk300F3_100Rnd","V_UAS_Base_127x99_Mk300F3_100Rnd"};
			};
		};
	};
	class LT_01_cannon_base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class I_LT_01_cannon_F: LT_01_cannon_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				stabilizedInAxes = 3;
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","60Rnd_20mm_HE_shells","60Rnd_20mm_HE_shells","60Rnd_20mm_AP_shells","60Rnd_20mm_AP_shells","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_Yellow"};
			};
		};		
	};
	class LT_01_AA_base_F: LT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				stabilizedInAxes = 3;
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","4Rnd_70mm_SAAMI_missiles","4Rnd_70mm_SAAMI_missiles","V_UAS_Base_127x99_Mk300F3_100Rnd","V_UAS_Base_127x99_SSB5_100Rnd","V_UAS_Base_127x99_SSB5_100Rnd","V_UAS_Base_127x99_Mk300F3_100Rnd","V_UAS_Base_127x99_Mk300F3_100Rnd"};
			};
		};
	};
};