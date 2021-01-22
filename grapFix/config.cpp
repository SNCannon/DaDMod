class cfgPatches
{
	class grapFix
	{
		units[]={};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]={"UAS_40mmGL"};
	};
};

class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class 1Rnd_HE_Grenade_shell;
	class UAS_BASE_40mmGL_XM1244_1Rnd: 1Rnd_HE_Grenade_shell
	{
		//normal 4
		mass=16;
	};
	class UAS_BASE_40mmGL_XM1244_3Rnd: 1Rnd_HE_Grenade_shell
	{
		//12
		mass=48;
	};
	class UAS_BASE_40mmGL_XM1244_6Rnd: 1Rnd_HE_Grenade_shell
	{
		//24
		mass=96;
	};
	class UAS_BASE_40mmGL_XM1244_12Rnd: 1Rnd_HE_Grenade_shell
	{
		//48
		mass=192;
	};
};