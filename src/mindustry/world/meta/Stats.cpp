#include "mindustry/world/meta/Stats.h"
#include "arc/func/Prov.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/world/meta/Attribute.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/meta/Stats_invoke_arc_func_Prov_1.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "java/util/Locale.h"
#include "mindustry/mod/NoPatch.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/type/Item.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/meta/StatCat.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_mindustry_world_meta_Stats(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (mindustry_world_meta_Stats *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_mindustry_world_meta_Stats(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_meta_Stats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Stats(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_useCategories = (jint(0));
	LINE_NUMBER(19);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_intialized = (jint(0));
	LINE_NUMBER(22);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_timePeriod = (jfloat(-1.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, (frame[2].f), (frame[3].o));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:addPercent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat((jint(((frame[2].f) * (jfloat(100.0f))))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_percent;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_number_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp0, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:addMultModifier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_multiplierModifier_float_R_mindustry_world_meta_StatValue(ctx, (frame[2].f));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:addPercentModifier", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_percentModifier_float_R_mindustry_world_meta_StatValue(ctx, (frame[2].f));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_bool_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[2].i));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_type_ItemStack(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[3].o, (frame[2].o), (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[2].o);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_liquid_mindustry_type_Liquid_float_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[2].o), (frame[3].f), (frame[4].i));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (jfloat(1)), (jint(0)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(77);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (frame[3].f), (jint(0)));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(81);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jfloat(1)), (jint(0)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[2].o), (frame[3].i), (frame[4].f), (frame[5].i));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_blocks_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean_R_mindustry_world_meta_StatValue(ctx, (frame[2].o), (frame[3].i), (frame[4].f), (frame[5].f), (frame[6].o), (frame[7].f), (frame[8].i));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_string_java_lang_String_Array1_java_lang_Object_R_mindustry_world_meta_StatValue(ctx, (frame[2].o), (frame[3].o));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:replace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	((func_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_category;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_category;
	clinit_arc_struct_OrderedMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_category;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o);
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_Stats_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_meta_Stats_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_meta_Stats_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[2].o));
	LINE_NUMBER(113);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_category;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_category;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)))->vtable)[VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)), (frame[1].o));
	LINE_NUMBER(126);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:toMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(133);
	if (((jint)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_2;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[2].o)))->F_value;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)))->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_OrderedMap, sp[0].o)));
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(137);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(139);
	((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_world_meta_Stats *) NULL_CHECK((frame[0].o)))->F_map;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stats:statInfo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(145);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[2].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_ROOT;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"stat.\u0001"_j.string, 1, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, (frame[3].o));
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@\u0001.info"_j.string, 1, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_meta_Stats;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field intialized
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field map
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_meta_Stats[] {
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
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float,
	(void *) M_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float,
	(void *) M_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float,
	(void *) M_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue,
	(void *) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue,
	(void *) M_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat,
	(void *) M_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap,
	(void *) M_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat,
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
	{ "add", "(Lmindustry/world/meta/Stat;FLmindustry/world/meta/StatUnit;)V" },
	{ "add", "(Lmindustry/world/meta/Stat;F)V" },
	{ "addPercent", "(Lmindustry/world/meta/Stat;F)V" },
	{ "addMultModifier", "(Lmindustry/world/meta/Stat;F)V" },
	{ "addPercentModifier", "(Lmindustry/world/meta/Stat;F)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Z)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/type/Item;)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/type/ItemStack;)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/type/Liquid;FZ)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;F)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;Z)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;ZFZ)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;ZFFLarc/struct/Seq;FZ)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "replace", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/StatValue;)V" },
	{ "add", "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/StatValue;)V" },
	{ "remove", "(Lmindustry/world/meta/Stat;)V" },
	{ "toMap", "()Larc/struct/OrderedMap;" },
	{ "statInfo", "(Larc/scene/ui/layout/Cell;Lmindustry/world/meta/Stat;)V" },
};

static FieldMetadata fields[] {
	{ "useCategories", &class_boolean, offsetof(mindustry_world_meta_Stats, F_useCategories), "Z", 1 },
	{ "intialized", &class_boolean, offsetof(mindustry_world_meta_Stats, F_intialized), "Z", 131073 },
	{ "timePeriod", &class_float, offsetof(mindustry_world_meta_Stats, F_timePeriod), "F", 1 },
	{ "map", &class_arc_struct_OrderedMap, offsetof(mindustry_world_meta_Stats, F_map), "Larc/struct/OrderedMap;", 2 },
	{ "dirty", &class_boolean, offsetof(mindustry_world_meta_Stats, F_dirty), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_Stats, 0, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit, "(Lmindustry/world/meta/Stat;FLmindustry/world/meta/StatUnit;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float, "(Lmindustry/world/meta/Stat;F)V", 1 },
	{ "addPercent", (intptr_t) M_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float, VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float, "(Lmindustry/world/meta/Stat;F)V", 1 },
	{ "addMultModifier", (intptr_t) M_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float, VTABLE_mindustry_world_meta_Stats_addMultModifier_mindustry_world_meta_Stat_float, "(Lmindustry/world/meta/Stat;F)V", 1 },
	{ "addPercentModifier", (intptr_t) M_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float, VTABLE_mindustry_world_meta_Stats_addPercentModifier_mindustry_world_meta_Stat_float, "(Lmindustry/world/meta/Stat;F)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean, "(Lmindustry/world/meta/Stat;Z)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Item, "(Lmindustry/world/meta/Stat;Lmindustry/type/Item;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_ItemStack, "(Lmindustry/world/meta/Stat;Lmindustry/type/ItemStack;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean, "(Lmindustry/world/meta/Stat;Lmindustry/type/Liquid;FZ)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_float, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;F)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;Z)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_boolean, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;ZFZ)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_Attribute_boolean_float_float_arc_struct_Seq_float_boolean, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/Attribute;ZFFLarc/struct/Seq;FZ)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object, "(Lmindustry/world/meta/Stat;Ljava/lang/String;[Ljava/lang/Object;)V", 129 },
	{ "replace", (intptr_t) M_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue, VTABLE_mindustry_world_meta_Stats_replace_mindustry_world_meta_Stat_mindustry_world_meta_StatValue, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/StatValue;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue, VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue, "(Lmindustry/world/meta/Stat;Lmindustry/world/meta/StatValue;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat, VTABLE_mindustry_world_meta_Stats_remove_mindustry_world_meta_Stat, "(Lmindustry/world/meta/Stat;)V", 1 },
	{ "toMap", (intptr_t) M_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap, VTABLE_mindustry_world_meta_Stats_toMap_R_arc_struct_OrderedMap, "()Larc/struct/OrderedMap;", 1 },
	{ "statInfo", (intptr_t) M_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat, VTABLE_mindustry_world_meta_Stats_statInfo_arc_scene_ui_layout_Cell_mindustry_world_meta_Stat, "(Larc/scene/ui/layout/Cell;Lmindustry/world/meta/Stat;)V", 1 },
};

Class class_mindustry_world_meta_Stats{
		.nativeName = (intptr_t) "mindustry/world/meta/Stats",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_Stats),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_Stats,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_Stats,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_meta_Stats,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_Stats = registerClass(&class_mindustry_world_meta_Stats);

}
