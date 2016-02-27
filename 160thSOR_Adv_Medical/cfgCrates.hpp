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

	
/////////////////
//Static stores//
/////////////////

//PJ medical supply box//	
		class SOR_PJ_Box_F_AM : Land_MetalCase_01_large_F
	{
		displayName = "Box PJ Adv Medical[Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_fieldDressing,30);
			item_xx(ACE_packingBandage,30);
			item_xx(ACE_elasticBandage,30);
			item_xx(ACE_quikclot,30);			
			item_xx(ACE_morphine,20);			
			item_xx(ACE_atropine,20);
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
		displayName = "Box [Adv Medical]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_elasticBandage,40);
			item_xx(ACE_quikclot,40);
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
		displayName = "Box PJ Adv Pack Storage [Static]";
		vehicleClass = "SOR_SupplyBoxes";
		faction = SOR_Faction_CRATE;
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
	class SOR_AM_Crate_F_AM : B_supplyCrate_F
	{
		displayName = "Crate [Ammo&AdvMed]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		icon = "iconCrateAmmo";
		class TransportItems
		{
			item_xx(ACE_CableTie,5)
			item_xx(ACE_FieldDressing,100);
		};		
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,80)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
			mag_xx(rhsusf_mag_7x45acp_MHP,40)
			mag_xx(rhs_200rnd_556x45_M_SAW,8)	
			mag_xx(rhsusf_100Rnd_762x51,8)		
			mag_xx(rhs_mag_M433_HEDP,10)
			mag_xx(rhs_mag_m714_White,10)			
			mag_xx(rhs_mag_m713_Red,10)	
			mag_xx(MAAWS_HEAT,5)
			mag_xx(MAAWS_HEDP,5)			
			mag_xx(rhs_mag_m67,20)
			mag_xx(rhs_mag_an_m8hc,20)
			mag_xx(rhs_mag_m18_green,20)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D_AM,4)
		};
	};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	

// Medical pod	
	class SOR_Land_Pod_Heli_Transport_04_medevac_F_AM : Land_Pod_Heli_Transport_04_medevac_F
	{
		displayName = "Taru Pod [Adv Medical CCP]";
		vehicleClass = "SOR_SupplyCrates";
		faction = SOR_Faction_CRATE;
		class TransportItems
		{
			item_xx(ACE_fieldDressing,30);
			item_xx(ACE_packingBandage,30);
			item_xx(ACE_elasticBandage,30);
			item_xx(ACE_quikclot,30);			
			item_xx(ACE_morphine,20);			
			item_xx(ACE_atropine,20);
			item_xx(ACE_epinephrine,20);
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
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,5)
			mag_xx(rhs_mag_m67,10)
			mag_xx(rhs_mag_an_m8hc,10)
			mag_xx(rhs_mag_m18_green,10)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D_AM,4)
			pack_xx(SOR_PJMedicPack_D_AM,4)
		};
	};