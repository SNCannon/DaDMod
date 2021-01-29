class cfgPatches
{
	class Goo
	{
		units[]={};
		weapons[]={"ACE_goo","ACE_goo_250","ACE_goo_500"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","A3_Weapons_F_Items","ace_interact_menu","ace_interaction","ace_main","A3_Characters_F"};
	};
};

class ace_medical_treatment
{
	class IV
	{
		class BloodIV;
		class BloodIV_250;
		class BloodIV_500;
		class SalineIV;
		class SalineIV_250;
		class SalineIV_500;
		class PlasmaIV;
		class PlasmaIV_250;
		class PlasmaIV_500;
		class Goo: SalineIV
		{
			ratio[] = {};
		};
		class Goo_250: SalineIV_250
		{
			ratio[] = {};
		};
		class Goo_500: SalineIV_500
		{
			ratio[] = {};
		};
		class GameFuel: PlasmaIV{};
		class GameFuel_250: PlasmaIV_250{};
		class GameFuel_500: PlasmaIV_500{};
		class CodeRed: BloodIV{};
		class CodeRed_250: BloodIV_250{};
		class CodeRed_500: BloodIV_500{};
	};
};

class ace_medical_treatment_actions
{
	class BasicBandage;
	class BloodIV;
	class BloodIV_250;
	class BloodIV_500;
	class SalineIV;
	class SalineIV_250;
	class SalineIV_500;
	class PlasmaIV;
	class PlasmaIV_250;
	class PlasmaIV_500;
	class Goo: SalineIV
	{
		displayName = "Give Goo (1000ml)";
		displayNameProgress = "Transfusing Goo...";
		items[] = {"ACE_goo"};
	};
	class Goo_250: SalineIV_250
	{
		displayName = "Give Goo (250ml)";
		displayNameProgress = "Transfusing Goo...";
		items[] = {"ACE_goo_250"};
	};
	class Goo_500: SalineIV_500
	{
		displayName = "Give Goo (500ml)";
		displayNameProgress = "Transfusing Goo...";
		items[] = {"ACE_goo_500"};
	};
	class GameFuel: PlasmaIV
	{
		displayName = "Give MTN DEW® GAME FUEL® (1000ml)";
		displayNameProgress = "Transfusing GAME FUEL®...";
		items[] = {"ACE_gameFuel"};
	};
	class GameFuel_250: PlasmaIV_250
	{
		displayName = "Give MTN DEW® GAME FUEL® (250ml)";
		displayNameProgress = "Transfusing GAME FUEL®...";
		items[] = {"ACE_gameFuel_250"};
	};
	class GameFuel_500: PlasmaIV_500
	{
		displayName = "Give MTN DEW® GAME FUEL® (500ml)";
		displayNameProgress = "Transfusing GAME FUEL®...";
		items[] = {"ACE_gameFuel_500"};
	};
	class CodeRed: BloodIV
	{
		displayName = "Give MTN DEW® CODE RED® (1000ml)";
		displayNameProgress = "Transfusing CODE RED®...";
		items[] = {"ACE_codeRed"};
	};
	class CodeRed_250: BloodIV_250
	{
		displayName = "Give MTN DEW® CODE RED® (250ml)";
		displayNameProgress = "Transfusing CODE RED®...";
		items[] = {"ACE_codeRed_250"};
	};
	class CodeRed_500: BloodIV_500
	{
		displayName = "Give MTN DEW® CODE RED® (500ml)";
		displayNameProgress = "Transfusing CODE RED®...";
		items[] = {"ACE_codeRed_500"};
	};
};

class cfgWeapons
{
	class Default;
	class ItemCore;
	class CBA_MiscItem;
	class ACE_ItemCore;
	class ACE_bloodIV;
	class ACE_bloodIV_250;
	class ACE_bloodIV_500;
	class ACE_plasmaIV;
	class ACE_plasmaIV_250;
	class ACE_plasmaIV_500;
	class ACE_salineIV;
	class ACE_goo: ACE_salineIV
	{
		access=0;
		scope=2;
		displayName="Goo (1000ml)";
		descriptionShort="Goo IV, for restoring a patients precious goo";
		descriptionUse = "A medical volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_salineIV_250;
	class ACE_goo_250: ACE_salineIV_250
	{
		access=0;
		scope=2;
		displayName="Goo (250ml)";
		descriptionShort="Goo IV, for restoring a patients precious goo";
		descriptionUse = "A medical volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_salineIV_500;
	class ACE_goo_500: ACE_salineIV_500
	{
		access=0;
		scope=2;
		displayName="Goo (500ml)";
		descriptionShort="Goo IV, for restoring a patients precious goo";
		descriptionUse = "A medical volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_gameFuel: ACE_plasmaIV
	{
		access=0;
		scope=2;
		displayName="MTN DEW® GAME FUEL® (1000ml)";
		descriptionShort="MTN DEW® GAME FUEL®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_gameFuel_250: ACE_plasmaIV_250
	{
		access=0;
		scope=2;
		displayName="MTN DEW® GAME FUEL® (250ml)";
		descriptionShort="MTN DEW® GAME FUEL®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_gameFuel_500: ACE_plasmaIV_500
	{
		access=0;
		scope=2;
		displayName="MTN DEW® GAME FUEL® (500ml)";
		descriptionShort="MTN DEW® GAME FUEL®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_codeRed: ACE_bloodIV
	{
		access=0;
		scope=2;
		displayName="MTN DEW® CODE RED® (1000ml)";
		descriptionShort="MTN DEW® CODE RED®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_codeRed_250: ACE_bloodIV_250
	{
		access=0;
		scope=2;
		displayName="MTN DEW® CODE RED® (250ml)";
		descriptionShort="MTN DEW® CODE RED®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
	class ACE_codeRed_500: ACE_bloodIV_500
	{
		access=0;
		scope=2;
		displayName="MTN DEW® CODE RED® (500ml)";
		descriptionShort="MTN DEW® CODE RED®, for restoring a gamer's precious goo";
		descriptionUse = "A 'medical' volume-replenishing agent introduced into the blood system through an IV infusion.";
	};
};