#include "mindustry/gen/WorldLabel.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/gen/WorldLabelc.h"
#include "mindustry/gen/WorldLabel_invoke_arc_func_Prov_1.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "arc/util/io/Writes.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/net/NetConnection.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/NetClient.h"
#include "arc/util/Align.h"
#include "java/lang/CharSequence.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/gen/Player.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"
#include "mindustry/gen/WorldLabel.h"

extern "C" {

jbyte SF_mindustry_gen_WorldLabel_flagAlignLeft;
jbyte SF_mindustry_gen_WorldLabel_flagAlignRight;
jbyte SF_mindustry_gen_WorldLabel_flagAutoscale;
jbyte SF_mindustry_gen_WorldLabel_flagBackground;
jbyte SF_mindustry_gen_WorldLabel_flagOutline;

void mark_mindustry_gen_WorldLabel(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_WorldLabel *) object;
	if (self->F_expired)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expired)->clazz)->markFunction)((jobject) self->F_expired, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
}

void clinit_mindustry_gen_WorldLabel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_WorldLabel_flagAlignLeft = jint(4);
	SF_mindustry_gen_WorldLabel_flagAlignRight = jint(8);
	SF_mindustry_gen_WorldLabel_flagAutoscale = jint(16);
	SF_mindustry_gen_WorldLabel_flagBackground = jint(1);
	SF_mindustry_gen_WorldLabel_flagOutline = jint(2);
}

void init_mindustry_gen_WorldLabel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_WorldLabel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(144);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(100);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(-1.0f));
	LINE_NUMBER(105);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(107);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(111);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(113);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(115);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(122);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"sample text"_j)));
	LINE_NUMBER(142);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(151.0f));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WorldLabel_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WorldLabel_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WorldLabel_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (35);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WorldLabel_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"WorldLabel#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_WorldLabel_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_WorldLabel_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(201);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(206);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(211);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(216);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(221);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(226);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(231);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(237);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_flags = temp0;
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_fontSize = temp1;
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_z = temp4;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(244);
	if ((frame[2].i) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_flags = temp0;
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_fontSize = temp1;
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPosEntity_arc_util_io_Reads_R_mindustry_gen_Posc(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_z = temp4;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(253);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'WorldLabelComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(256);
	((func_mindustry_gen_WorldLabel_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(261);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(262);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags));
	LINE_NUMBER(263);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_fontSize));
	LINE_NUMBER(264);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	SM_mindustry_io_TypeIO_writePosEntity_arc_util_io_Writes_mindustry_gen_Posc(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(266);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(267);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(268);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WorldLabel_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WorldLabel_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
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

jbool M_mindustry_gen_WorldLabel_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_WorldLabel_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WorldLabel_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(305);
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

jbool M_mindustry_gen_WorldLabel_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WorldLabel_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:clipSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	(sp++)->f = jfloat(3,402823e+38f);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jfloat temp1 = ((jfloat(temp0)) * (jfloat(10.0f))) * ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_fontSize);
	sp[0].f = temp1;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WorldLabel_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WorldLabel_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WorldLabel_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WorldLabel_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(341);
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

jobject M_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(347);
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

jobject SM_mindustry_gen_WorldLabel_create_R_mindustry_gen_WorldLabel(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_WorldLabel(ctx);
	{
	LINE_NUMBER(351);
	clinit_mindustry_gen_WorldLabel(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_WorldLabel);
	init_mindustry_gen_WorldLabel(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5, jint param6, jint param7) {
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:drawAt", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_WorldLabel(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(357);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(358);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[3].f));
	LINE_NUMBER(359);
	jfloat temp0 = (jfloat)SM_mindustry_graphics_Drawf_text_R_float(ctx);
	frame[8].f = temp0;
	LINE_NUMBER(360);
	if (((frame[4].i) & (jint(2))) == 0) goto label_4;
	}
	clinit_mindustry_ui_Fonts(ctx);
	(sp++)->o = SF_mindustry_ui_Fonts_outline;
	goto label_5;
label_4:;
	clinit_mindustry_ui_Fonts(ctx);
	(sp++)->o = SF_mindustry_ui_Fonts_def;
label_5:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_WorldLabel_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_WorldLabel_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_WorldLabel_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[10].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(362);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[9].o));
	frame[11].i = temp0;
	LINE_NUMBER(363);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[9].o), (jint(0)));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[9].o));
	jfloat temp1 = (jfloat(0.25f)) * (frame[5].f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	jfloat temp3 = temp1 / temp2;
	sp[1].f = temp3;
	sp += 2;
	if (((frame[4].i) & (16)) == 0) goto label_10;
	}
	{
	jfloat temp0 = jfloat(0.2f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (temp0 * ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale)) + (jfloat(0.05f));
	sp[0].f = temp1;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_FCONST(1);
label_11:;
	{
	sp -= 3;
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (sp[1].f / sp[2].f));
	LINE_NUMBER(365);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[10].o), (frame[9].o), (frame[0].o));
	LINE_NUMBER(366);
	if (((frame[4].i) & (jint(1))) == 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(367);
	jint temp0 = (jint)SM_arc_util_Align_isBottom_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(368);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) + ((jfloat((frame[12].i))) * (jfloat(1.5f)))));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(369);
	jint temp0 = (jint)SM_arc_util_Align_isTop_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(370);
	frame[2].f = ((frame[2].f) - ((jfloat((frame[12].i))) * (jfloat(1.5f))));
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(372);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) / (jfloat(2))));
	}
label_19:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)SM_arc_util_Align_isLeft_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(375);
	frame[1].f = ((frame[1].f) + ((((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) / (jfloat(2))) + (jfloat((frame[12].i)))));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)SM_arc_util_Align_isRight_int_R_boolean(ctx, (frame[6].i));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(377);
	frame[1].f = ((frame[1].f) - ((((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) / (jfloat(2))) + (jfloat((frame[12].i)))));
	}
label_24:;
	{
	LINE_NUMBER(379);
	if (((frame[4].i) & (jint(1))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(380);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.3f)));
	LINE_NUMBER(381);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, (frame[1].f), ((frame[2].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) / (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) + (jfloat(2))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height) + (jfloat(3.0f))));
	LINE_NUMBER(382);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_26:;
	{
	LINE_NUMBER(384);
	jint temp0 = (jint)SM_arc_util_Align_isLeft_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_30;
	}
	{
	jfloat temp0 = (-((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width)) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_30:;
	{
	jint temp0 = (jint)SM_arc_util_Align_isRight_int_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_32;
	}
	{
	jfloat temp0 = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	goto label_31;
	}
label_32:;
	INST_FCONST(0);
label_31:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(385);
	sp[0].o = frame[9].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[9].o), (frame[0].o), ((frame[1].f) + (frame[13].f)), (frame[2].f), (jfloat(0)), (frame[7].i), (jint(0)));
	LINE_NUMBER(387);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(388);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[10].o));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[9].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(390);
	sp[0].o = frame[9].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(391);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[9].o), (frame[11].i));
	LINE_NUMBER(392);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[8].f));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(396);
	if (((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(397);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(401);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(406);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:afterSync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(414);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	frame[1].f = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(427);
	frame[2].f = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(429);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(430);
	jfloat temp2 = frame[2].f;
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = (temp2 + temp3);
	}
label_3:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_z;
	jint temp3 = (jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags;
	jfloat temp4 = (jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_fontSize;
	jint temp5 = jint(1);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].i = temp3;
	sp[5].f = temp4;
	sp[6].i = temp5;
	sp += 7;
	if ((((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags) & (jint(4))) == 0) goto label_6;
	}
	INST_BIPUSH(8);
	goto label_7;
label_6:;
	{
	if ((((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags) & (8)) == 0) goto label_8;
	}
	INST_BIPUSH(16);
	goto label_7;
label_8:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 8;
	SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].i, sp[5].f, sp[6].i, sp[7].i);
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:hide", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	((func_mindustry_gen_WorldLabel_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_remove])(ctx, (frame[0].o));
	LINE_NUMBER(443);
	SM_mindustry_gen_Call_removeWorldLabel_int(ctx, ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_hide_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:hide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(448);
	if (((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	SM_mindustry_gen_Call_removeWorldLabel_mindustry_net_NetConnection_int(ctx, sp[0].o, ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_id));
	LINE_NUMBER(451);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	if ((longCompare(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(456);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(457);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(460);
	goto label_7;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(461);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(462);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_7:;
	LINE_NUMBER(465);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:readSync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(468);
	if ((longCompare(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(470);
	jint temp1 = (jint)((func_mindustry_gen_WorldLabel_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_arc_util_io_Reads_b_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_b_R_byte])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_flags = temp2;
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_fontSize = temp3;
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readPosEntity_arc_util_io_Reads_R_mindustry_gen_Posc(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_parent = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readString_arc_util_io_Reads_R_java_lang_String(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(475);
	if ((frame[2].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(476);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(477);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(479);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(480);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(481);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_11:;
	{
	LINE_NUMBER(483);
	if ((frame[2].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(484);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(487);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(488);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(489);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_17:;
	{
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_z = temp0;
	LINE_NUMBER(492);
	((func_mindustry_gen_WorldLabel_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(497);
	if ((longCompare(((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(499);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp1;
	LINE_NUMBER(501);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp2;
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	if (((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(508);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(509);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(510);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(511);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(512);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(513);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(516);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(521);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_WorldLabel_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_9:;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_WorldLabel_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WorldLabel_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(533);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(534);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_show_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(539);
	if (((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(540);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_con;
	sp[0].o = (jobject)((mindustry_net_NetConnection *) NULL_CHECK(sp[0].o))->F_localEntities;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(541);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(545);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(546);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(547);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(548);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(549);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(550);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(555);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(557);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(558);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(559);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(560);
	((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_WorldLabel_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WorldLabel_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(571);
	((func_mindustry_gen_WorldLabel_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(580);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_WorldLabel_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_WorldLabel_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(581);
	((func_mindustry_gen_WorldLabel_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_interpolate])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(586);
	if ((floatCompare(((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_duration), (jfloat(0)), -1)) < 0) goto label_4;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_duration = (((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK(sp[0].o))->F_duration) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(60.0f))));
	LINE_NUMBER(588);
	if ((floatCompare(((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_duration), (jfloat(0)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(589);
	((func_mindustry_gen_WorldLabel_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WorldLabel_hide])(ctx, (frame[0].o));
	LINE_NUMBER(590);
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_expired;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_expired;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(594);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), ((jint)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_flags));
	LINE_NUMBER(598);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_fontSize));
	LINE_NUMBER(599);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_parent;
	SM_mindustry_io_TypeIO_writePosEntity_arc_util_io_Writes_mindustry_gen_Posc(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(600);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_text;
	SM_mindustry_io_TypeIO_writeString_arc_util_io_Writes_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(601);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(602);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(603);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WorldLabel:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WorldLabel *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_WorldLabel;
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

	{ // Field expired
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_gen_WorldLabel[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_WorldLabel_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_WorldLabel_as_R_java_lang_Object,
	(void *) M_mindustry_gen_WorldLabel_isAdded_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_isLocal_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_isRemote_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_serialize_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_classId_R_int,
	(void *) M_mindustry_gen_WorldLabel_id_R_int,
	(void *) M_mindustry_gen_WorldLabel_add,
	(void *) M_mindustry_gen_WorldLabel_afterRead,
	(void *) M_mindustry_gen_WorldLabel_afterReadAll,
	(void *) M_mindustry_gen_WorldLabel_beforeWrite,
	(void *) M_mindustry_gen_WorldLabel_id_int,
	(void *) M_mindustry_gen_WorldLabel_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_WorldLabel_remove,
	(void *) M_mindustry_gen_WorldLabel_update,
	(void *) M_mindustry_gen_WorldLabel_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_WorldLabel_getX_R_float,
	(void *) M_mindustry_gen_WorldLabel_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_WorldLabel_onSolid_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_x_R_float,
	(void *) M_mindustry_gen_WorldLabel_y_R_float,
	(void *) M_mindustry_gen_WorldLabel_tileX_R_int,
	(void *) M_mindustry_gen_WorldLabel_tileY_R_int,
	(void *) M_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_WorldLabel_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_WorldLabel_set_float_float,
	(void *) M_mindustry_gen_WorldLabel_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_WorldLabel_trns_float_float,
	(void *) M_mindustry_gen_WorldLabel_x_float,
	(void *) M_mindustry_gen_WorldLabel_y_float,
	(void *) M_mindustry_gen_WorldLabel_clipSize_R_float,
	(void *) M_mindustry_gen_WorldLabel_draw,
	(void *) M_mindustry_gen_WorldLabel_setIndex__all_int,
	(void *) M_mindustry_gen_WorldLabel_setIndex__draw_int,
	(void *) M_mindustry_gen_WorldLabel_setIndex__sync_int,
	(void *) M_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_WorldLabel_lastUpdated_R_long,
	(void *) M_mindustry_gen_WorldLabel_updateSpacing_R_long,
	(void *) M_mindustry_gen_WorldLabel_afterSync,
	(void *) M_mindustry_gen_WorldLabel_handleSyncHidden,
	(void *) M_mindustry_gen_WorldLabel_interpolate,
	(void *) M_mindustry_gen_WorldLabel_lastUpdated_long,
	(void *) M_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_WorldLabel_snapInterpolation,
	(void *) M_mindustry_gen_WorldLabel_snapSync,
	(void *) M_mindustry_gen_WorldLabel_updateSpacing_long,
	(void *) M_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_WorldLabel_hide,
	(void *) M_mindustry_gen_WorldLabel_hide_mindustry_gen_Player,
	(void *) M_mindustry_gen_WorldLabel_show_mindustry_gen_Player,
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
	{ "setIndex__sync", "(I)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "hide", "()V" },
	{ "hide", "(Lmindustry/gen/Player;)V" },
	{ "show", "(Lmindustry/gen/Player;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_WorldLabelc, };

static FieldMetadata fields[] {
	{ "flagAlignLeft", &class_byte, (intptr_t) &SF_mindustry_gen_WorldLabel_flagAlignLeft, "B", 25 },
	{ "flagAlignRight", &class_byte, (intptr_t) &SF_mindustry_gen_WorldLabel_flagAlignRight, "B", 25 },
	{ "flagAutoscale", &class_byte, (intptr_t) &SF_mindustry_gen_WorldLabel_flagAutoscale, "B", 25 },
	{ "flagBackground", &class_byte, (intptr_t) &SF_mindustry_gen_WorldLabel_flagBackground, "B", 25 },
	{ "flagOutline", &class_byte, (intptr_t) &SF_mindustry_gen_WorldLabel_flagOutline, "B", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_WorldLabel, F_added), "Z", 132 },
	{ "duration", &class_float, offsetof(mindustry_gen_WorldLabel, F_duration), "F", 129 },
	{ "expired", &class_java_lang_Runnable, offsetof(mindustry_gen_WorldLabel, F_expired), "Ljava/lang/Runnable;", 129 },
	{ "flags", &class_byte, offsetof(mindustry_gen_WorldLabel, F_flags), "B", 1 },
	{ "fontSize", &class_float, offsetof(mindustry_gen_WorldLabel, F_fontSize), "F", 1 },
	{ "id", &class_int, offsetof(mindustry_gen_WorldLabel, F_id), "I", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_WorldLabel, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_WorldLabel, F_index__draw), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_WorldLabel, F_index__sync), "I", 132 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_WorldLabel, F_lastUpdated), "J", 129 },
	{ "parent", &class_mindustry_gen_Posc, offsetof(mindustry_gen_WorldLabel, F_parent), "Lmindustry/gen/Posc;", 1 },
	{ "text", &class_java_lang_String, offsetof(mindustry_gen_WorldLabel, F_text), "Ljava/lang/String;", 1 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_WorldLabel, F_updateSpacing), "J", 129 },
	{ "x", &class_float, offsetof(mindustry_gen_WorldLabel, F_x), "F", 1 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_WorldLabel, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_WorldLabel, F_x_TARGET_), "F", 130 },
	{ "y", &class_float, offsetof(mindustry_gen_WorldLabel, F_y), "F", 1 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_WorldLabel, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_WorldLabel, F_y_TARGET_), "F", 130 },
	{ "z", &class_float, offsetof(mindustry_gen_WorldLabel, F_z), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_WorldLabel, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_WorldLabel_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_WorldLabel_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "x", (intptr_t) M_mindustry_gen_WorldLabel_x_R_float, VTABLE_mindustry_gen_WorldLabel_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_WorldLabel_y_R_float, VTABLE_mindustry_gen_WorldLabel_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_WorldLabel_classId_R_int, VTABLE_mindustry_gen_WorldLabel_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_WorldLabel_id_R_int, VTABLE_mindustry_gen_WorldLabel_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_WorldLabel_toString_R_java_lang_String, VTABLE_mindustry_gen_WorldLabel_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_WorldLabel_lastUpdated_R_long, VTABLE_mindustry_gen_WorldLabel_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_WorldLabel_updateSpacing_R_long, VTABLE_mindustry_gen_WorldLabel_updateSpacing_R_long, "()J", 1 },
	{ "id", (intptr_t) M_mindustry_gen_WorldLabel_id_int, VTABLE_mindustry_gen_WorldLabel_id_int, "(I)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_WorldLabel_lastUpdated_long, VTABLE_mindustry_gen_WorldLabel_lastUpdated_long, "(J)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_WorldLabel_setIndex__all_int, VTABLE_mindustry_gen_WorldLabel_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_WorldLabel_setIndex__draw_int, VTABLE_mindustry_gen_WorldLabel_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_WorldLabel_setIndex__sync_int, VTABLE_mindustry_gen_WorldLabel_setIndex__sync_int, "(I)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_WorldLabel_updateSpacing_long, VTABLE_mindustry_gen_WorldLabel_updateSpacing_long, "(J)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_WorldLabel_x_float, VTABLE_mindustry_gen_WorldLabel_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_WorldLabel_y_float, VTABLE_mindustry_gen_WorldLabel_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_WorldLabel_read_arc_util_io_Reads, VTABLE_mindustry_gen_WorldLabel_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_WorldLabel_write_arc_util_io_Writes, VTABLE_mindustry_gen_WorldLabel_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_WorldLabel_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_WorldLabel_as_R_java_lang_Object, VTABLE_mindustry_gen_WorldLabel_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_WorldLabel_isAdded_R_boolean, VTABLE_mindustry_gen_WorldLabel_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_WorldLabel_isLocal_R_boolean, VTABLE_mindustry_gen_WorldLabel_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_WorldLabel_isRemote_R_boolean, VTABLE_mindustry_gen_WorldLabel_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_WorldLabel_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_WorldLabel_onSolid_R_boolean, VTABLE_mindustry_gen_WorldLabel_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_WorldLabel_serialize_R_boolean, VTABLE_mindustry_gen_WorldLabel_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_WorldLabel_clipSize_R_float, VTABLE_mindustry_gen_WorldLabel_clipSize_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_WorldLabel_getX_R_float, VTABLE_mindustry_gen_WorldLabel_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_WorldLabel_getY_R_float, VTABLE_mindustry_gen_WorldLabel_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_WorldLabel_tileX_R_int, VTABLE_mindustry_gen_WorldLabel_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_WorldLabel_tileY_R_int, VTABLE_mindustry_gen_WorldLabel_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_WorldLabel_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_WorldLabel_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_WorldLabel_create_R_mindustry_gen_WorldLabel, 0, "()Lmindustry/gen/WorldLabel;", 9 },
	{ "drawAt", (intptr_t) SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int, 0, "(Ljava/lang/String;FFFIFII)V", 9 },
	{ "add", (intptr_t) M_mindustry_gen_WorldLabel_add, VTABLE_mindustry_gen_WorldLabel_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_WorldLabel_afterRead, VTABLE_mindustry_gen_WorldLabel_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_WorldLabel_afterReadAll, VTABLE_mindustry_gen_WorldLabel_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_WorldLabel_afterSync, VTABLE_mindustry_gen_WorldLabel_afterSync, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_WorldLabel_beforeWrite, VTABLE_mindustry_gen_WorldLabel_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_WorldLabel_draw, VTABLE_mindustry_gen_WorldLabel_draw, "()V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_WorldLabel_handleSyncHidden, VTABLE_mindustry_gen_WorldLabel_handleSyncHidden, "()V", 1 },
	{ "hide", (intptr_t) M_mindustry_gen_WorldLabel_hide, VTABLE_mindustry_gen_WorldLabel_hide, "()V", 1 },
	{ "hide", (intptr_t) M_mindustry_gen_WorldLabel_hide_mindustry_gen_Player, VTABLE_mindustry_gen_WorldLabel_hide_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_WorldLabel_interpolate, VTABLE_mindustry_gen_WorldLabel_interpolate, "()V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_WorldLabel_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_WorldLabel_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_WorldLabel_remove, VTABLE_mindustry_gen_WorldLabel_remove, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_WorldLabel_set_arc_math_geom_Position, VTABLE_mindustry_gen_WorldLabel_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_WorldLabel_set_float_float, VTABLE_mindustry_gen_WorldLabel_set_float_float, "(FF)V", 1 },
	{ "show", (intptr_t) M_mindustry_gen_WorldLabel_show_mindustry_gen_Player, VTABLE_mindustry_gen_WorldLabel_show_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_WorldLabel_snapInterpolation, VTABLE_mindustry_gen_WorldLabel_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_WorldLabel_snapSync, VTABLE_mindustry_gen_WorldLabel_snapSync, "()V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_WorldLabel_trns_arc_math_geom_Position, VTABLE_mindustry_gen_WorldLabel_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_WorldLabel_trns_float_float, VTABLE_mindustry_gen_WorldLabel_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_WorldLabel_update, VTABLE_mindustry_gen_WorldLabel_update, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_WorldLabel_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_WorldLabel_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
};

Class class_mindustry_gen_WorldLabel{
		.nativeName = (intptr_t) "mindustry/gen/WorldLabel",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_WorldLabel),
		.classVtable = (intptr_t) vtable_mindustry_gen_WorldLabel,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_WorldLabel,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_WorldLabel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 8,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 60,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 75,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_WorldLabel = registerClass(&class_mindustry_gen_WorldLabel);

}
