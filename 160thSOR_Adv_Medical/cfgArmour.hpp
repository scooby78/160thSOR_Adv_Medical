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
	class rhsusf_m1a2sep1tuskid_usarmy;
	class rhsusf_m1a2sep1tuskiid_usarmy;
	class rhsusf_m1a1aim_tuski_d;
	class RHS_M6;

	//M6A2	
class SOR_RHS_M6 : RHS_M6
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};
	
//M2A3 (BUSK III)	
	class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};

//M11A3 	
	class SOR_rhsusf_m113d_usarmy : rhsusf_m113d_usarmy
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};

	//M113A3 (Supply)	
class SOR_rhsusf_m113d_usarmy_supply : rhsusf_m113d_usarmy_supply
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};

//M113A3 (Unarmed)	
class SOR_rhsusf_m113d_usarmy_unarmed : rhsusf_m113d_usarmy_unarmed
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};
	
//M11A3 Medical
	class SOR_rhsusf_m113d_usarmy_medical : rhsusf_m113d_usarmy_medical
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,20)
			item_xx(ACE_packingBandage,20)			
			item_xx(ACE_Fielddressing,20)
			item_xx(ACE_elasticBandage,20)
			item_xx(ACE_morphine,15)
			item_xx(ACE_epinephrine,15)
			item_xx(ACE_atropine,15)
			item_xx(ACE_bloodIV,5)
			item_xx(ACE_personalAidKit,3)				
		};
	};	

//M1A1 (Tusk I)
class SOR_rhsusf_m1a1aim_tuski_d : rhsusf_m1a1aim_tuski_d
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};
	

//M1A2 (Tusk I)
	class SOR_rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2sep1tuskid_usarmy
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};	

//M1a2 (Tusk II)
	class SOR_rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiid_usarmy
	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};	