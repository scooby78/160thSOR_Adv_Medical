/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: (cfgArmour.hpp)Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

class RHS_M2A3_BUSKIII;
class rhsusf_m113d_usarmy;
class rhsusf_m113d_usarmy_medical;
class rhsusf_m113d_usarmy_supply;
class rhsusf_m113d_usarmy_unarmed;
class rhsusf_m1a2sep1d_usarmy;
class rhsusf_m1a2sep1tuskid_usarmy;
class rhsusf_m1a2sep1tuskiid_usarmy;
class rhsusf_m1a1aimd_usarmy;
class rhsusf_m1a1aim_tuski_d;
class B_SDV_01_F;
class rhsusf_m1025_d_s;
class rhsusf_m1025_d;
class rhsusf_m1025_d_Mk19;
class rhsusf_m1025_d_m2;
class rhsusf_m998_d_4dr;
class rhsusf_m998_d_2dr;
class B_APC_Tracked_01_rcws_F;
class rhsusf_M1083A1P2_d_fmtv_usarmy;
class RHS_M6;
class B_APC_Tracked_01_CRV_F;
class B_Truck_01_ammo_F;
class B_Truck_01_fuel_F;
class B_Truck_01_Repair_F;
class B_Boat_Transport_01_F;
class Cha_Des1_LAV25A2;
class Cha_Des1_LAV25_HQ;

// new supply suggestions by Bean
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d;
class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d;
class rhsusf_M978A4_BKIT_usarmy_d;

// LAV25A2
class SOR_LAV : Cha_Des1_LAV25A2
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);			
	};
};

// LAV25A2
class SOR_LAV_HQ : Cha_Des1_LAV25_HQ
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);			
	};
};


//M6A2	
class SOR_M6A2 : RHS_M6
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);			
	};
};
	
//M2A3 (BUSK III)	
class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);			
	};
};

//M11A3 	
class SOR_M113 : rhsusf_m113d_usarmy
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);				
	};
};

//M113A3 (Supply)	
class SOR_M113_SUPPLY : rhsusf_m113d_usarmy_supply
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);			
	};
};

//M113A3 (Unarmed)	
class SOR_M113_UNARMED : rhsusf_m113d_usarmy_unarmed
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);				
	};
};
	
//M11A3 Medical
class SOR_M113_MEDICAL : rhsusf_m113d_usarmy_medical
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);
		item_xx(ACE_packingBandage,20);		
		item_xx(ACE_Fielddressing,20);
		item_xx(ACE_elasticBandage,20);
		item_xx(ACE_morphine,15);
		item_xx(ACE_epinephrine,15);
		item_xx(ACE_atropine,15);
		item_xx(ACE_adenosine,15);	
		item_xx(ACE_bloodIV,5);
		item_xx(ACE_personalAidKit,3);				
	};
};	

//M1A1
class SOR_M1A1 : rhsusf_m1a1aimd_usarmy
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);				
	};
};

//M1A1 (Tusk I)
class SOR_M1A1_TUSKI : rhsusf_m1a1aim_tuski_d
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);				
	};
};

//M1A2
class SOR_M1A2 : rhsusf_m1a2sep1d_usarmy
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);				
	};
};	

//M1A2 (Tusk I)
class SOR_M1A2_TUSKI : rhsusf_m1a2sep1tuskid_usarmy
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);		
	};
};	

//M1a2 (Tusk II)
class SOR_M1A2_TUSKII : rhsusf_m1a2sep1tuskiid_usarmy
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,20);		
	};
};	

//Troop transport
class SOR_TROOP_TRUCK : rhsusf_M1083A1P2_d_fmtv_usarmy
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};
	
//Troop transport
class SOR_TROOP_CAR : rhsusf_m1025_d
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};
	
//Troop armed transport GL
class SOR_TROOP_CAR_MK19 : rhsusf_m1025_d_Mk19
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};
	
//Troop armed transport MG
class SOR_TROOP_CAR_M2 : rhsusf_m1025_d_m2
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	

//Troop unarmed transport 4 door
class SOR_TROOP_CAR_4DR : rhsusf_m998_d_4dr
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	

//Troop unarmed transport 2 door
class SOR_TROOP_CAR_2DR : rhsusf_m998_d_2dr
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};
	
////////////////////////////////
//Engineering support vehicles//
////////////////////////////////

//Engineer transport
class SOR_Eng_Car_Transport_D : rhsusf_m1025_d_s
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};

//Engineer transport trucks
class SOR_Eng_Truck_Transport_D : rhsusf_M1083A1P2_d_fmtv_usarmy
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	

class SOR_Eng_Truck_ammo_D : B_Truck_01_ammo_F
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};

class SOR_Eng_Truck_ammo2_D : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};
class SOR_Eng_Truck_fuel_D : B_Truck_01_fuel_F
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	

class SOR_Eng_Truck_AutoRepair_D : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d
{
	class TransportItems
	{
		item_xx(ACE_DefusalKit,2);
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};		
	
class SOR_Eng_Truck_Repair_D : B_Truck_01_Repair_F
{
	class TransportItems
	{
		item_xx(ACE_DefusalKit,2);
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};		
	
	
//Engineer armored recovery
class SOR_Eng_APC_Tracked_01 : B_APC_Tracked_01_rcws_F
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	

class SOR_B_APC_Tracked_02 : B_APC_Tracked_01_CRV_F
{
	class TransportItems
	{
		item_xx(ACE_quikclot,20);		
		item_xx(ACE_EntrenchingTool,2);		
	};
};	
