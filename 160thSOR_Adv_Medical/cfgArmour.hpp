/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: (cfgArmour.hpp)Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

	class RHS_M2A3_BUSKIII;
	class rhsusf_m113d_usarmy;
	class rhsusf_m1a2sep1tuskid_usarmy;
	class rhsusf_m1a2sep1tuskiid_usarmy;
	
//M2A3 (BUSK III)	
	class SOR_M2A3_BUSKIII_AM : RHS_M2A3_BUSKIII
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 325 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

//M11A3 Armour 300 	
	class SOR_rhsusf_m113d_usarmy_AM : rhsusf_m113d_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

//Tusk I
	class SOR_rhsusf_m1a2sep1tuskid_usarmy_AM : rhsusf_m1a2sep1tuskid_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 700; //was 600 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

//Tusk II
	class SOR_rhsusf_m1a2sep1tuskiid_usarmy_AM : rhsusf_m1a2sep1tuskiid_usarmy
	{
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		armor = 800; //was 600 protection against missiles, collisions and explosions
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hp,2)
			weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	