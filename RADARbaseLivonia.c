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
SpawnObject("Land_Mil_Fortified_Nest_Small", "6882.399902 175.354004 11109.000000", "10.000000 -1.813210 -0.844043");
SpawnObject("Land_Mil_Fortified_Nest_Small", "6874.080078 175.143997 11110.299805", "90.499901 -0.157696 -0.995754");
SpawnObject("Land_Mil_GuardShed", "6872.470215 175.834000 11115.299805", "63.000000 -0.041659 -0.081761");
SpawnObject("Land_Mil_GuardShed", "6887.779785 174.932999 11120.400391", "28.000200 -0.776334 -0.087521");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6890.660156 176.559998 11113.200195", "-71.499992 1.007960 0.824981");
SpawnObject("Land_Mil_Fortified_Nest_Big", "6899.810059 175.490005 11112.500000", "10.000000 -0.886323 0.323508");
SpawnObject("Land_Mil_GuardShed", "6898.286621 176.397446 11123.673828", "125.999672 0.141339 -0.350656");
SpawnObject("Land_Mil_GuardShed", "6906.160156 176.399994 11117.400391", "-53.500195 -0.032327 0.660270");
SpawnObject("Land_Mil_GuardShed", "6908.850098 175.798996 11122.299805", "-53.999798 1.098590 1.138150");
SpawnObject("Land_Mil_Fortified_Nest_Big", "6910.680176 175.399994 11129.900391", "-135.000000 -0.453657 -0.453688");
SpawnObject("Land_Mil_Fortified_Nest_Small", "6902.839844 174.973007 11130.900391", "-135.000000 1.554380 0.907101");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6895.859863 176.350006 11129.599609", "35.999901 -0.128174 0.020301");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6909.102539 177.168182 11115.399414", "-26.999933 -0.240344 0.739723");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6907.879395 177.013016 11126.728516", "-126.000305 2.945548 0.008171");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6899.830566 177.168549 11124.235352", "-54.000195 -0.141341 0.350656");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6900.651855 177.251190 11112.353516", "170.999817 0.319198 -0.329129");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6891.094727 177.216721 11118.955078", "27.000504 -0.286624 -0.043217");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6869.580078 176.369995 11131.000000", "-1.000000 -1.557420 -1.000000");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6849.870117 175.317993 11113.500000", "5.500000 0.366555 -0.916551");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6905.020020 177.406006 11174.200195", "135.000000 -1.166120 1.166360");
SpawnObject("Land_Mil_Fortified_Nest_Big", "6898.919922 176.089996 11182.900391", "-138.499985 -0.902987 -0.316265");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6894.729980 177.225006 11192.200195", "140.999985 -0.583308 0.972257");
SpawnObject("Land_Mil_GuardBox_Green", "6894.209961 175.649994 11117.799805", "-90.000000 0.458162 0.824942");
SpawnObject("Land_Mil_Tent_Big3", "6875.839844 175.850006 11159.799805", "-125.999992 -0.484858 -0.667406");
SpawnObject("Land_Mil_AircraftShelter", "6850.370117 177.681000 11284.200195", "-35.999996 1.232910 -0.329510");
SpawnObject("Land_Mil_AircraftShelter", "6897.200195 176.985001 11279.099609", "55.999901 -0.280292 0.863053");
SpawnObject("Land_Mil_ReinforcedTank1", "6940.095215 176.431824 11287.657227", "72.000015 -0.296556 0.867437");
SpawnObject("Land_Mil_ReinforcedTank2", "6896.810059 175.764008 11320.900391", "-100.499992 0.414095 -0.900811");
SpawnObject("Land_Mil_ControlTower", "6908.169922 185.388000 11375.599609", "-130.499985 0.129653 -0.907436");
SpawnObject("Land_Mil_GuardBox_Brown", "6903.310059 179.388000 11374.400391", "-40.500099 0.970249 0.088000");
SpawnObject("Land_Mil_GuardHouse3", "6902.000000 178.895004 11379.900391", "-39.999901 0.896171 1.641850");
SpawnObject("Land_Ruin_Mil_ControlTower", "6869.370117 180.634003 11392.200195", "-44.500000 1.023970 -0.162308");
SpawnObject("Land_Sawmill_Building", "6845.359863 184.231003 11366.099609", "48.500000 -0.735015 1.327060");
SpawnObject("Land_CementWorks_MillC", "6957.810059 189.257996 11360.400391", "139.999985 -0.777720 -0.129760");
SpawnObject("Land_CementWorks_MillA", "6943.790039 198.932999 11348.900391", "-39.999805 0.801787 0.323866");
SpawnObject("Land_Sawmill_Illuminanttower", "6892.129883 188.011993 11366.900391", "-38.500000 0.972021 0.064877");
SpawnObject("Land_Mil_Barracks6", "6954.689941 174.927002 11190.299805", "-47.000092 0.896140 -0.142049");
SpawnObject("Land_Mil_Tent_Big3", "6950.990234 176.477997 11233.099609", "44.999695 0.323967 0.972191");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "6961.414551 178.302002 11236.145508", "-54.000175 1.003709 -0.290269");
SpawnObject("Land_Mil_Radar_Mobile1", "6901.118164 176.711990 11250.416992", "-125.999786 -0.167913 -1.010913");
SpawnObject("Land_Mil_GuardTower", "6856.790039 182.848007 11236.900391", "53.999996 0.646480 0.889931");
SpawnObject("Land_Mil_Tent_Big1_4", "6858.653320 174.861694 11174.539063", "-134.999969 -0.648156 -0.648198");
SpawnObject("Land_Mil_Tent_Big1_2", "6859.119141 175.248245 11192.822266", "-44.999748 0.907215 -0.907321");
SpawnObject("Land_Mil_Tent_Big1_5", "6840.668945 175.331787 11194.763672", "-134.999969 -0.907211 -0.907326");
SpawnObject("Land_Mil_Tent_Big2_4", "6844.077148 177.915649 11215.080078", "53.999977 0.498310 0.997630");
SpawnObject("Land_Mil_Radar_Mobile2", "6957.336426 175.685776 11258.193359", "-108.000000 0.296423 -0.867394");
SpawnObject("Land_Mil_Airfield_HQ", "6974.379883 180.460999 11214.000000", "-132.500000 -0.472149 -0.909616");
SpawnObject("Land_Mil_ControlTower", "6959.770020 183.162003 11228.599609", "-132.000000 -0.364478 -1.057830");
SpawnObject("Land_Mil_Tower_Small", "6939.290039 179.132004 11185.500000", "-135.000000 -0.323922 -1.231440");
SpawnObject("Land_Mil_ReinforcedTank2", "6912.580078 175.311996 11223.099609", "-63.000099 0.864427 -0.485335");
SpawnObject("Land_Mil_Radar_Mobile2", "6936.989258 175.720840 11246.834961", "0.000000 0.824985 0.549943");
SpawnObject("Land_Mil_Radar_Mobile2", "6925.497559 175.866669 11249.949219", "-98.999939 0.309282 -0.977100");
SpawnObject("Land_Mil_Radar_Mobile2", "6924.102051 175.183640 11200.174805", "54.000004 -0.088115 0.970470");
SpawnObject("Land_Mil_Barracks1", "6939.689941 177.421997 11212.400391", "35.999901 0.472037 0.909533");
SpawnObject("Land_Mil_Radar_Mobile1", "6922.330078 175.580994 11184.900391", "-46.499996 1.198820 -0.714823");
SpawnObject("Land_Mil_Radar_Mobile2", "6866.960449 177.349442 11313.130859", "0.000000 0.733257 0.641561");
SpawnObject("Land_Mil_Radar_Mobile2", "6828.357422 177.292175 11283.376953", "-53.999969 1.124761 -0.768676");
SpawnObject("Land_Mil_Tent_Big3", "6828.790039 176.776001 11211.299805", "-135.000000 -0.583076 -1.101780");
SpawnObject("Land_Mil_Tent_Big4", "6853.160156 176.945999 11182.200195", "-45.000000 0.972027 -0.972168");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6879.971680 178.155380 11199.272461", "-125.999786 -0.794773 -0.782147");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6899.738281 177.899643 11182.968750", "-125.999924 -0.761092 -0.579868");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6877.298828 177.394424 11158.413086", "-35.999989 0.667337 -0.484893");
SpawnObject("Land_Mil_Tent_Big4", "6880.979980 175.860001 11145.900391", "-45.000000 0.583268 -0.842623");
SpawnObject("Land_Mil_Radar_Mobile2", "6882.657227 175.636093 11211.987305", "-44.999916 0.648019 -0.907380");
SpawnObject("Land_Sawmill_Illuminanttower", "6914.890137 185.171997 11175.599609", "-45.000000 1.425180 -0.388793");
SpawnObject("Land_Mil_Barracks_Round", "6796.089844 176.371994 11171.000000", "-45.000000 1.360610 -0.583295");
SpawnObject("Land_Mil_Tent_Big2_3", "6812.670410 176.816132 11158.828125", "-134.999954 -0.648017 -0.907381");
SpawnObject("Land_Mil_Radar_Mobile1", "6787.110840 175.981079 11186.080078", "-44.999973 1.360478 -0.712717");
SpawnObject("Land_Mil_Tent_Big1_1", "6807.761230 175.248016 11185.007813", "-45.000103 1.231039 -0.842474");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6795.997070 177.746597 11171.866211", "-134.999863 -0.583262 -1.360997");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6808.036133 177.898407 11181.388672", "-44.999992 1.230901 -0.842472");
SpawnObject("Land_Mil_CamoNet_Roof_east", "6818.041016 177.434082 11163.312500", "45.000000 0.907188 1.036945");
SpawnObject("Land_Mil_Airfield_HQ", "6935.270020 180.225006 11168.099609", "-135.000000 -0.064877 -0.842667");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
