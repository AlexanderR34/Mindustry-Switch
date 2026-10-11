#include "mindustry/io/SaveVersion.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/core/Version.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/content/TechTree.h"
#include "java/io/DataOutput.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/mod/Mods.h"
#include "java/util/Arrays.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/SectorInfo.h"
#include "mindustry/mod/data/DataAsset.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "java/io/DataInputStream.h"
#include "arc/util/Time.h"
#include "mindustry/io/SaveOptions.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveFileReader_IORunner.h"
#include "mindustry/content/Planets.h"
#include "java/io/DataOutputStream.h"
#include "mindustry/io/TypeIO.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Double.h"
#include "arc/util/io/Writes.h"
#include "mindustry/io/SaveReadState.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_17.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_18.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Waves.h"
#include "arc/struct/IntMap_Entries.h"
#include "mindustry/io/SaveVersion_invoke_arc_func_Boolf_2.h"
#include "mindustry/core/Control.h"
#include "java/io/IOException.h"
#include "mindustry/gen/EntityMapping.h"
#include "mindustry/io/SaveMeta.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_19.h"
#include "arc/util/serialization/JsonReader.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_26.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_27.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_28.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_29.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_22.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_23.h"
#include "mindustry/io/SaveFileReader_IORunnerLength.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_24.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_25.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/io/SaveVersion_invoke_arc_func_Boolf_3.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_20.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_21.h"
#include "mindustry/type/Sector.h"
#include "java/lang/Long.h"
#include "arc/struct/IntMap_Entry.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/type/MapLocales.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_33.h"
#include "arc/Events.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_30.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_31.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunner_32.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/game/MapMarkers.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "mindustry/game/Saves.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/io/SaveFileReader_CustomChunk.h"
#include "arc/struct/Queue.h"
#include "java/io/DataInput.h"
#include "mindustry/game/EventType_DataPatchLoadEvent.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/graphics/Camera.h"
#include "mindustry/type/SectorPreset.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/mod/data/DataAssetType.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "java/lang/Float.h"
#include "arc/struct/IntMap.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/Tiles.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/io/SaveVersion_invoke_arc_func_Cons_4.h"
#include "mindustry/io/SaveVersion_invoke_arc_func_Cons_5.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/mod/DataManager.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/io/SaveVersion_invoke_arc_func_Cons_3.h"
#include "java/lang/Math.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_4.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_5.h"
#include "mindustry/io/SaveVersion_invoke_mindustry_io_SaveFileReader_IORunnerLength_3.h"
#include "java/lang/Enum.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/type/Planet.h"
#include "arc/util/io/CounterInputStream.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"

extern "C" {

jobject SF_mindustry_io_SaveVersion_customChunks;

void mark_mindustry_io_SaveVersion(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_io_SaveVersion_customChunks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_io_SaveVersion_customChunks)->clazz)->markFunction)((jobject) SF_mindustry_io_SaveVersion_customChunks, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_io_SaveFileReader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_SaveVersion *) object;
}

void SM_mindustry_io_SaveVersion_addCustomChunk_java_lang_String_mindustry_io_SaveFileReader$CustomChunk(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:addCustomChunk", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(41);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_io_SaveVersion_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(44);
	init_mindustry_io_SaveFileReader(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((mindustry_io_SaveVersion *) NULL_CHECK((frame[0].o)))->F_version = (frame[1].i);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:getMeta", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_io_SaveMeta(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_io_SaveMeta);
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"version"_j));
	LINE_NUMBER(52);
	jint temp1 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"saved"_j));
	LINE_NUMBER(53);
	jlong temp2 = (jlong)((func_arc_struct_StringMap_getLong_java_lang_String_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_getLong_java_lang_String_R_long])(ctx, sp[1].o, sp[2].o);
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"playtime"_j));
	LINE_NUMBER(54);
	jlong temp3 = (jlong)((func_arc_struct_StringMap_getLong_java_lang_String_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_getLong_java_lang_String_R_long])(ctx, sp[1].o, sp[2].o);
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"build"_j));
	LINE_NUMBER(55);
	jint temp4 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].o = frame[2].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"mapname"_j));
	LINE_NUMBER(56);
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"wave"_j));
	LINE_NUMBER(57);
	jint temp5 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, sp[2].o, sp[3].o);
	sp[2].o = ((jobject) &class_mindustry_game_Rules);
	sp[3].o = frame[2].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"rules"_j));
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"{}"_j));
	LINE_NUMBER(58);
	sp[3].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[3].o, sp[4].o, sp[5].o);
	jobject parsedRules = nullptr;
	tryCatch(frameRef, [&]() {
		parsedRules = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	}, &class_java_lang_Throwable, [&](jobject) {});
	if (parsedRules == nullptr) {
		clinit_mindustry_game_Rules(ctx);
		parsedRules = gcAlloc(ctx, &class_mindustry_game_Rules);
		init_mindustry_game_Rules(ctx, parsedRules);
	}
	sp[2].o = parsedRules;
	init_mindustry_io_SaveMeta_int_long_long_int_java_lang_String_int_mindustry_game_Rules_arc_struct_StringMap(ctx, sp[0].o, temp1, temp2, temp3, temp4, sp[1].o, temp5, (checkCast(ctx, &class_mindustry_game_Rules, sp[2].o)), (frame[2].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meta"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_17(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_17 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_17);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(66);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[0].o)))->F_version) < (12)) goto label_0;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"patches"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_18(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_18 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_18);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_19(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_19 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_19);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"map"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_20(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_20 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_20);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"entities"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_21(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_21 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_21);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(72);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[0].o)))->F_version) < (8)) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"markers"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_22(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_22 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
label_11:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	sp[2].o = frame[1].o;
	sp[3].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_23(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_23 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(75);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(76);
	goto label_13;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(75);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(76);
	throwException(ctx, (frame[4].o));	}
label_13:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meta"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_24(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_24 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_24);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"patches"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_25(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_25 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_25);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"content"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_26(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_26 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"map"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_27(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_27 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"entities"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_28(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_28 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"markers"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_29(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_29 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	sp[2].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_30(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_30 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeCustomChunks", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(91);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(92);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(94);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o));
	LINE_NUMBER(95);
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_31(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_31 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_31);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readCustomChunks", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(103);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(105);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o));
	LINE_NUMBER(106);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[5].o;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_3);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_SaveVersion_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(109);
	((func_mindustry_io_SaveVersion_skipChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_skipChunk_java_io_DataInput])(ctx, (frame[0].o), (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(103);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeMeta", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	((func_mindustry_game_SectorInfo_prepare_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_prepare_mindustry_type_Sector])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(122);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(123);
	((func_mindustry_content_TechTree$TechNode_save) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_save])(ctx, (frame[4].o));
	LINE_NUMBER(124);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(126);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(127);
	if ((frame[2].o) == nullptr) goto label_9;
	}
	{
	((func_arc_struct_StringMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap])(ctx, (frame[3].o), (frame[2].o));
	}
label_9:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (40));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"saved"_j)));
	jint temp0 = jint(1);
	LINE_NUMBER(130);
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	sp[4].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	ARRAY_ACCESS(jobject, sp[3].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"playtime"_j)));
	jint temp2 = jint(3);
	LINE_NUMBER(131);
	sp[4].o = sp[3].o;
	sp[5].i = temp2;
	sp += 6;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_12;
	}
	INST_LCONST(0);
	goto label_13;
label_12:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_saves;
	jlong temp0 = (jlong)((func_mindustry_game_Saves_getTotalPlaytime_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Saves_getTotalPlaytime_R_long])(ctx, sp[0].o);
	sp[0].l = temp0;
	sp += 1;
	}
label_13:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, sp[3].l);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"build"_j)));
	jint temp0 = jint(5);
	clinit_mindustry_core_Version(ctx);
	jint temp1 = (jint)SF_mindustry_core_Version_build;
	LINE_NUMBER(132);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"mapname"_j)));
	jint temp2 = 7;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_map;
	LINE_NUMBER(133);
	sp[1].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"wave"_j)));
	jint temp3 = 9;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp4 = (jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave;
	LINE_NUMBER(134);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"tick"_j)));
	jint temp5 = 11;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jdouble temp6 = (jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_tick;
	LINE_NUMBER(135);
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp6);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"wavetime"_j)));
	jint temp7 = 13;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jfloat temp8 = (jfloat)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wavetime;
	LINE_NUMBER(136);
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, temp8);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) createStringLiteral(ctx, u8"stats"_j)));
	jint temp9 = 15;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_stats;
	LINE_NUMBER(137);
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) createStringLiteral(ctx, u8"rules"_j)));
	jint temp10 = 17;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	LINE_NUMBER(138);
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) createStringLiteral(ctx, u8"sectorPreset"_j)));
	jint temp11 = 19;
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	jobject temp12 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp11;
	sp += 3;
	if (temp12 == nullptr) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_23;
	}
label_22:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_23:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) createStringLiteral(ctx, u8"locales"_j)));
	jint temp0 = 21;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_mapLocales;
	LINE_NUMBER(140);
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) createStringLiteral(ctx, u8"mods"_j)));
	jint temp1 = 23;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	LINE_NUMBER(141);
	sp[1].o = (jobject)((func_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_java_lang_String)));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (24)) = (((jobject) createStringLiteral(ctx, u8"controlGroups"_j)));
	jint temp2 = 25;
	LINE_NUMBER(142);
	sp[1].o = sp[0].o;
	sp[2].i = temp2;
	sp += 3;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_27;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_control;
	if ((--sp)->o != nullptr) goto label_28;
label_27:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_29;
label_28:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlGroups;
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	}
label_29:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[0].o, (26)) = (((jobject) createStringLiteral(ctx, u8"width"_j)));
	jint temp0 = 27;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	LINE_NUMBER(143);
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (28)) = (((jobject) createStringLiteral(ctx, u8"height"_j)));
	jint temp2 = 29;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	LINE_NUMBER(144);
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp3);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (30)) = (((jobject) createStringLiteral(ctx, u8"viewpos"_j)));
	jint temp4 = 31;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	jobject temp5 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp6 = sp[2].o;
	sp[2].i = temp4;
	sp[3].o = temp5;
	sp += 4;
	if (temp6 != nullptr) goto label_33;
	}
	clinit_arc_math_geom_Vec2(ctx);
	(sp++)->o = SF_arc_math_geom_Vec2_ZERO;
	goto label_34;
label_33:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
label_34:;
	{
	sp -= 5;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (32)) = (((jobject) createStringLiteral(ctx, u8"controlledType"_j)));
	jint temp0 = 33;
	LINE_NUMBER(146);
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_36;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType;
	if (sp[0].o != nullptr) goto label_37;
	}
label_36:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_38;
label_37:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	}
label_38:;
	{
	sp -= 4;
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[0].o, (34)) = (((jobject) createStringLiteral(ctx, u8"nocores"_j)));
	jint temp0 = 35;
	clinit_mindustry_Vars(ctx);
	jbool isEmptyCores = 1;
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules) {
		auto r = (mindustry_game_Rules*)((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules;
		if (r->F_defaultTeam) {
			auto cores = (arc_struct_Seq*)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, (jobject)r->F_defaultTeam)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, (jobject)r->F_defaultTeam);
			if (cores) {
				isEmptyCores = (jbool)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (jobject)cores)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (jobject)cores);
			}
		}
	}
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, isEmptyCores);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (36)) = (((jobject) createStringLiteral(ctx, u8"playerteam"_j)));
	jint temp2 = 37;
	LINE_NUMBER(148);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jobject temp3 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp2;
	sp += 3;
	if (temp3 != nullptr) goto label_41;
	}
	{
	clinit_mindustry_Vars(ctx);
	jint defaultTeamId = 1;
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules) {
		auto r = (mindustry_game_Rules*)((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules;
		if (r->F_defaultTeam) {
			defaultTeamId = ((mindustry_game_Team*)r->F_defaultTeam)->F_id;
		}
	}
	sp[0].i = defaultTeamId;
	sp += 1;
	goto label_42;
	}
label_41:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_42:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, sp[3].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[2].i) = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, (38)) = (((jobject) createStringLiteral(ctx, u8"hasExternalAssets"_j)));
	jint temp0 = 39;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_data;
	LINE_NUMBER(149);
	sp[1].o = (jobject)((func_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq])(ctx, sp[1].o);
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(temp1))->F_size) <= 0) goto label_44;
	}
	INST_ICONST(1);
	goto label_45;
label_44:;
	INST_ICONST(0);
label_45:;
	{
	sp -= 7;
	sp[4].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[6].i);
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[4].o;
	LINE_NUMBER(129);
	sp[3].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_struct_StringMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_io_SaveVersion_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readMeta", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readStringMap_java_io_DataInput_R_arc_struct_StringMap])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"wave"_j))));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave = temp0;
	LINE_NUMBER(157);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = frame[3].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"wavetime"_j));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_state;
	sp[3].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[3].o))->F_rules;
	jfloat temp1 = (jfloat)((func_arc_struct_StringMap_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_getFloat_java_lang_String_float_R_float])(ctx, sp[1].o, sp[2].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[3].o))->F_waveSpacing));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wavetime = temp1;
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jfloat temp2 = (jfloat)((func_arc_struct_StringMap_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"tick"_j))));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick = (jdouble(temp2));
	LINE_NUMBER(159);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = ((jobject) &class_mindustry_game_GameStats);
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"stats"_j))), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats = (jref) (checkCast(ctx, &class_mindustry_game_GameStats, sp[1].o));
	LINE_NUMBER(160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = ((jobject) &class_mindustry_type_MapLocales);
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"locales"_j))), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales = (jref) (checkCast(ctx, &class_mindustry_type_MapLocales, sp[1].o));
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"rules"_j))), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	((mindustry_io_SaveReadState *) NULL_CHECK(sp[0].o))->F_ruleString = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(165);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[0].o)))->F_version) >= (13)) goto label_8;
	}
	{
	LINE_NUMBER(166);
	((func_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(169);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_10;
	}
	{
	LINE_NUMBER(170);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"viewpos"_j))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(171);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(172);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_gen_Player_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(174);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[3].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"controlledType"_j))), (((jobject) createStringLiteral(ctx, u8"<none>"_j))));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType = (jref) (checkCast(ctx, &class_mindustry_type_UnitType, sp[1].o));
	LINE_NUMBER(175);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playerteam"_j));
	clinit_mindustry_Vars(ctx);
	jint defaultTeamId = 1;
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules) {
		auto r = (mindustry_game_Rules*)((mindustry_core_GameState*)SF_mindustry_Vars_state)->F_rules;
		if (r->F_defaultTeam) {
			defaultTeamId = ((mindustry_game_Team*)r->F_defaultTeam)->F_id;
		}
	}
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, defaultTeamId);
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_17;
	}
	{
	sp[0].o = frame[4].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(177);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Player_team_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_mindustry_game_Team])(ctx, sp[0].o, (frame[4].o));
	}
label_17:;
	{
	LINE_NUMBER(180);
	sp[0].o = ((jobject) getArrayClass(&class_arc_struct_IntSeq, 1));
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"controlGroups"_j))), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_arc_struct_IntSeq, 1), sp[0].o));
	LINE_NUMBER(181);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlGroups;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlGroups = (jref) (frame[5].o);
	}
label_10:;
	{
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mapname"_j))), (((jobject) createStringLiteral(ctx, u8"\\\\\\"_j))));
	sp[0].o = (jobject)((func_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_22;
	}
	{
	clinit_mindustry_maps_Map(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (6));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	jint temp0 = jint(1);
	sp[2].o = frame[3].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"mapname"_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"Unknown"_j));
	LINE_NUMBER(188);
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"width"_j)));
	jint temp1 = jint(3);
	jint temp2 = jint(1);
	LINE_NUMBER(189);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"height"_j)));
	jint temp3 = jint(5);
	jint temp4 = jint(1);
	LINE_NUMBER(190);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp4);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	LINE_NUMBER(187);
	sp[1].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[1].o);
	init_mindustry_maps_Map_arc_struct_StringMap(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_27;
	}
label_22:;
	LINE_NUMBER(191);
	INST_ALOAD(4);
label_27:;
	{
	sp -= 2;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readRules", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[1].o)))->F_ruleString;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(196);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = ((jobject) &class_mindustry_game_Rules);
	sp[2].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[1].o)))->F_ruleString;
	jobject loadedRules = nullptr;
	tryCatch(frameRef, [&]() {
		loadedRules = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	}, &class_java_lang_Throwable, [&](jobject err) {
		clinit_mindustry_game_Rules(ctx);
		loadedRules = gcAlloc(ctx, &class_mindustry_game_Rules);
		init_mindustry_game_Rules(ctx, loadedRules);
	});
	if (!loadedRules) {
		clinit_mindustry_game_Rules(ctx);
		loadedRules = gcAlloc(ctx, &class_mindustry_game_Rules);
		init_mindustry_game_Rules(ctx, loadedRules);
	}
	if (loadedRules) {
		auto r = (mindustry_game_Rules*)loadedRules;
		if (!r->F_objectiveFlags) {
			clinit_arc_struct_ObjectSet(ctx);
			r->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
			init_arc_struct_ObjectSet(ctx, (jobject)r->F_objectiveFlags);
		}
		if (!r->F_objectives) {
			clinit_mindustry_game_MapObjectives(ctx);
			r->F_objectives = (jref)gcAlloc(ctx, &class_mindustry_game_MapObjectives);
			init_mindustry_game_MapObjectives(ctx, (jobject)r->F_objectives);
		}
	}
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules = (jref) (checkCast(ctx, &class_mindustry_game_Rules, loadedRules));
	LINE_NUMBER(198);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_waves;
	sp[1].o = (jobject)((func_mindustry_game_Waves_get_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[1].o)))->F_context;
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(201);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[1].o)))->F_context;
	sp[1].o = (jobject)((func_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector, sp[1].o))(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) sp[1].o;
	LINE_NUMBER(202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_mindustry_type_Planet_applyRules_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, sp[0].o, (16));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(209);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeMap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp1);
	LINE_NUMBER(219);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 * temp2)) goto label_4;
	}
	{
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(221);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[3].o));
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(222);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[3].o));
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp1);
	LINE_NUMBER(223);
	frame[4].i = (jint(0));
	LINE_NUMBER(225);
	frame[5].i = ((frame[2].i) + (jint(1)));
	}
label_10:;
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 * temp2)) goto label_11;
	}
	{
	if ((frame[4].i) >= (255)) goto label_11;
	}
	{
	LINE_NUMBER(226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp2 = temp0 % temp1;
	jint temp3 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 / temp4));
	frame[6].o = sp[0].o;
	LINE_NUMBER(228);
	jint temp5 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[6].o));
	jint temp6 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[3].o));
	if (temp5 != temp6) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[6].o));
	jint temp1 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[3].o));
	if (temp0 == temp1) goto label_14;
	}
	LINE_NUMBER(229);
	goto label_11;
label_14:;
	{
	LINE_NUMBER(232);
	INST_IINC(4, 1);
	LINE_NUMBER(225);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(235);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	LINE_NUMBER(236);
	frame[2].i = ((frame[2].i) + (frame[4].i));
	LINE_NUMBER(219);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(240);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 * temp2)) goto label_20;
	}
	{
	LINE_NUMBER(241);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[3].o));
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(244);
	jint temp1 = (jint)((func_mindustry_world_Tile_shouldSaveData_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_shouldSaveData_R_boolean])(ctx, (frame[3].o));
	frame[4].i = temp1;
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_27;
	INST_ICONST(4);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 2;
	frame[5].i = (jbyte((sp[0].i | sp[1].i)));
	LINE_NUMBER(251);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	LINE_NUMBER(253);
	if ((frame[4].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(255);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_data));
	LINE_NUMBER(256);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_floorData));
	LINE_NUMBER(257);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_overlayData));
	LINE_NUMBER(258);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_extraData));
	}
label_31:;
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(264);
	((func_java_io_DataOutput_writeBoolean_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeBoolean_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_32(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_32 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_32);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_41;
	}
label_38:;
	{
	LINE_NUMBER(270);
	((func_java_io_DataOutput_writeBoolean_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeBoolean_boolean, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(272);
	if ((frame[4].i) != 0) goto label_41;
	}
	{
	LINE_NUMBER(274);
	frame[6].i = (jint(0));
	LINE_NUMBER(276);
	frame[7].i = ((frame[2].i) + (jint(1)));
	}
label_44:;
	{
	jint temp0 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 * temp2)) goto label_45;
	}
	{
	if ((frame[6].i) >= (255)) goto label_45;
	}
	{
	LINE_NUMBER(277);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	jint temp2 = temp0 % temp1;
	jint temp3 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 / temp4));
	frame[8].o = sp[0].o;
	LINE_NUMBER(279);
	jint temp5 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[8].o));
	jint temp6 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[3].o));
	if (temp5 != temp6) goto label_45;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_mindustry_world_Tile_shouldSaveData_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_shouldSaveData_R_boolean])(ctx, (frame[8].o));
	if (temp0 == temp1) goto label_48;
	}
	LINE_NUMBER(280);
	goto label_45;
label_48:;
	{
	LINE_NUMBER(283);
	INST_IINC(6, 1);
	LINE_NUMBER(276);
	INST_IINC(7, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(286);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(287);
	frame[2].i = ((frame[2].i) + (frame[6].i));
	}
label_41:;
	{
	LINE_NUMBER(240);
	INST_IINC(2, 1);
	goto label_19;
	}
label_20:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readMap", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_context;
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(295);
	jint temp1 = (jint)((func_java_io_DataInput_readUnsignedShort_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedShort_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp1;
	LINE_NUMBER(297);
	jint temp2 = (jint)((func_mindustry_world_WorldContext_isGenerating_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_isGenerating_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	frame[6].i = temp2;
	LINE_NUMBER(299);
	if ((frame[6].i) != 0) goto label_4;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_mindustry_world_WorldContext_begin) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_begin, sp[0].o))(ctx, sp[0].o);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(302);
	((func_mindustry_world_WorldContext_resize_int_int) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_resize_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[4].i), (frame[5].i));
	LINE_NUMBER(305);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_17;
	}
	{
	LINE_NUMBER(306);
	frame[8].i = ((frame[7].i) % (frame[4].i));
	frame[9].i = ((frame[7].i) / (frame[4].i));
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	LINE_NUMBER(308);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp1;
	LINE_NUMBER(309);
	jint temp2 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[12].i = temp2;
	LINE_NUMBER(310);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[10].i));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_stone;
	frame[10].i = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}
label_24:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(314);
	frame[13].i = ((frame[7].i) + (jint(1)));
	}
label_26:;
	{
	if ((frame[13].i) >= (((frame[7].i) + (jint(1))) + (frame[12].i))) goto label_27;
	}
	{
	LINE_NUMBER(315);
	frame[14].i = ((frame[13].i) % (frame[4].i));
	frame[15].i = ((frame[13].i) / (frame[4].i));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[14].i), (frame[15].i), (frame[10].i), (frame[11].i), (jint(0)));
	LINE_NUMBER(314);
	INST_IINC(13, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(319);
	frame[7].i = ((frame[7].i) + (frame[12].i));
	LINE_NUMBER(305);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(323);
	frame[7].i = (jint(0));
	}
label_33:;
	{
	if ((frame[7].i) >= ((frame[4].i) * (frame[5].i))) goto label_5;
	}
	{
	LINE_NUMBER(324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[7].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(326);
	if ((frame[8].o) != nullptr) goto label_37;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	INST_ASTORE(8);
label_37:;
	{
	LINE_NUMBER(327);
	frame[10].i = (jint(1));
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp0;
	LINE_NUMBER(329);
	if (((frame[11].i) & (jint(1))) == 0) goto label_40;
	}
	INST_ICONST(1);
	goto label_41;
label_40:;
	INST_ICONST(0);
label_41:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(331);
	if (((frame[11].i) & (jint(4))) == 0) goto label_43;
	}
	INST_ICONST(1);
	goto label_44;
label_43:;
	INST_ICONST(0);
label_44:;
	{
	sp -= 1;
	frame[13].i = sp[0].i;
	LINE_NUMBER(333);
	frame[14].i = (jint(0));
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	LINE_NUMBER(334);
	frame[17].i = (jint(0));
	LINE_NUMBER(336);
	if ((frame[13].i) == 0) goto label_50;
	}
	{
	LINE_NUMBER(337);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[14].i = temp0;
	LINE_NUMBER(338);
	jint temp1 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[15].i = temp1;
	LINE_NUMBER(339);
	jint temp2 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[16].i = temp2;
	LINE_NUMBER(340);
	jint temp3 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[17].i = temp3;
	}
label_50:;
	{
	LINE_NUMBER(343);
	if ((frame[12].i) == 0) goto label_55;
	}
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_java_io_DataInput_readBoolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readBoolean_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	}
label_55:;
	{
	LINE_NUMBER(348);
	if ((frame[10].i) == 0) goto label_57;
	}
	{
	LINE_NUMBER(349);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[9].o), (frame[8].o));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(351);
	if (((jint)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_preview) != 0) goto label_61;
	}
	{
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_allBuildings;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_61:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_enabled = (jint(1));
	}
label_57:;
	{
	LINE_NUMBER(357);
	if ((frame[13].i) == 0) goto label_62;
	}
	{
	LINE_NUMBER(358);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_data = (frame[14].i);
	LINE_NUMBER(359);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_floorData = (frame[15].i);
	LINE_NUMBER(360);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_overlayData = (frame[16].i);
	LINE_NUMBER(361);
	((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_extraData = (frame[17].i);
	LINE_NUMBER(362);
	((func_mindustry_world_WorldContext_onReadTileData) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_onReadTileData, (frame[3].o)))(ctx, (frame[3].o));
	}
label_62:;
	{
	LINE_NUMBER(365);
	if ((frame[12].i) == 0) goto label_68;
	}
	{
	LINE_NUMBER(366);
	if ((frame[10].i) == 0) goto label_70;
	}
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_72;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_4(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_4 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_4);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_SaveVersion_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(375);
	goto label_73;
label_2:;
	{
	sp -= 1;
	frame[18].o = sp[0].o;
	LINE_NUMBER(374);
	// Safely recover by skipping rather than crashing the map load
	goto label_73;
	}
label_72:;
	{
	LINE_NUMBER(378);
	((func_mindustry_io_SaveVersion_skipChunk_java_io_DataInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_skipChunk_java_io_DataInput])(ctx, (frame[0].o), (frame[1].o));
	}
label_73:;
	{
	LINE_NUMBER(381);
	((func_mindustry_world_WorldContext_onReadBuilding) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_onReadBuilding, (frame[3].o)))(ctx, (frame[3].o));
	goto label_70;
	}
label_68:;
	{
	LINE_NUMBER(383);
	if ((frame[13].i) != 0) goto label_70;
	}
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[18].i = temp0;
	LINE_NUMBER(386);
	frame[19].i = ((frame[7].i) + (jint(1)));
	}
label_77:;
	{
	if ((frame[19].i) >= (((frame[7].i) + (jint(1))) + (frame[18].i))) goto label_78;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, (frame[3].o)))(ctx, (frame[3].o), (frame[19].i));
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(386);
	INST_IINC(19, 1);
	goto label_77;
	}
label_78:;
	{
	LINE_NUMBER(390);
	frame[7].i = ((frame[7].i) + (frame[18].i));
	}
label_70:;
	{
	LINE_NUMBER(323);
	INST_IINC(7, 1);
	goto label_33;
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(394);
	if ((frame[6].i) != 0) goto label_81;
	}
	{
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, (frame[3].o)))(ctx, (frame[3].o));
	goto label_81;
	}
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ASTORE(20);
	popExceptionFrame(frameRef);
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_82;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_mindustry_world_WorldContext_end) resolveInterfaceMethod(ctx, &class_mindustry_world_WorldContext, INDEX_mindustry_world_WorldContext_end, sp[0].o))(ctx, sp[0].o);
label_82:;
	{
	LINE_NUMBER(395);
	throwException(ctx, (frame[20].o));	}
label_81:;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeTeamBlocks", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[1].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[1].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(403);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(405);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size));
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_team;
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, sp[0].o))(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(408);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, sp[0].o))(ctx, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[5].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(410);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(411);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(412);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_rotation));
	LINE_NUMBER(413);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(414);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_config;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(415);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(416);
	goto label_5;
label_6:;
	LINE_NUMBER(417);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeWorldEntities", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	((func_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeWorldEntities", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(425);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[1].o, sp[2].o);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int])(ctx, sp[0].o, (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, sp[0].o))(ctx, sp[0].o, (sp[1].i + sp[2].i));
	LINE_NUMBER(427);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_mindustry_gen_Entityc_serialize_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_serialize_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 != 0) goto label_7;
	}
	goto label_4;
label_7:;
	{
	LINE_NUMBER(430);
	((func_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(431);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(433);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(434);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (temp0 != 0) goto label_12;
	}
	goto label_9;
label_12:;
	{
	LINE_NUMBER(436);
	((func_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput])(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	LINE_NUMBER(437);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeEntity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_33(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_33 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunner_33);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeEntityMapping", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_EntityMapping(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_EntityMapping_customIdMap;
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, ((jint)((arc_struct_IntMap *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(451);
	clinit_mindustry_gen_EntityMapping(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_EntityMapping_customIdMap;
	sp[0].o = (jobject)((func_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap$Entries_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(452);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[3].o)))->F_key));
	LINE_NUMBER(453);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[3].o)))->F_value;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(454);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeEntities", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(458);
	((func_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(459);
	((func_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(460);
	((func_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeMarkers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(464);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_markers;
	((func_mindustry_game_MapMarkers_write_java_io_DataOutput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_write_java_io_DataOutput])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readMarkers_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readMarkers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(468);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o) {
		sp[0].o = (jobject)((mindustry_core_GameState *) sp[0].o)->F_markers;
		if (sp[0].o) {
			((func_mindustry_game_MapMarkers_read_java_io_DataInput) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapMarkers_read_java_io_DataInput])(ctx, sp[0].o, (frame[1].o));
		}
	}
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readTeamBlocks", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(472);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(474);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(476);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(477);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	frame[5].o = sp[0].o;
	LINE_NUMBER(478);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(479);
	jint temp1 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].i = temp1;
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_plans;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[7].i), (1000));
	((func_arc_struct_Queue_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_ensureCapacity_int])(ctx, sp[0].o, temp2);
	LINE_NUMBER(482);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(484);
	frame[9].i = (jint(0));
	}
label_12:;
	{
	if ((frame[9].i) >= (frame[7].i)) goto label_13;
	}
	{
	LINE_NUMBER(485);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = temp0;
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[11].i = temp1;
	jint temp2 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[12].i = temp2;
	jint temp3 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[13].i = temp3;
	LINE_NUMBER(486);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_R_java_lang_Object(ctx, (frame[3].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = frame[8].o;
	jint temp4 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[10].i), (frame[11].i));
	jint temp5 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp4);
	if (temp5 == 0) goto label_20;
	}
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_plans;
	clinit_mindustry_game_Teams$BlockPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams$BlockPlan);
	jint temp0 = frame[10].i;
	jint temp1 = frame[11].i;
	jint temp2 = frame[12].i;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[2].o, (frame[13].i));
	init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, (frame[14].o));
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(484);
	INST_IINC(9, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(476);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readWorldEntities", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(496);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(497);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(499);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(500);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_5(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_5 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_mindustry_io_SaveFileReader$IORunnerLength_5);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_io_SaveVersion_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(500);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	LINE_NUMBER(524);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((func_mindustry_gen_Entityc_id_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(525);
	((func_mindustry_gen_Entityc_add) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_add, (frame[8].o)))(ctx, (frame[8].o));
	LINE_NUMBER(526);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(528);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(529);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(530);
	sp[0].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[3].o)))->F_allBuildings;
	{ /* InvokeDynamic */
		clinit_mindustry_io_SaveVersion_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_io_SaveVersion_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_io_SaveVersion_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readEntityMapping", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(535);
	clinit_mindustry_gen_EntityMapping(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_EntityMapping_idMap;
	clinit_mindustry_gen_EntityMapping(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_EntityMapping_idMap;
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_func_Prov, 1), sp[0].o));
	LINE_NUMBER(537);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(538);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(543);
	sp[0].o = frame[2].o;
	jint temp1 = frame[5].i;
	sp[1].o = (jobject)SM_mindustry_gen_EntityMapping_map_java_lang_String_R_arc_func_Prov(ctx, (frame[6].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(538);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readEntities", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(551);
	((func_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(552);
	((func_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readDataPatches", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(559);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(561);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_io_SaveReadState *) NULL_CHECK((frame[2].o)))->F_ruleString;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[1].o, sp[2].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"planet"_j));
	clinit_mindustry_content_Planets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[3].o))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planet_java_lang_String_R_mindustry_type_Planet])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(562);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_8;
	}
	clinit_mindustry_content_Planets(ctx);
	(sp++)->o = SF_mindustry_content_Planets_serpulo;
	goto label_9;
label_8:;
	INST_ALOAD(3);
label_9:;
	sp -= 2;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	popExceptionFrame(frameRef);
	LINE_NUMBER(563);
	goto label_6;
label_2:;
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)((func_java_io_DataInput_readInt_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readInt_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(567);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(569);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(570);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(571);
	if ((frame[6].i) < 0) goto label_16;
	}
	{
	jint temp0 = frame[6].i;
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_all;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
label_16:;
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid asset type ID: \u0001. You are likely loading trying to load a save from a newer version of the game, possibly a beta."_j.string, 1, boxByte(ctx, (frame[6].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(574);
	jint temp0 = (jint)((func_java_io_DataInput_readBoolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readBoolean_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	frame[8].i = temp0;
	LINE_NUMBER(575);
	clinit_mindustry_mod_data_DataAssetType(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_data_DataAssetType_all;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(578);
	((func_mindustry_mod_data_DataAsset_setPath_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String])(ctx, (frame[10].o), (frame[7].o));
	LINE_NUMBER(580);
	if ((frame[8].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(581);
	((func_mindustry_mod_data_DataAsset_read_java_io_DataInput) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_read_java_io_DataInput])(ctx, (frame[10].o), (frame[1].o));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (32));
	frame[11].o = sp[0].o;
	LINE_NUMBER(584);
	((func_java_io_DataInput_readFully_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readFully_Array1_byte, (frame[1].o)))(ctx, (frame[1].o), (frame[11].o));
	LINE_NUMBER(585);
	((func_mindustry_mod_data_DataAsset_setHash_Array1_byte) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_setHash_Array1_byte])(ctx, (frame[10].o), (frame[11].o));
	LINE_NUMBER(587);
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_isCached_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_isCached_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(589);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Asset @: cache file not found."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[10].o)))->F_path;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[10].o));
	LINE_NUMBER(569);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(596);
	clinit_mindustry_game_EventType$DataPatchLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$DataPatchLoadEvent);
	init_mindustry_game_EventType$DataPatchLoadEvent_arc_struct_Seq(ctx, sp[0].o, (frame[4].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(598);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_load_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(601);
	((func_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeDataPatches", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(605);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), (jint(2)));
	LINE_NUMBER(607);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	sp[0].o = (jobject)((func_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(608);
	((func_java_io_DataOutput_writeInt_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeInt_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_mod_data_DataAsset, sp[0].o));
	LINE_NUMBER(611);
	if ((frame[2].i) != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_byteHash;
	if (sp[0].o != nullptr) goto label_8;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(613);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_mod_data_DataAssetType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_data_DataAssetType_ordinal_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(614);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_path;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(615);
	((func_java_io_DataOutput_writeBoolean_boolean) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeBoolean_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(617);
	if ((frame[6].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(619);
	((func_mindustry_mod_data_DataAsset_write_java_io_DataOutput) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_mod_data_DataAsset_write_java_io_DataOutput])(ctx, (frame[5].o), (frame[1].o));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_data_DataAsset *) NULL_CHECK((frame[5].o)))->F_byteHash;
	((func_java_io_DataOutput_write_Array1_byte) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_Array1_byte, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	LINE_NUMBER(624);
	goto label_4;
label_5:;
	LINE_NUMBER(625);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:readContentHeader", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(628);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(630);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[0].o = (jobject)createMultiArray(ctx, &class_mindustry_ctype_MappableContent, {(((jarray) nullCheck(ctx, sp[0].o))->length), (jint(0))});
	frame[3].o = sp[0].o;
	LINE_NUMBER(632);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(633);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(634);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].i = temp1;
	LINE_NUMBER(635);
	sp[0].o = frame[3].o;
	jint temp2 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[5].o));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ctype_MappableContent, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(637);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_java_io_DataInput_readUTF_R_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUTF_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(640);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[5].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	jint temp1 = frame[7].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = frame[5].o;
	sp[3].o = frame[5].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[4].o = (jobject)SF_mindustry_ctype_ContentType_block;
	jobject temp2 = sp[1].o;
	sp[1].i = temp1;
	jobject temp3 = sp[2].o;
	sp[2].o = temp2;
	jobject temp4 = sp[3].o;
	sp[3].o = temp3;
	sp += 4;
	if (temp4 != sp[0].o) goto label_13;
	}
	{
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveFileReader_fallback;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[8].o), (frame[8].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ALOAD(8);
label_14:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(637);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(632);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_setTemporaryMapper_Array2_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(648);
	if (((jint)((mindustry_io_SaveVersion *) NULL_CHECK((frame[0].o)))->F_version) >= (11)) goto label_17;
	}
	{
	LINE_NUMBER(649);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(650);
	clinit_mindustry_game_EventType$DataPatchLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$DataPatchLoadEvent);
	init_mindustry_game_EventType$DataPatchLoadEvent_arc_struct_Seq(ctx, sp[0].o, (frame[4].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(652);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_data;
	((func_mindustry_mod_DataManager_load_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_17:;
	LINE_NUMBER(654);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:writeContentHeader", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(657);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getContentMap_R_Array1_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(659);
	frame[3].i = (jint(0));
	LINE_NUMBER(660);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_4;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(661);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ctype_MappableContent)) == 0) goto label_6;
	}
	LINE_NUMBER(662);
	INST_IINC(3, 1);
label_6:;
	{
	LINE_NUMBER(660);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(666);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(667);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_10;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(668);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size) <= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ctype_MappableContent)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ctype_Content, sp[1].o)))->vtable)[VTABLE_mindustry_ctype_Content_getContentType_R_mindustry_ctype_ContentType])(ctx, (checkCast(ctx, &class_mindustry_ctype_Content, sp[1].o)));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(670);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	LINE_NUMBER(672);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[9].o)))))->F_name;
	((func_java_io_DataOutput_writeUTF_java_lang_String) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeUTF_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(673);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(667);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(676);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveVersion_lambda$readWorldEntities$0_Array1_arc_func_Prov_arc_struct_IntSet_arc_struct_Seq_arc_util_io_Reads_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$readWorldEntities$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(502);
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(503);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i))) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(504);
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, (frame[3].o), ((frame[4].i) - (jint(1))));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(508);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i))));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	LINE_NUMBER(511);
	SM_mindustry_entities_EntityGroup_checkNextId_int(ctx, (frame[6].i));
	LINE_NUMBER(512);
	((func_mindustry_gen_Entityc_id_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_int, (frame[7].o)))(ctx, (frame[7].o), (frame[6].i));
	LINE_NUMBER(513);
	((func_mindustry_gen_Entityc_read_arc_util_io_Reads) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_read_arc_util_io_Reads, (frame[7].o)))(ctx, (frame[7].o), (frame[3].o));
	LINE_NUMBER(514);
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, (frame[1].o), (frame[6].i));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(515);
	((func_mindustry_gen_Entityc_add) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_add, (frame[7].o)))(ctx, (frame[7].o));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(517);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Duplicate entity ID in save: @ (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[7].o);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[7].o));
	}
label_12:;
	LINE_NUMBER(520);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveVersion_lambda$writeEntity$0_mindustry_gen_Entityc_arc_util_io_Writes(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$writeEntity$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(442);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_classId_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_classId_R_int, (frame[0].o)))(ctx, (frame[0].o));
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(443);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[0].o)))(ctx, (frame[0].o));
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(444);
	((func_mindustry_gen_Entityc_beforeWrite) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_beforeWrite, (frame[0].o)))(ctx, (frame[0].o));
	LINE_NUMBER(445);
	((func_mindustry_gen_Entityc_write_arc_util_io_Writes) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_write_arc_util_io_Writes, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveVersion_lambda$readMap$0_mindustry_world_Tile_arc_util_io_Reads_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$readMap$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	if (!param0 || !param1) {
		popStackFrame(ctx);
		return;
	}
	{
	LINE_NUMBER(370);
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(371);
	jobject buildObj = (jobject)((mindustry_world_Tile *) frame[0].o)->F_build;
	if (buildObj) {
		tryCatch(frameRef, [&]() {
			((func_mindustry_gen_Building_readAll_arc_util_io_Reads_byte) ((void **) nullCheck(ctx, buildObj)->vtable)[VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte])(ctx, buildObj, (frame[1].o), (frame[3].i));
		}, &class_java_lang_Throwable, [&](jobject err) {});
	}
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveVersion_lambda$writeMap$0_mindustry_world_Tile_arc_util_io_Writes(jcontext ctx, jobject param0, jobject param1) {
	if (!param0 || !param1) return;
	auto tile = (mindustry_world_Tile *) param0;
	if (!tile->F_build) return;

	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$writeMap$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)tile->F_build;
	jint temp0 = 0;
	tryCatch(frameRef, [&]() {
		temp0 = (jint)((func_mindustry_gen_Building_version_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_version_R_byte])(ctx, sp[1].o);
	}, &class_java_lang_Throwable, [&](jobject) { temp0 = 0; });
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(267);
	sp[0].o = (jobject)tile->F_build;
	tryCatch(frameRef, [&]() {
		((func_mindustry_gen_Building_writeAll_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_writeAll_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	}, &class_java_lang_Throwable, [&](jobject err) {});
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_io_SaveVersion_lambda$writeCustomChunks$1_mindustry_io_SaveFileReader$CustomChunk_arc_util_io_Writes(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$writeCustomChunks$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_io_Writes *) NULL_CHECK((frame[1].o)))->F_output;
	((func_mindustry_io_SaveFileReader$CustomChunk_write_java_io_DataOutput) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, INDEX_mindustry_io_SaveFileReader$CustomChunk_write_java_io_DataOutput, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_io_SaveVersion_lambda$writeCustomChunks$0_boolean_java_lang_String_R_boolean(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$writeCustomChunks$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(91);
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, INDEX_mindustry_io_SaveFileReader$CustomChunk_shouldWrite_R_boolean, (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o)));
	if (temp0 == 0) goto label_1;
	}
	INST_ILOAD(0);
	if ((--sp)->i == 0) goto label_2;
	{
	clinit_mindustry_io_SaveVersion(ctx);
	sp[0].o = (jobject)SF_mindustry_io_SaveVersion_customChunks;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, INDEX_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean, (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_io_SaveFileReader$CustomChunk, sp[0].o)));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$write$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	((func_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$write$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(82);
	((func_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean])(ctx, (frame[0].o), (frame[2].o), ((jint)((mindustry_io_SaveOptions *) NULL_CHECK((frame[1].o)))->F_embedAssets));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$write$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_io_SaveOptions *) NULL_CHECK((frame[1].o)))->F_extraTags;
	((func_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$read$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	((func_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$read$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(70);
	((func_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$read$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	((func_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_SaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:lambda$read$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	((func_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_io_SaveVersion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_SaveFileReader(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/SaveVersion:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_SaveVersion(ctx);
	{
	LINE_NUMBER(32);
	clinit_arc_struct_OrderedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[0].o);
	clinit_mindustry_io_SaveVersion(ctx);
	SF_mindustry_io_SaveVersion_customChunks = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_io_SaveVersion[] {
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
	(void *) M_mindustry_io_SaveFileReader_readRegion_java_lang_String_java_io_DataInput_arc_util_io_CounterInputStream_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_writeRegion_java_lang_String_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_writeChunk_java_io_DataOutput_mindustry_io_SaveFileReader$IORunner,
	(void *) M_mindustry_io_SaveFileReader_readChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_readChunkReads_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_skipChunk_java_io_DataInput,
	(void *) M_mindustry_io_SaveFileReader_readLegacyShortChunk_java_io_DataInput_mindustry_io_SaveFileReader$IORunnerLength_R_int,
	(void *) M_mindustry_io_SaveFileReader_skipLegacyShortChunk_java_io_DataInput,
	(void *) M_mindustry_io_SaveFileReader_writeStringMap_java_io_DataOutput_arc_struct_ObjectMap,
	(void *) M_mindustry_io_SaveFileReader_readStringMap_java_io_DataInput_R_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions,
	(void *) M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta,
	(void *) M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap,
	(void *) M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf,
	(void *) M_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_readMarkers_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov,
	(void *) M_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState,
	(void *) M_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean,
	(void *) M_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput,
	(void *) M_mindustry_io_SaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput,
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
	{ "readRegion", "(Ljava/lang/String;Ljava/io/DataInput;Larc/util/io/CounterInputStream;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "writeRegion", "(Ljava/lang/String;Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "writeChunk", "(Ljava/io/DataOutput;Lmindustry/io/SaveFileReader$IORunner;)V" },
	{ "readChunk", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "readChunkReads", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "skipChunk", "(Ljava/io/DataInput;)V" },
	{ "readLegacyShortChunk", "(Ljava/io/DataInput;Lmindustry/io/SaveFileReader$IORunnerLength;)I" },
	{ "skipLegacyShortChunk", "(Ljava/io/DataInput;)V" },
	{ "writeStringMap", "(Ljava/io/DataOutput;Larc/struct/ObjectMap;)V" },
	{ "readStringMap", "(Ljava/io/DataInput;)Larc/struct/StringMap;" },
	{ "read", "(Ljava/io/DataInputStream;Larc/util/io/CounterInputStream;Lmindustry/io/SaveReadState;)V" },
	{ "write", "(Ljava/io/DataOutputStream;Lmindustry/io/SaveOptions;)V" },
	{ "getMeta", "(Ljava/io/DataInput;)Lmindustry/io/SaveMeta;" },
	{ "writeCustomChunks", "(Ljava/io/DataOutput;Z)V" },
	{ "readCustomChunks", "(Ljava/io/DataInput;)V" },
	{ "writeMeta", "(Ljava/io/DataOutput;Larc/struct/StringMap;)V" },
	{ "readMeta", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "readRules", "(Lmindustry/io/SaveReadState;)V" },
	{ "writeMap", "(Ljava/io/DataOutput;)V" },
	{ "readMap", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "writeTeamBlocks", "(Ljava/io/DataOutput;)V" },
	{ "writeWorldEntities", "(Ljava/io/DataOutput;)V" },
	{ "writeWorldEntities", "(Ljava/io/DataOutput;Larc/func/Boolf;)V" },
	{ "writeEntity", "(Lmindustry/gen/Entityc;Ljava/io/DataOutput;)V" },
	{ "writeEntityMapping", "(Ljava/io/DataOutput;)V" },
	{ "writeEntities", "(Ljava/io/DataOutput;)V" },
	{ "writeMarkers", "(Ljava/io/DataOutput;)V" },
	{ "readMarkers", "(Ljava/io/DataInput;)V" },
	{ "readTeamBlocks", "(Ljava/io/DataInput;)V" },
	{ "readWorldEntities", "(Ljava/io/DataInput;[Larc/func/Prov;Lmindustry/io/SaveReadState;)V" },
	{ "readEntityMapping", "(Ljava/io/DataInput;)[Larc/func/Prov;" },
	{ "readEntities", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "readDataPatches", "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V" },
	{ "writeDataPatches", "(Ljava/io/DataOutput;Z)V" },
	{ "readContentHeader", "(Ljava/io/DataInput;)V" },
	{ "writeContentHeader", "(Ljava/io/DataOutput;)V" },
	{ "lambda$write$2", "(Ljava/io/DataOutput;)V" },
	{ "lambda$write$1", "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V" },
	{ "lambda$write$0", "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V" },
	{ "lambda$read$3", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$2", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$1", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
	{ "lambda$read$0", "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V" },
};

static FieldMetadata fields[] {
	{ "customChunks", &class_arc_struct_OrderedMap, (intptr_t) &SF_mindustry_io_SaveVersion_customChunks, "Larc/struct/OrderedMap;", 12 },
	{ "version", &class_int, offsetof(mindustry_io_SaveVersion, F_version), "I", 17 },
};

static MethodMetadata methods[] {
	{ "addCustomChunk", (intptr_t) SM_mindustry_io_SaveVersion_addCustomChunk_java_lang_String_mindustry_io_SaveFileReader$CustomChunk, 0, "(Ljava/lang/String;Lmindustry/io/SaveFileReader$CustomChunk;)V", 9 },
	{ "<init>", (intptr_t) init_mindustry_io_SaveVersion_int, 0, "(I)V", 1 },
	{ "getMeta", (intptr_t) M_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta, VTABLE_mindustry_io_SaveVersion_getMeta_java_io_DataInput_R_mindustry_io_SaveMeta, "(Ljava/io/DataInput;)Lmindustry/io/SaveMeta;", 1 },
	{ "read", (intptr_t) M_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_read_java_io_DataInputStream_arc_util_io_CounterInputStream_mindustry_io_SaveReadState, "(Ljava/io/DataInputStream;Larc/util/io/CounterInputStream;Lmindustry/io/SaveReadState;)V", 1 },
	{ "write", (intptr_t) M_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions, VTABLE_mindustry_io_SaveVersion_write_java_io_DataOutputStream_mindustry_io_SaveOptions, "(Ljava/io/DataOutputStream;Lmindustry/io/SaveOptions;)V", 1 },
	{ "writeCustomChunks", (intptr_t) M_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean, VTABLE_mindustry_io_SaveVersion_writeCustomChunks_java_io_DataOutput_boolean, "(Ljava/io/DataOutput;Z)V", 1 },
	{ "readCustomChunks", (intptr_t) M_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_readCustomChunks_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "writeMeta", (intptr_t) M_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap, VTABLE_mindustry_io_SaveVersion_writeMeta_java_io_DataOutput_arc_struct_StringMap, "(Ljava/io/DataOutput;Larc/struct/StringMap;)V", 1 },
	{ "readMeta", (intptr_t) M_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readMeta_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readRules", (intptr_t) M_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readRules_mindustry_io_SaveReadState, "(Lmindustry/io/SaveReadState;)V", 1 },
	{ "writeMap", (intptr_t) M_mindustry_io_SaveVersion_writeMap_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeMap_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "readMap", (intptr_t) M_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readMap_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "writeTeamBlocks", (intptr_t) M_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeTeamBlocks_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "writeWorldEntities", (intptr_t) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "writeWorldEntities", (intptr_t) M_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf, VTABLE_mindustry_io_SaveVersion_writeWorldEntities_java_io_DataOutput_arc_func_Boolf, "(Ljava/io/DataOutput;Larc/func/Boolf;)V", 1 },
	{ "writeEntity", (intptr_t) M_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeEntity_mindustry_gen_Entityc_java_io_DataOutput, "(Lmindustry/gen/Entityc;Ljava/io/DataOutput;)V", 2 },
	{ "writeEntityMapping", (intptr_t) M_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeEntityMapping_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "writeEntities", (intptr_t) M_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeEntities_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "writeMarkers", (intptr_t) M_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeMarkers_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "readMarkers", (intptr_t) M_mindustry_io_SaveVersion_readMarkers_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_readMarkers_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "readTeamBlocks", (intptr_t) M_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_readTeamBlocks_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "readWorldEntities", (intptr_t) M_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readWorldEntities_java_io_DataInput_Array1_arc_func_Prov_mindustry_io_SaveReadState, "(Ljava/io/DataInput;[Larc/func/Prov;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readEntityMapping", (intptr_t) M_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov, VTABLE_mindustry_io_SaveVersion_readEntityMapping_java_io_DataInput_R_Array1_arc_func_Prov, "(Ljava/io/DataInput;)[Larc/func/Prov;", 1 },
	{ "readEntities", (intptr_t) M_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readEntities_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "readDataPatches", (intptr_t) M_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState, VTABLE_mindustry_io_SaveVersion_readDataPatches_java_io_DataInput_mindustry_io_SaveReadState, "(Ljava/io/DataInput;Lmindustry/io/SaveReadState;)V", 1 },
	{ "writeDataPatches", (intptr_t) M_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean, VTABLE_mindustry_io_SaveVersion_writeDataPatches_java_io_DataOutput_boolean, "(Ljava/io/DataOutput;Z)V", 1 },
	{ "readContentHeader", (intptr_t) M_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_readContentHeader_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "writeContentHeader", (intptr_t) M_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_writeContentHeader_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "lambda$readWorldEntities$0", (intptr_t) SM_mindustry_io_SaveVersion_lambda$readWorldEntities$0_Array1_arc_func_Prov_arc_struct_IntSet_arc_struct_Seq_arc_util_io_Reads_int, 0, "([Larc/func/Prov;Larc/struct/IntSet;Larc/struct/Seq;Larc/util/io/Reads;I)V", 4106 },
	{ "lambda$writeEntity$0", (intptr_t) SM_mindustry_io_SaveVersion_lambda$writeEntity$0_mindustry_gen_Entityc_arc_util_io_Writes, 0, "(Lmindustry/gen/Entityc;Larc/util/io/Writes;)V", 4106 },
	{ "lambda$readMap$0", (intptr_t) SM_mindustry_io_SaveVersion_lambda$readMap$0_mindustry_world_Tile_arc_util_io_Reads_int, 0, "(Lmindustry/world/Tile;Larc/util/io/Reads;I)V", 4106 },
	{ "lambda$writeMap$0", (intptr_t) SM_mindustry_io_SaveVersion_lambda$writeMap$0_mindustry_world_Tile_arc_util_io_Writes, 0, "(Lmindustry/world/Tile;Larc/util/io/Writes;)V", 4106 },
	{ "lambda$writeCustomChunks$1", (intptr_t) SM_mindustry_io_SaveVersion_lambda$writeCustomChunks$1_mindustry_io_SaveFileReader$CustomChunk_arc_util_io_Writes, 0, "(Lmindustry/io/SaveFileReader$CustomChunk;Larc/util/io/Writes;)V", 4106 },
	{ "lambda$writeCustomChunks$0", (intptr_t) SM_mindustry_io_SaveVersion_lambda$writeCustomChunks$0_boolean_java_lang_String_R_boolean, 0, "(ZLjava/lang/String;)Z", 4106 },
	{ "lambda$write$2", (intptr_t) M_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_lambda$write$2_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 4098 },
	{ "lambda$write$1", (intptr_t) M_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_lambda$write$1_mindustry_io_SaveOptions_java_io_DataOutput, "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V", 4098 },
	{ "lambda$write$0", (intptr_t) M_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput, VTABLE_mindustry_io_SaveVersion_lambda$write$0_mindustry_io_SaveOptions_java_io_DataOutput, "(Lmindustry/io/SaveOptions;Ljava/io/DataOutput;)V", 4098 },
	{ "lambda$read$3", (intptr_t) M_mindustry_io_SaveVersion_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_lambda$read$3_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$2", (intptr_t) M_mindustry_io_SaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_lambda$read$2_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$1", (intptr_t) M_mindustry_io_SaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_lambda$read$1_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "lambda$read$0", (intptr_t) M_mindustry_io_SaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput, VTABLE_mindustry_io_SaveVersion_lambda$read$0_mindustry_io_SaveReadState_java_io_DataInput, "(Lmindustry/io/SaveReadState;Ljava/io/DataInput;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_io_SaveVersion, 0, "()V", 8 },
};

Class class_mindustry_io_SaveVersion{
		.nativeName = (intptr_t) "mindustry/io/SaveVersion",
		.parentClass = (intptr_t) &class_mindustry_io_SaveFileReader,
		.size = sizeof(mindustry_io_SaveVersion),
		.classVtable = (intptr_t) vtable_mindustry_io_SaveVersion,
		.staticInitializer = (intptr_t) clinit_mindustry_io_SaveVersion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_SaveVersion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_SaveVersion = registerClass(&class_mindustry_io_SaveVersion);

}
