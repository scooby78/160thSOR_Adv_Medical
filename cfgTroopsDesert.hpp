/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgTroopsDesert.hpp
*/


//////////////////////		
//Base Soldier Class//
//////////////////////
	
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
	class SOR_Actual_D_AM : SOR_Actual_D
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};

//Commander		
class SOR_Commander_D_AM : SOR_Commander_D

	{
		faction = SOR_Faction_D_AM;
		Items[] =
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};  
        RespawnItems[] = 
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};
	};
	
//Mechanised Commander 
class SOR_MechCommand_D_AM : SOR_MechCommand_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] =
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};  
        RespawnItems[] = 
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};
	};	
	
//Air Commander 
class SOR_AirCommand_D_AM : SOR_AirCommand_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] =
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};  
        RespawnItems[] = 
		{
			"ACE_morphine",
			"ACE_epinephrine",
			Standard_Meds,
			SL_Equip
		};
	};	

//Platoon RTO
class SOR_RTO_D_AM : SOR_RTO_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
	};
	
//Teamleader	
	class SOR_Teamleader_D_AM : SOR_Teamleader_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};
        RespawnItems[] = {Standard_Meds,SL_Equip};
	};

//Combat Medics
class SOR_Medic_D_AM : SOR_Medic_D
	
	{
		faction = SOR_Faction_D_AM;
		backpack = "SOR_Medic_Pack_D_AM";
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};

// Auto rifleman
class SOR_M249AR_D_AM : SOR_M249AR_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};		
	};

class SOR_M240AR_D_AM : SOR_M240AR_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};	
	};

class SOR_Grenadier_D_AM : SOR_Grenadier_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};

class SOR_Rifleman_D_AM : SOR_Rifleman_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};					

class SOR_Rilfeman_Ammo_D_AM : SOR_Rilfeman_Ammo_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};
	
class SOR_RiflemanAT_D_AM : SOR_RiflemanAT_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};	
		
//Heli Pilots
class SOR_HeliPilot_D_AM : SOR_HeliPilot_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};

//Heli Crew Engineers
class SOR_HeliCrew_D_AM : SOR_HeliCrew_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};

//Jet Pilots
class SOR_JetPilot_D_AM : SOR_JetPilot_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};
	
// MEV Pilot & CO-Pilot
class SOR_MEVPilot_D_AM : 	SOR_MEVPilot_D

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};
	
class SOR_ParaJumper_D_AM : SOR_ParaJumper_D
	
	{
		faction = SOR_Faction_D_AM;
		backpack = "SOR_PJMedicPack_D_AM";		
		Items[] = {Standard_Meds,SL_Equip};  
        RespawnItems[] = {Standard_Meds,SL_Equip}; 
	};

//Recon Units
class SOR_ReconLeader_D_AM : SOR_ReconLeader_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};

class SOR_ReconJTAC_D_AM : SOR_ReconJTAC_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};

class SOR_ReconRifleman_D_AM : SOR_ReconRifleman_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  
	};
	
class SOR_Recon_M249AR_D_AM : SOR_Recon_M249AR_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  			
	};	
	
class SOR_ReconSpotter_D_AM : SOR_ReconSpotter_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};

class SOR_Marksman_D_AM : SOR_Marksman_D	

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};

//Snipers
	class SOR_Sniper_DT_AM : SOR_Sniper_DT		

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};

class SOR_Sniper_D_AM : SOR_Sniper_D		

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Recon_Equip,Recon_Meds};                
        RespawnItems[] = {Recon_Equip,Recon_Meds};  	
	};
	
	class SOR_Spotter_D_AM : SOR_Spotter_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] =
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};  
        RespawnItems[] = 
		{
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			Recon_Equip,
			Recon_Meds
		};  	
	};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_D_AM : SOR_MechCrew_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};
	
class SOR_MechOperator_D_AM : SOR_MechOperator_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};

class SOR_MechCrewCommander_D_AM : SOR_MechCrewCommander_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};	

class SOR_MechDriver_D_AM : SOR_MechDriver_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};	
	
//HMG Team
class SOR_HMGActual_D_AM : SOR_HMGActual_D

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};
	
class SOR_HMGGunner_D_AM : SOR_HMGGunner_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};	

class SOR_HMGCarrier_D_AM : SOR_HMGCarrier_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};

class SOR_HMGRFL_D_AM : SOR_HMGRFL_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};	
	
//Mortar Team
class SOR_MORActual_D_AM : SOR_MORActual_D

	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};
	
class SOR_MORGunner_D_AM : SOR_MORGunner_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};	

class SOR_MORCarrier_D_AM : SOR_MORCarrier_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};
	
class SOR_MORRFL_D_AM : SOR_MORRFL_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};  
        RespawnItems[] = {Standard_Meds};
	};		

	
//Repair Team
class SOR_Engineer_D_AM : SOR_Engineer_D
	
	{
		faction = SOR_Faction_D_AM;
		Items[] = {Standard_Meds};
        RespawnItems[] = {Standard_Meds};
	};	
