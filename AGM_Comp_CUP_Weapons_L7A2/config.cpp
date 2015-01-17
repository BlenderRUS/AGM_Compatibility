class CfgPatches {
  class AGM_Comp_CUP_Weapons_L7A2 {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {AGM_Comp_CUP_Weapons_Ammunition, CUP_Weapons_Ammunition, CUP_Weapons_L7A2};
    version = "1.0";
    versionStr = "1.0";
    versionAr[] = {1,0,0};
    author[] = {"CAA-Picard", "Jonpas"};
    authorUrl = "https://github.com/esteldunedain/";
  };
};

class CfgWeapons {
  class Rifle_Base_F;
  class Rifle_Long_Base_F: Rifle_Base_F {};

  // CUP_Weapons_L7A2
  class CUP_lmg_L7A2: Rifle_Long_Base_F {
    AGM_Overheating_allowSwapBarrel = 1;
    AGM_Overheating_JamChance[] = {0, 0.00033, 0.0017, 0.0084}; //2962 MRBS
    AGM_Bipod = 1;
  };
};
