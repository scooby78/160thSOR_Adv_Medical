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
class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII

	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};

//M11A3 Armour 300 	
class SOR_rhsusf_m113d_usarmy : rhsusf_m113d_usarmy

	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};

//Tusk I
class SOR_rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2sep1tuskid_usarmy

	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};	

//Tusk II
class SOR_rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiid_usarmy

	{
		class TransportItems 
		{
			item_xx(ACE_quikclot,10);			
		};
	};	