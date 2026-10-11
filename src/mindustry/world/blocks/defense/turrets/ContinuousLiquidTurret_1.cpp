#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret_1.h"
#include "arc/func/Floatf.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret_1_invoke_arc_func_Floatf_1.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret_1.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeLiquidFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeLiquidFilter(ctx);
}

void init_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret_arc_func_Boolf_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(42);
	((mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_consumers_ConsumeLiquidFilter_arc_func_Boolf_float(ctx, (frame[0].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_Consume *) NULL_CHECK(sp[0].o))->F_multiplier = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret$1:display", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_lambda$new$0_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret$1:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret *) NULL_CHECK(sp[0].o))->F_ammoTypes;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(47);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat(1)) / ((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK((frame[2].o)))->F_ammoMultiplier);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1[] {
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
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_Consume_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_consumes_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_liquidEfficiencyMultiplier_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Liquid,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$2_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeLiquidFilter_lambda$build$0_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_lambda$new$0_mindustry_gen_Building_R_float,
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
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Liquid;" },
	{ "liquidEfficiencyMultiplier", "(Lmindustry/type/Liquid;)F" },
	{ "lambda$build$1", "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Liquid;)V" },
	{ "lambda$build$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "lambda$build$0", "(Lmindustry/type/Liquid;)Z" },
	{ "lambda$new$0", "(Lmindustry/gen/Building;)F" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret, offsetof(mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1, F_this$0), "Lmindustry/world/blocks/defense/turrets/ContinuousLiquidTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret_arc_func_Boolf_float, 0, "(Lmindustry/world/blocks/defense/turrets/ContinuousLiquidTurret;Larc/func/Boolf;F)V", 0 },
	{ "display", (intptr_t) M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_lambda$new$0_mindustry_gen_Building_R_float, VTABLE_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1_lambda$new$0_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 4098 },
};

Class class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret$1",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeLiquidFilter,
		.size = sizeof(mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1 = registerClass(&class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$1);

}

