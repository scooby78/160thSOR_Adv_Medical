/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgBackpacks.hpp
*/	

	class B_AssaultPack_mcamo;
	class rhsusf_assault_eagleaiii_ocp;
	
//Custom Medic Pack	
	class SOR_Medic_Pack_D_AM : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Medic [Adv]";
		class TransportMagazines{};		
		class TransportItems
		{
			item_xx(ACE_tourniquet,10);
			item_xx(ACE_elasticBandage,20);
			item_xx(ACE_quikclot,20);
			item_xx(ACE_packingBandage,20);			
			item_xx(ACE_salineIV_500,8);			
			item_xx(ACE_morphine,10);
			item_xx(ACE_epinephrine,10);
			item_xx(ACE_atropine,10);
			
		};
	};

//Custom Parajumper Pack		
	class SOR_PJMedicPack_D_AM : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Paramedic [Adv]";
		class TransportItems
		{
			item_xx(ACE_tourniquet,20);
			item_xx(ACE_elasticBandage,20);
			item_xx(ACE_quikclot,20);
			item_xx(ACE_packingBandage,20);			
			item_xx(ACE_salineIV_500,8);			
			item_xx(ACE_morphine,10);
			item_xx(ACE_epinephrine,10);
			item_xx(ACE_atropine,10)
		};		
	};

//Custom Sniper Pack	
	class SOR_Sniper_Camo_AM : B_AssaultPack_mcamo
	{
		displayName = "Pack Camo Sniper [Adv]";
		class TransportItems
		{
			item_xx(ACE_quikclot,4);
			item_xx(ACE_salineIV_250,1);
		};
		class TransportMagazines
		{
			mag_xx(rhs_mag_m18_red,2);
			mag_xx(rhs_mag_m18_green,1);
			mag_xx(rhs_mag_an_m8hc,2);
		};
	};