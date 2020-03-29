class CfgPatches
{
    class simplebillboards
    {
        units[]=
        {
			"DS_SpawnPointSmall",
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Structures_Signs",
			"DZ_Structures",
        	"DZ_Data",
			"DZ_Structures_Furniture"
        };
    };
};
class CfgVehicles
{
    class HouseNoDestruct;
    class DS_SpawnPointSmall: HouseNoDestruct
    {
        scope=1;
        displayname="Crash Military PVP & Black Market";
        model="@boards\billboard2.p3d";
        hiddenSelections[]=
        {
            "panel1",
            "panel2"
        };
		hiddenSelectionsTextures[]=
        {
            "@boards\data\images\SpawnPoint1.paa",
            "@boards\data\images\SpawnPoint2.paa"
        };
    };
};