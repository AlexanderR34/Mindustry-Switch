#include "arc/graphics/g2d/NinePatch.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/System.h"
#include "arc/graphics/g2d/NinePatch.h"

extern "C" {

jint SF_arc_graphics_g2d_NinePatch_TOP_LEFT;
jint SF_arc_graphics_g2d_NinePatch_TOP_CENTER;
jint SF_arc_graphics_g2d_NinePatch_TOP_RIGHT;
jint SF_arc_graphics_g2d_NinePatch_MIDDLE_LEFT;
jint SF_arc_graphics_g2d_NinePatch_MIDDLE_CENTER;
jint SF_arc_graphics_g2d_NinePatch_MIDDLE_RIGHT;
jint SF_arc_graphics_g2d_NinePatch_BOTTOM_LEFT;
jint SF_arc_graphics_g2d_NinePatch_BOTTOM_CENTER;
jint SF_arc_graphics_g2d_NinePatch_BOTTOM_RIGHT;
jobject SF_arc_graphics_g2d_NinePatch_tmpDrawColor;

void mark_arc_graphics_g2d_NinePatch(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_NinePatch_tmpDrawColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_NinePatch_tmpDrawColor)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_NinePatch_tmpDrawColor, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_NinePatch *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, (frame[1].o));
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(67);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(39);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = (jint(-1));
	LINE_NUMBER(40);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = (jint(-1));
	LINE_NUMBER(41);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = (jint(-1));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (216));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(45);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(68);
	if ((frame[1].o) != nullptr) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"region cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(69);
	frame[6].i = ((((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width) - (frame[2].i)) - (frame[3].i));
	LINE_NUMBER(70);
	frame[7].i = ((((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_height) - (frame[4].i)) - (frame[5].i));
	LINE_NUMBER(72);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (9));
	frame[8].o = sp[0].o;
	LINE_NUMBER(73);
	if ((frame[4].i) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(74);
	if ((frame[2].i) <= 0) goto label_14;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = jint(0);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), (jint(0)), (frame[2].i), (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(75);
	if ((frame[6].i) <= 0) goto label_15;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = jint(1);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (jint(0)), (frame[6].i), (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(76);
	if ((frame[3].i) <= 0) goto label_12;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = jint(2);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[6].i)), (jint(0)), (frame[3].i), (frame[4].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(78);
	if ((frame[7].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(79);
	if ((frame[2].i) <= 0) goto label_18;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = jint(3);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), (frame[4].i), (frame[2].i), (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(80);
	if ((frame[6].i) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[8].o;
	jint temp0 = jint(4);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[4].i), (frame[6].i), (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(82);
	if ((frame[3].i) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[8].o;
	jint temp0 = jint(5);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[6].i)), (frame[4].i), (frame[3].i), (frame[7].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(85);
	if ((frame[5].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(86);
	if ((frame[2].i) <= 0) goto label_24;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = 6;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (jint(0)), ((frame[4].i) + (frame[7].i)), (frame[2].i), (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(87);
	if ((frame[6].i) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = frame[8].o;
	jint temp0 = 7;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), ((frame[4].i) + (frame[7].i)), (frame[6].i), (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(89);
	if ((frame[3].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[8].o;
	jint temp0 = 8;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[1].o, (frame[1].o), ((frame[2].i) + (frame[6].i)), ((frame[4].i) + (frame[7].i)), (frame[3].i), (frame[5].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(94);
	if ((frame[2].i) != 0) goto label_28;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(95);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(1))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(2))));
	LINE_NUMBER(96);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(4))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (jint(5))));
	LINE_NUMBER(97);
	ARRAY_ACCESS(jobject, (frame[8].o), (7)) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (8)));
	LINE_NUMBER(98);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(2))) = (jobject(nullptr));
	LINE_NUMBER(99);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(5))) = (jobject(nullptr));
	LINE_NUMBER(100);
	ARRAY_ACCESS(jobject, (frame[8].o), (8)) = (jobject(nullptr));
	}
label_28:;
	{
	LINE_NUMBER(103);
	if ((frame[4].i) != 0) goto label_35;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_35;
	{
	LINE_NUMBER(104);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(3))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (6)));
	LINE_NUMBER(105);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(4))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (7)));
	LINE_NUMBER(106);
	ARRAY_ACCESS(jobject, (frame[8].o), (jint(5))) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (8)));
	LINE_NUMBER(107);
	ARRAY_ACCESS(jobject, (frame[8].o), (6)) = (jobject(nullptr));
	LINE_NUMBER(108);
	ARRAY_ACCESS(jobject, (frame[8].o), (7)) = (jobject(nullptr));
	LINE_NUMBER(109);
	ARRAY_ACCESS(jobject, (frame[8].o), (8)) = (jobject(nullptr));
	}
label_35:;
	{
	LINE_NUMBER(112);
	M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(117);
	init_arc_graphics_g2d_NinePatch_arc_graphics_Texture(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(118);
	((func_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, (frame[1].o));
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(128);
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(129);
	((func_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(39);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = (jint(-1));
	LINE_NUMBER(40);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = (jint(-1));
	LINE_NUMBER(41);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = (jint(-1));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (216));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(45);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (9));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(4))) = (frame[1].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(5))) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (6)) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (7)) = (jobject(nullptr));
	ARRAY_ACCESS(jobject, sp[1].o, (8)) = (jobject(nullptr));
	M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(39);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = (jint(-1));
	LINE_NUMBER(40);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = (jint(-1));
	LINE_NUMBER(41);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = (jint(-1));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (216));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(45);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(148);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) == (9)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(149);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NinePatch needs nine TextureRegions"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(151);
	M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(153);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getLeftWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(154);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_12;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->F_width))), (frame[2].f), -1)) != 0) goto label_13;
	}
label_12:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))) == nullptr) goto label_14;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3))))))->F_width))), (frame[2].f), -1)) != 0) goto label_13;
	}
label_14:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_15;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6)))))->F_width))), (frame[2].f), -1)) == 0) goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(157);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Left side patches must have the same width"_j))));
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(160);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getRightWidth_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(161);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_17;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2))))))->F_width))), (frame[3].f), -1)) != 0) goto label_18;
	}
label_17:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))) == nullptr) goto label_19;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5))))))->F_width))), (frame[3].f), -1)) != 0) goto label_18;
	}
label_19:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_20;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8)))))->F_width))), (frame[3].f), -1)) == 0) goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(164);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Right side patches must have the same width"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(167);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getBottomHeight_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(168);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_22;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6)))))->F_height))), (frame[4].f), -1)) != 0) goto label_23;
	}
label_22:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))) == nullptr) goto label_24;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7)))))->F_height))), (frame[4].f), -1)) != 0) goto label_23;
	}
label_24:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_25;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8)))))->F_height))), (frame[4].f), -1)) == 0) goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(171);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Bottom side patches must have the same height"_j))));
	throwException(ctx, sp[0].o);	}
label_25:;
	{
	LINE_NUMBER(174);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTopHeight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(175);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_27;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->F_height))), (frame[5].f), -1)) != 0) goto label_28;
	}
label_27:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) == nullptr) goto label_29;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1))))))->F_height))), (frame[5].f), -1)) != 0) goto label_28;
	}
label_29:;
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_30;
	}
	{
	if ((floatCompare((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2))))))->F_height))), (frame[5].f), -1)) == 0) goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(178);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Top side patches must have the same height"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(180);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_color;
	init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(186);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(39);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = (jint(-1));
	LINE_NUMBER(40);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = (jint(-1));
	LINE_NUMBER(41);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = (jint(-1));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = (jint(-1));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (216));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(45);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (jfloat(-1.0f));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (jfloat(-1.0f));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_texture;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(189);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomLeft);
	LINE_NUMBER(190);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomCenter);
	LINE_NUMBER(191);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomRight);
	LINE_NUMBER(192);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleLeft);
	LINE_NUMBER(193);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleCenter);
	LINE_NUMBER(194);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleRight);
	LINE_NUMBER(195);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topLeft);
	LINE_NUMBER(196);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topCenter);
	LINE_NUMBER(197);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topRight);
	LINE_NUMBER(199);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_leftWidth);
	LINE_NUMBER(200);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_rightWidth);
	LINE_NUMBER(201);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleWidth);
	LINE_NUMBER(202);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_middleHeight);
	LINE_NUMBER(203);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_topHeight);
	LINE_NUMBER(204);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_bottomHeight);
	LINE_NUMBER(206);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padLeft);
	LINE_NUMBER(207);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padTop);
	LINE_NUMBER(208);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padBottom);
	LINE_NUMBER(209);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_padRight);
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(213);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[1].o)))->F_idx);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	frame[2].f = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits);
	LINE_NUMBER(220);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6))), (frame[2].f), (jint(0)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomLeft = temp0;
	LINE_NUMBER(222);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6)))))->F_width)));
	LINE_NUMBER(223);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (6)))))->F_height)));
	}
label_2:;
	{
	LINE_NUMBER(225);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7))), (frame[2].f), (jint(1)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomCenter = temp0;
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7)))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp1;
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (7)))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp2;
	}
label_6:;
	{
	LINE_NUMBER(230);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8))), (frame[2].f), (jint(0)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomRight = temp0;
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8)))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp1;
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (8)))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp2;
	}
label_10:;
	{
	LINE_NUMBER(235);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3)))), (frame[2].f), (jint(0)), (jint(1)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleLeft = temp0;
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = temp1;
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(3))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp2;
	}
label_14:;
	{
	LINE_NUMBER(240);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4)))), (frame[2].f), (jint(1)), (jint(1)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleCenter = temp0;
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp1;
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(4))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp2;
	}
label_18:;
	{
	LINE_NUMBER(245);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5)))), (frame[2].f), (jint(0)), (jint(1)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleRight = temp0;
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp1;
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(5))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = temp2;
	}
label_22:;
	{
	LINE_NUMBER(250);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))), (frame[2].f), (jint(0)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topLeft = temp0;
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = temp1;
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp2;
	}
label_26:;
	{
	LINE_NUMBER(255);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))), (frame[2].f), (jint(1)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topCenter = temp0;
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = temp1;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp2;
	}
label_30:;
	{
	LINE_NUMBER(260);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2)))), (frame[2].f), (jint(0)), (jint(0)));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topRight = temp0;
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2))))))->F_width))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = temp1;
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight), (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(2))))))->F_height))));
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = temp2;
	}
label_34:;
	{
	LINE_NUMBER(265);
	jint temp0 = (jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx;
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	frame[3].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(268);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices = (jref) (frame[3].o);
	}
label_38:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:add", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(276);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"All regions must be from the same texture."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(278);
	frame[5].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(279);
	frame[6].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(280);
	frame[7].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(281);
	frame[8].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getMagFilter_R_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getMinFilter_R_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	if (sp[0].o != sp[1].o) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(287);
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(288);
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[9].f = (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(289);
	frame[5].f = ((frame[5].f) + (frame[9].f));
	LINE_NUMBER(290);
	frame[7].f = ((frame[7].f) - (frame[9].f));
	}
label_11:;
	{
	LINE_NUMBER(292);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(293);
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	frame[9].f = (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height))));
	LINE_NUMBER(294);
	frame[6].f = ((frame[6].f) - (frame[9].f));
	LINE_NUMBER(295);
	frame[8].f = ((frame[8].f) + (frame[9].f));
	}
label_10:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(300);
	frame[10].f = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits);
	LINE_NUMBER(302);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (jint(2)))) = (frame[2].f);
	LINE_NUMBER(303);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (jint(3)))) = (frame[5].f);
	LINE_NUMBER(304);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (jint(4)))) = (frame[6].f);
	LINE_NUMBER(305);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (jint(5)))) = (frame[10].f);
	LINE_NUMBER(307);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (8))) = (frame[2].f);
	LINE_NUMBER(308);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (9))) = (frame[5].f);
	LINE_NUMBER(309);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (10))) = (frame[8].f);
	LINE_NUMBER(310);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (11))) = (frame[10].f);
	LINE_NUMBER(312);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (14))) = (frame[2].f);
	LINE_NUMBER(313);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (15))) = (frame[7].f);
	LINE_NUMBER(314);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (16))) = (frame[8].f);
	LINE_NUMBER(315);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (17))) = (frame[10].f);
	LINE_NUMBER(317);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (20))) = (frame[2].f);
	LINE_NUMBER(318);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (21))) = (frame[7].f);
	LINE_NUMBER(319);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (22))) = (frame[6].f);
	LINE_NUMBER(320);
	ARRAY_ACCESS(jfloat, (frame[9].o), (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) + (23))) = (frame[10].f);
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_idx) + (24));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx) - (24));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:set", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(328);
	frame[7].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(329);
	frame[8].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(331);
	frame[10].f = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits);
	LINE_NUMBER(332);
	ARRAY_ACCESS(jfloat, (frame[9].o), (frame[1].i)) = (frame[2].f);
	LINE_NUMBER(333);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(1)))) = (frame[3].f);
	LINE_NUMBER(334);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(2)))) = (frame[6].f);
	LINE_NUMBER(335);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (jint(5)))) = (frame[10].f);
	LINE_NUMBER(337);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (6))) = (frame[2].f);
	LINE_NUMBER(338);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (7))) = (frame[8].f);
	LINE_NUMBER(339);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (8))) = (frame[6].f);
	LINE_NUMBER(340);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (11))) = (frame[10].f);
	LINE_NUMBER(342);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (12))) = (frame[7].f);
	LINE_NUMBER(343);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (13))) = (frame[8].f);
	LINE_NUMBER(344);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (14))) = (frame[6].f);
	LINE_NUMBER(345);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (17))) = (frame[10].f);
	LINE_NUMBER(347);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (18))) = (frame[7].f);
	LINE_NUMBER(348);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (19))) = (frame[3].f);
	LINE_NUMBER(349);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (20))) = (frame[6].f);
	LINE_NUMBER(350);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[1].i) + (23))) = (frame[10].f);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:prepareVertices", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(354);
	frame[5].f = ((frame[1].f) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth));
	LINE_NUMBER(355);
	frame[6].f = (((frame[1].f) + (frame[3].f)) - ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth));
	LINE_NUMBER(356);
	frame[7].f = ((frame[2].f) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight));
	LINE_NUMBER(357);
	frame[8].f = (((frame[2].f) + (frame[4].f)) - ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight));
	LINE_NUMBER(358);
	clinit_arc_graphics_g2d_NinePatch(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_NinePatch_tmpDrawColor;
	sp[1].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[9].f = temp0;
	LINE_NUMBER(360);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft) == (jint(-1))) goto label_6;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomLeft), (frame[1].f), (frame[2].f), ((frame[5].f) - (frame[1].f)), ((frame[7].f) - (frame[2].f)), (frame[9].f));
	}
label_6:;
	{
	LINE_NUMBER(361);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter) == (jint(-1))) goto label_7;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomCenter), (frame[5].f), (frame[2].f), ((frame[6].f) - (frame[5].f)), ((frame[7].f) - (frame[2].f)), (frame[9].f));
	}
label_7:;
	{
	LINE_NUMBER(362);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight) == (jint(-1))) goto label_8;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomRight), (frame[6].f), (frame[2].f), (((frame[1].f) + (frame[3].f)) - (frame[6].f)), ((frame[7].f) - (frame[2].f)), (frame[9].f));
	}
label_8:;
	{
	LINE_NUMBER(363);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft) == (jint(-1))) goto label_9;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleLeft), (frame[1].f), (frame[7].f), ((frame[5].f) - (frame[1].f)), ((frame[8].f) - (frame[7].f)), (frame[9].f));
	}
label_9:;
	{
	LINE_NUMBER(364);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter) == (jint(-1))) goto label_10;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleCenter), (frame[5].f), (frame[7].f), ((frame[6].f) - (frame[5].f)), ((frame[8].f) - (frame[7].f)), (frame[9].f));
	}
label_10:;
	{
	LINE_NUMBER(365);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight) == (jint(-1))) goto label_11;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleRight), (frame[6].f), (frame[7].f), (((frame[1].f) + (frame[3].f)) - (frame[6].f)), ((frame[8].f) - (frame[7].f)), (frame[9].f));
	}
label_11:;
	{
	LINE_NUMBER(366);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft) == (jint(-1))) goto label_12;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topLeft), (frame[1].f), (frame[8].f), ((frame[5].f) - (frame[1].f)), (((frame[2].f) + (frame[4].f)) - (frame[8].f)), (frame[9].f));
	}
label_12:;
	{
	LINE_NUMBER(367);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter) == (jint(-1))) goto label_13;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topCenter), (frame[5].f), (frame[8].f), ((frame[6].f) - (frame[5].f)), (((frame[2].f) + (frame[4].f)) - (frame[8].f)), (frame[9].f));
	}
label_13:;
	{
	LINE_NUMBER(368);
	if (((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight) == (jint(-1))) goto label_14;
	}
	{
	M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float(ctx, (frame[0].o), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topRight), (frame[6].f), (frame[8].f), (((frame[1].f) + (frame[3].f)) - (frame[6].f)), (((frame[2].f) + (frame[4].f)) - (frame[8].f)), (frame[9].f));
	}
label_14:;
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(372);
	M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx));
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:draw", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(378);
	M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(379);
	frame[10].f = ((frame[1].f) + (frame[3].f));
	frame[11].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(380);
	frame[12].i = ((jint)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_idx);
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_vertices;
	frame[13].o = sp[0].o;
	LINE_NUMBER(382);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(383);
	frame[14].i = (jint(0));
	}
label_8:;
	{
	if ((frame[14].i) >= (frame[12].i)) goto label_9;
	}
	{
	LINE_NUMBER(384);
	frame[15].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[14].i))) - (frame[10].f)) * (frame[7].f));
	frame[16].f = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), ((frame[14].i) + (jint(1))))) - (frame[11].f)) * (frame[8].f));
	LINE_NUMBER(385);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[9].f));
	frame[17].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[9].f));
	frame[18].f = temp1;
	LINE_NUMBER(386);
	ARRAY_ACCESS(jfloat, (frame[13].o), (frame[14].i)) = ((((frame[17].f) * (frame[15].f)) - ((frame[18].f) * (frame[16].f))) + (frame[10].f));
	LINE_NUMBER(387);
	ARRAY_ACCESS(jfloat, (frame[13].o), ((frame[14].i) + (jint(1)))) = ((((frame[18].f) * (frame[15].f)) + ((frame[17].f) * (frame[16].f))) + (frame[11].f));
	LINE_NUMBER(383);
	INST_IINC(14, 6);
	goto label_8;
	}
label_9:;
	goto label_17;
label_6:;
	{
	LINE_NUMBER(389);
	if ((floatCompare((frame[7].f), (jfloat(1)), -1)) != 0) goto label_18;
	}
	{
	if ((floatCompare((frame[8].f), (jfloat(1)), -1)) == 0) goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(390);
	frame[14].i = (jint(0));
	}
label_19:;
	{
	if ((frame[14].i) >= (frame[12].i)) goto label_17;
	}
	{
	LINE_NUMBER(391);
	ARRAY_ACCESS(jfloat, (frame[13].o), (frame[14].i)) = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[14].i))) - (frame[10].f)) * (frame[7].f)) + (frame[10].f));
	LINE_NUMBER(392);
	ARRAY_ACCESS(jfloat, (frame[13].o), ((frame[14].i) + (jint(1)))) = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), ((frame[14].i) + (jint(1))))) - (frame[11].f)) * (frame[8].f)) + (frame[11].f));
	LINE_NUMBER(390);
	INST_IINC(14, 6);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, (frame[13].o), (jint(0)), (frame[12].i));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getLeftWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setLeftWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setLeftWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(416);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth = (frame[1].f);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getRightWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setRightWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setRightWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(425);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth = (frame[1].f);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getTopHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setTopHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setTopHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(434);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight = (frame[1].f);
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getBottomHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setBottomHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setBottomHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(443);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight = (frame[1].f);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getMiddleWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setMiddleWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setMiddleWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(456);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth = (frame[1].f);
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getMiddleHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setMiddleHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setMiddleHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(469);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight = (frame[1].f);
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getTotalWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getTotalWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return ((((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_leftWidth) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleWidth)) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_rightWidth));
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getTotalHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getTotalHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return ((((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_topHeight) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_middleHeight)) + ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_bottomHeight));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(485);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (frame[1].f);
	LINE_NUMBER(486);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (frame[2].f);
	LINE_NUMBER(487);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (frame[3].f);
	LINE_NUMBER(488);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (frame[4].f);
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getPadLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getLeftWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getLeftWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setPadLeft_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setPadLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(499);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft = (frame[1].f);
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getPadRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getRightWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getRightWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setPadRight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setPadRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(510);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight = (frame[1].f);
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getPadTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getTopHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getTopHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setPadTop_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setPadTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(521);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop = (frame[1].f);
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_NinePatch_getPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getPadBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom), (jfloat(-1.0f)), -1)) != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_NinePatch_getBottomHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_NinePatch_getBottomHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_setPadBottom_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:setPadBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(532);
	((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom = (frame[1].f);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_NinePatch_scale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_leftWidth) * (frame[1].f));
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_rightWidth) * (frame[1].f));
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_topHeight) * (frame[2].f));
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_bottomHeight) * (frame[2].f));
	LINE_NUMBER(541);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleWidth) * (frame[1].f));
	LINE_NUMBER(542);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_middleHeight) * (frame[2].f));
	LINE_NUMBER(543);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padLeft), (jfloat(-1.0f)), -1)) == 0) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padLeft = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padLeft) * (frame[1].f));
	}
label_7:;
	{
	LINE_NUMBER(544);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padRight), (jfloat(-1.0f)), -1)) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padRight = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padRight) * (frame[1].f));
	}
label_8:;
	{
	LINE_NUMBER(545);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padTop), (jfloat(-1.0f)), -1)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padTop = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padTop) * (frame[2].f));
	}
label_9:;
	{
	LINE_NUMBER(546);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_padBottom), (jfloat(-1.0f)), -1)) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padBottom = (((jfloat)((arc_graphics_g2d_NinePatch *) NULL_CHECK(sp[0].o))->F_padBottom) * (frame[2].f));
	}
label_10:;
	LINE_NUMBER(547);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_graphics_g2d_NinePatch *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_NinePatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_g2d_NinePatch_TOP_LEFT = jint(0);
	SF_arc_graphics_g2d_NinePatch_TOP_CENTER = jint(1);
	SF_arc_graphics_g2d_NinePatch_TOP_RIGHT = jint(2);
	SF_arc_graphics_g2d_NinePatch_MIDDLE_LEFT = jint(3);
	SF_arc_graphics_g2d_NinePatch_MIDDLE_CENTER = jint(4);
	SF_arc_graphics_g2d_NinePatch_MIDDLE_RIGHT = jint(5);
	SF_arc_graphics_g2d_NinePatch_BOTTOM_LEFT = jint(6);
	SF_arc_graphics_g2d_NinePatch_BOTTOM_CENTER = jint(7);
	SF_arc_graphics_g2d_NinePatch_BOTTOM_RIGHT = jint(8);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/NinePatch:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_NinePatch(ctx);
	{
	LINE_NUMBER(36);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_graphics_g2d_NinePatch(ctx);
	SF_arc_graphics_g2d_NinePatch_tmpDrawColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_NinePatch[] {
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
	(void *) M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int,
	(void *) M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_draw_float_float_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_NinePatch_getLeftWidth_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setLeftWidth_float,
	(void *) M_arc_graphics_g2d_NinePatch_getRightWidth_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setRightWidth_float,
	(void *) M_arc_graphics_g2d_NinePatch_getTopHeight_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setTopHeight_float,
	(void *) M_arc_graphics_g2d_NinePatch_getBottomHeight_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setBottomHeight_float,
	(void *) M_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setMiddleWidth_float,
	(void *) M_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setMiddleHeight_float,
	(void *) M_arc_graphics_g2d_NinePatch_getTotalWidth_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_getTotalHeight_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_getPadLeft_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setPadLeft_float,
	(void *) M_arc_graphics_g2d_NinePatch_getPadRight_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setPadRight_float,
	(void *) M_arc_graphics_g2d_NinePatch_getPadTop_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setPadTop_float,
	(void *) M_arc_graphics_g2d_NinePatch_getPadBottom_R_float,
	(void *) M_arc_graphics_g2d_NinePatch_setPadBottom_float,
	(void *) M_arc_graphics_g2d_NinePatch_scale_float_float,
	(void *) M_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture,
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
	{ "load", "([Larc/graphics/g2d/TextureRegion;)V" },
	{ "add", "(Larc/graphics/g2d/TextureRegion;FZZ)I" },
	{ "set", "(IFFFFF)V" },
	{ "prepareVertices", "(FFFF)V" },
	{ "draw", "(FFFF)V" },
	{ "draw", "(FFFFFFFFF)V" },
	{ "getColor", "()Larc/graphics/Color;" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "getMiddleWidth", "()F" },
	{ "setMiddleWidth", "(F)V" },
	{ "getMiddleHeight", "()F" },
	{ "setMiddleHeight", "(F)V" },
	{ "getTotalWidth", "()F" },
	{ "getTotalHeight", "()F" },
	{ "setPadding", "(FFFF)V" },
	{ "getPadLeft", "()F" },
	{ "setPadLeft", "(F)V" },
	{ "getPadRight", "()F" },
	{ "setPadRight", "(F)V" },
	{ "getPadTop", "()F" },
	{ "setPadTop", "(F)V" },
	{ "getPadBottom", "()F" },
	{ "setPadBottom", "(F)V" },
	{ "scale", "(FF)V" },
	{ "getTexture", "()Larc/graphics/Texture;" },
};

static FieldMetadata fields[] {
	{ "TOP_LEFT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_TOP_LEFT, "I", 25 },
	{ "TOP_CENTER", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_TOP_CENTER, "I", 25 },
	{ "TOP_RIGHT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_TOP_RIGHT, "I", 25 },
	{ "MIDDLE_LEFT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_MIDDLE_LEFT, "I", 25 },
	{ "MIDDLE_CENTER", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_MIDDLE_CENTER, "I", 25 },
	{ "MIDDLE_RIGHT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_MIDDLE_RIGHT, "I", 25 },
	{ "BOTTOM_LEFT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_BOTTOM_LEFT, "I", 25 },
	{ "BOTTOM_CENTER", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_BOTTOM_CENTER, "I", 25 },
	{ "BOTTOM_RIGHT", &class_int, (intptr_t) &SF_arc_graphics_g2d_NinePatch_BOTTOM_RIGHT, "I", 25 },
	{ "tmpDrawColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_g2d_NinePatch_tmpDrawColor, "Larc/graphics/Color;", 26 },
	{ "color", &class_arc_graphics_Color, offsetof(arc_graphics_g2d_NinePatch, F_color), "Larc/graphics/Color;", 18 },
	{ "texture", &class_arc_graphics_Texture, offsetof(arc_graphics_g2d_NinePatch, F_texture), "Larc/graphics/Texture;", 2 },
	{ "bottomLeft", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_bottomLeft), "I", 2 },
	{ "bottomCenter", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_bottomCenter), "I", 2 },
	{ "bottomRight", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_bottomRight), "I", 2 },
	{ "middleLeft", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_middleLeft), "I", 2 },
	{ "middleCenter", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_middleCenter), "I", 2 },
	{ "middleRight", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_middleRight), "I", 2 },
	{ "topLeft", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_topLeft), "I", 2 },
	{ "topCenter", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_topCenter), "I", 2 },
	{ "topRight", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_topRight), "I", 2 },
	{ "leftWidth", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_leftWidth), "F", 2 },
	{ "rightWidth", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_rightWidth), "F", 2 },
	{ "middleWidth", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_middleWidth), "F", 2 },
	{ "middleHeight", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_middleHeight), "F", 2 },
	{ "topHeight", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_topHeight), "F", 2 },
	{ "bottomHeight", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_bottomHeight), "F", 2 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(arc_graphics_g2d_NinePatch, F_vertices), "[F", 2 },
	{ "idx", &class_int, offsetof(arc_graphics_g2d_NinePatch, F_idx), "I", 2 },
	{ "padLeft", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_padLeft), "F", 2 },
	{ "padRight", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_padRight), "F", 2 },
	{ "padTop", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_padTop), "F", 2 },
	{ "padBottom", &class_float, offsetof(arc_graphics_g2d_NinePatch, F_padBottom), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_int_int_int_int, 0, "(Larc/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_int_int_int_int, 0, "(Larc/graphics/g2d/TextureRegion;IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_Texture_arc_graphics_Color, 0, "(Larc/graphics/Texture;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion_arc_graphics_Color, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_Array1_arc_graphics_g2d_TextureRegion, 0, "([Larc/graphics/g2d/TextureRegion;)V", 129 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch, 0, "(Larc/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_NinePatch_arc_graphics_g2d_NinePatch_arc_graphics_Color, 0, "(Larc/graphics/g2d/NinePatch;Larc/graphics/Color;)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_NinePatch_load_Array1_arc_graphics_g2d_TextureRegion, "([Larc/graphics/g2d/TextureRegion;)V", 2 },
	{ "add", (intptr_t) M_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int, VTABLE_arc_graphics_g2d_NinePatch_add_arc_graphics_g2d_TextureRegion_float_boolean_boolean_R_int, "(Larc/graphics/g2d/TextureRegion;FZZ)I", 2 },
	{ "set", (intptr_t) M_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float, VTABLE_arc_graphics_g2d_NinePatch_set_int_float_float_float_float_float, "(IFFFFF)V", 2 },
	{ "prepareVertices", (intptr_t) M_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float, VTABLE_arc_graphics_g2d_NinePatch_prepareVertices_float_float_float_float, "(FFFF)V", 2 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_NinePatch_draw_float_float_float_float, VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_NinePatch_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "getColor", (intptr_t) M_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color, VTABLE_arc_graphics_g2d_NinePatch_getColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color, VTABLE_arc_graphics_g2d_NinePatch_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "getLeftWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_getLeftWidth_R_float, VTABLE_arc_graphics_g2d_NinePatch_getLeftWidth_R_float, "()F", 1 },
	{ "setLeftWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_setLeftWidth_float, VTABLE_arc_graphics_g2d_NinePatch_setLeftWidth_float, "(F)V", 1 },
	{ "getRightWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_getRightWidth_R_float, VTABLE_arc_graphics_g2d_NinePatch_getRightWidth_R_float, "()F", 1 },
	{ "setRightWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_setRightWidth_float, VTABLE_arc_graphics_g2d_NinePatch_setRightWidth_float, "(F)V", 1 },
	{ "getTopHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_getTopHeight_R_float, VTABLE_arc_graphics_g2d_NinePatch_getTopHeight_R_float, "()F", 1 },
	{ "setTopHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_setTopHeight_float, VTABLE_arc_graphics_g2d_NinePatch_setTopHeight_float, "(F)V", 1 },
	{ "getBottomHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_getBottomHeight_R_float, VTABLE_arc_graphics_g2d_NinePatch_getBottomHeight_R_float, "()F", 1 },
	{ "setBottomHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_setBottomHeight_float, VTABLE_arc_graphics_g2d_NinePatch_setBottomHeight_float, "(F)V", 1 },
	{ "getMiddleWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float, VTABLE_arc_graphics_g2d_NinePatch_getMiddleWidth_R_float, "()F", 1 },
	{ "setMiddleWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_setMiddleWidth_float, VTABLE_arc_graphics_g2d_NinePatch_setMiddleWidth_float, "(F)V", 1 },
	{ "getMiddleHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float, VTABLE_arc_graphics_g2d_NinePatch_getMiddleHeight_R_float, "()F", 1 },
	{ "setMiddleHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_setMiddleHeight_float, VTABLE_arc_graphics_g2d_NinePatch_setMiddleHeight_float, "(F)V", 1 },
	{ "getTotalWidth", (intptr_t) M_arc_graphics_g2d_NinePatch_getTotalWidth_R_float, VTABLE_arc_graphics_g2d_NinePatch_getTotalWidth_R_float, "()F", 1 },
	{ "getTotalHeight", (intptr_t) M_arc_graphics_g2d_NinePatch_getTotalHeight_R_float, VTABLE_arc_graphics_g2d_NinePatch_getTotalHeight_R_float, "()F", 1 },
	{ "setPadding", (intptr_t) M_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float, VTABLE_arc_graphics_g2d_NinePatch_setPadding_float_float_float_float, "(FFFF)V", 1 },
	{ "getPadLeft", (intptr_t) M_arc_graphics_g2d_NinePatch_getPadLeft_R_float, VTABLE_arc_graphics_g2d_NinePatch_getPadLeft_R_float, "()F", 1 },
	{ "setPadLeft", (intptr_t) M_arc_graphics_g2d_NinePatch_setPadLeft_float, VTABLE_arc_graphics_g2d_NinePatch_setPadLeft_float, "(F)V", 1 },
	{ "getPadRight", (intptr_t) M_arc_graphics_g2d_NinePatch_getPadRight_R_float, VTABLE_arc_graphics_g2d_NinePatch_getPadRight_R_float, "()F", 1 },
	{ "setPadRight", (intptr_t) M_arc_graphics_g2d_NinePatch_setPadRight_float, VTABLE_arc_graphics_g2d_NinePatch_setPadRight_float, "(F)V", 1 },
	{ "getPadTop", (intptr_t) M_arc_graphics_g2d_NinePatch_getPadTop_R_float, VTABLE_arc_graphics_g2d_NinePatch_getPadTop_R_float, "()F", 1 },
	{ "setPadTop", (intptr_t) M_arc_graphics_g2d_NinePatch_setPadTop_float, VTABLE_arc_graphics_g2d_NinePatch_setPadTop_float, "(F)V", 1 },
	{ "getPadBottom", (intptr_t) M_arc_graphics_g2d_NinePatch_getPadBottom_R_float, VTABLE_arc_graphics_g2d_NinePatch_getPadBottom_R_float, "()F", 1 },
	{ "setPadBottom", (intptr_t) M_arc_graphics_g2d_NinePatch_setPadBottom_float, VTABLE_arc_graphics_g2d_NinePatch_setPadBottom_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_arc_graphics_g2d_NinePatch_scale_float_float, VTABLE_arc_graphics_g2d_NinePatch_scale_float_float, "(FF)V", 1 },
	{ "getTexture", (intptr_t) M_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture, VTABLE_arc_graphics_g2d_NinePatch_getTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_NinePatch, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_NinePatch{
		.nativeName = (intptr_t) "arc/graphics/g2d/NinePatch",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_NinePatch),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_NinePatch,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_NinePatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_NinePatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 33,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_NinePatch = registerClass(&class_arc_graphics_g2d_NinePatch);

}
