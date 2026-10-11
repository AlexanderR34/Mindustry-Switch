#include "mindustry/gen/Decal.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/Rotc.h"
#include "arc/graphics/Color.h"
#include "arc/math/Scaled.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/gen/Decalc.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Decal_invoke_arc_func_Prov_1.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Decal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Drawc.h"
#include "java/lang/Class.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_Decal(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Decal *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_mindustry_gen_Decal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_Decal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Decal(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(115);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(93);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(95);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_color_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:color", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:region", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_rotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:rotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Decal_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (8);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Decal_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Decal#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:color", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(182);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(187);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(192);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:region", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[1].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_rotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:rotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(202);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(207);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(217);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(222);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(227);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Decal_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_Decal_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
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

jbool M_mindustry_gen_Decal_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Decal_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_Decal_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(258);
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

jbool M_mindustry_gen_Decal_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_region;
	popStackFrame(ctx);
	return (jfloat((((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width) * (jint(2)))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_Decal_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Decal_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_Decal_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_Decal_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(298);
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

jobject M_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(304);
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

jobject SM_mindustry_gen_Decal_create_R_mindustry_gen_Decal(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Decal(ctx);
	{
	LINE_NUMBER(308);
	sp[0].o = ((jobject) &class_mindustry_gen_Decal);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Decal_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_Decal_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_Decal_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Decal, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	if (((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_index__draw = temp1;
	LINE_NUMBER(316);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(325);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(10.0f)));
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(336);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Decal_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_fin_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_curve_float_float_R_float(ctx, temp1, (jfloat(0.98f)));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 - temp2));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(338);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(347);
	((func_mindustry_gen_Decal_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	if (((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(352);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(353);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(354);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(355);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(357);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(358);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(364);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(0));
	LINE_NUMBER(365);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_region = (jref) (jobject(nullptr));
	LINE_NUMBER(366);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(367);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(368);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(369);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Decal_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Decal_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(379);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(380);
	((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_Decal_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Decal_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(390);
	((func_mindustry_gen_Decal_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(391);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_Decal *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(400);
	if ((floatCompare(((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_Decal *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(401);
	((func_mindustry_gen_Decal_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Decal_remove])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_Decal_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Decal:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Decal;
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
}

void *vtable_mindustry_gen_Decal[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Decal_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Decal_reset,
	(void *) M_mindustry_gen_Decal_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Decal_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Decal_isAdded_R_boolean,
	(void *) M_mindustry_gen_Decal_isLocal_R_boolean,
	(void *) M_mindustry_gen_Decal_isRemote_R_boolean,
	(void *) M_mindustry_gen_Decal_serialize_R_boolean,
	(void *) M_mindustry_gen_Decal_classId_R_int,
	(void *) M_mindustry_gen_Decal_id_R_int,
	(void *) M_mindustry_gen_Decal_add,
	(void *) M_mindustry_gen_Decal_afterRead,
	(void *) M_mindustry_gen_Decal_afterReadAll,
	(void *) M_mindustry_gen_Decal_beforeWrite,
	(void *) M_mindustry_gen_Decal_id_int,
	(void *) M_mindustry_gen_Decal_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_Decal_remove,
	(void *) M_mindustry_gen_Decal_update,
	(void *) M_mindustry_gen_Decal_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Decal_getX_R_float,
	(void *) M_mindustry_gen_Decal_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Decal_onSolid_R_boolean,
	(void *) M_mindustry_gen_Decal_x_R_float,
	(void *) M_mindustry_gen_Decal_y_R_float,
	(void *) M_mindustry_gen_Decal_tileX_R_int,
	(void *) M_mindustry_gen_Decal_tileY_R_int,
	(void *) M_mindustry_gen_Decal_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Decal_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Decal_set_float_float,
	(void *) M_mindustry_gen_Decal_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Decal_trns_float_float,
	(void *) M_mindustry_gen_Decal_x_float,
	(void *) M_mindustry_gen_Decal_y_float,
	(void *) M_mindustry_gen_Decal_clipSize_R_float,
	(void *) M_mindustry_gen_Decal_draw,
	(void *) M_mindustry_gen_Decal_rotation_R_float,
	(void *) M_mindustry_gen_Decal_rotation_float,
	(void *) M_mindustry_gen_Decal_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_Decal_lifetime_R_float,
	(void *) M_mindustry_gen_Decal_time_R_float,
	(void *) M_mindustry_gen_Decal_lifetime_float,
	(void *) M_mindustry_gen_Decal_time_float,
	(void *) M_mindustry_gen_Decal_color_R_arc_graphics_Color,
	(void *) M_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Decal_color_arc_graphics_Color,
	(void *) M_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Decal_setIndex__all_int,
	(void *) M_mindustry_gen_Decal_setIndex__draw_int,
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
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
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
	{ "region", "()Larc/graphics/g2d/TextureRegion;" },
	{ "color", "(Larc/graphics/Color;)V" },
	{ "region", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "setIndex__all", "(I)V" },
	{ "setIndex__draw", "(I)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Decalc, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_gen_Decal, F_added), "Z", 132 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_gen_Decal, F_color), "Larc/graphics/Color;", 1 },
	{ "id", &class_int, offsetof(mindustry_gen_Decal, F_id), "I", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_Decal, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_Decal, F_index__draw), "I", 132 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_Decal, F_lifetime), "F", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_gen_Decal, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "rotation", &class_float, offsetof(mindustry_gen_Decal, F_rotation), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_Decal, F_time), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_Decal, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_Decal, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Decal, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "color", (intptr_t) M_mindustry_gen_Decal_color_R_arc_graphics_Color, VTABLE_mindustry_gen_Decal_color_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "region", (intptr_t) M_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Decal_lifetime_R_float, VTABLE_mindustry_gen_Decal_lifetime_R_float, "()F", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Decal_rotation_R_float, VTABLE_mindustry_gen_Decal_rotation_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Decal_time_R_float, VTABLE_mindustry_gen_Decal_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Decal_x_R_float, VTABLE_mindustry_gen_Decal_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Decal_y_R_float, VTABLE_mindustry_gen_Decal_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_Decal_classId_R_int, VTABLE_mindustry_gen_Decal_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Decal_id_R_int, VTABLE_mindustry_gen_Decal_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_Decal_toString_R_java_lang_String, VTABLE_mindustry_gen_Decal_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "color", (intptr_t) M_mindustry_gen_Decal_color_arc_graphics_Color, VTABLE_mindustry_gen_Decal_color_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_Decal_id_int, VTABLE_mindustry_gen_Decal_id_int, "(I)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_Decal_lifetime_float, VTABLE_mindustry_gen_Decal_lifetime_float, "(F)V", 1 },
	{ "region", (intptr_t) M_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "rotation", (intptr_t) M_mindustry_gen_Decal_rotation_float, VTABLE_mindustry_gen_Decal_rotation_float, "(F)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_Decal_setIndex__all_int, VTABLE_mindustry_gen_Decal_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_Decal_setIndex__draw_int, VTABLE_mindustry_gen_Decal_setIndex__draw_int, "(I)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_Decal_time_float, VTABLE_mindustry_gen_Decal_time_float, "(F)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_Decal_x_float, VTABLE_mindustry_gen_Decal_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_Decal_y_float, VTABLE_mindustry_gen_Decal_y_float, "(F)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_Decal_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_Decal_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_Decal_as_R_java_lang_Object, VTABLE_mindustry_gen_Decal_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_Decal_isAdded_R_boolean, VTABLE_mindustry_gen_Decal_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_Decal_isLocal_R_boolean, VTABLE_mindustry_gen_Decal_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_Decal_isRemote_R_boolean, VTABLE_mindustry_gen_Decal_isRemote_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_Decal_onSolid_R_boolean, VTABLE_mindustry_gen_Decal_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_Decal_serialize_R_boolean, VTABLE_mindustry_gen_Decal_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_Decal_clipSize_R_float, VTABLE_mindustry_gen_Decal_clipSize_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_Decal_fin_R_float, VTABLE_mindustry_gen_Decal_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_Decal_getX_R_float, VTABLE_mindustry_gen_Decal_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_Decal_getY_R_float, VTABLE_mindustry_gen_Decal_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_Decal_tileX_R_int, VTABLE_mindustry_gen_Decal_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_Decal_tileY_R_int, VTABLE_mindustry_gen_Decal_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_Decal_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_Decal_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_Decal_create_R_mindustry_gen_Decal, 0, "()Lmindustry/gen/Decal;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_Decal_add, VTABLE_mindustry_gen_Decal_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_Decal_afterRead, VTABLE_mindustry_gen_Decal_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_Decal_afterReadAll, VTABLE_mindustry_gen_Decal_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_Decal_beforeWrite, VTABLE_mindustry_gen_Decal_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_Decal_draw, VTABLE_mindustry_gen_Decal_draw, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_Decal_read_arc_util_io_Reads, VTABLE_mindustry_gen_Decal_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_Decal_remove, VTABLE_mindustry_gen_Decal_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_Decal_reset, VTABLE_mindustry_gen_Decal_reset, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Decal_set_arc_math_geom_Position, VTABLE_mindustry_gen_Decal_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_Decal_set_float_float, VTABLE_mindustry_gen_Decal_set_float_float, "(FF)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Decal_trns_arc_math_geom_Position, VTABLE_mindustry_gen_Decal_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_Decal_trns_float_float, VTABLE_mindustry_gen_Decal_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_Decal_update, VTABLE_mindustry_gen_Decal_update, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_Decal_write_arc_util_io_Writes, VTABLE_mindustry_gen_Decal_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
};

Class class_mindustry_gen_Decal{
		.nativeName = (intptr_t) "mindustry/gen/Decal",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Decal),
		.classVtable = (intptr_t) vtable_mindustry_gen_Decal,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Decal,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Decal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 9,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 53,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 78,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Decal = registerClass(&class_mindustry_gen_Decal);

}
