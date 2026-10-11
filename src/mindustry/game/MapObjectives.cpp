#include "mindustry/game/MapObjectives.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_42.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_41.h"
#include "arc/func/Prov.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_40.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_43.h"
#include "arc/util/Eachable.h"
#include "mindustry/game/MapObjectives_IndexBool.h"
#include "mindustry/game/MapObjectives_CommandModeObjective.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/MapObjectives_BuildCountObjective.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "java/util/Iterator.h"
#include "mindustry/game/MapObjectives_LineMarker.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_TextMarker.h"
#include "mindustry/game/MapObjectives_ItemObjective.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Boolf_5.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Boolf_4.h"
#include "mindustry/game/MapObjectives.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"
#include "mindustry/game/MapObjectives_Synthetic.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/game/MapObjectives_ShapeMarker.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "mindustry/game/MapObjectives_PointMarker.h"
#include "mindustry/game/MapObjectives_ResearchObjective.h"
#include "mindustry/game/MapObjectives_DestroyBlockObjective.h"
#include "mindustry/game/MapObjectives_TimerObjective.h"
#include "mindustry/game/MapObjectives_ProduceObjective.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/MapObjectives_TextureMarker.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/game/MapObjectives_DestroyUnitsObjective.h"
#include "mindustry/game/MapObjectives_DestroyBlocksObjective.h"
#include "mindustry/game/MapObjectives_LabelFlag.h"
#include "mindustry/game/MapObjectives_Alignment.h"
#include "mindustry/game/MapObjectives_TilePos.h"
#include "mindustry/game/MapObjectives_DestroyCoreObjective.h"
#include "mindustry/game/MapObjectives_Researchable.h"
#include "mindustry/Vars.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "mindustry/game/MapObjectives_ShapeTextMarker.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/game/MapObjectives_LogicCode.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "java/lang/SafeVarargs.h"
#include "mindustry/game/MapObjectives_QuadMarker.h"
#include "mindustry/game/MapObjectives_FlagObjective.h"
#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "java/lang/reflect/Field.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/game/MapObjectives_LightMarker.h"
#include "mindustry/net/Net.h"
#include "mindustry/game/MapObjectives_Immutable.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_24.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_23.h"
#include "mindustry/game/MapObjectives_UnitCountObjective.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_22.h"
#include "mindustry/game/MapObjectives_Second.h"
#include "java/lang/String.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_28.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_27.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_26.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_25.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Cons_1.h"
#include "mindustry/game/MapObjectives_PosMarker.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_29.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_31.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_30.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_35.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_34.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_33.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_32.h"
#include "mindustry/game/MapObjectives_Vertices.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/MapObjectives_Unordered.h"
#include "arc/util/Strings.h"
#include "mindustry/game/MapObjectives_CoreItemObjective.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_39.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_38.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_37.h"
#include "mindustry/game/MapObjectives_invoke_arc_func_Prov_36.h"
#include "java/lang/Class.h"
#include "mindustry/gen/Call.h"

extern "C" {

jobject SF_mindustry_game_MapObjectives_allObjectiveTypes;
jobject SF_mindustry_game_MapObjectives_allMarkerTypes;
jobject SF_mindustry_game_MapObjectives_markerNameToType;
jobject SF_mindustry_game_MapObjectives_allMarkerTypeNames;

void mark_mindustry_game_MapObjectives(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_MapObjectives_allObjectiveTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_MapObjectives_allObjectiveTypes)->clazz)->markFunction)((jobject) SF_mindustry_game_MapObjectives_allObjectiveTypes, mark, depth + 1);
		if (SF_mindustry_game_MapObjectives_allMarkerTypes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_MapObjectives_allMarkerTypes)->clazz)->markFunction)((jobject) SF_mindustry_game_MapObjectives_allMarkerTypes, mark, depth + 1);
		if (SF_mindustry_game_MapObjectives_markerNameToType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_MapObjectives_markerNameToType)->clazz)->markFunction)((jobject) SF_mindustry_game_MapObjectives_markerNameToType, mark, depth + 1);
		if (SF_mindustry_game_MapObjectives_allMarkerTypeNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_MapObjectives_allMarkerTypeNames)->clazz)->markFunction)((jobject) SF_mindustry_game_MapObjectives_allMarkerTypeNames, mark, depth + 1);
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
	auto self = (mindustry_game_MapObjectives *) object;
	if (self->F_all)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_all)->clazz)->markFunction)((jobject) self->F_all, mark, depth + 1);
}

void SM_mindustry_game_MapObjectives_registerObjective_Array1_arc_func_Prov(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:registerObjective", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	frame[1].o = (frame[0].o);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(83);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_allObjectiveTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objective"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(88);
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(82);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives_registerMarker_Array1_arc_func_Prov(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:registerMarker", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(94);
	frame[1].o = (frame[0].o);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(95);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_allMarkerTypes;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Marker"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(99);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_allMarkerTypeNames;
	sp[1].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_markerNameToType;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (frame[4].o));
	LINE_NUMBER(101);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_markerNameToType;
	sp[1].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[6].o));
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(103);
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(94);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives_registerLegacyMarker_java_lang_String_arc_func_Prov(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:registerLegacyMarker", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_game_MapObjectives$ObjectiveMarker, sp[0].o)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(110);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_markerNameToType;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(111);
	clinit_mindustry_game_MapObjectives(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives_markerNameToType;
	sp[1].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(113);
	SM_mindustry_io_JsonIO_classTag_java_lang_String_java_lang_Class(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_game_MapObjectives *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(120);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((mindustry_game_MapObjectives *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	((func_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective])(ctx, (frame[0].o), (frame[5].o));
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:flatten", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	if (!frame[0].o || !frame[1].o) {
		popStackFrame(ctx);
		return;
	}
	auto objFlatten = (mindustry_game_MapObjectives$MapObjective *) frame[1].o;
	if (!objFlatten->F_children) {
		clinit_arc_struct_Seq(ctx);
		objFlatten->F_children = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq_int(ctx, (jobject) objFlatten->F_children, 2);
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)objFlatten->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	((func_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective])(ctx, (frame[0].o), (frame[3].o));
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_update(jcontext ctx, jobject self) {
	if (!self) return;
	auto objAll = (mindustry_game_MapObjectives *) self;
	if (!objAll->F_all || ((arc_struct_Seq *) objAll->F_all)->F_size == 0) return;
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_game_MapObjectives_eachRunning_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(147);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_MapObjectives_any_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:any", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_eachRunning_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:eachRunning", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:eachRunning", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_MapObjectives_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:each", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives_lookupRegion_java_lang_Object_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:lookupRegion", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1458);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_String, (frame[0].o)));
	LINE_NUMBER(1459);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[2].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1460);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1461);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[1].o), (frame[6].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(1462);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	jint temp0 = (jint)((func_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_isLoaded_java_lang_String_java_lang_Class_R_boolean])(ctx, sp[0].o, (frame[2].o), (((jobject) &class_arc_graphics_Texture)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1463);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (frame[2].o), (((jobject) &class_arc_graphics_Texture)));
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o)));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1465);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	LINE_NUMBER(1467);
	goto label_9;
label_1:;
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[0].o)));
	LINE_NUMBER(1468);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[3].o)))->F_fullIcon;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1469);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild)) == 0) goto label_12;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1470);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[4].o)))->F_rootDisplay;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer])(ctx, sp[0].o);
	LINE_NUMBER(1471);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[4].o)))->F_rootDisplay;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, (frame[1].o));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(1472);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild)) == 0) goto label_16;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, (frame[0].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isAdded_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(1473);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture])(ctx, (frame[5].o));
	LINE_NUMBER(1474);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[5].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[5].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(1476);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"error"_j))));
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	LINE_NUMBER(1478);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_MapObjectives_prepareTexture_mindustry_game_MapObjectives$ObjectiveMarker_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:prepareTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1481);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1482);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[2].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[2].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(1483);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"error"_j))));
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(1485);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[2].o)))->F_rootDisplay;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands])(ctx, sp[0].o);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(1487);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isAdded_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1488);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[3].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[3].o)))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(1489);
	((func_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"error"_j))));
	goto label_6;
	}
label_10:;
	{
	LINE_NUMBER(1491);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture])(ctx, (frame[3].o));
	}
label_6:;
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_game_MapObjectives_lambda$eachRunning$0_arc_func_Boolf_mindustry_game_MapObjectives$MapObjective_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:lambda$eachRunning$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_qualified_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:lambda$update$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_mindustry_game_MapObjectives$MapObjective_update_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_MapObjectives$MapObjective_update_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_game_MapObjectives *) NULL_CHECK((frame[0].o)))->F_all;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[0].o, (frame[1].o));
	SM_mindustry_gen_Call_completeObjective_int(ctx, temp0);
	}
label_1:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_game_MapObjectives(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives(ctx);
	{
	LINE_NUMBER(38);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_game_MapObjectives(ctx);
	SF_mindustry_game_MapObjectives_allObjectiveTypes = sp[0].o;
	LINE_NUMBER(39);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_game_MapObjectives(ctx);
	SF_mindustry_game_MapObjectives_allMarkerTypes = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_game_MapObjectives(ctx);
	SF_mindustry_game_MapObjectives_markerNameToType = sp[0].o;
	LINE_NUMBER(41);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_game_MapObjectives(ctx);
	SF_mindustry_game_MapObjectives_allMarkerTypeNames = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (13));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_22(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_22);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_23(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_23);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_24(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_24);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_25(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_25);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_26(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_26);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_27(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_27);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_28(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_28);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_29(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_29);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_30(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_30 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_30);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_31(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_31 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_31);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_32(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_32 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_32);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_33(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_33 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_33);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_34(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_34 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_34);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	SM_mindustry_game_MapObjectives_registerObjective_Array1_arc_func_Prov(ctx, sp[0].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)createArray(ctx, &class_arc_func_Prov, (8));
	jint temp13 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_35(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_35 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_35);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_36(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_36 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_36);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_37(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_37 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_37);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_38(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_38 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_38);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_39(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_39 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_39);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_40(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_40 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_40);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_41(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_41 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_41);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_42(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_42 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_42);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	SM_mindustry_game_MapObjectives_registerMarker_Array1_arc_func_Prov(ctx, sp[0].o);
	LINE_NUMBER(77);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Minimap"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_game_MapObjectives_invoke_arc_func_Prov_43(ctx);
		auto proxy = (mindustry_game_MapObjectives_invoke_arc_func_Prov_43 *) gcAlloc(ctx, &class_mindustry_game_MapObjectives_invoke_arc_func_Prov_43);
		sp[1].o = (jobject) proxy;
	}
	SM_mindustry_game_MapObjectives_registerLegacyMarker_java_lang_String_arc_func_Prov(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method registerObjective
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_SafeVarargs);
	}

	{ // Method registerMarker
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_SafeVarargs);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives[] {
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
	(void *) M_mindustry_game_MapObjectives_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_game_MapObjectives_each_arc_func_Cons,
	(void *) M_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives_update,
	(void *) M_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective,
	(void *) M_mindustry_game_MapObjectives_any_R_boolean,
	(void *) M_mindustry_game_MapObjectives_clear,
	(void *) M_mindustry_game_MapObjectives_eachRunning_arc_func_Cons,
	(void *) M_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons,
	(void *) M_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "each", "(Larc/func/Cons;)V" },
	{ "add", "([Lmindustry/game/MapObjectives$MapObjective;)V" },
	{ "flatten", "(Lmindustry/game/MapObjectives$MapObjective;)V" },
	{ "update", "()V" },
	{ "get", "(I)Lmindustry/game/MapObjectives$MapObjective;" },
	{ "any", "()Z" },
	{ "clear", "()V" },
	{ "eachRunning", "(Larc/func/Cons;)V" },
	{ "eachRunning", "(Larc/func/Boolf;Larc/func/Cons;)V" },
	{ "lambda$update$0", "(Lmindustry/game/MapObjectives$MapObjective;)V" },
};

static jclass interfaces[] { &class_java_lang_Iterable, &class_arc_util_Eachable, };

static jclass innerClasses[] {
	&class_mindustry_game_MapObjectives$MapObjective,
	&class_mindustry_game_MapObjectives$ObjectiveMarker,
	&class_mindustry_game_MapObjectives$TilePos,
	&class_mindustry_game_MapObjectives$Second,
	&class_mindustry_game_MapObjectives$LogicCode,
	&class_mindustry_game_MapObjectives$Multiline,
	&class_mindustry_game_MapObjectives$Synthetic,
	&class_mindustry_game_MapObjectives$Researchable,
	&class_mindustry_game_MapObjectives$Alignment,
	&class_mindustry_game_MapObjectives$LabelFlag,
	&class_mindustry_game_MapObjectives$IndexBool,
	&class_mindustry_game_MapObjectives$Vertices,
	&class_mindustry_game_MapObjectives$Immutable,
	&class_mindustry_game_MapObjectives$Unordered,
	&class_mindustry_game_MapObjectives$TextureHolder,
	&class_mindustry_game_MapObjectives$LightMarker,
	&class_mindustry_game_MapObjectives$QuadMarker,
	&class_mindustry_game_MapObjectives$TextureMarker,
	&class_mindustry_game_MapObjectives$LineMarker,
	&class_mindustry_game_MapObjectives$TextMarker,
	&class_mindustry_game_MapObjectives$ShapeMarker,
	&class_mindustry_game_MapObjectives$PointMarker,
	&class_mindustry_game_MapObjectives$ShapeTextMarker,
	&class_mindustry_game_MapObjectives$PosMarker,
	&class_mindustry_game_MapObjectives$DestroyCoreObjective,
	&class_mindustry_game_MapObjectives$FlagObjective,
	&class_mindustry_game_MapObjectives$CommandModeObjective,
	&class_mindustry_game_MapObjectives$DestroyBlocksObjective,
	&class_mindustry_game_MapObjectives$DestroyBlockObjective,
	&class_mindustry_game_MapObjectives$TimerObjective,
	&class_mindustry_game_MapObjectives$DestroyUnitsObjective,
	&class_mindustry_game_MapObjectives$UnitCountObjective,
	&class_mindustry_game_MapObjectives$BuildCountObjective,
	&class_mindustry_game_MapObjectives$CoreItemObjective,
	&class_mindustry_game_MapObjectives$ItemObjective,
	&class_mindustry_game_MapObjectives$ProduceObjective,
	&class_mindustry_game_MapObjectives$ResearchObjective,
};

static FieldMetadata fields[] {
	{ "allObjectiveTypes", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_game_MapObjectives_allObjectiveTypes, "Larc/struct/Seq;", 25 },
	{ "allMarkerTypes", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_game_MapObjectives_allMarkerTypes, "Larc/struct/Seq;", 25 },
	{ "markerNameToType", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_game_MapObjectives_markerNameToType, "Larc/struct/ObjectMap;", 25 },
	{ "allMarkerTypeNames", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_game_MapObjectives_allMarkerTypeNames, "Larc/struct/Seq;", 25 },
	{ "all", &class_arc_struct_Seq, offsetof(mindustry_game_MapObjectives, F_all), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "registerObjective", (intptr_t) SM_mindustry_game_MapObjectives_registerObjective_Array1_arc_func_Prov, 0, "([Larc/func/Prov;)V", 137 },
	{ "registerMarker", (intptr_t) SM_mindustry_game_MapObjectives_registerMarker_Array1_arc_func_Prov, 0, "([Larc/func/Prov;)V", 137 },
	{ "registerLegacyMarker", (intptr_t) SM_mindustry_game_MapObjectives_registerLegacyMarker_java_lang_String_arc_func_Prov, 0, "(Ljava/lang/String;Larc/func/Prov;)V", 9 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives, 0, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives_add_Array1_mindustry_game_MapObjectives$MapObjective, "([Lmindustry/game/MapObjectives$MapObjective;)V", 129 },
	{ "flatten", (intptr_t) M_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives_flatten_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)V", 2 },
	{ "update", (intptr_t) M_mindustry_game_MapObjectives_update, VTABLE_mindustry_game_MapObjectives_update, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives_get_int_R_mindustry_game_MapObjectives$MapObjective, "(I)Lmindustry/game/MapObjectives$MapObjective;", 1 },
	{ "any", (intptr_t) M_mindustry_game_MapObjectives_any_R_boolean, VTABLE_mindustry_game_MapObjectives_any_R_boolean, "()Z", 1 },
	{ "clear", (intptr_t) M_mindustry_game_MapObjectives_clear, VTABLE_mindustry_game_MapObjectives_clear, "()V", 1 },
	{ "eachRunning", (intptr_t) M_mindustry_game_MapObjectives_eachRunning_arc_func_Cons, VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "eachRunning", (intptr_t) M_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons, VTABLE_mindustry_game_MapObjectives_eachRunning_arc_func_Boolf_arc_func_Cons, "(Larc/func/Boolf;Larc/func/Cons;)V", 1 },
	{ "iterator", (intptr_t) M_mindustry_game_MapObjectives_iterator_R_java_util_Iterator, VTABLE_mindustry_game_MapObjectives_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "each", (intptr_t) M_mindustry_game_MapObjectives_each_arc_func_Cons, VTABLE_mindustry_game_MapObjectives_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "lookupRegion", (intptr_t) SM_mindustry_game_MapObjectives_lookupRegion_java_lang_Object_arc_graphics_g2d_TextureRegion, 0, "(Ljava/lang/Object;Larc/graphics/g2d/TextureRegion;)V", 10 },
	{ "prepareTexture", (intptr_t) SM_mindustry_game_MapObjectives_prepareTexture_mindustry_game_MapObjectives$ObjectiveMarker_java_lang_Object, 0, "(Lmindustry/game/MapObjectives$ObjectiveMarker;Ljava/lang/Object;)V", 10 },
	{ "lambda$eachRunning$0", (intptr_t) SM_mindustry_game_MapObjectives_lambda$eachRunning$0_arc_func_Boolf_mindustry_game_MapObjectives$MapObjective_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/game/MapObjectives$MapObjective;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective, VTABLE_mindustry_game_MapObjectives_lambda$update$0_mindustry_game_MapObjectives$MapObjective, "(Lmindustry/game/MapObjectives$MapObjective;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_MapObjectives, 0, "()V", 8 },
};

Class class_mindustry_game_MapObjectives{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapObjectives),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 37,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives = registerClass(&class_mindustry_game_MapObjectives);

}
