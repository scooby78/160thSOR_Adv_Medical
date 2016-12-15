/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgTroopsDesert.hpp
*/

//////////////////////		
//Base Soldier Class//
//////////////////////
	
class B_Soldier_base_F;
class B_Soldier_TL_F;
class B_sniper_F;
class B_spotter_F;
class B_medic_F;
class B_officer_F;
class B_soldier_AR_F;
class B_Soldier_GL_F;
class B_Soldier_F;
class B_soldier_AT_F;
class B_Pilot_F;
class B_crew_F;
class B_recon_TL_F;
class B_engineer_F;

////////////////////////////		    
//SOR Desert Faction Units//
////////////////////////////

//Squad Actual	
class SOR_Actual_D : B_officer_F
{
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
};

//Commander		
class SOR_Commander_D : B_officer_F
{
	faction = SOR_Faction_D;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_cu_ocp";
	displayName = "Commander";
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip};  
};

//Mechanised Commander 
class SOR_MechCommand_D : SOR_Commander_D
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "Mechanised Commander";
	uniformClass = "rhs_uniform_cu_ocp_1stcav";
	linkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Repair",
		"rhsusf_cvc_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Repair", 
		"rhsusf_cvc_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
};	

//Air Commander 
class SOR_AirCommand_D : SOR_Commander_D
{
	vehicleclass = "SOR_Infantry_AIR";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	Items[] =
	{
		"B_UavTerminal",
		Standard_Meds,
		SL_Equip
	};  
	RespawnItems[] = 
	{
		"B_UavTerminal",
		Standard_Meds,
		SL_Equip
	};
	linkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"V_Rangemaster_belt", 
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
};	

//Zeus unit
class SOR_ZeusCommand_D : SOR_Commander_D
{
	displayName = "Zeus";
	linkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Squadleader",
		"rhsusf_ach_helmet_headset_ocp", 
		"ItemGPS", 
		"rhs_googles_clear",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Squadleader",
		"rhsusf_ach_helmet_headset_ocp", 
		"ItemGPS", 
		"rhs_googles_clear",  
		Standard_Equipment
	};
};	

//Platoon RTO
class SOR_RTO_D : B_Soldier_F
{
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
};

//Teamleader	
class SOR_Teamleader_D : B_Soldier_TL_F
{
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
};

//Combat Medics
class SOR_Medic_D : B_medic_F
{
	backpack = "SOR_Medic_Pack_D_AM";
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};

// Auto rifleman
class SOR_M249AR_D : B_soldier_AR_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};		
};

class SOR_M240AR_D : B_soldier_AR_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};	
};

class SOR_Grenadier_D : B_Soldier_GL_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};

class SOR_Rifleman_D : B_Soldier_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};					

class SOR_Rilfeman_Ammo_D : B_Soldier_F	
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};

class SOR_RiflemanAT_D : B_soldier_AT_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};	
	
//Heli Pilots
class SOR_HeliPilot_D : B_Pilot_F
{
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
};

//Heli Crew Engineers
class SOR_HeliCrew_D : B_crew_F
{
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
};

//Jet Pilots
class SOR_JetPilot_D : B_Pilot_F
{
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
};

// MEV Pilot & CO-Pilot
class SOR_MEVPilot_D : 	SOR_HeliPilot_D
{
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
};

class SOR_ParaJumper_D : B_medic_F
{
	backpack = "SOR_PJMedicPack_D_AM";		
	Items[] = {Standard_Meds,"rhsusf_acc_ACOG",SL_Equip};  
	RespawnItems[] = {Standard_Meds,"rhsusf_acc_ACOG",SL_Equip}; 
	linkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Medic",
		"H_HelmetSpecB_paint2",
		"rhs_ess_black", 
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_iotv_ocp_Medic",
		"H_HelmetSpecB_paint2",
		"rhs_ess_black", 
		Airborne_Equipment
	};
};

//Recon Units
class SOR_ReconLeader_D : B_recon_TL_F	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};  	
};

class SOR_ReconJTAC_D : SOR_ReconLeader_D	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};  	 	
};

class SOR_ReconRifleman_D : SOR_ReconLeader_D	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   
};

class SOR_Recon_M249AR_D : SOR_ReconLeader_D	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   		
};	

class SOR_ReconSpotter_D : SOR_ReconLeader_D	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   	
};

class SOR_Marksman_D : SOR_ReconLeader_D	
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds}; 
};

//Snipers
class SOR_Sniper_D : B_sniper_F		
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};  	
};

class SOR_Spotter_D : B_spotter_F
{
	Items[] = {Recon_Equip,Recon_Meds};                
	RespawnItems[] = {Recon_Equip,Recon_Meds};   	
};


//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_D : B_crew_F
{
	Items[] = {Standard_Meds};  
	RespawnItems[] = {Standard_Meds};
};

class SOR_MechOperator_D : SOR_MechCrew_D
{
	displayName = "Mechanised Operator";
	backpack = "SOR_Mech_Radio";
};

class SOR_MechCrewCommander_D : SOR_MechOperator_D
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_Mech_Radio";
	cost = 100000;
};	

class SOR_MechDriver_D : SOR_MechCrew_D
{
	displayName = "Mechanised Driver";
	backpack = "SOR_Repair_Pack_D";
};	

//HMG Team
class SOR_HMGActual_D : SOR_Actual_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "tf_rt1523g_rhs";
};

class SOR_HMGGunner_D : SOR_Rifleman_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};	

class SOR_HMGCarrier_D : SOR_Rifleman_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_HMGRFL_D_AM : SOR_Grenadier_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_GD_Pack_D";
};	
	
//Mortar Team
class SOR_MORActual_D : SOR_Actual_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "tf_rt1523g_rhs";
};
	
class SOR_MORGunner_D : SOR_Rifleman_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "B_Mortar_01_weapon_F";
};	

class SOR_MORCarrier_D : SOR_Rifleman_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "B_Mortar_01_support_F";
};
	
class SOR_MORRFL_D : SOR_Grenadier_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_GD_Pack_D";
};		
	
//Repair Team
class SOR_Engineer_Teamleader_D : B_engineer_F
{
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
};	

class SOR_Engineer_D : SOR_Engineer_Teamleader_D
{
	displayName = "Engineer";
	backpack = "SOR_Repair_Pack_D";
};	