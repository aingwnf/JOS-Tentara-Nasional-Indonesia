#include "BIS_AddonInfo.hpp"
class cfgMods
{
	class Mod_Base;
	class Indonesian_Mod: Mod_Base
	{
		logo="\tni\TNI.paa";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class tfa_mich
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_characters_F"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class Head;
	class H_HelmetB_Light: ItemCore
	{
	};
	class TFA_Mich_Black: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH (BLK)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_blk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_blk_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_Medic_Black: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH Medic(BLK)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_blk_co_med.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_blk_co_med.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_Green: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH (FOL)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_grn_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_grn_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_Medic_Green: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH Medic(FOL)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_grn_co_med.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_grn_co_med.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_Tan: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH (TAN)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_tan_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_tan_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_Medic_Tan: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH Medic (TAN)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_tan_co_med.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_tan_co_med.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
	class TFA_Mich_UN_Blue: H_HelmetB_Light
	{
		dlc="Indonesian_Mod";
		scope=2;
		displayName="TFA MICH UN (Blue)";
		model="\TFA_Gear\data\models\mich\mich.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\TFA_Gear\data\models\mich\mich_un_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=80;
			uniformModel="\TFA_Gear\data\models\mich\mich.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\TFA_Gear\data\models\mich\mich_un_co.paa"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=9;
					passThrough=0.5;
				};
			};
		};
	};
};
