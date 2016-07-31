/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgAircraft.hpp
*/

class RHS_UH60M;
class RHS_UH60M_MEV2;
class RHS_CH_47F;
class RHS_MELB_AH6M_H;
class RHS_MELB_AH6M_L;
class RHS_MELB_AH6M_M;
class RHS_MELB_H6M;
class RHS_MELB_MH6M;
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
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);
	};
};

class SOR_CH_47F : RHS_CH_47F
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);
	};
};

class SOR_UH60M_MEV2 : RHS_UH60M_MEV2
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
		item_xx(G_Diving,3);
		item_xx(U_B_Wetsuit,3);
		item_xx(V_RebreatherB,3);
		item_xx(ACE_personalAidKit,3);			
		
	};		
};

class SOR_MELB_H6M : RHS_MELB_H6M
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);
	};
};	

class SOR_MELB_MH6M : RHS_MELB_MH6M
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);		
	};
};	

class SOR_MELB_MH6M_MEV : RHS_MELB_MH6M
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
		item_xx(G_Diving,3);
		item_xx(U_B_Wetsuit,3);
		item_xx(V_RebreatherB,3);
	};
};	

// Attack Helos	
class SOR_MELB_AH6M_L : RHS_MELB_AH6M_L
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};	

class SOR_MELB_AH6M_M : RHS_MELB_AH6M_M
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};	

class SOR_MELB_AH6M_H : RHS_MELB_AH6M_H
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};	

class SOR_RHS_AH64D_AA : RHS_AH64D_AA
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};	

class SOR_RHS_AH64D_CS : RHS_AH64D_CS
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};		

class SOR_RHS_AH64D_GS : RHS_AH64D_GS
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};		

/////////////////////
//Captured Aircraft//
/////////////////////

// Medivac Taru (Fixed pod)
class SOR_O_Heli_Transport_04_medevac_F : O_Heli_Transport_04_medevac_F
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
		item_xx(G_Diving,3);
		item_xx(U_B_Wetsuit,3);
		item_xx(V_RebreatherB,3);
		item_xx(ACE_personalAidKit,5);	
	};
};

//Attack
class SOR_O_Heli_Attack_02_F : O_Heli_Attack_02_F
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};	

class SOR_O_Heli_Attack_02_black_F : O_Heli_Attack_02_black_F
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};

class SOR_O_Heli_Light_02_v2_F : O_Heli_Light_02_v2_F
{
	class TransportItems 
	{
		item_xx(ACE_quikclot,10);			
	};
};