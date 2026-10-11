#include "mindustry/logic/LogicFx.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "arc/struct/OrderedMap.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LogicFx_invoke_arc_func_Cons2_1.h"
#include "java/lang/Iterable.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/logic/LogicFx.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/logic/LogicFx_EffectEntry.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/logic/LogicFx_invoke_arc_func_Func_1.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_LogicFx_map;

void mark_mindustry_logic_LogicFx(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LogicFx_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LogicFx_map)->clazz)->markFunction)((jobject) SF_mindustry_logic_LogicFx_map, mark, depth + 1);
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
	auto self = (mindustry_logic_LogicFx *) object;
}

void init_mindustry_logic_LogicFx(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicFx_entries_R_java_lang_Iterable(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:entries", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	{
	LINE_NUMBER(53);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicFx_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_logic_LogicFx_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_logic_LogicFx_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicFx_get_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(57);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LogicFx$EffectEntry, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicFx_add_java_lang_String_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(62);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[1].o)))->F_name = (jref) (frame[0].o);
	LINE_NUMBER(63);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicFx_all_R_Array1_java_lang_String(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:all", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	{
	LINE_NUMBER(67);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_java_lang_String)));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LogicFx_lambda$entries$0_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:lambda$entries$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LogicFx$EffectEntry, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LogicFx_lambda$static$0_java_lang_String_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:lambda$static$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(49);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[1].o)))->F_name = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LogicFx(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_struct_OrderedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[0].o);
	clinit_mindustry_logic_LogicFx(ctx);
	SF_mindustry_logic_LogicFx_map = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (66));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"warn"_j)));
	jint temp0 = jint(1);
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_unitCapKill;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"cross"_j)));
	jint temp1 = jint(3);
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_unitEnvKill;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"blockFall"_j)));
	jint temp2 = jint(5);
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_blockCrash;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	sp[3].o = ((jobject) &class_mindustry_world_Block);
	LINE_NUMBER(16);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o, (jfloat(100.0f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (((jobject) createStringLiteral(ctx, u8"placeBlock"_j)));
	jint temp3 = 7;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_placeBlock;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(17);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (8)) = (((jobject) createStringLiteral(ctx, u8"placeBlockSpark"_j)));
	jint temp4 = 9;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_coreLaunchConstruct;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(18);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (10)) = (((jobject) createStringLiteral(ctx, u8"breakBlock"_j)));
	jint temp5 = 11;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_breakBlock;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(19);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (12)) = (((jobject) createStringLiteral(ctx, u8"spawn"_j)));
	jint temp6 = 13;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_spawn;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (14)) = (((jobject) createStringLiteral(ctx, u8"trail"_j)));
	jint temp7 = 15;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_colorTrail;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(21);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (16)) = (((jobject) createStringLiteral(ctx, u8"breakProp"_j)));
	jint temp8 = 17;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_breakProp;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(22);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (18)) = (((jobject) createStringLiteral(ctx, u8"smokeCloud"_j)));
	jint temp9 = 19;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_missileTrailSmoke;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(23);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (20)) = (((jobject) createStringLiteral(ctx, u8"vapor"_j)));
	jint temp10 = 21;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_vapor;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(24);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (22)) = (((jobject) createStringLiteral(ctx, u8"hit"_j)));
	jint temp11 = 23;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_hitBulletColor;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(25);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (24)) = (((jobject) createStringLiteral(ctx, u8"hitSquare"_j)));
	jint temp12 = 25;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_hitSquaresColor;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(26);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (26)) = (((jobject) createStringLiteral(ctx, u8"shootSmall"_j)));
	jint temp13 = 27;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootSmall;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(27);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (28)) = (((jobject) createStringLiteral(ctx, u8"shootBig"_j)));
	jint temp14 = 29;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootTitan;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(28);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (30)) = (((jobject) createStringLiteral(ctx, u8"smokeSmall"_j)));
	jint temp15 = 31;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootSmallSmoke;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(29);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (32)) = (((jobject) createStringLiteral(ctx, u8"smokeBig"_j)));
	jint temp16 = 33;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootBigSmoke;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(30);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (34)) = (((jobject) createStringLiteral(ctx, u8"smokeColor"_j)));
	jint temp17 = 35;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootSmokeTitan;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(31);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (36)) = (((jobject) createStringLiteral(ctx, u8"smokeSquare"_j)));
	jint temp18 = 37;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootSmokeSquare;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(32);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (38)) = (((jobject) createStringLiteral(ctx, u8"smokeSquareBig"_j)));
	jint temp19 = 39;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_shootSmokeSquareBig;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(33);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (40)) = (((jobject) createStringLiteral(ctx, u8"spark"_j)));
	jint temp20 = 41;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_hitLaserBlast;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(34);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp20) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (42)) = (((jobject) createStringLiteral(ctx, u8"sparkBig"_j)));
	jint temp21 = 43;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_circleColorSpark;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(35);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (44)) = (((jobject) createStringLiteral(ctx, u8"sparkShoot"_j)));
	jint temp22 = 45;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_colorSpark;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(36);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp22) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (46)) = (((jobject) createStringLiteral(ctx, u8"sparkShootBig"_j)));
	jint temp23 = 47;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_randLifeSpark;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(37);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (48)) = (((jobject) createStringLiteral(ctx, u8"drill"_j)));
	jint temp24 = 49;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_mine;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(38);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp24) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (50)) = (((jobject) createStringLiteral(ctx, u8"drillBig"_j)));
	jint temp25 = 51;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_mineHuge;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(39);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp25) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (52)) = (((jobject) createStringLiteral(ctx, u8"lightBlock"_j)));
	jint temp26 = 53;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_lightBlock;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(40);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (54)) = (((jobject) createStringLiteral(ctx, u8"explosion"_j)));
	jint temp27 = 55;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(41);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (56)) = (((jobject) createStringLiteral(ctx, u8"smokePuff"_j)));
	jint temp28 = 57;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_smokePuff;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(42);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp28) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (58)) = (((jobject) createStringLiteral(ctx, u8"sparkExplosion"_j)));
	jint temp29 = 59;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_titanExplosion;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(43);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp29) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (60)) = (((jobject) createStringLiteral(ctx, u8"crossExplosion"_j)));
	jint temp30 = 61;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_dynamicSpikes;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(44);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp30) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (62)) = (((jobject) createStringLiteral(ctx, u8"wave"_j)));
	jint temp31 = 63;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_dynamicWave;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	LINE_NUMBER(45);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry])(ctx, sp[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp31) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (64)) = (((jobject) createStringLiteral(ctx, u8"bubble"_j)));
	jint temp32 = 65;
	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_logic_LogicFx$EffectEntry);
	clinit_mindustry_content_Fx(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Fx_airBubble;
	init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp32) = sp[2].o;
	LINE_NUMBER(13);
	((func_arc_struct_OrderedMap_putAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_putAll_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	clinit_mindustry_logic_LogicFx(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LogicFx_map;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LogicFx_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_logic_LogicFx_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_logic_LogicFx_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_OrderedMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LogicFx;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LogicFx[] {
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
	&class_mindustry_logic_LogicFx$EffectEntry,
};

static FieldMetadata fields[] {
	{ "map", &class_arc_struct_OrderedMap, (intptr_t) &SF_mindustry_logic_LogicFx_map, "Larc/struct/OrderedMap;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LogicFx, 0, "()V", 1 },
	{ "entries", (intptr_t) SM_mindustry_logic_LogicFx_entries_R_java_lang_Iterable, 0, "()Ljava/lang/Iterable;", 9 },
	{ "get", (intptr_t) SM_mindustry_logic_LogicFx_get_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry, 0, "(Ljava/lang/String;)Lmindustry/logic/LogicFx$EffectEntry;", 9 },
	{ "add", (intptr_t) SM_mindustry_logic_LogicFx_add_java_lang_String_mindustry_logic_LogicFx$EffectEntry, 0, "(Ljava/lang/String;Lmindustry/logic/LogicFx$EffectEntry;)V", 9 },
	{ "all", (intptr_t) SM_mindustry_logic_LogicFx_all_R_Array1_java_lang_String, 0, "()[Ljava/lang/String;", 9 },
	{ "lambda$entries$0", (intptr_t) SM_mindustry_logic_LogicFx_lambda$entries$0_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry, 0, "(Ljava/lang/String;)Lmindustry/logic/LogicFx$EffectEntry;", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_LogicFx_lambda$static$0_java_lang_String_mindustry_logic_LogicFx$EffectEntry, 0, "(Ljava/lang/String;Lmindustry/logic/LogicFx$EffectEntry;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LogicFx, 0, "()V", 8 },
};

Class class_mindustry_logic_LogicFx{
		.nativeName = (intptr_t) "mindustry/logic/LogicFx",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicFx),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicFx,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicFx,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicFx,
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
static bool registered_mindustry_logic_LogicFx = registerClass(&class_mindustry_logic_LogicFx);

}
