#include "mindustry/world/blocks/campaign/LandingPad_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "mindustry/world/blocks/campaign/LandingPad.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Element.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/campaign/LandingPad_1_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/blocks/campaign/LandingPad_1.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "mindustry/world/modules/LiquidModule.h"

extern "C" {


void mark_mindustry_world_blocks_campaign_LandingPad$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeLiquid(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_campaign_LandingPad$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_campaign_LandingPad$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeLiquid(ctx);
}

void init_mindustry_world_blocks_campaign_LandingPad$1_mindustry_world_blocks_campaign_LandingPad_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_campaign_LandingPad$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(88);
	((mindustry_world_blocks_campaign_LandingPad$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_consumers_ConsumeLiquid_mindustry_type_Liquid_float(ctx, (frame[0].o), (frame[2].o), (frame[3].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$1:build", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[2].o))->F_uiIcon;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_campaign_LandingPad$1_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_blocks_campaign_LandingPad$1_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_campaign_LandingPad$1_invoke_arc_func_Boolp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_graphics_g2d_TextureRegion_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_campaign_LandingPad$1_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$1:efficiency", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[1].o))->F_consumeLiquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount), -1)) < 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_campaign_LandingPad$1_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$1:display", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[1].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_input;
	sp[2].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_type_Liquid_float_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount), (jint(0)));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_campaign_LandingPad$1_lambda$build$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/campaign/LandingPad$1:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[0].o)))->F_liquid;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, ((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[0].o)))->F_amount), -1)) < 0) goto label_1;
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

void *vtable_mindustry_world_blocks_campaign_LandingPad$1[] {
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
	(void *) M_mindustry_world_blocks_campaign_LandingPad$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_update_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$1_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_Consume_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$1_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquid_consumes_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_campaign_LandingPad$1_lambda$build$0_mindustry_gen_Building_R_boolean,
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
	{ "this$0", &class_mindustry_world_blocks_campaign_LandingPad, offsetof(mindustry_world_blocks_campaign_LandingPad$1, F_this$0), "Lmindustry/world/blocks/campaign/LandingPad;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_campaign_LandingPad$1_mindustry_world_blocks_campaign_LandingPad_mindustry_type_Liquid_float, 0, "(Lmindustry/world/blocks/campaign/LandingPad;Lmindustry/type/Liquid;F)V", 0 },
	{ "build", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_campaign_LandingPad$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$1_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_blocks_campaign_LandingPad$1_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$1_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_blocks_campaign_LandingPad$1_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_blocks_campaign_LandingPad$1_lambda$build$0_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_campaign_LandingPad$1_lambda$build$0_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 4098 },
};

Class class_mindustry_world_blocks_campaign_LandingPad$1{
		.nativeName = (intptr_t) "mindustry/world/blocks/campaign/LandingPad$1",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeLiquid,
		.size = sizeof(mindustry_world_blocks_campaign_LandingPad$1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_campaign_LandingPad$1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_campaign_LandingPad$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_campaign_LandingPad$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_campaign_LandingPad$1 = registerClass(&class_mindustry_world_blocks_campaign_LandingPad$1);

}

