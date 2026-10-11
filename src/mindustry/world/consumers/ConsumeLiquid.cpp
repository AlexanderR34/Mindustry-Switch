#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/consumers/ConsumeLiquid_invoke_arc_func_Boolp_1.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeLiquid(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeLiquidBase(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeLiquid *) object;
	if (self->F_liquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquid)->clazz)->markFunction)((jobject) self->F_liquid, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeLiquid(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeLiquidBase(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquid(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(17);
	init_mindustry_world_consumers_ConsumeLiquidBase_float(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(18);
	((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid = (jref) (frame[1].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeLiquid(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeLiquid(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_world_consumers_ConsumeLiquid_mindustry_type_Liquid_float(ctx, (frame[0].o), (jobject(nullptr)), (jfloat(0)));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquid_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	M_mindustry_world_consumers_ConsumeLiquidBase_apply_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_liquidFilter;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_liquidFilter;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)) = (jint(1));
	}
label_2:;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquid_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_uiIcon;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeLiquid_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeLiquid_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquid_invoke_arc_func_Boolp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_graphics_g2d_TextureRegion_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquid_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	jfloat temp2 = temp0 * temp1;
	sp[2].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp3 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[2].o))(ctx, sp[2].o, (frame[1].o));
	((func_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, (temp2 * temp3));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeLiquid_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:efficiency", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_edelta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_edelta_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_efficiencyScale_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_efficiencyScale_R_float])(ctx, (frame[1].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(44);
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-08f)), 1)) > 0) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount) * (frame[2].f);
	sp[0].o = (jobject)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_multiplier;
	jfloat temp2 = (jfloat)((func_arc_func_Floatf_get_java_lang_Object_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatf, INDEX_arc_func_Floatf_get_java_lang_Object_R_float, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp0 / (temp1 * temp2)), (jfloat(1)));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeLiquid_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_booster) == 0) goto label_1;
	}
	clinit_mindustry_world_meta_Stat(ctx);
	(sp++)->o = SF_mindustry_world_meta_Stat_booster;
	goto label_2;
label_1:;
	clinit_mindustry_world_meta_Stat(ctx);
	(sp++)->o = SF_mindustry_world_meta_Stat_input;
label_2:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount) * (jfloat(60.0f))), (jint(1)));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeLiquid_consumes_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:consumes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	if (sp[0].o != sp[1].o) goto label_1;
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

jbool M_mindustry_world_consumers_ConsumeLiquid_lambda$build$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeLiquid:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

void *vtable_mindustry_world_consumers_ConsumeLiquid[] {
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
	(void *) M_mindustry_world_consumers_ConsumeLiquid_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_consumes_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_lambda$build$0_mindustry_gen_Building_R_boolean,
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
	{ "apply", "(Lmindustry/world/Block;)V" },
	{ "optional", "(ZZ)Lmindustry/world/consumers/Consume;" },
	{ "boost", "()Lmindustry/world/consumers/Consume;" },
	{ "update", "(Z)Lmindustry/world/consumers/Consume;" },
	{ "ignore", "()Z" },
	{ "build", "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "trigger", "(Lmindustry/gen/Building;)V" },
	{ "update", "(Lmindustry/gen/Building;)V" },
	{ "efficiency", "(Lmindustry/gen/Building;)F" },
	{ "efficiencyMultiplier", "(Lmindustry/gen/Building;)F" },
	{ "display", "(Lmindustry/world/meta/Stats;)V" },
	{ "consumes", "(Lmindustry/type/Liquid;)Z" },
	{ "lambda$build$0", "(Lmindustry/gen/Building;)Z" },
};

static FieldMetadata fields[] {
	{ "liquid", &class_mindustry_type_Liquid, offsetof(mindustry_world_consumers_ConsumeLiquid, F_liquid), "Lmindustry/type/Liquid;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquid_mindustry_type_Liquid_float, 0, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeLiquid, 0, "()V", 4 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeLiquid_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeLiquid_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeLiquid_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeLiquid_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeLiquid_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "consumes", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_consumes_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquid_consumes_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 1 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_consumers_ConsumeLiquid_lambda$build$0_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_consumers_ConsumeLiquid_lambda$build$0_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeLiquid{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeLiquid",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeLiquidBase,
		.size = sizeof(mindustry_world_consumers_ConsumeLiquid),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeLiquid,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeLiquid,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeLiquid,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeLiquid = registerClass(&class_mindustry_world_consumers_ConsumeLiquid);

}
