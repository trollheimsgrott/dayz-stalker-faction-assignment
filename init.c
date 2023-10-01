void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 8, reset_day = 10;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer {
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

    //Bag Name
    string bag_name = "SmershBag";



        /*  Name: Military Class  */
    autoptr TStringArray Military_Face = {"BandanaMask_CamoPattern", "FS_SevaMark2_Camo", "FS_SevaMark2_Camo2", "FS_FACE_Mask_Green", "FS_BulatHelm_Grey", "FS_BulatHelm_Camo"};
    autoptr TStringArray Military_Head = {"BallisticHelmet_Green", "FS_Baril_Helm", "FS_Soviet_cap"};
    autoptr TStringArray Military_Pants = {"FS_Baril_Pants", "FS_ST_combez_pants_SpecFID", "FS_ST_combez_pants_MEDIC", "FS_BulatPants_Grey", "FS_BulatPants_Camo", "FS_RusVKPO_Pants", "FS_RangerPants_green", "FS_ST_Pants_Pixel", "FS_TacticalPants_vkpo", "FS_TacticalPants_black", "FS_TacticalPants_gorka_autumn", "FS_TacticalPants_ttsco", "FS_TacticalPants_WoodLand"};
    autoptr TStringArray Military_Jacket = {"FS_Baril_Jacket", "FS_SevaModule_SpecFID", "FS_SevaModule_MEDIC", "FS_BulatJacket_Grey", "FS_BulatJacket_Camo", "FS_RF_Jacket_VKPO", "FS_RusVKPO_jacket", "FS_RangerJacket_Green", "FS_ST_top_pixel","FS_ST_topNoHood_pixel", "FS_ArmyJacket", "FS_ArmyJacket_military"};
    autoptr TStringArray Military_Vest = {"UKAssVest_Black", "FS_TacticalVest"};
    autoptr TStringArray Military_Patch = {"FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY",  "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY", "FS_TAG_ARMY_1", "FS_TAG_ARMY_1", "FS_TAG_ARMY_1", "FS_TAG_ARMY_2", "FS_TAG_ARMY_2", "FS_TAG_ARMY_2", "FS_TAG_ARMY_3", "FS_TAG_ARMY_3", "FS_TAG_ARMY_4", "FS_TAG_ARMY_4", "FS_TAG_ARMY_5_Starsina", "FS_TAG_ARMY_6_Letexa", "FS_TAG_ARMY_7_StarLetexa", "FS_TAG_ARMY_8_Kapitan", "FS_TAG_ARMY_9_maer", "FS_TAG_ARMY_10_PodPolkov", "FS_TAG_ARMY_11_Polkov", "FS_TAG_ARMY_12_GeneralMaer", "FS_TAG_ARMY_13_GeneralLetex", "FS_TAG_ARMY_14_GeneralPolk", "FS_TAG_ARMY_MEDIC", "FS_ST_combez_SpecFID", "FS_ST_combez_MEDIC", "FS_TAG_BlackAngel"};
    autoptr TStringArray Military_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_black"};
    autoptr TStringArray Military_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Military_Belt = {"FS_Plash_Tactical_black"};
    string Military_Gun = "M4A1";
    string Military_SideArm = "MakarovIJ70";
    autoptr TStringArray Military_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Military_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black", "FS_BulatHelmFilter_Grey", "FS_BulatHelmFilter_Camo"};
    autoptr TStringArray Military_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Military_Bag = {"FS_HuntBag_co"};

        /*  Name: Bandits Class  */
    autoptr TStringArray Bandits_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_brown", "FS_SevaMark2_Black", "FS_FACE_Mask_black", "FS_FACE_Mask_blood", "FS_TOX_HeadGear_black"};
    autoptr TStringArray Bandits_Head = {};
    autoptr TStringArray Bandits_Pants = {"FS_ST_Pants_tan", "FS_ST_Pants_Bandit", "FS_TacticalPants_Desert", "FS_TacticalPants_tan"};
    autoptr TStringArray Bandits_Jacket = {"FS_BomberJack_Bandos", "FS_Brodaga_Jacket_Black", "FS_NoobJacket_black", "FS_NoobJacket_Beige", "FS_NoobJacket_white", "FS_Winter_Bandit", "FS_Winter_Nental", "FS_ST_top_tan","FS_ST_top_bandit", "FS_ST_topNoHood_tan", "FS_ST_topNoHood_bandit", "FS_BanditJacket_black", "FS_BanditJacket_Beige", "FS_BanditJacket_white"};
    autoptr TStringArray Bandits_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Bandits_Patch = {"FS_TAG_Bandit"};
    autoptr TStringArray Bandits_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_black"};
    autoptr TStringArray Bandits_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Bandits_Belt = {"FS_Plash_Tactical_black"};
    string Bandits_Gun = "M4A1";
    string Bandits_SideArm = "MakarovIJ70";
    autoptr TStringArray Bandits_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Bandits_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Bandits_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Bandits_Bag = {"FS_HuntBag_co"};

 

        /*  Name: Duty Class  */
    autoptr TStringArray Duty_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_DOLG", "FS_BulatHelm_Dolg"};
    autoptr TStringArray Duty_Head = {};
    autoptr TStringArray Duty_Pants = {"FS_ST_combez_pants_DOLG", "FS_BulatPants_Dolg", "FS_ST_Pants_DOLG", "FS_ArmyPants_DOLG", "FS_TacticalPants_Dolg"};
    autoptr TStringArray Duty_Jacket = {"FS_BomberJack_Dolg", "FS_Posednev_Combez_DOLG", "FS_SevaModule_DOLG", "FS_BulatJacket_Dolg", "FS_Winter_Dolg", "FS_ST_top_DOLG", "FS_ST_topNoHood_DOLG", "FS_ArmyJacket_DOLG"};
    autoptr TStringArray Duty_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Duty_Patch = {"FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG", "FS_TAG_DOLG_KANON", "FS_TAG_DOLG_KANON", "FS_ST_combez_DOLG"};
    autoptr TStringArray Duty_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Dolg_TIGR", "FS_MiniGloves_Dolg"};
    autoptr TStringArray Duty_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Duty_Belt = {};
    string Duty_Gun = "M4A1";
    string Duty_SideArm = "MakarovIJ70";
    autoptr TStringArray Duty_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Duty_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black", "FS_BulatHelmFilter_Dolg"};
    autoptr TStringArray Duty_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Duty_Bag = {"FS_HuntBag_co"};
 

        /*  Name: Freedom Class  */
    autoptr TStringArray Freedom_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_Svoboda", "FS_SevaMark2_Svoboda2"};
    autoptr TStringArray Freedom_Head = {};
    autoptr TStringArray Freedom_Pants = {"FS_ST_combez_pants_Svoboda", "FS_ST_Pants_SVOBODA", "FS_TacticalPants_free"};
    autoptr TStringArray Freedom_Jacket = {"FS_BomberJack_svoboda", "FS_Brodaga_Jacket_Green", "FS_Posednev_Combez_SVOBODA", "FS_SevaModule_Svoboda", "FS_ST_combez_Svoboda", "FS_Winter_Svoboda", "FS_ST_top_SVOBODA"};
    autoptr TStringArray Freedom_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Freedom_Patch = {"FS_TAG_SVOBODA"};
    autoptr TStringArray Freedom_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Svoboda"};
    autoptr TStringArray Freedom_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Freedom_Belt = {"FS_Plash_Tactical_green"};
    string Freedom_Gun = "M4A1";
    string Freedom_SideArm = "MakarovIJ70";
    autoptr TStringArray Freedom_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Freedom_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Freedom_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Freedom_Bag = {"FS_HuntBag_co"};
 

        /*  Name: Loners / Stalkers Class  */
    autoptr TStringArray Loners_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_brown", "FS_SevaMark2_Black"};
    autoptr TStringArray Loners_Head = {};
    autoptr TStringArray Loners_Pants = {"FS_ST_combez_pants_odinocka", "FS_ST_Pants_Netral", "FS_ST_Pants_Netral2"};
    autoptr TStringArray Loners_Jacket = {"FS_BomberJack_Neitral", "FS_Brodaga_Jacket_Black", "FS_Brodaga_Jacket", "FS_PlashType2_Brown", "FS_Posednev_Combez_Odinocka", "FS_SevaModule_Odinochka", "FS_ST_combez_odinocka", "FS_ST_top_Netral", "FS_ST_top_Netral2", "FS_ST_topNoHood_Netral", "FS_ST_topNoHood_Netral2"};
    autoptr TStringArray Loners_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Loners_Patch = {"FS_TAG_Odin"};
    autoptr TStringArray Loners_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Odinocki"};
    autoptr TStringArray Loners_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Loners_Belt = {"FS_Plash_Tactical_brown"};
    string Loners_Gun = "M4A1";
    string Loners_SideArm = "MakarovIJ70";
    autoptr TStringArray Loners_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Loners_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Loners_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Loners_Bag = {"FS_HuntBag_co"};

 

        /*  Mercenaries Class  */
    autoptr TStringArray Mercenaries_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_Naim", "FS_TOX_HeadGear_Blue"};
    autoptr TStringArray Mercenaries_Head = {"BallisticHelmet_Green"};
    autoptr TStringArray Mercenaries_Pants = {"FS_Naem_Pants_Standart", "FS_Naem_Pants_BlueCamo", "FS_Naem_Pants_GreenCamo", "FS_Naem_Pants_CamoSword", "FS_Naem_Pants_CamoNRF", "FS_Naem_Pants_CamoUK", "FS_Naem_Pants_CamoUS", "FS_ST_combez_pants_Naemniki", "FS_TOX_Pants_Blue"};
    autoptr TStringArray Mercenaries_Jacket = {"FS_Naem_Jacket_Standart", "FS_Posednev_Combez_WarEcolog", "FS_SevaModule_Naemniki", "FS_Naem_Jacket_BlueCamo", "FS_Naem_Jacket_GreenCamo", "FS_Naem_Jacket_CamoSword","FS_Naem_Jacket_CamoNRF", "FS_Naem_Jacket_CamoUK","FS_Naem_Jacket_CamoUS", "FS_ST_combez_Naemniki", "FS_TOX_Jacket_Blue", "FS_Winter_Naemnik"};
    autoptr TStringArray Mercenaries_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Mercenaries_Patch = {"FS_TAG_NAEM"};
    autoptr TStringArray Mercenaries_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_black"};
    autoptr TStringArray Mercenaries_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Mercenaries_Belt = {"FS_Plash_Tactical_blue"};
    string Mercenaries_Gun = "M4A1";
    string Mercenaries_SideArm = "MakarovIJ70";
    autoptr TStringArray Mercenaries_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Mercenaries_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Mercenaries_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Mercenaries_Bag = {"FS_HuntBag_co"};
 

        /*  Ecologists Class  */
    autoptr TStringArray Ecologists_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_EcoOrange", "FS_SevaMark2_EcoGreen", "FS_GAS_balon"};
    autoptr TStringArray Ecologists_Head = {"FS_TOX_HeadGear_orange", "FS_TOX_HeadGear_green"};
    autoptr TStringArray Ecologists_Pants = {"FS_TOX_Pants_orange", "FS_TOX_Pants_green", "FS_ECO_Gray_Pants", "FS_ECO_Green_Pants", "FS_ECO_Orange_Pants"};
    autoptr TStringArray Ecologists_Jacket = {"FS_TOX_Jacket_orange", "FS_TOX_Jacket_green", "FS_Eco_Gray_Jacket", "FS_Eco_Orange_Jacket", "FS_Eco_Green_Jacket", "FS_Winter_Olive", "FS_Winter_Gold"};
    autoptr TStringArray Ecologists_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Ecologists_Patch = {"FS_TAG_NAUKA"};
    autoptr TStringArray Ecologists_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Standart"};
    autoptr TStringArray Ecologists_Boots = {"MilitaryBoots_Black", "FS_ECO_Gray_Boots", "FS_ECO_Orange_Boots", "FS_ECO_Green_Boots"};
    autoptr TStringArray Ecologists_Belt = {};
    string Ecologists_Gun = "M4A1";
    string Ecologists_SideArm = "MakarovIJ70";
    autoptr TStringArray Ecologists_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Ecologists_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Ecologists_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Ecologists_Bag = {"FS_HuntBag_co"};


        /*  Monoliths Class  */
    autoptr TStringArray Monolith_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_Monolit"};
    autoptr TStringArray Monolith_Head = {};
    autoptr TStringArray Monolith_Pants = {"FS_ST_combez_pants_Monolit"};
    autoptr TStringArray Monolith_Jacket = {"FS_BomberJack_Monolit", "FS_Posednev_Combez_Monolit", "FS_SevaModule_Monolit", "FS_ST_combez_Monolit", "FS_Winter_monolit"};
    autoptr TStringArray Monolith_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Monolith_Patch = {"FS_TAG_monolit", "FS_TAG_monolit", "FS_TAG_monolit", "FS_TAG_monolit_KANON"};
    autoptr TStringArray Monolith_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Standart"};
    autoptr TStringArray Monolith_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Monolith_Belt = {};
    string Monolith_Gun = "M4A1";
    string Monolith_SideArm = "MakarovIJ70";
    autoptr TStringArray Monolith_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Monolith_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Monolith_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Monolith_Bag = {"FS_HuntBag_co"};

        /*  Clear Sky Class  */
    autoptr TStringArray ClearSky_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_ClearSky"};
    autoptr TStringArray ClearSky_Head = {"FS_ClearSky_Helmet"};
    autoptr TStringArray ClearSky_Pants = {"FS_ClearSkyType4_Pants", "FS_ClearSkyType2_Pants_Blue", "FS_ClearSkyType2_Pants_Green", "FS_ST_Pants_ClearSky", "FS_TacticalPants_Clear_Sky"};
    autoptr TStringArray ClearSky_Jacket = {"FS_ClearSkyType2NH_Blue", "FS_ClearSkyType4_Jacket", "FS_ClearSkyType3", "FS_ClearSky_NoobJacket", "FS_NoobJacket_ClearSky", "FS_ClearSky_Jacket", "FS_ClearSkyType2NH_Blue", "FS_ClearSkyType2NH_Green", "FS_ClearSkyType2_Blue", "FS_ClearSkyType2_Green", "FS_ST_top_ClearSky", "FS_ST_topNoHood_SVOBODA"};
    autoptr TStringArray ClearSky_Vest = {"UKAssVest_Black"};
    autoptr TStringArray ClearSky_Patch = {"FS_TAG_ClearSky"};
    autoptr TStringArray ClearSky_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_ClearSky"};
    autoptr TStringArray ClearSky_Boots = {"MilitaryBoots_Black", "FS_ClearSky_Boots"};
    autoptr TStringArray ClearSky_Belt = {"FS_Plash_Tactical_blue"};
    string ClearSky_Gun = "M4A1";
    string ClearSky_SideArm = "MakarovIJ70";
    autoptr TStringArray ClearSky_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray ClearSky_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray ClearSky_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray ClearSky_Bag = {"FS_HuntBag_co"};


     /*  Renegades Class  */
    autoptr TStringArray Renegades_Face = {"BandanaMask_CamoPattern", "FS_GasMask_FV", "FS_SevaMark2_Black", "FS_SevaMark2_Green"};
    autoptr TStringArray Renegades_Head = {};
    autoptr TStringArray Renegades_Pants = {"FS_TacticalPants_olive", "FS_RangerPants_green"};
    autoptr TStringArray Renegades_Jacket = {"FS_Winter_Olive", "FS_RangerJacket_Green"};
    autoptr TStringArray Renegades_Vest = {"UKAssVest_Black"};
    autoptr TStringArray Renegades_Patch = {"FS_TAG_renegati"};
    autoptr TStringArray Renegades_Gloves = {"WorkingGloves_Black", "FS_MiniGloves_Standart"};
    autoptr TStringArray Renegades_Boots = {"MilitaryBoots_Black"};
    autoptr TStringArray Renegades_Belt = {"FS_Plash_Tactical_green"};
    string Renegades_Gun = "M4A1";
    string Renegades_SideArm = "MakarovIJ70";
    autoptr TStringArray Renegades_SideArm_Attachments = {"MakarovPBSuppressor"};
    autoptr TStringArray Renegades_Attachments = {"M4_CQBBttstck_Black", "ACOGOptic", "M4_RISHndgrd_Black"};
    autoptr TStringArray Renegades_Mags = {"MAG_STANAG_30Rnd", "MAG_IJ70_8RND"};
    autoptr TStringArray Renegades_Bag = {"FS_HuntBag_co"};   


int minclassFace = 0;
int maxclassFace = 1;
int minclassHead = 0;
int maxclassHead = 1;
int minclassPants = 1;
int maxclassPants = 1;
int minclassJacket = 1;
int maxclassJacket = 1;
int minclassPatch = 1;
int maxclassPatch = 1;
int minclassVest = 0;
int maxclassVest = 1;
int minclassGloves = 0;
int maxclassGloves = 1;
int minclassBoots = 1;
int maxclassBoots = 1;
int minclassBelt = 0;
int maxclassBelt = 1;
int minclassBag = 1;
int maxclassBag = 1;
int mingeneral_items = 8;
int maxgeneral_items = 13;


    //  General Items which everyone will receive on spawn; regardless of class.
    autoptr TStringArray Utilities = {"TacticalBaconCan", "Canteen", "CanOpener", "FS_Geiger_Pripat", "FS_SoivetKruzka", "FS_ITEM_Antibiotics", "FS_ITEM_ANTIDOT", "FS_ITEM_Aptecka_BIG", "FS_ITEM_Aptecka_LOW", "FS_ITEM_Aptecka_SMALL", "FS_ITEM_BANDAGE", "FS_ITEM_FCP", "FS_ITEM_IRP_B", "FS_ITEM_MRE", "FS_ITEM_IRP_UKR_OLD", "FS_ITEM_IRP_UKR", "FS_ITEM_AV3", "FS_ITEM_VODKA", "FS_ITEM_Kolbas", "FS_ITEM_COLA", "FS_ITEM_NonStop", "FS_ITEM_PsyBlocade", "FS_ITEM_Booster", "FS_ITEM_MolokoSgus", "FS_ITEM_HotCan", "FS_ITEM_Antirad", "FS_ITEM_EnergyShokolat", "FS_ITEM_WATERbootle", "FS_DETECTOR_1", "FS_KPK_FV", "FS_Bread", "FS_GASMASK_PPM88", "FS_GasFilter", "FS_GasFilter_GP5", "FS_PDA", "FS_DETECTOR_3", "FS_DETECTOR_2", "chemlight_white", "chemlight_red", "chemlight_yellow", "chemlight_green", "chemlight_blue", "WaterBottle"};
    // Melee Weapons
    autoptr TStringArray oneHanders = {"Machete", "HuntingKnife", "KitchenKnife"};
 
    /*
     * End of Config:
     *   Do not change anything below unless you understand what you are doing....
    */
 
    autoptr TStringArray batteryCompatible = {"UniversalLight", "ReflexOptic", "M68Optic", "M4_T3NRDSOptic"};
 
    /*
     * @function addMags
     * @discussion Adds mags to players inventory
     *
     * @param    player: Instance Of Player
     * @param    magArray: Collection mag names
     * @param    count: Number of each mag which needs to be given.
     * @param    toQuickBar: Should be added to the quick bar, or not.
     */
    int magCount = 2;
    void addMags(PlayerBase player, TStringArray magArray, int count, bool toQuickBar) {
        if (count < 1 || magArray.Count() < 1)
            return;
 
        for(int x = 0; x < magArray.Count(); x++) {
            for (int i = 0; i < count; i++) {
                EntityAI mag = player.GetInventory().CreateInInventory(magArray.Get(x));
                if (toQuickBar)
                    if(x != 1) {
                        player.SetQuickBarEntityShortcut(mag, x + i + 2, true);
                    }else{
                        player.SetQuickBarEntityShortcut(mag, x + i + 3, true);
                    }
            }
        }
    }
 
    /*
     * @function dress_player
     * @abstract Gives player class related clothing.
     * @discussion This function puts choosen class clothing on the player.
     *
     * @param    player: Instance Of Player
     * @param    class_clothes: Collection of class clothing names
     * @param    general_items: Collection of general items which will also be given to the player
     */
    void dress_player(PlayerBase player, TStringArray class_Face, TStringArray class_Head, TStringArray class_Pants, TStringArray class_Jacket, TStringArray class_Patch, TStringArray class_Vest, TStringArray class_Gloves, 
 TStringArray class_Boots, TStringArray class_Belt){

        int numClassFaceToChoose = Math.RandomInt(minclassFace, maxclassFace + 1); // +1 to include the maximum value
        int numClassHeadToChoose = Math.RandomInt(minclassHead, maxclassHead + 1); // +1 to include the maximum value
        int numClassPantsToChoose = Math.RandomInt(minclassPants, maxclassPants + 1); // +1 to include the maximum value
        int numClassJacketToChoose = Math.RandomInt(minclassJacket, maxclassJacket + 1); // +1 to include the maximum value
        int numClassPatchToChoose = Math.RandomInt(minclassPatch, maxclassPatch + 1); // +1 to include the maximum value
        int numClassBootsToChoose = Math.RandomInt(minclassBoots, maxclassBoots + 1); // +1 to include the maximum value
        int numClassBeltToChoose = Math.RandomInt(minclassBelt, maxclassBelt + 1); // +1 to include the maximum value


        for (int j = 0; j < numClassFaceToChoose; j++) {
        int randomClassFaceIndex = Math.RandomInt(0, class_Face.Count());
        player.GetInventory().CreateAttachment(class_Face.Get(randomClassFaceIndex));
    }
        for (int k = 0; k < numClassHeadToChoose; k++) {
        int randomClassHeadIndex = Math.RandomInt(0, class_Head.Count());
        player.GetInventory().CreateAttachment(class_Head.Get(randomClassHeadIndex));
    }
        for (int l = 0; l < numClassPantsToChoose; l++) {
        int randomClassPantsIndex = Math.RandomInt(0, class_Pants.Count());
        player.GetInventory().CreateAttachment(class_Pants.Get(randomClassPantsIndex));
    }
        for (int m = 0; m < numClassJacketToChoose; m++) {
        int randomClassJacketIndex = Math.RandomInt(0, class_Jacket.Count());
        player.GetInventory().CreateAttachment(class_Jacket.Get(randomClassJacketIndex));
    }
        for (int n = 0; n < numClassPatchToChoose; n++) {
        int randomClassPatchIndex = Math.RandomInt(0, class_Patch.Count());
        player.GetInventory().CreateAttachment(class_Patch.Get(randomClassPatchIndex));
    }
        for (int o = 0; o < numClassBootsToChoose; o++) {
        int randomClassBootsIndex = Math.RandomInt(0, class_Boots.Count());
        player.GetInventory().CreateAttachment(class_Boots.Get(randomClassBootsIndex));
    }
        for (int p = 0; p < numClassBeltToChoose; p++) {
        int randomClassBeltIndex = Math.RandomInt(0, class_Belt.Count());
        player.GetInventory().CreateAttachment(class_Belt.Get(randomClassBeltIndex));
    }


 }
    
    /*
     *  @function   arm_player
     *  @abstract   Arms player with weapon, and adds attachments to weapon.
     *  @discussion This function creates a weapon, goes through all the attachments and attaches them,
     *                while checking if it needs a battery.
     *  @param      player: Instance of Player
     *  @param      weapon_name: Name of weapon to be given
     *  @param      gunAttachments: Collection of attachment names to be added to weapon
     *  @result     EntityAI: weapon
     */
    EntityAI arm_player(PlayerBase player, string weapon_name, TStringArray gunAttachments){
        EntityAI weapon = player.GetHumanInventory().CreateInHands(weapon_name);
        for(int i = 0; i < gunAttachments.Count(); i++){
            EntityAI attachment = weapon.GetInventory().CreateAttachment(gunAttachments.Get(i));
            for (int x = 0; x < batteryCompatible.Count(); x++){
                if(batteryCompatible.Get(x).Contains(gunAttachments.Get(i)))
                    attachment.GetInventory().CreateAttachment("Battery9V");
            }
        }
        return weapon;
    }
 
    EntityAI arm_player_secondary(PlayerBase player, string weapon_name, TStringArray secondaryAttachments){
        EntityAI weapon = player.GetInventory().CreateInInventory(weapon_name);
        for(int i = 0; i < secondaryAttachments.Count(); i++){
            EntityAI attachment = weapon.GetInventory().CreateAttachment(secondaryAttachments.Get(i));
            for (int x = 0; x < batteryCompatible.Count(); x++){
                if(batteryCompatible.Get(x).Contains(secondaryAttachments.Get(i)))
                    attachment.GetInventory().CreateAttachment("Battery9V");
            }
        }
        return weapon;
    }
 
/*
 *  @function   give_utilities
 *  @discussion Added a backpack to the players back and fills it with provided items.
 *
 *  @param      player: Instance of Player
 *  @param      util: Collection of utility items names to be added to the backpack
 *  @param      backpack: Backpack item name which items will be stored, and will be added to players back.
 */
// Keep track of whether the chemlight class has been chosen
// Keep track of whether the chemlight class has been chosen
// Keep track of whether the chemlight class has been chosen
// Define the give_utilities function with dynamic quantities
// Define the give_utilities function with dynamic quantities
// Define the give_utilities function with dynamic quantities
// Define the give_utilities function with dynamic quantities
void give_utilities(PlayerBase player, TStringArray util, TStringArray backpackNames) {
    // Initialize dynamic quantities for specific items
    map<string, array<int>> dynamicQuantities = new map<string, array<int>>;

    // Add dynamic quantities for specific items
    dynamicQuantities["FS_ITEM_BANDAGE"] = { 1, 5 };
    dynamicQuantities["FS_ITEM_PsyBlocade"] = { 2, 4 };
    dynamicQuantities["TacticalBaconCan"] = { 1, 2 };
    dynamicQuantities["FS_ITEM_VODKA"] = { 1, 2 };
    dynamicQuantities["FS_ITEM_Kolbas"] = { 1, 2 };
    dynamicQuantities["FS_ITEM_COLA"] = { 1, 2 };
    dynamicQuantities["FS_ITEM_NonStop"] = { 1, 2 };
    dynamicQuantities["FS_Bread"] = { 1, 4 };
    dynamicQuantities["TacticalBaconCan"] = { 1, 2 };
    // Add more items with dynamic quantities as needed

    // Keep track of items already added to the backpack
    TStringArray addedItems = new TStringArray;

    // Keep track of dynamic quantity items
    TStringArray addedDynamicItems = new TStringArray;

    // Check if any chemlight classname is present in the util array
    bool hasChemlights = false;
    foreach (string item: util) {
        if (item.Contains("chemlight")) {
            hasChemlights = true;
            break;
        }
    }

    // Choose a random backpack name from the provided array
    string selectedBackpackName = backpackNames.GetRandomElement();

    // Calculate the random quantity of items based on min and max criteria
    int totalItemCount = Math.RandomIntInclusive(mingeneral_items, maxgeneral_items);

    // Create the backpack and add it to the player's inventory
    EntityAI backpackEnt = EntityAI.Cast(player.GetHumanInventory().CreateInInventory(selectedBackpackName));

    // Keep track of the total quantity of class names added (excluding dynamic quantities)
    int totalClassNamesAdded = 0;

    // Calculate the number of items to choose (randomly)
    int numItemsToChoose = Math.RandomInt(mingeneral_items, maxgeneral_items); // Replace minValue and maxValue with your desired range

    // Flag to track if a chemlight classname has been chosen
    bool chemlightChosen = false;

    // Loop through the util array and add items to the backpack
    for (int p = 0; p < numItemsToChoose; p++) {
        // Generate a random index to select an item from util
        int randomIndex = Math.RandomInt(0, util.Count());

        // Get the item at the random index
        string currentItem = util[randomIndex];

        // Check if the current item has not already been added
        bool itemAlreadyAdded = false;
        bool dynamicItemAlreadyAdded = false;

        for (int k = 0; k < addedItems.Count(); k++) {
            if (addedItems[k] == currentItem) {
                itemAlreadyAdded = true;
                break;
            }
        }

        for (int k = 0; k < addedDynamicItems.Count(); k++) {
            if (addedDynamicItems[k] == currentItem) {
                dynamicItemAlreadyAdded = true;
                break;
            }
        }

        if (!itemAlreadyAdded) {
            // Add the item to the backpack
            int quantity = 1; // Default quantity

            // Check if the current item has a dynamic quantity defined
            if (dynamicQuantities.Contains(currentItem)) {
                array<int> quantityRange = dynamicQuantities[currentItem];
                // Generate a random quantity within the specified range
                quantity = Math.RandomIntInclusive(quantityRange[0], quantityRange[1]);
            }

            // Calculate the remaining space in the backpack
            int remainingSpace = totalItemCount - totalClassNamesAdded;

            // Make sure the quantity does not exceed the remaining space
            quantity = Math.Clamp(quantity, 1, remainingSpace);

            // Check if the current item is a chemlight variant
            if (hasChemlights && currentItem.Contains("chemlight")) {
                if (!chemlightChosen) {
                    // Add all chemlight variants to fulfill dynamic quantity
                    for (int j = 0; j < quantity; j++) {
                        backpackEnt.GetInventory().CreateInInventory(currentItem);
                    }
                    chemlightChosen = true; // Mark that a chemlight has been chosen
                }
            } else {
                // Add the quantity of the item to the backpack
                for (int j = 0; j < quantity; j++) {
                    backpackEnt.GetInventory().CreateInInventory(currentItem);
                }
            }

            // Update the total quantity of class names added
            totalClassNamesAdded += quantity;

            // Add the item to the list of added items
            addedItems.Insert(currentItem);

            // Add the item to the list of added dynamic items
            if (dynamicQuantities.Contains(currentItem)) {
                addedDynamicItems.Insert(currentItem);
            }
        }
    }
}


 
    /*
    *  @function   give_medical
    *  @discussion Puts a bag into players inventory and adds items into the bag.
    *                  This is NOT the same as give_utilities, one adds bag to inventory, one adds bag to player.
    *  @param      player: Instance of Player
    *  @param      bag_name: Name of the bag which will be added to the players inventory and filled with items.
    *  @param      supplies: Collection of items which will be added to the bag.
    */
    void give_medical(PlayerBase player, string bag_name, TStringArray supplies) {
        EntityAI medickit = player.GetInventory().CreateInInventory(bag_name);
 
        for (int i = 0; i < supplies.Count(); i++)
            medickit.GetInventory().CreateInInventory(supplies.Get(i));
    }
 
    override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName){
        Entity playerEnt;
        playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
        Class.CastTo(m_player, playerEnt);
 
        GetGame().SelectPlayer(identity, m_player);
 
        return m_player;
    }
 
    override void StartingEquipSetup(PlayerBase player, bool clothesChosen) {
        player.RemoveAllItems();
 
        EntityAI primary;
        EntityAI secondary;
 
        switch (Math.RandomInt(0, 9)) {
            case 0: // Military
                dress_player(player, Military_Face, Military_Head, Military_Pants, Military_Jacket, Military_Patch, Military_Vest, Military_Gloves, 
 Military_Boots, Military_Belt);
                primary = arm_player(player, Military_Gun, Military_Attachments);
                secondary = arm_player_secondary(player, Military_SideArm, Military_SideArm_Attachments);
                give_utilities(player, Utilities, Military_Bag);
                addMags(player, Military_Mags, magCount, true);
                break;
            case 1: // Bandits
                dress_player(player, Bandits_Face, Bandits_Head, Bandits_Pants, Bandits_Jacket, Bandits_Patch, Bandits_Vest, Bandits_Gloves, 
 Bandits_Boots, Bandits_Belt);
                primary = arm_player(player, Bandits_Gun, Bandits_Attachments);
                secondary = arm_player_secondary(player, Bandits_SideArm, Bandits_SideArm_Attachments);
                give_utilities(player, Utilities, Bandits_Bag);
                addMags(player, Bandits_Mags, magCount, true);
                break;
            case 2: // Duty
                dress_player(player, Duty_Face, Duty_Head, Duty_Pants, Duty_Jacket, Duty_Patch, Duty_Vest, Duty_Gloves, 
 Duty_Boots, Duty_Belt);
                primary = arm_player(player, Duty_Gun, Duty_Attachments);
                secondary = arm_player_secondary(player, Duty_SideArm, Duty_SideArm_Attachments);
                give_utilities(player, Utilities, Duty_Bag);
                addMags(player, Duty_Mags, magCount, true);
                break;        
            case 3: // Freedom
                dress_player(player, Freedom_Face, Freedom_Head, Freedom_Pants, Freedom_Jacket, Freedom_Patch, Freedom_Vest, Freedom_Gloves, 
 Freedom_Boots, Freedom_Belt);
                primary = arm_player(player, Freedom_Gun, Freedom_Attachments);
                secondary = arm_player_secondary(player, Freedom_SideArm, Freedom_SideArm_Attachments);
                give_utilities(player, Utilities, Freedom_Bag);
                addMags(player, Freedom_Mags, magCount, true);
                break;
            case 4: // Loners
                dress_player(player, Loners_Face, Loners_Head, Loners_Pants, Loners_Jacket, Loners_Patch, Loners_Vest, Loners_Gloves, 
 Loners_Boots, Loners_Belt);
                primary = arm_player(player, Loners_Gun, Loners_Attachments);
                secondary = arm_player_secondary(player, Loners_SideArm, Loners_SideArm_Attachments);
                give_utilities(player, Utilities, Loners_Bag);
                addMags(player, Loners_Mags, magCount, true);
                break;
            case 5: // Mercenaries
                dress_player(player, Mercenaries_Face, Mercenaries_Head, Mercenaries_Pants, Mercenaries_Jacket, Mercenaries_Patch, Mercenaries_Vest, Mercenaries_Gloves, 
 Mercenaries_Boots, Mercenaries_Belt);
                primary = arm_player(player, Mercenaries_Gun, Mercenaries_Attachments);
                secondary = arm_player_secondary(player, Mercenaries_SideArm, Mercenaries_SideArm_Attachments);
                give_utilities(player, Utilities, Mercenaries_Bag);
                addMags(player, Mercenaries_Mags, magCount, true);
                break;
            case 6: // Ecologists
                dress_player(player, Ecologists_Face, Ecologists_Head, Ecologists_Pants, Ecologists_Jacket, Ecologists_Patch, Ecologists_Vest, Ecologists_Gloves, Ecologists_Boots, Ecologists_Belt);
                primary = arm_player(player, Ecologists_Gun, Ecologists_Attachments);
                secondary = arm_player_secondary(player, Ecologists_SideArm, Ecologists_SideArm_Attachments);
                give_utilities(player, Utilities, Ecologists_Bag);
                addMags(player, Ecologists_Mags, magCount, true);
                break;
            case 7: // Monolith
                dress_player(player, Monolith_Face, Monolith_Head, Monolith_Pants, Monolith_Jacket, Monolith_Patch, Monolith_Vest, Monolith_Gloves, 
 Monolith_Boots, Monolith_Belt);
                primary = arm_player(player, Monolith_Gun, Monolith_Attachments);
                secondary = arm_player_secondary(player, Monolith_SideArm, Monolith_SideArm_Attachments);
                give_utilities(player, Utilities, Monolith_Bag);
                addMags(player, Monolith_Mags, magCount, true);
                break;
            case 8: // Clear Sky
                dress_player(player, ClearSky_Face, ClearSky_Head, ClearSky_Pants, ClearSky_Jacket, ClearSky_Patch, ClearSky_Vest, ClearSky_Gloves, 
 ClearSky_Boots, ClearSky_Belt);
                primary = arm_player(player, ClearSky_Gun, ClearSky_Attachments);
                secondary = arm_player_secondary(player, ClearSky_SideArm, ClearSky_SideArm_Attachments);
                give_utilities(player, Utilities, ClearSky_Bag);
                addMags(player, ClearSky_Mags, magCount, true);
                break;
            case 9: // Renegades
                dress_player(player, Renegades_Face, Renegades_Head, Renegades_Pants, Renegades_Jacket, Renegades_Patch, Renegades_Vest, Renegades_Gloves, Renegades_Boots, Renegades_Belt);
                primary = arm_player(player, Renegades_Gun, Renegades_Attachments);
                secondary = arm_player_secondary(player, Renegades_SideArm, Renegades_SideArm_Attachments);
                give_utilities(player, Utilities, Renegades_Bag);
                addMags(player, Renegades_Mags, magCount, true);
                break;
        }
        player.GetInventory().CreateInInventory(oneHanders.GetRandomElement());
        player.SetQuickBarEntityShortcut(primary, 0, true);
 
        if(secondary != null){
            player.SetQuickBarEntityShortcut(secondary, 1, true);
        }
    }
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}