 
class Land_optre_milcrate_h2smallcrate_medic;
class 73_perm_crate : Land_optre_milcrate_h2smallcrate_medic {
  scope = 2;
  scopeCurator = 2;
  displayName = "[73] Perms Crate";
  vehicleClass = "73_Objects";  // This line assigns your crate to the new category
  editorCategory ="73_Objects"; // This places it under "Empty" in the Eden Editor
  editorSubcategory = "73_Crates";

  class ACE_Actions {
      class ACE_MainActions {
          displayName = "Interact";
          condition = "true";
          distance = 4;
          selection = "";
          class GrantDoctor {
              displayName = "Grant ACE Doctor Permissions";
              condition = "!(player getVariable ['ace_medical_medicClass', 0] == 2)";
              statement = "player setVariable ['ace_medical_medicClass', 2, true]; hint 'You now have ACE Doctor Permissions!';";
              
              priority = 1;
          };

          class RemoveDoctor {
              displayName = "Remove ACE Doctor Permissions";
              condition = "player getVariable ['ace_medical_medicClass', 0] == 2";
              statement = "player setVariable ['ace_medical_medicClass', 0, true]; hint 'ACE Doctor Permissions Removed.';";
              
              priority = 0.9;
          };

          class GrantEngineer {
              displayName = "Grant Advanced Engineer Permissions";
              condition = "!(player getVariable ['ace_isEngineer', 0] == 2)";
              statement = "player setVariable ['ace_isEngineer', 2, true]; hint 'You are now an Advanced Engineer!';";
              
              priority = 0.8;
          };

          class RemoveEngineer {
              displayName = "Remove Advanced Engineer Permissions";
              condition = "player getVariable ['ace_isEngineer', 0] == 2";
              statement = "player setVariable ['ace_isEngineer', 0, true]; hint 'Advanced Engineer Permissions Removed.';";
              
              priority = 0.7;
          };
          };
      };
  };

  class CfgEditorCategories {
    class 73_Objects {
        displayName = "73rd Objects";
    };
};

class CfgEditorSubcategories {
    class 73_Crates {
        displayName = "Crates";
    };
};
