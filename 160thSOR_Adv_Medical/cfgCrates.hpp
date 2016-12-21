/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgCrates.hpp
*/

class ACE_medicalSupplyCrate;
class B_supplyCrate_F;
class Land_MetalCase_01_large_F;
class Land_Pod_Heli_Transport_04_medevac_F;
class Land_PlasticCase_01_large_F;
class B_CargoNet_01_ammo_F;

/////////////////
//Static stores//
/////////////////

//PJ medical supply box//	
class SOR_PJ_Box_F_AM : Land_MetalCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;			
	displayName = "Box PJ Adv Medical[Static]";
	class TransportItems
	{
		item_xx(ACE_fieldDressing,30);
		item_xx(ACE_packingBandage,30);
		item_xx(ACE_elasticBandage,30);
		item_xx(ACE_quikclot,30);			
		item_xx(ACE_morphine,20);			
		item_xx(ACE_atropine,20);
		item_xx(ACE_adenosine,20);		
		item_xx(ACE_epinephrine,20);
		item_xx(ACE_bloodIV,30);
		item_xx(ACE_bloodIV_500,30);
		item_xx(ACE_plasmaIV,30);
		item_xx(ACE_plasmaIV_500,30);
		item_xx(ACE_tourniquet,30);
		item_xx(ACE_personalAidKit,5);			
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

// Medical Box 
class SOR_M_Box_F_AM : ACE_medicalSupplyCrate
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;			
	displayName = "Box [Medical Adv]";
	class TransportItems
	{
		item_xx(ACE_fieldDressing,60);
		item_xx(ACE_elasticBandage,60);
	};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_D_AM,2)
	};
};

class SOR_PJ_Pack_Box_F_AM : Land_PlasticCase_01_large_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyBoxes";
	vehicleClass = "SOR_SupplyBoxes";	
	faction = SOR_Faction_CRATE;		
	displayName = "Box PJ Pack Storage [Med Adv]";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_PJMedicPack_D_AM,7)
	};
};		

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// All in one Crate		
class SOR_AM_Crate_F_AM : B_CargoNet_01_ammo_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Crate [Ammo & Med Adv]";
	icon = "iconCrateAmmo";
	class TransportItems
	{
		item_xx(ACE_CableTie,5)
		item_xx(ACE_fieldDressing,200);
		item_xx(ACE_elasticBandage,200);
	};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,16)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,16)		
		mag_xx(1Rnd_HE_Grenade_shell,20)
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_D_AM,6)
	};
};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	

// Medical pod	
class SOR_Taru_Pod_medevac_Black_AM : Land_Pod_Heli_Transport_04_medevac_F
{
	editorCategory = "SOR_Cat_Supplies";
	editorSubcategory = "SOR_SubCat_SupplyCrates";
	vehicleClass = "SOR_SupplyCrates";	
	faction = SOR_Faction_CRATE;
	displayName = "Taru Pod [Medical CCP Adv]";
	side=1;	
	hiddenSelections[]=
	{
		"Camo_1",
		"Camo_2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_black_CO.paa",
		"\A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_black_CO.paa"
	};
	class TransportItems
	{
		item_xx(ACE_fieldDressing,60);
		item_xx(ACE_packingBandage,60);
		item_xx(ACE_elasticBandage,60);
		item_xx(ACE_quikclot,60);			
		item_xx(ACE_morphine,40);			
		item_xx(ACE_atropine,40);
		item_xx(ACE_adenosine,40);		
		item_xx(ACE_epinephrine,40);
		item_xx(ACE_bloodIV,30);
		item_xx(ACE_bloodIV_500,30);
		item_xx(ACE_plasmaIV,30);
		item_xx(ACE_plasmaIV_500,30);
		item_xx(ACE_tourniquet,30);
		item_xx(ACE_personalAidKit,10);	
	};		
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
		mag_xx(rhs_mag_an_m8hc,10)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_D_AM,6)
		pack_xx(SOR_PJMedicPack_D_AM,6)
	};
};