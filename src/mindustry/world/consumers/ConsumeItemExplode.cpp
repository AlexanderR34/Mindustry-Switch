#include "mindustry/world/consumers/ConsumeItemExplode.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/consumers/ConsumeItemExplode.h"
#include "arc/Events.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/game/Rules.h"
#include "mindustry/type/Item.h"
#include "java/lang/Enum.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/consumers/ConsumeItemExplode_invoke_arc_func_Boolf_1.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_world_consumers_ConsumeItemExplode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeItemFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_consumers_ConsumeItemExplode *) object;
	if (self->F_explodeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_explodeEffect)->clazz)->markFunction)((jobject) self->F_explodeEffect, mark, depth + 1);
}

void clinit_mindustry_world_consumers_ConsumeItemExplode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
}

void init_mindustry_world_consumers_ConsumeItemExplode_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemExplode(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(22);
	init_mindustry_world_consumers_ConsumeItemFilter(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(4.0f));
	LINE_NUMBER(19);
	((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_baseChance = (jfloat(0.06f));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_generatespark;
	((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK(sp[0].o))->F_explodeEffect = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_consumers_ConsumeItemExplode_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_consumers_ConsumeItemExplode_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItemExplode_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_threshold = (frame[1].f);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_consumers_ConsumeItemExplode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_consumers_ConsumeItemExplode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_mindustry_world_consumers_ConsumeItemExplode_float(ctx, (frame[0].o), (jfloat(0.5f)));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemExplode_update_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItemExplode_getConsumed_mindustry_gen_Building_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_ConsumeItemExplode_getConsumed_mindustry_gen_Building_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(35);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(36);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_reactorExplosions) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_delta_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_delta_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 * ((jfloat)((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_baseChance);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_explosiveness) - ((jfloat)((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_threshold)));
	jint temp3 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble((temp1 * temp2))));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(37);
	((func_mindustry_gen_Building_damage_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_damage_float])(ctx, (frame[1].o), ((jfloat)((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_damage));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_explodeEffect;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp2, (temp3 + temp4));
	LINE_NUMBER(39);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_blastGenerator;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemExplode_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:build", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemExplode_trigger_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:trigger", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemExplode_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:display", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_consumers_ConsumeItemExplode_apply_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:apply", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_consumers_ConsumeItemExplode_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:efficiency", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_consumers_ConsumeItemExplode_lambda$new$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/consumers/ConsumeItemExplode:lambda$new$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	if ((floatCompare(((jfloat)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_explosiveness), ((jfloat)((mindustry_world_consumers_ConsumeItemExplode *) NULL_CHECK((frame[0].o)))->F_threshold), -1)) < 0) goto label_1;
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

void *vtable_mindustry_world_consumers_ConsumeItemExplode[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_update_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_lambda$build$0_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_consumers_ConsumeItemExplode_lambda$new$0_mindustry_type_Item_R_boolean,
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
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Item;" },
	{ "itemEfficiencyMultiplier", "(Lmindustry/type/Item;)F" },
	{ "lambda$build$0", "(Lmindustry/type/Item;)Z" },
	{ "lambda$new$0", "(Lmindustry/type/Item;)Z" },
};

static FieldMetadata fields[] {
	{ "damage", &class_float, offsetof(mindustry_world_consumers_ConsumeItemExplode, F_damage), "F", 1 },
	{ "threshold", &class_float, offsetof(mindustry_world_consumers_ConsumeItemExplode, F_threshold), "F", 1 },
	{ "baseChance", &class_float, offsetof(mindustry_world_consumers_ConsumeItemExplode, F_baseChance), "F", 1 },
	{ "explodeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_consumers_ConsumeItemExplode, F_explodeEffect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemExplode_float, 0, "(F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_consumers_ConsumeItemExplode, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_update_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeItemExplode_update_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "build", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_consumers_ConsumeItemExplode_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "trigger", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_trigger_mindustry_gen_Building, VTABLE_mindustry_world_consumers_ConsumeItemExplode_trigger_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "display", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_consumers_ConsumeItemExplode_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "apply", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_apply_mindustry_world_Block, VTABLE_mindustry_world_consumers_ConsumeItemExplode_apply_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_consumers_ConsumeItemExplode_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_consumers_ConsumeItemExplode_lambda$new$0_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_consumers_ConsumeItemExplode_lambda$new$0_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
};

Class class_mindustry_world_consumers_ConsumeItemExplode{
		.nativeName = (intptr_t) "mindustry/world/consumers/ConsumeItemExplode",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeItemFilter,
		.size = sizeof(mindustry_world_consumers_ConsumeItemExplode),
		.classVtable = (intptr_t) vtable_mindustry_world_consumers_ConsumeItemExplode,
		.staticInitializer = (intptr_t) clinit_mindustry_world_consumers_ConsumeItemExplode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_consumers_ConsumeItemExplode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_consumers_ConsumeItemExplode = registerClass(&class_mindustry_world_consumers_ConsumeItemExplode);

}
