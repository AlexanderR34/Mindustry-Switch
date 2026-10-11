#include "mindustry/entities/Fires.h"
#include "mindustry/net/Net.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Fire.h"
#include "arc/Events.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Rules.h"
#include "arc/util/Structs.h"
#include "arc/util/Time.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/Fires.h"
#include "mindustry/game/EventType_Trigger.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jfloat SF_mindustry_entities_Fires_baseLifetime;

void mark_mindustry_entities_Fires(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Fires *) object;
}

void clinit_mindustry_entities_Fires(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_entities_Fires_baseLifetime = jfloat(1000.0f);
}

void init_mindustry_entities_Fires(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_Fires_create_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:create", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(18);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fire) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, sp[0].o, (128));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_mindustry_entities_Fires_get_mindustry_world_Tile_R_mindustry_gen_Fire(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(22);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)SM_mindustry_gen_Fire_create_R_mindustry_gen_Fire(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(24);
	((mindustry_gen_Fire *) NULL_CHECK((frame[1].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(25);
	((mindustry_gen_Fire *) NULL_CHECK((frame[1].o)))->F_lifetime = (jfloat(1000.0f));
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[0].o));
	((func_mindustry_gen_Fire_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Fire_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(27);
	((func_mindustry_gen_Fire_add) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Fire_add])(ctx, (frame[1].o));
	LINE_NUMBER(28);
	SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_fireCreate;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	goto label_12;
	}
label_4:;
	{
	LINE_NUMBER(31);
	((mindustry_gen_Fire *) NULL_CHECK((frame[1].o)))->F_lifetime = (jfloat(1000.0f));
	LINE_NUMBER(32);
	((mindustry_gen_Fire *) NULL_CHECK((frame[1].o)))->F_time = (jfloat(0));
	}
label_12:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Fires_get_mindustry_world_Tile_R_mindustry_gen_Fire(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire])(ctx, sp[0].o, temp0);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_Fires_get_int_int_R_mindustry_gen_Fire(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_packArray_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_packArray_int_int_R_int])(ctx, sp[1].o, (frame[0].i), (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getFire_int_R_mindustry_gen_Fire])(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[0].o));
	((func_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_setFire_int_mindustry_gen_Fire])(ctx, sp[0].o, temp0, (frame[1].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_entities_Fires_has_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(49);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 != 0) goto label_1;
	}
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_mindustry_entities_Fires_get_int_int_R_mindustry_gen_Fire(ctx, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(53);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Fire_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Fire_isAdded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Fire_fin_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Fire_fin_R_float])(ctx, (frame[2].o));
	if ((floatCompare(temp0, (jfloat(1)), 1)) >= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[2].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[2].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x) != (frame[0].i)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[2].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) != (frame[1].i)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Fires_extinguish_mindustry_world_Tile_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:extinguish", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(60);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_mindustry_entities_Fires_get_mindustry_world_Tile_R_mindustry_gen_Fire(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = frame[2].o;
	((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_gen_Fire *) NULL_CHECK(sp[0].o))->F_time) + ((frame[1].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	LINE_NUMBER(64);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_steam;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(65);
	if ((floatCompare(((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[2].o)))->F_time), ((jfloat)((mindustry_gen_Fire *) NULL_CHECK((frame[2].o)))->F_lifetime), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(66);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_fireExtinguish;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Fires_remove_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(74);
	SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_entities_Fires_register_mindustry_gen_Fire(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/Fires:register", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_Fires(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_gen_Fire *) NULL_CHECK((frame[0].o)))->F_tile;
	SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_Fires;
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

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_Fires[] {
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

static FieldMetadata fields[] {
	{ "baseLifetime", &class_float, (intptr_t) &SF_mindustry_entities_Fires_baseLifetime, "F", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_Fires, 0, "()V", 1 },
	{ "create", (intptr_t) SM_mindustry_entities_Fires_create_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "get", (intptr_t) SM_mindustry_entities_Fires_get_mindustry_world_Tile_R_mindustry_gen_Fire, 0, "(Lmindustry/world/Tile;)Lmindustry/gen/Fire;", 9 },
	{ "get", (intptr_t) SM_mindustry_entities_Fires_get_int_int_R_mindustry_gen_Fire, 0, "(II)Lmindustry/gen/Fire;", 9 },
	{ "set", (intptr_t) SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Fire;)V", 10 },
	{ "has", (intptr_t) SM_mindustry_entities_Fires_has_int_int_R_boolean, 0, "(II)Z", 9 },
	{ "extinguish", (intptr_t) SM_mindustry_entities_Fires_extinguish_mindustry_world_Tile_float, 0, "(Lmindustry/world/Tile;F)V", 9 },
	{ "remove", (intptr_t) SM_mindustry_entities_Fires_remove_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "register", (intptr_t) SM_mindustry_entities_Fires_register_mindustry_gen_Fire, 0, "(Lmindustry/gen/Fire;)V", 9 },
};

Class class_mindustry_entities_Fires{
		.nativeName = (intptr_t) "mindustry/entities/Fires",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Fires),
		.classVtable = (intptr_t) vtable_mindustry_entities_Fires,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Fires,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_Fires,
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
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Fires = registerClass(&class_mindustry_entities_Fires);

}
