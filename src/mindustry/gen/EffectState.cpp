#include "mindustry/gen/EffectState.h"
#include "mindustry/gen/IndexableEntity__effect.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "arc/math/Angles.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/Rotc.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/EffectState.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/Childc.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/EffectStatec.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/EffectState_invoke_arc_func_Prov_1.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_EffectState(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_EffectState *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
}

void clinit_mindustry_gen_EffectState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_EffectState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_EffectState(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(130);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(97);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(99);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__effect = (jint(-1));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_color_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:color", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_rotWithParent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:rotWithParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotWithParent);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_offsetPos_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetPos", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_offsetRot_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetRot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetRot);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_offsetX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_offsetY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:rotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_EffectState_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (9);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_EffectState_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_data_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:data", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"EffectState#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:effect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:parent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_data_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:data", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(237);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_effect_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:effect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(247);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(252);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_offsetPos_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetPos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(257);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos = (frame[1].f);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_offsetRot_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetRot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(262);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetRot = (frame[1].f);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_offsetX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(267);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX = (frame[1].f);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_offsetY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:offsetY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(272);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY = (frame[1].f);
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_parent_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:parent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_rotWithParent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:rotWithParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(282);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotWithParent = (frame[1].i);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_rotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:rotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(287);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(292);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_setIndex__effect_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:setIndex__effect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__effect = (frame[1].i);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(302);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(307);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(312);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_EffectState_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_EffectState_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_effect;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_clip);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_EffectState_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_EffectState_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_EffectState_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(383);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(389);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_EffectState_create_R_mindustry_gen_EffectState(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_EffectState(ctx);
	{
	LINE_NUMBER(393);
	sp[0].o = ((jobject) &class_mindustry_gen_EffectState);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_EffectState_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_EffectState_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_EffectState_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_EffectState, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	if (((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_effect;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_index__effect = temp0;
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_index__draw = temp1;
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetX = (temp0 - temp1);
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetY = (temp2 - temp3);
	LINE_NUMBER(405);
	if (((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotWithParent) == 0) goto label_4;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Rotc)) == 0) goto label_9;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[3].o)));
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetPos = (-temp0);
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetRot = (temp1 - temp2);
	goto label_4;
	}
label_9:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_RotBlock)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_RotBlock, (frame[3].o)));
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetPos = (-temp0);
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp2 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_offsetRot = (temp1 - temp2);
	}
label_4:;
	{
	LINE_NUMBER(418);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(432);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_effect;
	jint temp0 = (jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_id;
	sp[2].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp2 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime;
	jfloat temp3 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp4 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp5 = (jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y;
	sp[3].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_data;
	jfloat temp6 = (jfloat)((func_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float])(ctx, sp[1].o, temp0, sp[2].o, temp1, temp2, temp3, temp4, temp5, sp[3].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_lifetime = temp6;
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	((func_mindustry_gen_EffectState_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	if (((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(451);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_effect;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__effect));
	LINE_NUMBER(452);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__effect = (jint(-1));
	LINE_NUMBER(453);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(454);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(456);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(457);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(461);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(462);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(463);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (jobject(nullptr));
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(465);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(0));
	LINE_NUMBER(466);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos = (jfloat(0));
	LINE_NUMBER(467);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetRot = (jfloat(0));
	LINE_NUMBER(468);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX = (jfloat(0));
	LINE_NUMBER(469);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY = (jfloat(0));
	LINE_NUMBER(470);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(471);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotWithParent = (jint(0));
	LINE_NUMBER(472);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(473);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(474);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(475);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_EffectState_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_EffectState_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(485);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(486);
	((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_EffectState_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_EffectState_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(496);
	((func_mindustry_gen_EffectState_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(503);
	if (((jint)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_rotWithParent) == 0) goto label_3;
	}
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Rotc)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Rotc, (frame[3].o)));
	LINE_NUMBER(505);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (temp1 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp2);
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp4 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (temp4 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp5);
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_rotation = (temp6 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetRot));
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_RotBlock)) == 0) goto label_9;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_RotBlock, (frame[3].o)));
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, (temp1 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_x = (temp0 + temp2);
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp4 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, (temp4 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetPos)), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_y = (temp3 + temp5);
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_mindustry_world_blocks_RotBlock_buildRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_RotBlock, INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_rotation = (temp6 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetRot));
	}
label_9:;
	goto label_1;
label_3:;
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetX));
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[1].o))(ctx, sp[1].o);
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_offsetY));
	}
label_1:;
	{
	LINE_NUMBER(524);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_EffectState *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(525);
	if ((floatCompare(((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_EffectState *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(526);
	((func_mindustry_gen_EffectState_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_EffectState_remove])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(529);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_EffectState_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/EffectState:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(533);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_EffectState;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
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

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_EffectState[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_EffectState_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_EffectState_reset,
	(void *) M_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_EffectState_as_R_java_lang_Object,
	(void *) M_mindustry_gen_EffectState_isAdded_R_boolean,
	(void *) M_mindustry_gen_EffectState_isLocal_R_boolean,
	(void *) M_mindustry_gen_EffectState_isRemote_R_boolean,
	(void *) M_mindustry_gen_EffectState_serialize_R_boolean,
	(void *) M_mindustry_gen_EffectState_classId_R_int,
	(void *) M_mindustry_gen_EffectState_id_R_int,
	(void *) M_mindustry_gen_EffectState_add,
	(void *) M_mindustry_gen_EffectState_afterRead,
	(void *) M_mindustry_gen_EffectState_afterReadAll,
	(void *) M_mindustry_gen_EffectState_beforeWrite,
	(void *) M_mindustry_gen_EffectState_id_int,
	(void *) M_mindustry_gen_EffectState_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_EffectState_remove,
	(void *) M_mindustry_gen_EffectState_update,
	(void *) M_mindustry_gen_EffectState_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_EffectState_getX_R_float,
	(void *) M_mindustry_gen_EffectState_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_EffectState_onSolid_R_boolean,
	(void *) M_mindustry_gen_EffectState_x_R_float,
	(void *) M_mindustry_gen_EffectState_y_R_float,
	(void *) M_mindustry_gen_EffectState_tileX_R_int,
	(void *) M_mindustry_gen_EffectState_tileY_R_int,
	(void *) M_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_EffectState_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_EffectState_set_float_float,
	(void *) M_mindustry_gen_EffectState_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_EffectState_trns_float_float,
	(void *) M_mindustry_gen_EffectState_x_float,
	(void *) M_mindustry_gen_EffectState_y_float,
	(void *) M_mindustry_gen_EffectState_rotation_R_float,
	(void *) M_mindustry_gen_EffectState_rotation_float,
	(void *) M_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc,
	(void *) M_mindustry_gen_EffectState_rotWithParent_R_boolean,
	(void *) M_mindustry_gen_EffectState_offsetPos_R_float,
	(void *) M_mindustry_gen_EffectState_offsetRot_R_float,
	(void *) M_mindustry_gen_EffectState_offsetX_R_float,
	(void *) M_mindustry_gen_EffectState_offsetY_R_float,
	(void *) M_mindustry_gen_EffectState_offsetPos_float,
	(void *) M_mindustry_gen_EffectState_offsetRot_float,
	(void *) M_mindustry_gen_EffectState_offsetX_float,
	(void *) M_mindustry_gen_EffectState_offsetY_float,
	(void *) M_mindustry_gen_EffectState_parent_mindustry_gen_Posc,
	(void *) M_mindustry_gen_EffectState_rotWithParent_boolean,
	(void *) M_mindustry_gen_EffectState_clipSize_R_float,
	(void *) M_mindustry_gen_EffectState_draw,
	(void *) M_mindustry_gen_EffectState_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_EffectState_lifetime_R_float,
	(void *) M_mindustry_gen_EffectState_time_R_float,
	(void *) M_mindustry_gen_EffectState_lifetime_float,
	(void *) M_mindustry_gen_EffectState_time_float,
	(void *) M_mindustry_gen_EffectState_color_R_arc_graphics_Color,
	(void *) M_mindustry_gen_EffectState_data_R_java_lang_Object,
	(void *) M_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect,
	(void *) M_mindustry_gen_EffectState_color_arc_graphics_Color,
	(void *) M_mindustry_gen_EffectState_data_java_lang_Object,
	(void *) M_mindustry_gen_EffectState_effect_mindustry_entities_Effect,
	(void *) M_mindustry_gen_EffectState_setIndex__draw_int,
	(void *) M_mindustry_gen_EffectState_setIndex__effect_int,
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
	{ "reset", "()V" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "parent", "()Lmindustry/gen/Posc;" },
	{ "rotWithParent", "()Z" },
	{ "offsetPos", "()F" },
	{ "offsetRot", "()F" },
	{ "offsetX", "()F" },
	{ "offsetY", "()F" },
	{ "offsetPos", "(F)V" },
	{ "offsetRot", "(F)V" },
	{ "offsetX", "(F)V" },
	{ "offsetY", "(F)V" },
	{ "parent", "(Lmindustry/gen/Posc;)V" },
	{ "rotWithParent", "(Z)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "color", "()Larc/graphics/Color;" },
	{ "data", "()Ljava/lang/Object;" },
	{ "effect", "()Lmindustry/entities/Effect;" },
	{ "color", "(Larc/graphics/Color;)V" },
	{ "data", "(Ljava/lang/Object;)V" },
	{ "effect", "(Lmindustry/entities/Effect;)V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__effect", "(I)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Childc, &class_mindustry_gen_Drawc, &class_mindustry_gen_EffectStatec, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__effect, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_gen_EffectState, F_added), "Z", 132 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_gen_EffectState, F_color), "Larc/graphics/Color;", 1 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_gen_EffectState, F_data), "Ljava/lang/Object;", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_gen_EffectState, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "id", &class_int, offsetof(mindustry_gen_EffectState, F_id), "I", 129 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_EffectState, F_index__draw), "I", 132 },
	{ "index__effect", &class_int, offsetof(mindustry_gen_EffectState, F_index__effect), "I", 132 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_EffectState, F_lifetime), "F", 1 },
	{ "offsetPos", &class_float, offsetof(mindustry_gen_EffectState, F_offsetPos), "F", 1 },
	{ "offsetRot", &class_float, offsetof(mindustry_gen_EffectState, F_offsetRot), "F", 1 },
	{ "offsetX", &class_float, offsetof(mindustry_gen_EffectState, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(mindustry_gen_EffectState, F_offsetY), "F", 1 },
	{ "parent", &class_mindustry_gen_Posc, offsetof(mindustry_gen_EffectState, F_parent), "Lmindustry/gen/Posc;", 1 },
	{ "rotWithParent", &class_boolean, offsetof(mindustry_gen_EffectState, F_rotWithParent), "Z", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_EffectState, F_rotation), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_EffectState, F_time), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_EffectState, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_EffectState, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_EffectState, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "color", (intptr_t) M_mindustry_gen_EffectState_color_R_arc_graphics_Color, VTABLE_mindustry_gen_EffectState_color_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "rotWithParent", (intptr_t) M_mindustry_gen_EffectState_rotWithParent_R_boolean, VTABLE_mindustry_gen_EffectState_rotWithParent_R_boolean, "()Z", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_EffectState_lifetime_R_float, VTABLE_mindustry_gen_EffectState_lifetime_R_float, "()F", 1 },
	{ "offsetPos", (intptr_t) M_mindustry_gen_EffectState_offsetPos_R_float, VTABLE_mindustry_gen_EffectState_offsetPos_R_float, "()F", 1 },
	{ "offsetRot", (intptr_t) M_mindustry_gen_EffectState_offsetRot_R_float, VTABLE_mindustry_gen_EffectState_offsetRot_R_float, "()F", 1 },
	{ "offsetX", (intptr_t) M_mindustry_gen_EffectState_offsetX_R_float, VTABLE_mindustry_gen_EffectState_offsetX_R_float, "()F", 1 },
	{ "offsetY", (intptr_t) M_mindustry_gen_EffectState_offsetY_R_float, VTABLE_mindustry_gen_EffectState_offsetY_R_float, "()F", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_EffectState_rotation_R_float, VTABLE_mindustry_gen_EffectState_rotation_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_EffectState_time_R_float, VTABLE_mindustry_gen_EffectState_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_EffectState_x_R_float, VTABLE_mindustry_gen_EffectState_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_EffectState_y_R_float, VTABLE_mindustry_gen_EffectState_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_EffectState_classId_R_int, VTABLE_mindustry_gen_EffectState_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_EffectState_id_R_int, VTABLE_mindustry_gen_EffectState_id_R_int, "()I", 1 },
	{ "data", (intptr_t) M_mindustry_gen_EffectState_data_R_java_lang_Object, VTABLE_mindustry_gen_EffectState_data_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_EffectState_toString_R_java_lang_String, VTABLE_mindustry_gen_EffectState_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "effect", (intptr_t) M_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect, VTABLE_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect, "()Lmindustry/entities/Effect;", 1 },
	{ "parent", (intptr_t) M_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc, VTABLE_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc, "()Lmindustry/gen/Posc;", 1 },
	{ "color", (intptr_t) M_mindustry_gen_EffectState_color_arc_graphics_Color, VTABLE_mindustry_gen_EffectState_color_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "data", (intptr_t) M_mindustry_gen_EffectState_data_java_lang_Object, VTABLE_mindustry_gen_EffectState_data_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "effect", (intptr_t) M_mindustry_gen_EffectState_effect_mindustry_entities_Effect, VTABLE_mindustry_gen_EffectState_effect_mindustry_entities_Effect, "(Lmindustry/entities/Effect;)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_EffectState_id_int, VTABLE_mindustry_gen_EffectState_id_int, "(I)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_EffectState_lifetime_float, VTABLE_mindustry_gen_EffectState_lifetime_float, "(F)V", 1 },
	{ "offsetPos", (intptr_t) M_mindustry_gen_EffectState_offsetPos_float, VTABLE_mindustry_gen_EffectState_offsetPos_float, "(F)V", 1 },
	{ "offsetRot", (intptr_t) M_mindustry_gen_EffectState_offsetRot_float, VTABLE_mindustry_gen_EffectState_offsetRot_float, "(F)V", 1 },
	{ "offsetX", (intptr_t) M_mindustry_gen_EffectState_offsetX_float, VTABLE_mindustry_gen_EffectState_offsetX_float, "(F)V", 1 },
	{ "offsetY", (intptr_t) M_mindustry_gen_EffectState_offsetY_float, VTABLE_mindustry_gen_EffectState_offsetY_float, "(F)V", 1 },
	{ "parent", (intptr_t) M_mindustry_gen_EffectState_parent_mindustry_gen_Posc, VTABLE_mindustry_gen_EffectState_parent_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1 },
	{ "rotWithParent", (intptr_t) M_mindustry_gen_EffectState_rotWithParent_boolean, VTABLE_mindustry_gen_EffectState_rotWithParent_boolean, "(Z)V", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_EffectState_rotation_float, VTABLE_mindustry_gen_EffectState_rotation_float, "(F)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_EffectState_setIndex__draw_int, VTABLE_mindustry_gen_EffectState_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__effect", (intptr_t) M_mindustry_gen_EffectState_setIndex__effect_int, VTABLE_mindustry_gen_EffectState_setIndex__effect_int, "(I)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_EffectState_time_float, VTABLE_mindustry_gen_EffectState_time_float, "(F)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_EffectState_x_float, VTABLE_mindustry_gen_EffectState_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_EffectState_y_float, VTABLE_mindustry_gen_EffectState_y_float, "(F)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_EffectState_as_R_java_lang_Object, VTABLE_mindustry_gen_EffectState_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_EffectState_isAdded_R_boolean, VTABLE_mindustry_gen_EffectState_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_EffectState_isLocal_R_boolean, VTABLE_mindustry_gen_EffectState_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_EffectState_isRemote_R_boolean, VTABLE_mindustry_gen_EffectState_isRemote_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_EffectState_onSolid_R_boolean, VTABLE_mindustry_gen_EffectState_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_EffectState_serialize_R_boolean, VTABLE_mindustry_gen_EffectState_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_EffectState_clipSize_R_float, VTABLE_mindustry_gen_EffectState_clipSize_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_EffectState_fin_R_float, VTABLE_mindustry_gen_EffectState_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_EffectState_getX_R_float, VTABLE_mindustry_gen_EffectState_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_EffectState_getY_R_float, VTABLE_mindustry_gen_EffectState_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_EffectState_tileX_R_int, VTABLE_mindustry_gen_EffectState_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_EffectState_tileY_R_int, VTABLE_mindustry_gen_EffectState_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_EffectState_create_R_mindustry_gen_EffectState, 0, "()Lmindustry/gen/EffectState;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_EffectState_add, VTABLE_mindustry_gen_EffectState_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_EffectState_afterRead, VTABLE_mindustry_gen_EffectState_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_EffectState_afterReadAll, VTABLE_mindustry_gen_EffectState_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_EffectState_beforeWrite, VTABLE_mindustry_gen_EffectState_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_EffectState_draw, VTABLE_mindustry_gen_EffectState_draw, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_EffectState_read_arc_util_io_Reads, VTABLE_mindustry_gen_EffectState_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_EffectState_remove, VTABLE_mindustry_gen_EffectState_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_EffectState_reset, VTABLE_mindustry_gen_EffectState_reset, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_EffectState_set_arc_math_geom_Position, VTABLE_mindustry_gen_EffectState_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_EffectState_set_float_float, VTABLE_mindustry_gen_EffectState_set_float_float, "(FF)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_EffectState_trns_arc_math_geom_Position, VTABLE_mindustry_gen_EffectState_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_EffectState_trns_float_float, VTABLE_mindustry_gen_EffectState_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_EffectState_update, VTABLE_mindustry_gen_EffectState_update, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_EffectState_write_arc_util_io_Writes, VTABLE_mindustry_gen_EffectState_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
};

Class class_mindustry_gen_EffectState{
		.nativeName = (intptr_t) "mindustry/gen/EffectState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_EffectState),
		.classVtable = (intptr_t) vtable_mindustry_gen_EffectState,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_EffectState,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_EffectState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 10,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 67,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 92,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_EffectState = registerClass(&class_mindustry_gen_EffectState);

}
