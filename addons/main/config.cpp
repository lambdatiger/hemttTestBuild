#include "script_component.hpp"

class CfgPatches {
  class ADDON {
    name = "Test";
    units[] = {};
    weapons[] = {};
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {};
    author = "Lambda.Tiger";
  };
};

#include "cfgEventhandlers.hpp"


#if 6 < 18
class CfgVehicles {};
#endif