/*
	Name: 160th SOR Mod Adv Med
	Author: Scooby
	Date: 27/02/16
	Description: cfgGroups.hpp
*/

class CfgGroups 
{
	class West 
	{
		
		class SOR_Groups_D_AM
		{
			name = "SOR Infantry (Desert)";
			
			class SOR_InfGroups_D_AM 
			{
				name = "SOR Infantry";
				aliveCategory = "Infantry";
				
				class SOR_ComGroup_D_AM 
				{
					name = "Command Unit";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_D_AM";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Commander_D_AM";
						rank = CAPTAIN;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_Commander_D_AM";
						rank = CAPTAIN;
						position[] = {-4, 0, 0};
					};
				};
				class SOR_HavocGroup_D_AM 
				{
					name = "HAVOC";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Commander_D_AM";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "SOR_Commander_D_AM";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_RTO_D_AM";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Medic_D_AM";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};
				class SOR_INFSquadA_D_AM
					{
					name = "10 Man Squad";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					class Unit7 
					{
						side = 1;
						vehicle = "SOR_Actual_D_AM";
						rank = SERGEANT;
						position[] = {0, -0, 0};
					};
					
					class Unit8 
					{
						side = 1;
						vehicle = "SOR_Medic_D_AM";
						rank = PRIVATE;
						position[] = {0, -2, 0};
					};					
					class Unit9 
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_AM";
						rank = CORPORAL;
						position[] = {0, -6, 0};
					};
					class Unit10 
					{
						side = 1;
						vehicle = "SOR_M249AR_D_AM";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit11 
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_AM";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
					class Unit12 
					{
						side = 1;
						vehicle = "SOR_Rifleman_D_AM";
						rank = PRIVATE;
						position[] = {0, -12, 0 };
					};
					class Unit13 
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_AM";
						rank = CORPORAL;
						position[] = {0, -16, 0};
					};
					class Unit14 
					{
						side = 1;
						vehicle = "SOR_M240AR_D_AM";
						rank = PRIVATE;
						position[] = {0, -18, 0};
					};
					class Unit15 
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_AM";
						rank = PRIVATE;
						position[] = {0, -20, 0};
					};
					class Unit16 
					{
						side = 1;
						vehicle = "SOR_Rilfeman_Ammo_D_AM";
						rank = PRIVATE;
						position[] = {0, -22, 0};
					};
				};
				class SOR_Recon_D_AM
					{
						name = "Sniper Team";
						faction = "SOR_Faction_D_AM";
						side = 1;
						rarityGroup = 0.75;
						class Unit0 
						{
							side = 1;
							vehicle = "SOR_Sniper_D_AM";
							rank = SERGEANT;
							position[] = {0, 0, 0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "SOR_Spotter_D_AM";
							rank = SERGEANT;
							position[] = {0, -2, 0};
						};
					};				
				class SOR_AngGroup1_D_AM 
					{
						name = "Angel Crew";
						faction = "SOR_Faction_D_AM";
						side = 1;
						rarityGroup = 0.75;
		
						class Unit0 
						{
							side = 1;
							vehicle = "SOR_HeliPilot_D_AM";
							rank = LIEUTENANT;
							position[] = {-0, 0, 0};
						};						
						class Unit1 
						{
							side = 1;
							vehicle = "SOR_HeliCrew_D_AM";
							rank = CORPORAL;
							position[] = {-2, 0, 0};
						};						
						class Unit2 
						{
							side = 1;
							vehicle = "SOR_HeliCrew_D_AM";
							rank = CORPORAL;
							position[] = {-4, 0, 0};
						};
						class Unit3 						
						{
							side = 1;
							vehicle = "SOR_HeliCrew_D_AM";
							rank = CORPORAL;
							position[] = {-6, 0, 0};
						};
					};		
				class SOR_PegGroup2_D_AM 
				{
					name = "Pegasus Crew";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HeliPilot_D_AM";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HeliCrew_D_AM";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};
				};	
				class SOR_MEVGroup2_D_AM 
				{
					name = "Medivac Crew";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D_AM";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MEVPilot_D_AM";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_AM";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 
					
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_AM";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ParaJumper_D_AM";
						rank = PRIVATE;
						position[] = {-8, 0, 0};
					};
				};
				class SOR_EagleGroup2_D_AM 
				{
					name = "Eagle Pilots";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D_AM";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_JetPilot_D_AM";
						rank = LIEUTENANT;
						position[] = {-2, 0, 0};
					};
				};						
				class SOR_SabGroup2_D_AM 
				{
					name = "Mechanised Crew";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MechCrewCommander_D_AM";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MechCrew_D_AM";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MechOperator_D_AM";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_MechDriver_D_AM";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup2_D_AM
				{
					name = "HMG Team";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_HMGActual_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};						
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_HMGGunner_D_AM";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};						
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_HMGCarrier_D_AM";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 						
					{
						side = 1;
						vehicle = "SOR_HMGRFL_D_AM";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};		
				};
				class SOR_SupGroup3_D_AM
				{
					name = "Mortar Team";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;	
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_MORActual_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};							
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_MORGunner_D_AM";
						rank = CORPORAL;
						position[] = {-2, 0, 0};
					};							
					class Unit2 
					{
						side = 1;
						vehicle = "SOR_MORCarrier_D_AM";
						rank = PRIVATE;
						position[] = {-4, 0, 0};
					};
					class Unit3 							
					{
						side = 1;
						vehicle = "SOR_MORRFL_D_AM";
						rank = PRIVATE;
						position[] = {-6, 0, 0};
					};	
				};					
				class SOR_FireTeamLead_D_AM
				{
					name = "Fire Team Lead/Medic";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 1;
						vehicle = "SOR_Actual_D_AM";
						rank = CAPTAIN;
						position[] = {0, 0, 0};
					};
					
					class Unit1 
					{
						side = 1;
						vehicle = "SOR_Medic_D_AM";
						rank = CAPTAIN;
						position[] = {0, -2, 0};
					};
					
				};				
				class SOR_FireTeam1_D_AM
				{
					name = "Fire Team (1)";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_D_AM";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_AM";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rifleman_D_AM";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam2_D_AM
				{
					name = "Fire Team (2)";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
				
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M240AR_D_AM";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_AM";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rilfeman_Ammo_D_AM";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};					
				class SOR_FireTeam3_D_AM
				{
					name = "Fire Team (3)";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_Teamleader_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_M249AR_D_AM";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_Grenadier_D_AM";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Rilfeman_Ammo_D_AM";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
				};			
				class SOR_ReconTeam2_D_AM
				{
					name = "Recon Team";
					faction = "SOR_Faction_D_AM";
					side = 1;
					rarityGroup = 0.75;
					
					class Unit0
					{
						side = 1;
						vehicle = "SOR_ReconLeader_D_AM";
						rank = SERGEANT;
						position[] = {0, 0, 0};
						
					};
					class Unit1
					{
						side = 1;
						vehicle = "SOR_ReconJTAC_D_AM";
						rank = CORPORAL;
						position[] = {0, -2, 0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "SOR_ReconRifleman_D_AM";
						rank = PRIVATE;
						position[] = {0, -4, 0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "SOR_Recon_M249AR_D_AM";
						rank = PRIVATE;
						position[] = {0, -6, 0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "SOR_ReconSpotter_D_AM";
						rank = PRIVATE;
						position[] = {0, -8, 0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "SOR_Marksman_D_AM";
						rank = PRIVATE;
						position[] = {0, -10, 0};
					};
				};
			};
		};
	};
};

	

	

		

	


