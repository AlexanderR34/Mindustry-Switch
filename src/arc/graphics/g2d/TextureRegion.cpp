#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/Draw.h"

extern "C" {


void mark_arc_graphics_g2d_TextureRegion(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_TextureRegion *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
}

void clinit_arc_graphics_g2d_TextureRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(29);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"texture cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(30);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(31);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(39);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (jint(0)), (jint(0)), (frame[2].i), (frame[3].i));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(48);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(52);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(53);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(54);
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(59);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(68);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_TextureRegion_split_arc_graphics_Texture_int_int_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:split", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureRegion(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(81);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion])(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:asAtlas", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_TextureRegion_found_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:found", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas *) NULL_CHECK(sp[0].o))->F_error;
	if (sp[0].o == (frame[0].o)) goto label_1;
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

void M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(104);
	jfloat temp0 = jfloat(1);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[5].f = (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(105);
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[6].f = (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height))));
	LINE_NUMBER(106);
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, (frame[0].o), ((jfloat((frame[1].i))) * (frame[5].f)), ((jfloat((frame[2].i))) * (frame[6].f)), ((jfloat(((frame[1].i) + (frame[3].i)))) * (frame[5].f)), ((jfloat(((frame[2].i) + (frame[4].i)))) * (frame[6].f)));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[3].i));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width = temp2;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[4].i));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height = temp3;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[5].i = ((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[6].i = ((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height);
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - (frame[1].f)));
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat((frame[5].i)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width = temp1;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[4].f) - (frame[2].f)));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp2 * (jfloat((frame[6].i)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height = temp3;
	LINE_NUMBER(119);
	if (((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width) != (jint(1))) goto label_5;
	}
	{
	if (((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(120);
	frame[7].f = ((jfloat(0.25f)) / (jfloat((frame[5].i))));
	LINE_NUMBER(121);
	frame[1].f = ((frame[1].f) + (frame[7].f));
	LINE_NUMBER(122);
	frame[3].f = ((frame[3].f) - (frame[7].f));
	LINE_NUMBER(123);
	frame[8].f = ((jfloat(0.25f)) / (jfloat((frame[6].i))));
	LINE_NUMBER(124);
	frame[2].f = ((frame[2].f) + (frame[8].f));
	LINE_NUMBER(125);
	frame[4].f = ((frame[4].f) - (frame[8].f));
	}
label_5:;
	{
	LINE_NUMBER(128);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (frame[1].f);
	LINE_NUMBER(129);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (frame[2].f);
	LINE_NUMBER(130);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[3].f);
	LINE_NUMBER(131);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[4].f);
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(137);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_scale);
	LINE_NUMBER(138);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(139);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(140);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(141);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(142);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(143);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(149);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_scale);
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[1].o));
	jint temp1 = temp0 + (frame[2].i);
	jint temp2 = (jint)((func_arc_graphics_g2d_TextureRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, temp1, (temp2 + (frame[3].i)), (frame[4].i), (frame[5].i));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(155);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setU_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setU", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(160);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (frame[1].f);
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2) - (frame[1].f)));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width = temp1;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setV_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setV", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(165);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (frame[1].f);
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2) - (frame[1].f)));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setU2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setU2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(170);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[1].f);
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u)));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width = temp1;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setV2_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setV2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(175);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[1].f);
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v)));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height)))));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_TextureRegion_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:getX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width)))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setX_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width)))));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width)))));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_TextureRegion_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height)))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setY_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height)))));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height)))));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width))))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width))))));
	}
label_3:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height))))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	jfloat temp1 = jfloat((frame[1].i));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height))))));
	}
label_3:;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width))))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setU2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setU2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width))))));
	}
label_3:;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_setHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:setHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height))))));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	jfloat temp1 = frame[1].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_setV2_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_setV2_float])(ctx, sp[0].o, (temp0 + (temp1 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height))))));
	}
label_3:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureRegion_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(236);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(237);
	frame[3].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	LINE_NUMBER(238);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2);
	LINE_NUMBER(239);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2 = (frame[3].f);
	}
label_1:;
	{
	LINE_NUMBER(241);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(242);
	frame[3].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	LINE_NUMBER(243);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2);
	LINE_NUMBER(244);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2 = (frame[3].f);
	}
label_5:;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_TextureRegion_ratio_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:ratio", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height))));
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:isFlipX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2), -1)) <= 0) goto label_1;
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

jbool M_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:isFlipY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2), -1)) <= 0) goto label_1;
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

void M_arc_graphics_g2d_TextureRegion_scroll_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:scroll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(268);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(269);
	jfloat temp0 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[3].f = (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(270);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u = (fmodf((((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u) + (frame[1].f)), (jfloat(1))));
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_u2 = (temp1 + (temp2 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_width)))));
	}
label_1:;
	{
	LINE_NUMBER(273);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(274);
	jfloat temp0 = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[3].f = (temp0 * (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height))));
	LINE_NUMBER(275);
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v = (fmodf((((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v) + (frame[2].f)), (jfloat(1))));
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v;
	jfloat temp2 = frame[3].f;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_v2 = (temp1 + (temp2 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_height)))));
	}
label_5:;
	LINE_NUMBER(278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:split", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_getX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(292);
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_getY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(293);
	frame[5].i = ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(294);
	frame[6].i = ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(296);
	frame[7].i = ((frame[5].i) / (frame[1].i));
	LINE_NUMBER(297);
	frame[8].i = ((frame[6].i) / (frame[2].i));
	LINE_NUMBER(299);
	frame[9].i = (frame[3].i);
	LINE_NUMBER(300);
	sp[0].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(frame[7].i), (frame[8].i)});
	frame[10].o = sp[0].o;
	LINE_NUMBER(301);
	frame[11].i = (jint(0));
	}
label_10:;
	{
	if ((frame[11].i) >= (frame[8].i)) goto label_11;
	}
	{
	LINE_NUMBER(302);
	frame[3].i = (frame[9].i);
	LINE_NUMBER(303);
	frame[12].i = (jint(0));
	}
label_14:;
	{
	if ((frame[12].i) >= (frame[7].i)) goto label_15;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i));
	jint temp0 = frame[11].i;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[1].o, sp[2].o, (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(303);
	INST_IINC(12, 1);
	frame[3].i = ((frame[3].i) + (frame[1].i));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(301);
	INST_IINC(11, 1);
	frame[4].i = ((frame[4].i) + (frame[2].i));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_TextureRegion_scl_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:scl", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_scale) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureRegion_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureRegion:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TextureRegion{texture="_j))));
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", width="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", height="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureRegion[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_TextureRegion_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_TextureRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_found_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_set_float_float_float_float,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setU_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setV_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setU2_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setV2_float,
	(void *) M_arc_graphics_g2d_TextureRegion_getX_R_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setX_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setX_float,
	(void *) M_arc_graphics_g2d_TextureRegion_getY_R_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setY_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setY_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setWidth_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setHeight_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setWidth_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setHeight_float,
	(void *) M_arc_graphics_g2d_TextureRegion_flip_boolean_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_ratio_R_float,
	(void *) M_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_scroll_float_float,
	(void *) M_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_scl_R_float,
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
	{ "asAtlas", "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "found", "()Z" },
	{ "set", "(Larc/graphics/Texture;)V" },
	{ "set", "(IIII)Larc/graphics/g2d/TextureRegion;" },
	{ "set", "(FFFF)V" },
	{ "set", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "set", "(Larc/graphics/g2d/TextureRegion;IIII)V" },
	{ "set", "(Larc/graphics/Texture;IIII)V" },
	{ "setU", "(F)V" },
	{ "setV", "(F)V" },
	{ "setU2", "(F)V" },
	{ "setV2", "(F)V" },
	{ "getX", "()I" },
	{ "setX", "(I)V" },
	{ "setX", "(F)V" },
	{ "getY", "()I" },
	{ "setY", "(I)V" },
	{ "setY", "(F)V" },
	{ "setWidth", "(I)V" },
	{ "setHeight", "(I)V" },
	{ "setWidth", "(F)V" },
	{ "setHeight", "(F)V" },
	{ "flip", "(ZZ)V" },
	{ "ratio", "()F" },
	{ "isFlipX", "()Z" },
	{ "isFlipY", "()Z" },
	{ "scroll", "(FF)V" },
	{ "split", "(II)[[Larc/graphics/g2d/TextureRegion;" },
	{ "scl", "()F" },
};

static FieldMetadata fields[] {
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_TextureRegion, F_texture), "Larc/graphics/Texture;", 1 },
	{ "u", &class_float, offsetof(arc_graphics_g2d_TextureRegion, F_u), "F", 1 },
	{ "v", &class_float, offsetof(arc_graphics_g2d_TextureRegion, F_v), "F", 1 },
	{ "u2", &class_float, offsetof(arc_graphics_g2d_TextureRegion, F_u2), "F", 1 },
	{ "v2", &class_float, offsetof(arc_graphics_g2d_TextureRegion, F_v2), "F", 1 },
	{ "width", &class_int, offsetof(arc_graphics_g2d_TextureRegion, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_g2d_TextureRegion, F_height), "I", 1 },
	{ "scale", &class_float, offsetof(arc_graphics_g2d_TextureRegion, F_scale), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int, 0, "(Larc/graphics/Texture;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int_int_int, 0, "(Larc/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_float_float_float_float, 0, "(Larc/graphics/Texture;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int, 0, "(Larc/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "split", (intptr_t) SM_arc_graphics_g2d_TextureRegion_split_arc_graphics_Texture_int_int_R_Array2_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/Texture;II)[[Larc/graphics/g2d/TextureRegion;", 9 },
	{ "asAtlas", (intptr_t) M_arc_graphics_g2d_TextureRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, VTABLE_arc_graphics_g2d_TextureRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion, "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;", 1 },
	{ "found", (intptr_t) M_arc_graphics_g2d_TextureRegion_found_R_boolean, VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean, "()Z", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture, VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture, "(Larc/graphics/Texture;)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion, "(IIII)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_float_float_float_float, VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float, "(FFFF)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int, VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int, "(Larc/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int, VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int, "(Larc/graphics/Texture;IIII)V", 1 },
	{ "setU", (intptr_t) M_arc_graphics_g2d_TextureRegion_setU_float, VTABLE_arc_graphics_g2d_TextureRegion_setU_float, "(F)V", 1 },
	{ "setV", (intptr_t) M_arc_graphics_g2d_TextureRegion_setV_float, VTABLE_arc_graphics_g2d_TextureRegion_setV_float, "(F)V", 1 },
	{ "setU2", (intptr_t) M_arc_graphics_g2d_TextureRegion_setU2_float, VTABLE_arc_graphics_g2d_TextureRegion_setU2_float, "(F)V", 1 },
	{ "setV2", (intptr_t) M_arc_graphics_g2d_TextureRegion_setV2_float, VTABLE_arc_graphics_g2d_TextureRegion_setV2_float, "(F)V", 1 },
	{ "getX", (intptr_t) M_arc_graphics_g2d_TextureRegion_getX_R_int, VTABLE_arc_graphics_g2d_TextureRegion_getX_R_int, "()I", 1 },
	{ "setX", (intptr_t) M_arc_graphics_g2d_TextureRegion_setX_int, VTABLE_arc_graphics_g2d_TextureRegion_setX_int, "(I)V", 1 },
	{ "setX", (intptr_t) M_arc_graphics_g2d_TextureRegion_setX_float, VTABLE_arc_graphics_g2d_TextureRegion_setX_float, "(F)V", 1 },
	{ "getY", (intptr_t) M_arc_graphics_g2d_TextureRegion_getY_R_int, VTABLE_arc_graphics_g2d_TextureRegion_getY_R_int, "()I", 1 },
	{ "setY", (intptr_t) M_arc_graphics_g2d_TextureRegion_setY_int, VTABLE_arc_graphics_g2d_TextureRegion_setY_int, "(I)V", 1 },
	{ "setY", (intptr_t) M_arc_graphics_g2d_TextureRegion_setY_float, VTABLE_arc_graphics_g2d_TextureRegion_setY_float, "(F)V", 1 },
	{ "setWidth", (intptr_t) M_arc_graphics_g2d_TextureRegion_setWidth_int, VTABLE_arc_graphics_g2d_TextureRegion_setWidth_int, "(I)V", 1 },
	{ "setHeight", (intptr_t) M_arc_graphics_g2d_TextureRegion_setHeight_int, VTABLE_arc_graphics_g2d_TextureRegion_setHeight_int, "(I)V", 1 },
	{ "setWidth", (intptr_t) M_arc_graphics_g2d_TextureRegion_setWidth_float, VTABLE_arc_graphics_g2d_TextureRegion_setWidth_float, "(F)V", 1 },
	{ "setHeight", (intptr_t) M_arc_graphics_g2d_TextureRegion_setHeight_float, VTABLE_arc_graphics_g2d_TextureRegion_setHeight_float, "(F)V", 1 },
	{ "flip", (intptr_t) M_arc_graphics_g2d_TextureRegion_flip_boolean_boolean, VTABLE_arc_graphics_g2d_TextureRegion_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "ratio", (intptr_t) M_arc_graphics_g2d_TextureRegion_ratio_R_float, VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float, "()F", 1 },
	{ "isFlipX", (intptr_t) M_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean, VTABLE_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean, "()Z", 1 },
	{ "isFlipY", (intptr_t) M_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean, VTABLE_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean, "()Z", 1 },
	{ "scroll", (intptr_t) M_arc_graphics_g2d_TextureRegion_scroll_float_float, VTABLE_arc_graphics_g2d_TextureRegion_scroll_float_float, "(FF)V", 1 },
	{ "split", (intptr_t) M_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion, "(II)[[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "scl", (intptr_t) M_arc_graphics_g2d_TextureRegion_scl_R_float, VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_TextureRegion_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_TextureRegion_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_g2d_TextureRegion{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureRegion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_TextureRegion),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureRegion,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureRegion = registerClass(&class_arc_graphics_g2d_TextureRegion);

}
