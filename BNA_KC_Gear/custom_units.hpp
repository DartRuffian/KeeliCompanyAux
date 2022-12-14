//----------------------------------------------------
// Units
//----------------------------------------------------

//----------------------------------------------------
// Phase 2
//----------------------------------------------------
// Keeli
class BNA_KC_Unit_Keeli: BNA_KC_Unit_INF_CMD
{
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Keeli";
	uniformClass = "BNA_KC_Uniform_Keeli";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Keeli_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Keeli_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Keeli","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Keeli","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
// Guardian
class BNA_KC_Unit_Guardian: BNA_KC_Unit_INF_LT
{
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Guardian";
	uniformClass = "BNA_KC_Uniform_Guardian";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Guardian_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Guardian_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Guardian","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Guardian","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
// Joe
class BNA_KC_Unit_Joe: BNA_KC_Unit_INF_CPT
{
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Joe";
	uniformClass = "BNA_KC_Uniform_Joe";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Joe_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Joe_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Joe","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Joe","BNA_KC_NVG_Rangefinder","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};
// Fil
class BNA_KC_Unit_Fil: BNA_KC_Unit_INF_CS
{
	editorSubcategory = "BNA_KCSub_Customs";
	
	displayName = "[KC] Fil";
	uniformClass = "BNA_KC_Uniform_Fil";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Fil_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Fil_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
// Fil's Squad Members
class BNA_KC_Unit_Fil_Squad: BNA_KC_Unit_Trooper
{
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Fil's Squad Trooper";
	uniformClass = "BNA_KC_Uniform_Fil_Squad";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_FilSquad_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_FilSquad_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil_Squad","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Fil_Squad","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","lsd_gar_clone_vest"
	};
};
// Ponds
class BNA_KC_Unit_Ponds: BNA_KC_Unit_INF_LCPL
{
	author = "DartRuffian";
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Ponds";
	uniformClass = "BNA_KC_Uniform_Ponds";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Ponds_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Ponds_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Ponds","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Ponds","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_armor"
	};
};
// Stone
class BNA_KC_Unit_Stone: BNA_KC_Unit_INF_CSS
{
	author = "DartRuffian";
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Stone";
	uniformClass = "BNA_KC_Uniform_Stone";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Stone_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\BNA_KC_Uniform_Stone_Lower.paa",
		"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
	};
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Stone","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Stone","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};
// Vortex
class BNA_KC_Unit_Vortex: BNA_KC_Unit_INF_CSS
{
	author = "DartRuffian";
	editorSubcategory = "BNA_KCSub_Customs";

	displayName = "[KC] Vortex";
	uniformClass = "BNA_KC_Uniform_Trooper";

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Vortex","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Vortex","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","SWLB_clone_recon_officer_armor"
	};
};


//----------------------------------------------------
// Pilots
//----------------------------------------------------


//----------------------------------------------------
// Snow Troopers
//----------------------------------------------------

// Keeli
class BNA_KC_Unit_Snow_Keeli: BNA_KC_Unit_Snow_Trooper
{
	editorSubcategory = "BNA_KCSub_Customs";
	displayName = "[KC] Keeli (Snow)";
	
	uniformClass = "BNA_KC_Uniform_Snow_Keeli";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\Snow\BNA_KC_Uniform_Insulated_Keeli_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\Snow\BNA_KC_Uniform_Insulated_Keeli_Lower.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Snow_Undersuit.paa"
	};

	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Snow_Keeli","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Snow_Keeli","BNA_KC_NVG_Commander","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};

// Joe
class BNA_KC_Unit_Snow_Joe: BNA_KC_Unit_Snow_Trooper
{
	editorSubcategory = "BNA_KCSub_Customs";
	displayName = "[KC] Joe (Snow)";
	
	uniformClass = "BNA_KC_Uniform_Snow_Joe";
	hiddenSelectionsTextures[] =
	{
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\Snow\BNA_KC_Uniform_Insulated_Joe_Upper.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\Customs\Snow\BNA_KC_Uniform_Insulated_Joe_Lower.paa",
		"BNA_KC_Gear\Data\Textures\Uniforms\BNA_KC_Uniform_Snow_Undersuit.paa"
	};
	
	linkedItems[] =
	{
		"BNA_KC_P2Helmet_Snow_Joe","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
	respawnLinkedItems[] =
	{
		"BNA_KC_P2Helmet_Snow_Joe","ItemMap","SWLB_comlink","ItemCompass","tf_microdagr","lsd_gar_p2Interior_hud","BNA_KC_Vest_Officer"
	};
};


//----------------------------------------------------
// ARC
//----------------------------------------------------


//----------------------------------------------------
// ARF
//----------------------------------------------------