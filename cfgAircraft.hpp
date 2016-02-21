/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgAircraft.hpp
*/

	class RHS_UH60M;
	class RHS_UH60M_MEV2;
	class RHS_CH_47F;
	class MELB_AH6M_H;
	class MELB_AH6M_L;
	class MELB_AH6M_M;
	class MELB_H6M;
	class MELB_MH6M;
	class FIR_F16C_TWAS;
	class FIR_F16C_TWAS2;
	class FIR_F16C;
	class FIR_F16C_Polish_CFT;
	class O_Heli_Transport_04_F;
	class O_Heli_Transport_04_medevac_F;
	class O_Heli_Transport_04_bench_F;
	class O_Heli_Transport_04_covered_F;
	class O_Heli_Attack_02_F;
	class O_Heli_Attack_02_black_F;
	class O_Heli_Light_02_v2_F;
	class O_Plane_CAS_02_F;
	class RHS_Mi8amt_civilian;
	class I_Plane_Fighter_03_AA_F;
	class I_Plane_Fighter_03_CAS_F;
	class RHS_AH64D_AA;
	class RHS_AH64D_CS;
	class RHS_AH64D_GS;

// Transport Helos	
	class SOR_UH60M : RHS_UH60M
	{
		faction = SOR_Faction_D_AM_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-60M (C4/P12)";
		class UserActions
		{
			class SOR_AutoDrop
			{
				displayName = "<t color='#008000'>Start Drop!</t>";
				displayNameDefault = "<t color='#008000'>Start Drop!</t>";
				condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
				priority = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius= 8;
				position = "";
				onlyForPlayer = 0;
				statement = "[this] spawn sor_fnc_autoparadrop";
			};
			class CloseCargoDoor
			{
				condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
				displayName = "Close right cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
			};
			class CloseCargoLDoor
			{
				condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
				displayName = "Close left cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
			};
			class OpenCargoDoor
			{
				condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
				displayName = "Open right cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
			};
			class OpenCargoLDoor
			{
				condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
				displayName = "Open left cargo door";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
			};
		};		
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
			mag_xx(rhsusf_mag_7x45acp_MHP,10)
			mag_xx(rhs_200rnd_556x45_M_SAW,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D,1)
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
	class SOR_CH_47F_AM : RHS_CH_47F
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "CH-47F (C4/P24)[Refuel]";
		transportFuel = 3000;
		transportAmmo = 10000;
		supplyRadius = 30;
		class UserActions
		{
			class SOR_AutoDrop
			{
				displayName = "<t color='#008000'>Start Drop!</t>";
				displayNameDefault = "<t color='#008000'>Start Drop!</t>";
				condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
				priority = 1;
				showWindow = 0;
				hideOnUse = 1;
				radius= 8;
				position = "";
				onlyForPlayer = 0;
				statement = "[this] spawn sor_fnc_autoparadrop";
			};
			class CloseCargoDoor
			{
				condition = "this doorPhase 'ramp_anim' > 0 and (alive this) and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0);";
				displayName = "Close Ramp";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['ramp_anim', 0];";
			};
			class OpenCargoDoor
			{
				condition = "this doorPhase 'ramp_anim' == 0 and (alive this) and ({player == _x} count [driver this,  this turretUnit [3], this turretUnit [4]] > 0)";
				displayName = "Open Ramp";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				statement = "this animateDoor ['ramp_anim', 1];";
			};
		};
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,40)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
			mag_xx(rhsusf_mag_7x45acp_MHP,10)
			mag_xx(rhs_200rnd_556x45_M_SAW,4)
			mag_xx(rhsusf_100Rnd_762x51,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Medic_Pack_D,2)
			pack_xx(SOR_Repair_Pack_D,1)			
		};
	};
	
	class SOR_UH60M_MEV2_AM : RHS_UH60M_MEV2
	{
		faction = SOR_Faction_D_AM;
		vehicleClass = "SOR_Aircraft";
		displayName = "UH-60 MEV (C5/P7)";
		driverCanEject = 1; // was 0, Allows pilot to exit heli with engine running
		ejectDeadCargo = 1; //test dead eject
		crewCrashProtection = 0.20; /// Was 0.25, multiplier of damage to crew of the vehicle => low number means better protection //test
		getInRadius = 3;
		crew = "SOR_MEVPilot_D";
		class TransportItems
		{
			item_xx(ACE_quikclot,20)
			item_xx(ACE_packingBandage,20)			
			item_xx(ACE_Fielddressing,20)
			item_xx(ACE_elasticBandage,20)
			item_xx(ACE_morphine,15)
			item_xx(ACE_epinephrine,15)
			item_xx(ACE_atropine,15)
			item_xx(ACE_bloodIV,5);	
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
			pack_xx(SOR_PJMedicPack_D,2)			
		};
	};
	
	class SOR_MELB_H6M_AM : MELB_H6M
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "H-6M (C2/P2)";
		fuelCapacity = 110; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
	class SOR_MELB_MH6M_AM : MELB_MH6M
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "MH-6M (C2/P6)";
		fuelCapacity = 110; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);		
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
	class SOR_MELB_MH6M_MEV_AM : MELB_MH6M
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "MH-6M MEV (C2/P6)";
		driverCanEject = 1; // was 0 test eject
		ejectDeadCargo = 1; //test dead eject	
		class TransportItems 
		{
			item_xx(ACE_quikclot,20)
			item_xx(ACE_packingBandage,20)			
			item_xx(ACE_Fielddressing,20)
			item_xx(ACE_elasticBandage,20)
			item_xx(ACE_morphine,15)
			item_xx(ACE_epinephrine,15)
			item_xx(ACE_atropine,15)
			item_xx(ACE_bloodIV,5);	
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
// Attack Helos	
	class SOR_MELB_AH6M_L_AM : MELB_AH6M_L
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_L (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
	class SOR_MELB_AH6M_M_AM : MELB_AH6M_M
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_M (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

	class SOR_MELB_AH6M_H_AM : MELB_AH6M_H
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-6M_H (C2/P1)";
		fuelCapacity = 200; //was fuelCapacity = 242;
		fuelConsumptionRate = 0.0555; //was 0.0368;
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,5)
			mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,4)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
	class SOR_RHS_AH64D_AA_AM : RHS_AH64D_AA
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (AA)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

	class SOR_RHS_AH64D_CS_AM : RHS_AH64D_CS
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (Close-Support)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};		
	
	class SOR_RHS_AH64D_GS_AM : RHS_AH64D_GS
	{
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft";
		displayName = "AH-64D (Ground-Suppression)";
		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};		
	
//////////	
// Jets //
//////////

	

/////////////////////
//Captured Aircraft//
/////////////////////

//Transport (This is the only one that can attach and drop pods)
	class SOR_O_Heli_Transport_04_F_AM : O_Heli_Transport_04_F
	{
		side=1;
		faction = SOR_Faction_D_AM;
		vehicleClass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (C3/POD)";
		class eventHandlers
		{
			init="_this call SLX_XEH_EH_Init;";
		};
		class TransportItems{};		
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
// Medivac Taru (Fixed pod)
	class SOR_O_Heli_Transport_04_medevac_F_AM : O_Heli_Transport_04_medevac_F
	{
		side=1;
		faction = SOR_Faction_D_AM;
		vehicleClass = "SOR_Aircraft_Captured";
		displayName = "MI-290 Taru (Medical C3/P4)";
		class TransportItems
		{
			item_xx(ACE_quikclot,20)
			item_xx(ACE_packingBandage,20)			
			item_xx(ACE_Fielddressing,20)
			item_xx(ACE_elasticBandage,20)
			item_xx(ACE_morphine,15)
			item_xx(ACE_epinephrine,15)
			item_xx(ACE_atropine,15)
			item_xx(ACE_bloodIV,5);	
			item_xx(G_Diving,3)
			item_xx(U_B_Wetsuit,3)
			item_xx(V_RebreatherB,3)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

	

//Attack
	class SOR_O_Heli_Attack_02_F_AM : O_Heli_Attack_02_F
	{
		side=1;
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-48 Kajman (C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};	

	class SOR_O_Heli_Attack_02_black_F_AM : O_Heli_Attack_02_black_F
	{
		side=1;
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "MI-48 Kajman (Black C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};

	class SOR_O_Heli_Light_02_v2_F_AM : O_Heli_Light_02_v2_F
	{
		side=1;
		faction = SOR_Faction_D_AM;
		vehicleclass = "SOR_Aircraft_Captured";
		displayName = "PO-30 Orca (B&W C2/P8)";
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};