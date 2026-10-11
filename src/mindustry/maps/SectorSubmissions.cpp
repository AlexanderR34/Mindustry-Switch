#include "mindustry/maps/SectorSubmissions.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/SectorSubmissions_invoke_arc_func_Prov_1.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/maps/SectorSubmissions_MapSubmission.h"
#include "mindustry/content/Planets.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/maps/SectorSubmissions.h"
#include "mindustry/maps/SectorSubmissions_1.h"
#include "mindustry/maps/SectorSubmissions_2.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/maps/SectorSubmissions_3.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {

jobject SF_mindustry_maps_SectorSubmissions_threadMap;

void mark_mindustry_maps_SectorSubmissions(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_SectorSubmissions_threadMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_SectorSubmissions_threadMap)->clazz)->markFunction)((jobject) SF_mindustry_maps_SectorSubmissions_threadMap, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_SectorSubmissions *) object;
}

void init_mindustry_maps_SectorSubmissions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_SectorSubmissions_getSectorThread_mindustry_type_Sector_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:getSectorThread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	if (((jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_generateEnemyBase) == 0) goto label_1;
	}
	{
	LINE_NUMBER(18);
	clinit_mindustry_maps_SectorSubmissions(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_SectorSubmissions_threadMap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_maps_SectorSubmissions$MapSubmission, sp[0].o));
	LINE_NUMBER(19);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[1].o)))->F_mapFileLink;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[1].o)))->F_threadLink;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK(sp[-1].o))->F_mapFileLink;
label_7:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_SectorSubmissions_registerSectors(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:registerSectors", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (76), (((jobject) createStringLiteral(ctx, u8"Tyrant-classZzz"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926833411391580/1479890094486716499"_j))), (8));
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (47), (((jobject) createStringLiteral(ctx, u8"tinport"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926802591645820/1481778410018570274"_j))), (8));
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (225), (((jobject) createStringLiteral(ctx, u8"Summi"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926925719376152/1419026814826709103"_j))), (8));
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (111), (((jobject) createStringLiteral(ctx, u8"enwyz"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926842659569864/1523343841472675853"_j))), (10));
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (176), (((jobject) createStringLiteral(ctx, u8"wpx"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926887203213353/1419025548696621209"_j))), (8));
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (13), (((jobject) createStringLiteral(ctx, u8"chocomint"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926785164312810/1518092246300229677"_j))), (8));
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (259), (((jobject) createStringLiteral(ctx, u8"tinport"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928048245280871/1381300770866987049"_j))), (8));
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (192), (((jobject) createStringLiteral(ctx, u8"Skeledragon"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926914122256449/1380767793989029923"_j))), (8));
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (127), (((jobject) createStringLiteral(ctx, u8"playfree"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926869465632829/1380253194428354602"_j))), (8));
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (207), (((jobject) createStringLiteral(ctx, u8"cyan"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926923370827827/1405919087883976837"_j))), (8));
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (94), (((jobject) createStringLiteral(ctx, u8"Wine"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926838079393802/1433736458174468197"_j))), (jint(5)));
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (16), (((jobject) createStringLiteral(ctx, u8"Namero"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926788280680579/1409970152283312352"_j))), (jint(5)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (116), (((jobject) createStringLiteral(ctx, u8"Jamespire"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926845058711734/1483297088426082336"_j))), (jint(5)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (69), (((jobject) createStringLiteral(ctx, u8"Oct"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926831326822610/1406230980120940556"_j))), (jint(5)));
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (92), (((jobject) createStringLiteral(ctx, u8"Locla^Glass"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926835621527615/1525448711646482486"_j))), (8));
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (197), (((jobject) createStringLiteral(ctx, u8"Hengryton Luck"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926916911599676/1423257237341863966"_j))), (8));
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (67), (((jobject) createStringLiteral(ctx, u8"-RosaliaGream-"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926828696866898/1523254871187521589"_j))), (10));
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (180), (((jobject) createStringLiteral(ctx, u8"Locla^Glass"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926889648619580/1426523800815538178"_j))), (8));
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (55), (((jobject) createStringLiteral(ctx, u8"Amomogus391"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926823277695189/1478733623829200910"_j))), (10));
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (19), (((jobject) createStringLiteral(ctx, u8"Hengryton Luck"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926792479183019/1424375936169545730"_j))), (8));
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (200), (((jobject) createStringLiteral(ctx, u8"Axye"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926918429806755/1419180347232485448"_j))), (jint(3)));
	LINE_NUMBER(51);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (191), (((jobject) createStringLiteral(ctx, u8"tinport"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926912004001914/1421139764819660884"_j))), (10));
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (6), (((jobject) createStringLiteral(ctx, u8"Locla^Glass"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1506531529847869590/1522968348575400129"_j))), (8));
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (265), (((jobject) createStringLiteral(ctx, u8"Dem0"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928052921929891/1450757980206137359"_j))), (8));
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (161), (((jobject) createStringLiteral(ctx, u8"Hengryton Luck"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926882203730024/1416686287204782217"_j))), (8));
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (24), (((jobject) createStringLiteral(ctx, u8"Stormrider"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926797042581716/1419213541512187935"_j))), (8));
	LINE_NUMBER(57);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (263), (((jobject) createStringLiteral(ctx, u8"Locla^Glass"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1506531529847869590/1522968537256300677"_j))), (10));
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (66), (((jobject) createStringLiteral(ctx, u8"quad"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926825941078128/1419165493008535706"_j))), (8));
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (248), (((jobject) createStringLiteral(ctx, u8"iqtik123"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926979129774151/1417864622412922890"_j))), (jint(5)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (133), (((jobject) createStringLiteral(ctx, u8"wpx"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926871227240770/1419018550932279440"_j))), (8));
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (185), (((jobject) createStringLiteral(ctx, u8"quad"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926892181983283/1419231958336016458"_j))), (jint(5)));
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (254), (((jobject) createStringLiteral(ctx, u8"wpx"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928045577703424/1420456601667502193"_j))), (10));
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (jint(0)), (((jobject) createStringLiteral(ctx, u8"iqtik123"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926780860698784/1482671494268977341"_j))), (8));
	LINE_NUMBER(65);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (30), (((jobject) createStringLiteral(ctx, u8"cyan"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926800854945823/1423932799647481910"_j))), (10));
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (20), (((jobject) createStringLiteral(ctx, u8"Namero"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926794114961634/1406768731471872162"_j))), (8));
	LINE_NUMBER(67);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (162), (((jobject) createStringLiteral(ctx, u8"Bravo Tizmo"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926884606808247/1443239231366500415"_j))), (10));
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (230), (((jobject) createStringLiteral(ctx, u8"Jamespire"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926927585841163/1483113630202335447"_j))), (jint(5)));
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (240), (((jobject) createStringLiteral(ctx, u8"hhhi17"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1253758616117186590/1253758616117186590"_j))), (8));
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_registerSurvival_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset(ctx, (202), (((jobject) createStringLiteral(ctx, u8"D&X"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1253760205091635201/1253760205091635201"_j))), (33), (jfloat(5.0f)));
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (246), (((jobject) createStringLiteral(ctx, u8"enwyz"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926839559979030/1429203869514207255"_j))), (10));
	LINE_NUMBER(74);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (244), (((jobject) createStringLiteral(ctx, u8"Chocomint"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926929636851812/1474447354982563840"_j))), (10));
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (242), (((jobject) createStringLiteral(ctx, u8"cyan"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926873152164004/1470268689201889464"_j))), (10));
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (243), (((jobject) createStringLiteral(ctx, u8"Jamespire"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926876457537547/1484013941477609543"_j))), (10));
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (247), (((jobject) createStringLiteral(ctx, u8"Locla^Glass"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926976361533752/1431827990295220266"_j))), (10));
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (245), (((jobject) createStringLiteral(ctx, u8"Grushashusha"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926971286290584/1523071426033221733"_j))), (10));
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(ctx, (27), (((jobject) createStringLiteral(ctx, u8"Stormrider"_j))), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926798833287289/1451252137224044722"_j))), (13));
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_showHidden = (jint(1));
	LINE_NUMBER(82);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (27));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[0].o))))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_shieldSectors;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Sector, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_sectors;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (246));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = (checkCast(ctx, &class_mindustry_type_Sector, sp[2].o));
	jint temp1 = jint(1);
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_sectors;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (244));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = (checkCast(ctx, &class_mindustry_type_Sector, sp[2].o));
	jint temp2 = jint(2);
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_sectors;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, (242));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = (checkCast(ctx, &class_mindustry_type_Sector, sp[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	clinit_mindustry_maps_SectorSubmissions$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_SectorSubmissions$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fallenVessel"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_maps_SectorSubmissions$1_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(-1)));
	LINE_NUMBER(92);
	clinit_mindustry_maps_SectorSubmissions$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_SectorSubmissions$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"geothermalStronghold"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_maps_SectorSubmissions$2_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (264));
	LINE_NUMBER(98);
	clinit_mindustry_maps_SectorSubmissions$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_SectorSubmissions$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cruxscape"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_serpulo;
	init_mindustry_maps_SectorSubmissions$3_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (54));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:register", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_registerSector_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset(ctx, (frame[0].i), (frame[1].o), (frame[2].o), (jint(-1)), (jfloat((frame[3].i))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_SectorSubmissions_registerSurvival_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:registerSurvival", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_mindustry_maps_SectorSubmissions_registerSector_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset(ctx, (frame[0].i), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_SectorSubmissions_registerSector_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jfloat param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:registerSector", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(125);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	frame[5].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(127);
	clinit_mindustry_maps_SectorSubmissions(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_SectorSubmissions_threadMap;
	sp[1].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_SectorSubmissions_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_maps_SectorSubmissions_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_maps_SectorSubmissions_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[7].o = (checkCast(ctx, &class_mindustry_maps_SectorSubmissions$MapSubmission, sp[0].o));
	LINE_NUMBER(129);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[7].o)))->F_author = (jref) (frame[1].o);
	LINE_NUMBER(130);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[7].o)))->F_mapFileLink = (jref) (frame[2].o);
	LINE_NUMBER(132);
	clinit_mindustry_type_SectorPreset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_SectorPreset);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"sector-\u0001-\u0001"_j.string, 2, sp[1].o, boxInteger(ctx, (frame[0].i)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"hidden/\u0001"_j.string, 1, boxInteger(ctx, (frame[0].i)));
	init_mindustry_type_SectorPreset_java_lang_String_java_lang_String_mindustry_type_Planet_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[5].o), (frame[0].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_credit;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[8].o)))->F_credit = (jref) (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(135);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[8].o)))->F_requireUnlock = (jint(0));
	LINE_NUMBER(136);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[8].o)))->F_difficulty = (frame[4].f);
	}
label_9:;
	{
	LINE_NUMBER(138);
	if ((frame[3].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(139);
	((mindustry_type_SectorPreset *) NULL_CHECK((frame[8].o)))->F_captureWave = (frame[3].i);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(141);
	((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_generateEnemyBase = (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:registerThread", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(148);
	clinit_mindustry_maps_SectorSubmissions$MapSubmission(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_SectorSubmissions$MapSubmission);
	init_mindustry_maps_SectorSubmissions$MapSubmission(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(149);
	((mindustry_maps_SectorSubmissions$MapSubmission *) NULL_CHECK((frame[2].o)))->F_threadLink = (jref) (frame[1].o);
	LINE_NUMBER(150);
	clinit_mindustry_maps_SectorSubmissions(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_SectorSubmissions_threadMap;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_sectors;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[0].i));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_Sector, sp[1].o)), (frame[2].o));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_SectorSubmissions(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorSubmissions:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorSubmissions(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_maps_SectorSubmissions(ctx);
	SF_mindustry_maps_SectorSubmissions_threadMap = sp[0].o;
	LINE_NUMBER(155);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (jint(0)), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926780860698784"_j))));
	LINE_NUMBER(156);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (6), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926782966497322"_j))));
	LINE_NUMBER(157);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (13), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926785164312810"_j))));
	LINE_NUMBER(158);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (16), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926788280680579"_j))));
	LINE_NUMBER(159);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (19), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926792479183019"_j))));
	LINE_NUMBER(160);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (20), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926794114961634"_j))));
	LINE_NUMBER(161);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (24), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926797042581716"_j))));
	LINE_NUMBER(162);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (27), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926798833287289"_j))));
	LINE_NUMBER(163);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (30), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926800854945823"_j))));
	LINE_NUMBER(164);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (47), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926802591645820"_j))));
	LINE_NUMBER(165);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (55), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926823277695189"_j))));
	LINE_NUMBER(166);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (66), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926825941078128"_j))));
	LINE_NUMBER(167);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (67), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926828696866898"_j))));
	LINE_NUMBER(168);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (69), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926831326822610"_j))));
	LINE_NUMBER(169);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (76), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926833411391580"_j))));
	LINE_NUMBER(170);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (92), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926835621527615"_j))));
	LINE_NUMBER(171);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (94), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926838079393802"_j))));
	LINE_NUMBER(172);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (103), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926839559979030"_j))));
	LINE_NUMBER(173);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (111), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926842659569864"_j))));
	LINE_NUMBER(174);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (116), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926845058711734"_j))));
	LINE_NUMBER(175);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (127), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926869465632829"_j))));
	LINE_NUMBER(176);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (133), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926871227240770"_j))));
	LINE_NUMBER(177);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (138), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926873152164004"_j))));
	LINE_NUMBER(178);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (150), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926876457537547"_j))));
	LINE_NUMBER(179);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (157), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926879502598155"_j))));
	LINE_NUMBER(180);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (161), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926882203730024"_j))));
	LINE_NUMBER(181);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (162), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926884606808247"_j))));
	LINE_NUMBER(182);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (176), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926887203213353"_j))));
	LINE_NUMBER(183);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (180), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926889648619580"_j))));
	LINE_NUMBER(184);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (185), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926892181983283"_j))));
	LINE_NUMBER(185);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (191), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926912004001914"_j))));
	LINE_NUMBER(186);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (192), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926914122256449"_j))));
	LINE_NUMBER(187);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (197), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926916911599676"_j))));
	LINE_NUMBER(188);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (200), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926918429806755"_j))));
	LINE_NUMBER(189);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (204), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926921130807447"_j))));
	LINE_NUMBER(190);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (207), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926923370827827"_j))));
	LINE_NUMBER(191);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (225), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926925719376152"_j))));
	LINE_NUMBER(192);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (230), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926927585841163"_j))));
	LINE_NUMBER(193);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (237), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926929636851812"_j))));
	LINE_NUMBER(194);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (242), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926931923013843"_j))));
	LINE_NUMBER(195);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (243), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926955423694978"_j))));
	LINE_NUMBER(196);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (244), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926957738954762"_j))));
	LINE_NUMBER(197);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (245), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926971286290584"_j))));
	LINE_NUMBER(198);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (246), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926973454745600"_j))));
	LINE_NUMBER(199);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (247), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926976361533752"_j))));
	LINE_NUMBER(200);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (248), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379926979129774151"_j))));
	LINE_NUMBER(201);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (251), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928042637361382"_j))));
	LINE_NUMBER(202);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (254), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928045577703424"_j))));
	LINE_NUMBER(203);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (259), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928048245280871"_j))));
	LINE_NUMBER(204);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (263), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928050010951694"_j))));
	LINE_NUMBER(205);
	SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String(ctx, (265), (((jobject) createStringLiteral(ctx, u8"https://discord.com/channels/391020510269669376/1379928052921929891"_j))));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_SectorSubmissions;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSectorThread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_maps_SectorSubmissions[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static jclass innerClasses[] {
	&class_mindustry_maps_SectorSubmissions$MapSubmission,
};

static FieldMetadata fields[] {
	{ "threadMap", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_maps_SectorSubmissions_threadMap, "Larc/struct/ObjectMap;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_SectorSubmissions, 0, "()V", 1 },
	{ "getSectorThread", (intptr_t) SM_mindustry_maps_SectorSubmissions_getSectorThread_mindustry_type_Sector_R_java_lang_String, 0, "(Lmindustry/type/Sector;)Ljava/lang/String;", 9 },
	{ "registerSectors", (intptr_t) SM_mindustry_maps_SectorSubmissions_registerSectors, 0, "()V", 9 },
	{ "register", (intptr_t) SM_mindustry_maps_SectorSubmissions_register_int_java_lang_String_java_lang_String_int_R_mindustry_type_SectorPreset, 0, "(ILjava/lang/String;Ljava/lang/String;I)Lmindustry/type/SectorPreset;", 8 },
	{ "registerSurvival", (intptr_t) SM_mindustry_maps_SectorSubmissions_registerSurvival_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset, 0, "(ILjava/lang/String;Ljava/lang/String;IF)Lmindustry/type/SectorPreset;", 8 },
	{ "registerSector", (intptr_t) SM_mindustry_maps_SectorSubmissions_registerSector_int_java_lang_String_java_lang_String_int_float_R_mindustry_type_SectorPreset, 0, "(ILjava/lang/String;Ljava/lang/String;IF)Lmindustry/type/SectorPreset;", 8 },
	{ "registerThread", (intptr_t) SM_mindustry_maps_SectorSubmissions_registerThread_int_java_lang_String, 0, "(ILjava/lang/String;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_SectorSubmissions, 0, "()V", 8 },
};

Class class_mindustry_maps_SectorSubmissions{
		.nativeName = (intptr_t) "mindustry/maps/SectorSubmissions",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_SectorSubmissions),
		.classVtable = (intptr_t) vtable_mindustry_maps_SectorSubmissions,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_SectorSubmissions,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_SectorSubmissions,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_SectorSubmissions = registerClass(&class_mindustry_maps_SectorSubmissions);

}
