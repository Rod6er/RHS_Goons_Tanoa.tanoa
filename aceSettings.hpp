//------------------------------------------------------------------------------
// Settings for ACE3. These settings are harmless if ACE3 is not loaded.
// Drop that in the mission folder and put:
//
// #include "includes\aceSettings.hpp"
// 
// Somewhere in description.ext
//------------------------------------------------------------------------------
class ACE_Settings {
	class ace_finger_maxRange {
		value = 7;
		typeName = "SCALAR";
		force = 1;
	};
	class ace_medical_painCoefficient {
		value = 0.5;
		typeName = "SCALAR";
		force = 1;
	};
	class ace_medical_enableUnconsciousnessAI {
		value = 0;
		typeName = "SCALAR";
		force = 1;
	};
	class ace_medical_preventInstaDeath {
		value = 1;
		typeName = "BOOL";
		force = 1;
	};
	class ace_medical_medicSetting_basicEpi {
		value = 0;
		typeName = "SCALAR";
		force = 1;
	};
	class ace_repair_engineerSetting_repair {
		value = 0;
		typeName = "SCALAR";
		force = 1;
	};
	class ace_hearing_enableCombatDeafness {
		value = 0;
		typeName = "BOOL";
		force = 1;
	};
	class ace_gforces_enabledFor {
		value = 0;
		typeName = "SCALAR";
		force = 1;
	};
};
