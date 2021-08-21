static Object SpawnObject(string type, vector position, vector orientation)
{
    Object obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetFlags(EntityFlags.STATIC, false);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("PileOfWoodenPlanks", "6356.272949 51.786819 3029.506104", "0.000000 -0.000000 -0.000000");
SpawnObject("PileOfWoodenPlanks", "6340.145020 51.870937 3015.793213", "8.999992 -0.155332 0.980780");
SpawnObject("MetalPlate", "6343.508301 51.610321 3015.756836", "8.999988 -0.155332 0.980780");
SpawnObject("MetalPlate", "6343.538086 51.618526 3013.912598", "9.000000 -0.607927 0.909050");
SpawnObject("DryBag_Yellow", "6342.234375 51.662041 3013.927979", "179.999939 0.458253 -0.992975");
SpawnObject("DryBag_Yellow", "6353.363281 51.605534 3029.892822", "-8.999951 0.000000 0.000000");
SpawnObject("Chainsaw", "6351.527344 51.763218 3030.113525", "0.000000 -7.577954 -0.000000");
SpawnObject("CanisterGasoline", "6351.472656 51.713219 3030.800293", "0.000000 -7.577954 -0.000000");
SpawnObject("Battery9V", "6351.300781 51.668949 3029.792480", "0.000000 -0.000000 -0.000000");
SpawnObject("Battery9V", "6351.192383 51.668949 3029.812988", "0.000000 -0.000000 -0.000000");
SpawnObject("Shovel", "6352.455078 51.749985 3030.727539", "0.000000 -5.604033 -2.051806");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
