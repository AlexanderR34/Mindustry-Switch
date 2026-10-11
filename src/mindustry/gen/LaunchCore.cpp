#include "mindustry/gen/LaunchCore.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "arc/math/Scaled.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/math/Interp.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/math/Interp_PowOut.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/LaunchCore.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"
#include "mindustry/gen/LaunchCorec.h"

extern "C" {


void mark_mindustry_gen_LaunchCore(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_LaunchCore *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
}

void clinit_mindustry_gen_LaunchCore(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_LaunchCore(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LaunchCore(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(109);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_LaunchCore *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_gen_LaunchCore *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	LINE_NUMBER(93);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(95);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_in_R_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:in", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_in;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchCore_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (11);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchCore_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"LaunchCore#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_block_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:block", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:block", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(176);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_in_arc_util_Interval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:in", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(186);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(201);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(206);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(211);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LaunchCore_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LaunchCore_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
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

jbool M_mindustry_gen_LaunchCore_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LaunchCore_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_LaunchCore_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(242);
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

jbool M_mindustry_gen_LaunchCore_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (jfloat(3,402823e+38f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_cx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:cx", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(12.0f);
	jint temp3 = (jint)((func_mindustry_gen_LaunchCore_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(3))))), (jfloat(4.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_cy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:cy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(100.0f);
	jint temp3 = (jint)((func_mindustry_gen_LaunchCore_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(2))))), (jfloat(30.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchCore_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchCore_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchCore_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(292);
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

jobject M_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(298);
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

jobject SM_mindustry_gen_LaunchCore_create_R_mindustry_gen_LaunchCore(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LaunchCore(ctx);
	{
	LINE_NUMBER(302);
	clinit_mindustry_gen_LaunchCore(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LaunchCore);
	init_mindustry_gen_LaunchCore(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(306);
	if (((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_LaunchCore *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_LaunchCore *) NULL_CHECK(sp[0].o))->F_index__draw = temp1;
	LINE_NUMBER(310);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(315);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LaunchCore_fout_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_fout_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(332);
	frame[2].f = ((((jfloat(1)) - (frame[1].f)) * (jfloat(1.4f))) + (jfloat(1)));
	LINE_NUMBER(333);
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchCore_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_cx_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(334);
	jfloat temp2 = (jfloat)((func_mindustry_gen_LaunchCore_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_cy_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	LINE_NUMBER(335);
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchCore_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_R_float])(ctx, (frame[0].o));
	jfloat temp4 = jfloat(140.0f);
	jint temp5 = (jint)((func_mindustry_gen_LaunchCore_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_id_R_int])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(temp5)), (jfloat(50.0f)));
	frame[5].f = (temp3 * (temp4 + temp6));
	LINE_NUMBER(336);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.001f)));
	LINE_NUMBER(337);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_engine;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(338);
	jfloat temp7 = jfloat(0.2f);
	jfloat temp8 = (jfloat)((func_mindustry_gen_LaunchCore_fslope_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_fslope_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp7 + temp8);
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_block;
	frame[7].f = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))))) * (jfloat(0.85f)));
	LINE_NUMBER(340);
	jfloat temp9 = frame[3].f;
	jfloat temp10 = frame[4].f;
	jint temp11 = 10;
	jfloat temp12 = ((jfloat(25.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))) * (frame[7].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp9, temp10, temp11, temp12, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(342);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	if ((frame[8].i) >= (jint(4))) goto label_13;
	}
	{
	LINE_NUMBER(343);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[3].f), (frame[4].f), ((jfloat(6.0f)) * (frame[7].f)), (((jfloat(40.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))) * (frame[7].f)), (((jfloat((frame[8].i))) * (jfloat(90.0f))) + (frame[5].f)));
	LINE_NUMBER(342);
	INST_IINC(8, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(345);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(346);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(129.0f)));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	frame[8].o = sp[0].o;
	LINE_NUMBER(348);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[8].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(349);
	frame[9].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_width))) * (frame[2].f));
	LINE_NUMBER(350);
	frame[10].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[8].o)))->F_height))) * (frame[2].f));
	LINE_NUMBER(351);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(352);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[8].o), (frame[3].f), (frame[4].f), (frame[9].f), (frame[10].f), ((frame[5].f) - (jfloat(45.0f))));
	LINE_NUMBER(353);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = jfloat(225.0f);
	sp[1].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (temp3 * (jfloat(250.0f))));
	LINE_NUMBER(354);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(355);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.22f)) * (frame[1].f)));
	LINE_NUMBER(356);
	sp[0].o = frame[8].o;
	jfloat temp4 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp5, (temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[9].f), (frame[10].f), ((frame[5].f) - (jfloat(45.0f))));
	LINE_NUMBER(357);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:read", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	((func_mindustry_gen_LaunchCore_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	if (((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(368);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(369);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(370);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(371);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(373);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LaunchCore_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(383);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(384);
	((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LaunchCore_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchCore_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(394);
	((func_mindustry_gen_LaunchCore_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	frame[1].f = (jfloat(4.0f));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_in;
	jfloat temp0 = jfloat(3.0f);
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchCore_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_R_float])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (temp0 - (temp1 * (jfloat(2)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(405);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rocketSmokeLarge;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LaunchCore_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_cx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchCore_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_cy_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = (jfloat)((func_mindustry_gen_LaunchCore_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_fin_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp2, temp5, temp6);
	}
label_2:;
	{
	LINE_NUMBER(410);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_LaunchCore *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(411);
	if ((floatCompare(((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_LaunchCore *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(412);
	((func_mindustry_gen_LaunchCore_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchCore_remove])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(415);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchCore_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchCore:write", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(419);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_LaunchCore;
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
}

void *vtable_mindustry_gen_LaunchCore[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_LaunchCore_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_LaunchCore_as_R_java_lang_Object,
	(void *) M_mindustry_gen_LaunchCore_isAdded_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_isLocal_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_isRemote_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_serialize_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_classId_R_int,
	(void *) M_mindustry_gen_LaunchCore_id_R_int,
	(void *) M_mindustry_gen_LaunchCore_add,
	(void *) M_mindustry_gen_LaunchCore_afterRead,
	(void *) M_mindustry_gen_LaunchCore_afterReadAll,
	(void *) M_mindustry_gen_LaunchCore_beforeWrite,
	(void *) M_mindustry_gen_LaunchCore_id_int,
	(void *) M_mindustry_gen_LaunchCore_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_LaunchCore_remove,
	(void *) M_mindustry_gen_LaunchCore_update,
	(void *) M_mindustry_gen_LaunchCore_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_LaunchCore_getX_R_float,
	(void *) M_mindustry_gen_LaunchCore_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_LaunchCore_onSolid_R_boolean,
	(void *) M_mindustry_gen_LaunchCore_x_R_float,
	(void *) M_mindustry_gen_LaunchCore_y_R_float,
	(void *) M_mindustry_gen_LaunchCore_tileX_R_int,
	(void *) M_mindustry_gen_LaunchCore_tileY_R_int,
	(void *) M_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_LaunchCore_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_LaunchCore_set_float_float,
	(void *) M_mindustry_gen_LaunchCore_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_LaunchCore_trns_float_float,
	(void *) M_mindustry_gen_LaunchCore_x_float,
	(void *) M_mindustry_gen_LaunchCore_y_float,
	(void *) M_mindustry_gen_LaunchCore_clipSize_R_float,
	(void *) M_mindustry_gen_LaunchCore_draw,
	(void *) M_mindustry_gen_LaunchCore_setIndex__all_int,
	(void *) M_mindustry_gen_LaunchCore_setIndex__draw_int,
	(void *) M_mindustry_gen_LaunchCore_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_LaunchCore_lifetime_R_float,
	(void *) M_mindustry_gen_LaunchCore_time_R_float,
	(void *) M_mindustry_gen_LaunchCore_lifetime_float,
	(void *) M_mindustry_gen_LaunchCore_time_float,
	(void *) M_mindustry_gen_LaunchCore_in_R_arc_util_Interval,
	(void *) M_mindustry_gen_LaunchCore_cx_R_float,
	(void *) M_mindustry_gen_LaunchCore_cy_R_float,
	(void *) M_mindustry_gen_LaunchCore_block_R_mindustry_world_Block,
	(void *) M_mindustry_gen_LaunchCore_block_mindustry_world_Block,
	(void *) M_mindustry_gen_LaunchCore_in_arc_util_Interval,
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
	{ "setIndex__all", "(I)V" },
	{ "setIndex__draw", "(I)V" },
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
	{ "in", "()Larc/util/Interval;" },
	{ "cx", "()F" },
	{ "cy", "()F" },
	{ "block", "()Lmindustry/world/Block;" },
	{ "block", "(Lmindustry/world/Block;)V" },
	{ "in", "(Larc/util/Interval;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_LaunchCorec, &class_mindustry_gen_Posc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_gen_LaunchCore, F_added), "Z", 132 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_gen_LaunchCore, F_block), "Lmindustry/world/Block;", 1 },
	{ "id", &class_int, offsetof(mindustry_gen_LaunchCore, F_id), "I", 129 },
	{ "in", &class_arc_util_Interval, offsetof(mindustry_gen_LaunchCore, F_in), "Larc/util/Interval;", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_LaunchCore, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_LaunchCore, F_index__draw), "I", 132 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_LaunchCore, F_lifetime), "F", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_LaunchCore, F_time), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_LaunchCore, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_LaunchCore, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_LaunchCore, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "in", (intptr_t) M_mindustry_gen_LaunchCore_in_R_arc_util_Interval, VTABLE_mindustry_gen_LaunchCore_in_R_arc_util_Interval, "()Larc/util/Interval;", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_LaunchCore_lifetime_R_float, VTABLE_mindustry_gen_LaunchCore_lifetime_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_LaunchCore_time_R_float, VTABLE_mindustry_gen_LaunchCore_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_LaunchCore_x_R_float, VTABLE_mindustry_gen_LaunchCore_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_LaunchCore_y_R_float, VTABLE_mindustry_gen_LaunchCore_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_LaunchCore_classId_R_int, VTABLE_mindustry_gen_LaunchCore_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_LaunchCore_id_R_int, VTABLE_mindustry_gen_LaunchCore_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_LaunchCore_toString_R_java_lang_String, VTABLE_mindustry_gen_LaunchCore_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "block", (intptr_t) M_mindustry_gen_LaunchCore_block_R_mindustry_world_Block, VTABLE_mindustry_gen_LaunchCore_block_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "block", (intptr_t) M_mindustry_gen_LaunchCore_block_mindustry_world_Block, VTABLE_mindustry_gen_LaunchCore_block_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_LaunchCore_id_int, VTABLE_mindustry_gen_LaunchCore_id_int, "(I)V", 1 },
	{ "in", (intptr_t) M_mindustry_gen_LaunchCore_in_arc_util_Interval, VTABLE_mindustry_gen_LaunchCore_in_arc_util_Interval, "(Larc/util/Interval;)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_LaunchCore_lifetime_float, VTABLE_mindustry_gen_LaunchCore_lifetime_float, "(F)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_LaunchCore_setIndex__all_int, VTABLE_mindustry_gen_LaunchCore_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_LaunchCore_setIndex__draw_int, VTABLE_mindustry_gen_LaunchCore_setIndex__draw_int, "(I)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_LaunchCore_time_float, VTABLE_mindustry_gen_LaunchCore_time_float, "(F)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_LaunchCore_x_float, VTABLE_mindustry_gen_LaunchCore_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_LaunchCore_y_float, VTABLE_mindustry_gen_LaunchCore_y_float, "(F)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_LaunchCore_as_R_java_lang_Object, VTABLE_mindustry_gen_LaunchCore_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_LaunchCore_isAdded_R_boolean, VTABLE_mindustry_gen_LaunchCore_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_LaunchCore_isLocal_R_boolean, VTABLE_mindustry_gen_LaunchCore_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_LaunchCore_isRemote_R_boolean, VTABLE_mindustry_gen_LaunchCore_isRemote_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_LaunchCore_onSolid_R_boolean, VTABLE_mindustry_gen_LaunchCore_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_LaunchCore_serialize_R_boolean, VTABLE_mindustry_gen_LaunchCore_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_LaunchCore_clipSize_R_float, VTABLE_mindustry_gen_LaunchCore_clipSize_R_float, "()F", 1 },
	{ "cx", (intptr_t) M_mindustry_gen_LaunchCore_cx_R_float, VTABLE_mindustry_gen_LaunchCore_cx_R_float, "()F", 1 },
	{ "cy", (intptr_t) M_mindustry_gen_LaunchCore_cy_R_float, VTABLE_mindustry_gen_LaunchCore_cy_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_LaunchCore_fin_R_float, VTABLE_mindustry_gen_LaunchCore_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_LaunchCore_getX_R_float, VTABLE_mindustry_gen_LaunchCore_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_LaunchCore_getY_R_float, VTABLE_mindustry_gen_LaunchCore_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_LaunchCore_tileX_R_int, VTABLE_mindustry_gen_LaunchCore_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_LaunchCore_tileY_R_int, VTABLE_mindustry_gen_LaunchCore_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_LaunchCore_create_R_mindustry_gen_LaunchCore, 0, "()Lmindustry/gen/LaunchCore;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_LaunchCore_add, VTABLE_mindustry_gen_LaunchCore_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_LaunchCore_afterRead, VTABLE_mindustry_gen_LaunchCore_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_LaunchCore_afterReadAll, VTABLE_mindustry_gen_LaunchCore_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_LaunchCore_beforeWrite, VTABLE_mindustry_gen_LaunchCore_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_LaunchCore_draw, VTABLE_mindustry_gen_LaunchCore_draw, "()V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_LaunchCore_read_arc_util_io_Reads, VTABLE_mindustry_gen_LaunchCore_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_LaunchCore_remove, VTABLE_mindustry_gen_LaunchCore_remove, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LaunchCore_set_arc_math_geom_Position, VTABLE_mindustry_gen_LaunchCore_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LaunchCore_set_float_float, VTABLE_mindustry_gen_LaunchCore_set_float_float, "(FF)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LaunchCore_trns_arc_math_geom_Position, VTABLE_mindustry_gen_LaunchCore_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LaunchCore_trns_float_float, VTABLE_mindustry_gen_LaunchCore_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_LaunchCore_update, VTABLE_mindustry_gen_LaunchCore_update, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_LaunchCore_write_arc_util_io_Writes, VTABLE_mindustry_gen_LaunchCore_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
};

Class class_mindustry_gen_LaunchCore{
		.nativeName = (intptr_t) "mindustry/gen/LaunchCore",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_LaunchCore),
		.classVtable = (intptr_t) vtable_mindustry_gen_LaunchCore,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_LaunchCore,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_LaunchCore,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 7,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_LaunchCore = registerClass(&class_mindustry_gen_LaunchCore);

}
