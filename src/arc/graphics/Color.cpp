#include "arc/graphics/Color.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jobject SF_arc_graphics_Color_white;
jobject SF_arc_graphics_Color_lightGray;
jobject SF_arc_graphics_Color_gray;
jobject SF_arc_graphics_Color_darkGray;
jobject SF_arc_graphics_Color_black;
jobject SF_arc_graphics_Color_clear;
jfloat SF_arc_graphics_Color_whiteFloatBits;
jfloat SF_arc_graphics_Color_clearFloatBits;
jfloat SF_arc_graphics_Color_blackFloatBits;
jint SF_arc_graphics_Color_whiteRgba;
jint SF_arc_graphics_Color_clearRgba;
jint SF_arc_graphics_Color_blackRgba;
jobject SF_arc_graphics_Color_blue;
jobject SF_arc_graphics_Color_navy;
jobject SF_arc_graphics_Color_royal;
jobject SF_arc_graphics_Color_slate;
jobject SF_arc_graphics_Color_sky;
jobject SF_arc_graphics_Color_cyan;
jobject SF_arc_graphics_Color_teal;
jobject SF_arc_graphics_Color_green;
jobject SF_arc_graphics_Color_acid;
jobject SF_arc_graphics_Color_lime;
jobject SF_arc_graphics_Color_forest;
jobject SF_arc_graphics_Color_olive;
jobject SF_arc_graphics_Color_yellow;
jobject SF_arc_graphics_Color_gold;
jobject SF_arc_graphics_Color_goldenrod;
jobject SF_arc_graphics_Color_orange;
jobject SF_arc_graphics_Color_brown;
jobject SF_arc_graphics_Color_tan;
jobject SF_arc_graphics_Color_brick;
jobject SF_arc_graphics_Color_red;
jobject SF_arc_graphics_Color_scarlet;
jobject SF_arc_graphics_Color_crimson;
jobject SF_arc_graphics_Color_coral;
jobject SF_arc_graphics_Color_salmon;
jobject SF_arc_graphics_Color_pink;
jobject SF_arc_graphics_Color_magenta;
jobject SF_arc_graphics_Color_purple;
jobject SF_arc_graphics_Color_violet;
jobject SF_arc_graphics_Color_maroon;
jobject SF_arc_graphics_Color_tmpHSV;

void mark_arc_graphics_Color(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Color_white)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_white)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_white, mark, depth + 1);
		if (SF_arc_graphics_Color_lightGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_lightGray)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_lightGray, mark, depth + 1);
		if (SF_arc_graphics_Color_gray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_gray)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_gray, mark, depth + 1);
		if (SF_arc_graphics_Color_darkGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_darkGray)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_darkGray, mark, depth + 1);
		if (SF_arc_graphics_Color_black)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_black)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_black, mark, depth + 1);
		if (SF_arc_graphics_Color_clear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_clear)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_clear, mark, depth + 1);
		if (SF_arc_graphics_Color_blue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_blue)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_blue, mark, depth + 1);
		if (SF_arc_graphics_Color_navy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_navy)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_navy, mark, depth + 1);
		if (SF_arc_graphics_Color_royal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_royal)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_royal, mark, depth + 1);
		if (SF_arc_graphics_Color_slate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_slate)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_slate, mark, depth + 1);
		if (SF_arc_graphics_Color_sky)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_sky)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_sky, mark, depth + 1);
		if (SF_arc_graphics_Color_cyan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_cyan)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_cyan, mark, depth + 1);
		if (SF_arc_graphics_Color_teal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_teal)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_teal, mark, depth + 1);
		if (SF_arc_graphics_Color_green)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_green)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_green, mark, depth + 1);
		if (SF_arc_graphics_Color_acid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_acid)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_acid, mark, depth + 1);
		if (SF_arc_graphics_Color_lime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_lime)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_lime, mark, depth + 1);
		if (SF_arc_graphics_Color_forest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_forest)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_forest, mark, depth + 1);
		if (SF_arc_graphics_Color_olive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_olive)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_olive, mark, depth + 1);
		if (SF_arc_graphics_Color_yellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_yellow)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_yellow, mark, depth + 1);
		if (SF_arc_graphics_Color_gold)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_gold)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_gold, mark, depth + 1);
		if (SF_arc_graphics_Color_goldenrod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_goldenrod)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_goldenrod, mark, depth + 1);
		if (SF_arc_graphics_Color_orange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_orange)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_orange, mark, depth + 1);
		if (SF_arc_graphics_Color_brown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_brown)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_brown, mark, depth + 1);
		if (SF_arc_graphics_Color_tan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_tan)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_tan, mark, depth + 1);
		if (SF_arc_graphics_Color_brick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_brick)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_brick, mark, depth + 1);
		if (SF_arc_graphics_Color_red)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_red)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_red, mark, depth + 1);
		if (SF_arc_graphics_Color_scarlet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_scarlet)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_scarlet, mark, depth + 1);
		if (SF_arc_graphics_Color_crimson)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_crimson)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_crimson, mark, depth + 1);
		if (SF_arc_graphics_Color_coral)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_coral)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_coral, mark, depth + 1);
		if (SF_arc_graphics_Color_salmon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_salmon)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_salmon, mark, depth + 1);
		if (SF_arc_graphics_Color_pink)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_pink)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_pink, mark, depth + 1);
		if (SF_arc_graphics_Color_magenta)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_magenta)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_magenta, mark, depth + 1);
		if (SF_arc_graphics_Color_purple)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_purple)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_purple, mark, depth + 1);
		if (SF_arc_graphics_Color_violet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_violet)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_violet, mark, depth + 1);
		if (SF_arc_graphics_Color_maroon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_maroon)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_maroon, mark, depth + 1);
		if (SF_arc_graphics_Color_tmpHSV)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Color_tmpHSV)->clazz)->markFunction)((jobject) SF_arc_graphics_Color_tmpHSV, mark, depth + 1);
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
	auto self = (arc_graphics_Color *) object;
}

void init_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(69);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Color_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(73);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(86);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(87);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(88);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].f);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Color_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(99);
	init_arc_graphics_Color_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1)));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(115);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_valueOf_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:valueOf", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (35)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(125);
	jint temp0 = (jint)SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(ctx, (frame[1].o), (frame[2].i), ((frame[2].i) + (jint(2))));
	frame[3].i = temp0;
	LINE_NUMBER(126);
	jint temp1 = (jint)SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(ctx, (frame[1].o), ((frame[2].i) + (jint(2))), ((frame[2].i) + (jint(4))));
	frame[4].i = temp1;
	LINE_NUMBER(127);
	jint temp2 = (jint)SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(ctx, (frame[1].o), ((frame[2].i) + (jint(4))), ((frame[2].i) + (6)));
	frame[5].i = temp2;
	LINE_NUMBER(128);
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if ((temp3 - (frame[2].i)) == (8)) goto label_7;
	}
	INST_SIPUSH(255);
	goto label_8;
label_7:;
	{
	jint temp0 = (jint)SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(ctx, (frame[1].o), ((frame[2].i) + (6)), ((frame[2].i) + (8)));
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[0].o), ((jfloat((frame[3].i))) / (jfloat(255.0f))), ((jfloat((frame[4].i))) / (jfloat(255.0f))), ((jfloat((frame[5].i))) / (jfloat(255.0f))), ((jfloat((frame[6].i))) / (jfloat(255.0f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:parseHex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(133);
	frame[3].i = (jint(0));
	LINE_NUMBER(134);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(136);
	jint temp1 = frame[3].i;
	jint temp2 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (16));
	sp[0].i = temp1;
	sp[1].i = temp2;
	sp += 2;
	if ((frame[4].i) != (frame[1].i)) goto label_6;
	}
	INST_BIPUSH(16);
	goto label_7;
label_6:;
	INST_ICONST(1);
label_7:;
	{
	sp -= 3;
	frame[3].i = (sp[0].i + (sp[1].i * sp[2].i));
	LINE_NUMBER(134);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_Color_toFloatBits_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toFloatBits", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(152);
	frame[4].i = (((((frame[3].i) << (24)) | ((frame[2].i) << (16))) | ((frame[1].i) << (8))) | (frame[0].i));
	LINE_NUMBER(153);
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toFloatBits", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(162);
	frame[4].i = (((((jint(((jfloat(255.0f)) * (frame[3].f)))) << (24)) | ((jint(((jfloat(255.0f)) * (frame[2].f)))) << (16))) | ((jint(((jfloat(255.0f)) * (frame[1].f)))) << (8))) | (jint(((jfloat(255.0f)) * (frame[0].f)))));
	LINE_NUMBER(163);
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toDoubleBits", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, ((jlong(temp0)) & (jlong(4294967295ll))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_arc_graphics_Color_toDoubleBits_int_int_int_int_R_double(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toDoubleBits", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(171);
	jdouble temp0 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, ((jfloat((frame[0].i))) / (jfloat(255.0f))), ((jfloat((frame[1].i))) / (jfloat(255.0f))), ((jfloat((frame[2].i))) / (jfloat(255.0f))), ((jfloat((frame[3].i))) / (jfloat(255.0f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:fromDouble", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[1].d));
	sp[0].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, sp[0].o, (jint(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_abgr_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:abgr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (((((frame[3].i) << (24)) | ((frame[2].i) << (16))) | ((frame[1].i) << (8))) | (frame[0].i));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_alpha_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:alpha", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(((frame[0].f) * (jfloat(255.0f)))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_luminanceAlpha_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:luminanceAlpha", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (((jint(((frame[0].f) * (jfloat(255.0f))))) << (8)) | (jint(((frame[1].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_rgb565_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb565", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return ((((jint(((frame[0].f) * (jfloat(31.0f))))) << (11)) | ((jint(((frame[1].f) * (jfloat(63.0f))))) << (jint(5)))) | (jint(((frame[2].f) * (jfloat(31.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_rgba4444_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba4444", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(15.0f))))) << (12)) | ((jint(((frame[1].f) * (jfloat(15.0f))))) << (8))) | ((jint(((frame[2].f) * (jfloat(15.0f))))) << (jint(4)))) | (jint(((frame[3].f) * (jfloat(15.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_rgb888_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb888", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return ((((jint(((frame[0].f) * (jfloat(255.0f))))) << (16)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[2].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba8888", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(255.0f))))) << (24)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (16))) | ((jint(((frame[2].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[3].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_argb8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:argb8888", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (((((jint(((frame[0].f) * (jfloat(255.0f))))) << (24)) | ((jint(((frame[1].f) * (jfloat(255.0f))))) << (16))) | ((jint(((frame[2].f) * (jfloat(255.0f))))) << (8))) | (jint(((frame[3].f) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_packRgba_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:packRgba", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (((((frame[0].i) << (24)) | ((frame[1].i) << (16))) | ((frame[2].i) << (8))) | (frame[3].i));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_rgb565_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb565", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return ((((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(31.0f))))) << (11)) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(63.0f))))) << (jint(5)))) | (jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(31.0f))))));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_rgba4444_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba4444", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(15.0f))))) << (12)) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(15.0f))))) << (8))) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(15.0f))))) << (jint(4)))) | (jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(15.0f))))));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_rgb888_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return ((((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (16)) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_rgba8888_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba8888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (24)) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (16))) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_argb8888_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:argb8888", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (((((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a) * (jfloat(255.0f))))) << (24)) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) * (jfloat(255.0f))))) << (16))) | ((jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) * (jfloat(255.0f))))) << (8))) | (jint((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) * (jfloat(255.0f))))));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_rgb565_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb565", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(250);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(63488)))) >> (11))))) / (jfloat(31.0f)));
	LINE_NUMBER(251);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (2016))) >> (jint(5)))))) / (jfloat(63.0f)));
	LINE_NUMBER(252);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(((frame[1].i) & (31)))) / (jfloat(31.0f)));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba4444", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(262);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(61440)))) >> (12))))) / (jfloat(15.0f)));
	LINE_NUMBER(263);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (3840))) >> (8))))) / (jfloat(15.0f)));
	LINE_NUMBER(264);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (240))) >> (jint(4)))))) / (jfloat(15.0f)));
	LINE_NUMBER(265);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat(((frame[1].i) & (15)))) / (jfloat(15.0f)));
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_rgb888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb888", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(275);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(276);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(277);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba8888", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(287);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(288);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(289);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(290);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_argb8888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:argb8888", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(300);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(301);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(302);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(303);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(((frame[1].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:abgr8888", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)SM_arc_graphics_Color_floatToIntColor_float_R_int(ctx, (frame[1].f));
	frame[2].i = temp0;
	LINE_NUMBER(312);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(313);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(314);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[2].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(315);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat(((frame[2].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_grays_float_R_arc_graphics_Color(jcontext ctx, jfloat param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:grays", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(321);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[0].f), (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_rgb_int_int_int_R_arc_graphics_Color(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgb", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(326);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[0].o, ((jfloat((frame[0].i))) / (jfloat(255.0f))), ((jfloat((frame[1].i))) / (jfloat(255.0f))), ((jfloat((frame[2].i))) / (jfloat(255.0f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_floatToIntColor_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:floatToIntColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	frame[1].i = temp0;
	LINE_NUMBER(336);
	frame[1].i = ((frame[1].i) | ((jint(((jfloat((bit_cast<jint>(bit_cast<uint32_t>((frame[1].i)) >> (24))))) * (jfloat(1.003937f))))) << (24)));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_Color_intToFloatColor_int_R_float(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:intToFloatColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(346);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((frame[0].i) & (jint(-16777217))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_rand_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rand", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_random_R_float(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, temp2, (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_randHue_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:randHue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(360.0f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, temp0, (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(355);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(1));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_diff_arc_graphics_Color_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:diff", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_hue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_hue_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_hue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_hue_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	jfloat temp3 = temp2 / (jfloat(360.0f));
	jfloat temp4 = (jfloat)((func_arc_graphics_Color_value_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_value_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)((func_arc_graphics_Color_value_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_value_R_float])(ctx, (frame[1].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp4 - temp5));
	jfloat temp7 = temp3 + temp6;
	jfloat temp8 = (jfloat)((func_arc_graphics_Color_saturation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_saturation_R_float])(ctx, (frame[0].o));
	jfloat temp9 = (jfloat)((func_arc_graphics_Color_saturation_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_saturation_R_float])(ctx, (frame[1].o));
	jfloat temp10 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp8 - temp9));
	popStackFrame(ctx);
	return (temp7 + temp10);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_rgba_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:rgba", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba8888_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r);
	LINE_NUMBER(375);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g);
	LINE_NUMBER(376);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b);
	LINE_NUMBER(377);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a);
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(392);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_mul_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[1].f));
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[1].f));
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[1].f));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_mula_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:mula", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[1].f));
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[1].f));
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[1].f));
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f));
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(430);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r));
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g));
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_clamp_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:clamp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(453);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (jfloat(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(454);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(1)), -1)) <= 0) goto label_3;
	}
	{
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (jfloat(1));
	}
label_3:;
	{
	LINE_NUMBER(456);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(457);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (jfloat(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(458);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(1)), -1)) <= 0) goto label_6;
	}
	{
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (jfloat(1));
	}
label_6:;
	{
	LINE_NUMBER(460);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(461);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (jfloat(0));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(462);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(1)), -1)) <= 0) goto label_9;
	}
	{
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (jfloat(1));
	}
label_9:;
	{
	LINE_NUMBER(464);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(465);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(0));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(466);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(1)), -1)) <= 0) goto label_12;
	}
	{
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (jfloat(1));
	}
label_12:;
	{
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(479);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(480);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(481);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(482);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (frame[4].f);
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(494);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(495);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[2].f);
	LINE_NUMBER(496);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_set_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_sum_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:sum", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return ((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) + ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)) + ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + (frame[1].f));
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + (frame[2].f));
	LINE_NUMBER(524);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + (frame[3].f));
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + (frame[4].f));
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + (frame[1].f));
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + (frame[2].f));
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + (frame[3].f));
	LINE_NUMBER(540);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:sub", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - (frame[1].f));
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - (frame[2].f));
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - (frame[3].f));
	LINE_NUMBER(555);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) - (frame[4].f));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:sub", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(567);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - (frame[1].f));
	LINE_NUMBER(568);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - (frame[2].f));
	LINE_NUMBER(569);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - (frame[3].f));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_inv_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:inv", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(575);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = ((jfloat(1)) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r));
	LINE_NUMBER(576);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = ((jfloat(1)) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	LINE_NUMBER(577);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = ((jfloat(1)) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_r_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:r", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(582);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[1].f);
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_g_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:g", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(587);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[1].f);
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_b_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:b", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(592);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[1].f);
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_a_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:a", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(597);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a = (frame[1].f);
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_mulA_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:mulA", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(602);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f));
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:mul", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(615);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * (frame[1].f));
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * (frame[2].f));
	LINE_NUMBER(617);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * (frame[3].f));
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[4].f));
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(630);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((frame[2].f) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))));
	LINE_NUMBER(631);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((frame[2].f) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))));
	LINE_NUMBER(632);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((frame[2].f) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))));
	LINE_NUMBER(633);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + ((frame[2].f) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))));
	LINE_NUMBER(634);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:lerp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(648);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) + ((frame[5].f) * ((frame[1].f) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))));
	LINE_NUMBER(649);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) + ((frame[5].f) * ((frame[2].f) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))));
	LINE_NUMBER(650);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) + ((frame[5].f) * ((frame[3].f) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))));
	LINE_NUMBER(651);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) + ((frame[5].f) * ((frame[4].f) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:premultiplyAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(658);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(659);
	sp[0].o = frame[0].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_dst_arc_graphics_Color_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(665);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_dst_float_float_float_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_hue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:hue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(673);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(674);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_saturation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:saturation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(679);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_value_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:value", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(683);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(684);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_hue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:hue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(688);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(689);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_saturation_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:saturation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(695);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(696);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[1].f);
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_value_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:value", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(703);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[1].f);
	LINE_NUMBER(704);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:shiftHue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(709);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(710);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(711);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:shiftSaturation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(717);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	jint temp0 = jint(1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(718);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:shiftValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(724);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	jint temp0 = jint(2);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_tmpHSV;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Color_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(731);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(732);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(733);
	frame[2].o = (checkCast(ctx, &class_arc_graphics_Color, (frame[1].o)));
	LINE_NUMBER(734);
	jint temp0 = (jint)((func_arc_graphics_Color_abgr_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_abgr_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_graphics_Color_abgr_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Color_abgr_R_int])(ctx, (frame[2].o));
	if (temp0 != temp1) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(739);
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(740);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), (jfloat(0)), -1)) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(741);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), (jfloat(0)), -1)) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(742);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a), (jfloat(0)), -1)) == 0) goto label_10;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(743);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_Color_toFloatBits_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toFloatBits", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(752);
	frame[1].i = (((((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))));
	LINE_NUMBER(753);
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble M_arc_graphics_Color_toDoubleBits_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toDoubleBits", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(757);
	jdouble temp0 = (jdouble)SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Color_abgr_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:abgr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	popStackFrame(ctx);
	return (((((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(770);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(771);
	((func_arc_graphics_Color_toString_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_toString_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(772);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Color_toString_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(776);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (((((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r)))) << (24)) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g)))) << (16))) | ((jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b)))) << (8))) | (jint(((jfloat(255.0f)) * ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_a))))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(777);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (jint(0)), (((jobject) createStringLiteral(ctx, u8"0"_j))));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(779);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:fromHsv", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(790);
	frame[4].f = (fmodf((((frame[1].f) / (jfloat(60.0f))) + (jfloat(6.0f))), (jfloat(6.0f))));
	LINE_NUMBER(791);
	frame[5].i = (jint((frame[4].f)));
	LINE_NUMBER(792);
	frame[6].f = ((frame[4].f) - (jfloat((frame[5].i))));
	LINE_NUMBER(793);
	frame[7].f = ((frame[3].f) * ((jfloat(1)) - (frame[2].f)));
	LINE_NUMBER(794);
	frame[8].f = ((frame[3].f) * ((jfloat(1)) - ((frame[2].f) * (frame[6].f))));
	LINE_NUMBER(795);
	frame[9].f = ((frame[3].f) * ((jfloat(1)) - ((frame[2].f) * ((jfloat(1)) - (frame[6].f)))));
	LINE_NUMBER(796);
	switch((frame[5].i)) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_9;
		case 3: goto label_10;
		case 4: goto label_11;
		default: goto label_12;
	}
	}
label_7:;
	{
	LINE_NUMBER(798);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[3].f);
	LINE_NUMBER(799);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[9].f);
	LINE_NUMBER(800);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[7].f);
	LINE_NUMBER(801);
	goto label_16;
	}
label_8:;
	{
	LINE_NUMBER(803);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[8].f);
	LINE_NUMBER(804);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[3].f);
	LINE_NUMBER(805);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[7].f);
	LINE_NUMBER(806);
	goto label_16;
	}
label_9:;
	{
	LINE_NUMBER(808);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[7].f);
	LINE_NUMBER(809);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[3].f);
	LINE_NUMBER(810);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[9].f);
	LINE_NUMBER(811);
	goto label_16;
	}
label_10:;
	{
	LINE_NUMBER(813);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[7].f);
	LINE_NUMBER(814);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[8].f);
	LINE_NUMBER(815);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(816);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(818);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[9].f);
	LINE_NUMBER(819);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[7].f);
	LINE_NUMBER(820);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[3].f);
	LINE_NUMBER(821);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(823);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r = (frame[3].f);
	LINE_NUMBER(824);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g = (frame[7].f);
	LINE_NUMBER(825);
	((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b = (frame[8].f);
	}
label_16:;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((func_arc_graphics_Color_clamp_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:fromHsv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(838);
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_toHsv_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:toHsv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(847);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	frame[2].f = temp1;
	LINE_NUMBER(848);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g));
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp2, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	frame[3].f = temp3;
	LINE_NUMBER(849);
	frame[4].f = ((frame[2].f) - (frame[3].f));
	LINE_NUMBER(850);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(851);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (jfloat(0));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(852);
	if ((floatCompare((frame[2].f), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), -1)) != 0) goto label_7;
	}
	{
	LINE_NUMBER(853);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (fmodf(((((jfloat(60.0f)) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b))) / (frame[4].f)) + (jfloat(360.0f))), (jfloat(360.0f))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(854);
	if ((floatCompare((frame[2].f), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), -1)) != 0) goto label_9;
	}
	{
	LINE_NUMBER(855);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((((jfloat(60.0f)) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r))) / (frame[4].f)) + (jfloat(120.0f)));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(857);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((((jfloat(60.0f)) * (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r) - ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g))) / (frame[4].f)) + (jfloat(240.0f)));
	}
label_6:;
	{
	LINE_NUMBER(860);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(861);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = ((jfloat(1)) - ((frame[3].f) / (frame[2].f)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(863);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (jfloat(0));
	}
label_13:;
	{
	LINE_NUMBER(866);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[2].f);
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:HSVtoRGB", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)SM_arc_graphics_Color_HSVtoRGB_float_float_float_R_arc_graphics_Color(ctx, (frame[0].f), (frame[1].f), (frame[2].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(881);
	((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a = (frame[3].f);
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:HSVtoRGB", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(893);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(894);
	sp[0].o = (jobject)SM_arc_graphics_Color_HSVtoRGB_float_float_float_arc_graphics_Color_R_arc_graphics_Color(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].o));
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:HSVtoRGB", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(908);
	if ((floatCompare((frame[0].f), (jfloat(360.0f)), -1)) != 0) goto label_1;
	}
	(sp++)->f = jfloat(359.0f);
	INST_FSTORE(0);
label_1:;
	{
	LINE_NUMBER(912);
	jdouble temp0 = jdouble(0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (jdouble(360.0)), (jdouble((frame[0].f))));
	jdouble temp2 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp0, temp1);
	frame[0].f = (jfloat(temp2));
	LINE_NUMBER(913);
	jdouble temp3 = jdouble(0);
	jdouble temp4 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (jdouble(100.0)), (jdouble((frame[1].f))));
	jdouble temp5 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp3, temp4);
	frame[1].f = (jfloat(temp5));
	LINE_NUMBER(914);
	jdouble temp6 = jdouble(0);
	jdouble temp7 = (jdouble)SM_java_lang_Math_min_double_double_R_double(ctx, (jdouble(100.0)), (jdouble((frame[2].f))));
	jdouble temp8 = (jdouble)SM_java_lang_Math_max_double_double_R_double(ctx, temp6, temp7);
	frame[2].f = (jfloat(temp8));
	LINE_NUMBER(915);
	frame[1].f = ((frame[1].f) / (jfloat(100.0f)));
	LINE_NUMBER(916);
	frame[2].f = ((frame[2].f) / (jfloat(100.0f)));
	LINE_NUMBER(917);
	frame[0].f = ((frame[0].f) / (jfloat(60.0f)));
	LINE_NUMBER(918);
	jint temp9 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (frame[0].f));
	frame[7].i = temp9;
	LINE_NUMBER(919);
	frame[8].f = ((frame[0].f) - (jfloat((frame[7].i))));
	LINE_NUMBER(920);
	frame[9].f = ((frame[2].f) * ((jfloat(1)) - (frame[1].f)));
	LINE_NUMBER(921);
	frame[10].f = ((frame[2].f) * ((jfloat(1)) - ((frame[1].f) * (frame[8].f))));
	LINE_NUMBER(922);
	frame[11].f = ((frame[2].f) * ((jfloat(1)) - ((frame[1].f) * ((jfloat(1)) - (frame[8].f)))));
	LINE_NUMBER(923);
	switch((frame[7].i)) {
		case 0: goto label_13;
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		case 4: goto label_17;
		default: goto label_18;
	}
	}
label_13:;
	{
	LINE_NUMBER(925);
	frame[4].f = (frame[2].f);
	LINE_NUMBER(926);
	frame[5].f = (frame[11].f);
	LINE_NUMBER(927);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(928);
	goto label_22;
	}
label_14:;
	{
	LINE_NUMBER(930);
	frame[4].f = (frame[10].f);
	LINE_NUMBER(931);
	frame[5].f = (frame[2].f);
	LINE_NUMBER(932);
	frame[6].f = (frame[9].f);
	LINE_NUMBER(933);
	goto label_22;
	}
label_15:;
	{
	LINE_NUMBER(935);
	frame[4].f = (frame[9].f);
	LINE_NUMBER(936);
	frame[5].f = (frame[2].f);
	LINE_NUMBER(937);
	frame[6].f = (frame[11].f);
	LINE_NUMBER(938);
	goto label_22;
	}
label_16:;
	{
	LINE_NUMBER(940);
	frame[4].f = (frame[9].f);
	LINE_NUMBER(941);
	frame[5].f = (frame[10].f);
	LINE_NUMBER(942);
	frame[6].f = (frame[2].f);
	LINE_NUMBER(943);
	goto label_22;
	}
label_17:;
	{
	LINE_NUMBER(945);
	frame[4].f = (frame[11].f);
	LINE_NUMBER(946);
	frame[5].f = (frame[9].f);
	LINE_NUMBER(947);
	frame[6].f = (frame[2].f);
	LINE_NUMBER(948);
	goto label_22;
	}
label_18:;
	{
	LINE_NUMBER(950);
	frame[4].f = (frame[2].f);
	LINE_NUMBER(951);
	frame[5].f = (frame[9].f);
	LINE_NUMBER(952);
	frame[6].f = (frame[10].f);
	}
label_22:;
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[3].o), (frame[4].f), (frame[5].f), (frame[6].f), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a));
	LINE_NUMBER(956);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_RGBtoHSV_arc_graphics_Color_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:RGBtoHSV", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)SM_arc_graphics_Color_RGBtoHSV_float_float_float_R_Array1_int(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[0].o)))->F_b));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Color_RGBtoHSV_float_float_float_R_Array1_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:RGBtoHSV", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(980);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (frame[2].f));
	frame[6].f = temp1;
	LINE_NUMBER(981);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, (frame[2].f));
	frame[7].f = temp3;
	LINE_NUMBER(982);
	frame[5].f = (frame[7].f);
	LINE_NUMBER(984);
	frame[8].f = ((frame[7].f) - (frame[6].f));
	LINE_NUMBER(986);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(987);
	frame[4].f = ((frame[8].f) / (frame[7].f));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(989);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(990);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(991);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[3].f));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	jint temp2 = jint(1);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[4].f));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	jint temp4 = jint(2);
	jint temp5 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[5].f));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(994);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(995);
	frame[3].f = (jfloat(0));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(998);
	if ((floatCompare((frame[0].f), (frame[7].f), -1)) != 0) goto label_15;
	}
	{
	LINE_NUMBER(999);
	frame[3].f = (((frame[1].f) - (frame[2].f)) / (frame[8].f));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1000);
	if ((floatCompare((frame[1].f), (frame[7].f), -1)) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1001);
	frame[3].f = ((jfloat(2)) + (((frame[2].f) - (frame[0].f)) / (frame[8].f)));
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(1003);
	frame[3].f = ((jfloat(4.0f)) + (((frame[0].f) - (frame[1].f)) / (frame[8].f)));
	}
label_14:;
	{
	LINE_NUMBER(1006);
	frame[3].f = ((frame[3].f) * (jfloat(60.0f)));
	LINE_NUMBER(1007);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(1008);
	frame[3].f = ((frame[3].f) + (jfloat(360.0f)));
	}
label_22:;
	{
	LINE_NUMBER(1010);
	frame[4].f = ((frame[4].f) * (jfloat(100.0f)));
	LINE_NUMBER(1011);
	frame[5].f = ((frame[5].f) * (jfloat(100.0f)));
	LINE_NUMBER(1013);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[3].f));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	jint temp2 = jint(1);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[4].f));
	ARRAY_ACCESS(jint, sp[0].o, temp2) = temp3;
	jint temp4 = jint(2);
	jint temp5 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (frame[5].f));
	ARRAY_ACCESS(jint, sp[0].o, temp4) = temp5;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_cpy_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1018);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:lerp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1022);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(1023);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((frame[2].f) * (jfloat(((frame[3].i) - (jint(1)))))))), (jint(0)), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))));
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(1024);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint((((frame[2].f) * (jfloat(((frame[3].i) - (jint(1)))))) + (jfloat(1))))), (jint(0)), ((frame[3].i) - (jint(1))));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp1));
	LINE_NUMBER(1026);
	frame[6].f = (((frame[2].f) * (jfloat(((frame[3].i) - (jint(1)))))) - (jfloat((jint(((frame[2].f) * (jfloat(((frame[3].i) - (jint(1)))))))))));
	LINE_NUMBER(1027);
	frame[7].f = ((jfloat(1)) - (frame[6].f));
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[0].o), ((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_r) * (frame[7].f)) + (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r) * (frame[6].f))), ((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_g) * (frame[7].f)) + (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g) * (frame[6].f))), ((((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[4].o)))->F_b) * (frame[7].f)) + (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b) * (frame[6].f))), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_clampf_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:clampf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(1032);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((frame[0].f))), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (255));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_ri_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:ri", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1037);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(-16777216)))) >> (24)));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_gi_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:gi", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(16711680)))) >> (16)));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_bi_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:bi", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(65280)))) >> (8)));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_ai_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:ai", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return ((frame[0].i) & (255));
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_muli_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:muli", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1058);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(-16777216)))) >> (24)));
	LINE_NUMBER(1059);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(16711680)))) >> (16)));
	LINE_NUMBER(1060);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(65280)))) >> (8)));
	LINE_NUMBER(1061);
	frame[5].i = ((frame[0].i) & (255));
	LINE_NUMBER(1062);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(-16777216)))) >> (24)));
	LINE_NUMBER(1063);
	frame[7].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(16711680)))) >> (16)));
	LINE_NUMBER(1064);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[1].i) & (jint(65280)))) >> (8)));
	LINE_NUMBER(1065);
	frame[9].i = ((frame[1].i) & (255));
	LINE_NUMBER(1066);
	jint temp0 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat(((frame[2].i) * (frame[6].i)))) / (jfloat(255.0f))));
	jint temp1 = temp0 << (24);
	jint temp2 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat(((frame[3].i) * (frame[7].i)))) / (jfloat(255.0f))));
	jint temp3 = temp1 | (temp2 << (16));
	jint temp4 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat(((frame[4].i) * (frame[8].i)))) / (jfloat(255.0f))));
	jint temp5 = temp3 | (temp4 << (8));
	jint temp6 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat(((frame[5].i) * (frame[9].i)))) / (jfloat(255.0f))));
	popStackFrame(ctx);
	return (temp5 | temp6);
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_Color_muli_int_float_R_int(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:muli", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1072);
	frame[2].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(-16777216)))) >> (24)));
	LINE_NUMBER(1073);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(16711680)))) >> (16)));
	LINE_NUMBER(1074);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[0].i) & (jint(65280)))) >> (8)));
	LINE_NUMBER(1075);
	frame[5].i = ((frame[0].i) & (255));
	LINE_NUMBER(1076);
	jint temp0 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat((frame[2].i))) * (frame[1].f)));
	jint temp1 = temp0 << (24);
	jint temp2 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat((frame[3].i))) * (frame[1].f)));
	jint temp3 = temp1 | (temp2 << (16));
	jint temp4 = (jint)SM_arc_graphics_Color_clampf_float_R_int(ctx, ((jfloat((frame[4].i))) * (frame[1].f)));
	popStackFrame(ctx);
	return ((temp3 | (temp4 << (8))) | (frame[5].i));
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Color(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Color:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Color(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_white = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-1077952513)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_lightGray = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(2139062271)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_gray = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(1061109759)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_darkGray = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_black = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_clear = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_whiteFloatBits = temp0;
	LINE_NUMBER(21);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_clear;
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_clearFloatBits = temp1;
	LINE_NUMBER(22);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	jfloat temp2 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_blackFloatBits = temp2;
	LINE_NUMBER(24);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jint temp3 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_whiteRgba = temp3;
	LINE_NUMBER(25);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_clear;
	jint temp4 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_clearRgba = temp4;
	LINE_NUMBER(26);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	jint temp5 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_blackRgba = temp5;
	LINE_NUMBER(28);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_blue = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0.5f)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_navy = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(1097458175)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_royal = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(1887473919)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_slate = sp[0].o;
	LINE_NUMBER(32);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-2016482305)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_sky = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_cyan = sp[0].o;
	LINE_NUMBER(34);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0.5f)), (jfloat(0.5f)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_teal = sp[0].o;
	LINE_NUMBER(36);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(16711935)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_green = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(2147418367)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_acid = sp[0].o;
	LINE_NUMBER(38);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(852308735)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_lime = sp[0].o;
	LINE_NUMBER(39);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(579543807)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_forest = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(1804477439)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_olive = sp[0].o;
	LINE_NUMBER(42);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-65281)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_yellow = sp[0].o;
	LINE_NUMBER(43);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-2686721)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_gold = sp[0].o;
	LINE_NUMBER(44);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-626712321)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_goldenrod = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-5963521)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_orange = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-1958407169)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_brown = sp[0].o;
	LINE_NUMBER(48);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-759919361)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_tan = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-1306385665)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_brick = sp[0].o;
	LINE_NUMBER(51);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-16776961)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_red = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-13361921)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_scarlet = sp[0].o;
	LINE_NUMBER(53);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-602653441)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_crimson = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-8433409)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_coral = sp[0].o;
	LINE_NUMBER(55);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-92245249)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_salmon = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-9849601)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_pink = sp[0].o;
	LINE_NUMBER(57);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_magenta = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-1608453889)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_purple = sp[0].o;
	LINE_NUMBER(60);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-293409025)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_violet = sp[0].o;
	LINE_NUMBER(61);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_int(ctx, sp[0].o, (jint(-1339006721)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_maroon = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(3)));
	clinit_arc_graphics_Color(ctx);
	SF_arc_graphics_Color_tmpHSV = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Color[] {
	(void *) M_arc_graphics_Color_hashCode_R_int,
	(void *) M_arc_graphics_Color_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_Color_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_rgb565_R_int,
	(void *) M_arc_graphics_Color_rgba4444_R_int,
	(void *) M_arc_graphics_Color_rgb888_R_int,
	(void *) M_arc_graphics_Color_rgba8888_R_int,
	(void *) M_arc_graphics_Color_argb8888_R_int,
	(void *) M_arc_graphics_Color_rgb565_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_rgb888_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_argb8888_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_rand_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_randHue_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_diff_arc_graphics_Color_R_float,
	(void *) M_arc_graphics_Color_rgba_R_int,
	(void *) M_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_mul_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_mula_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_clamp_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_set_int_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_sum_R_float,
	(void *) M_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_inv_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_r_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_g_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_b_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_a_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_mulA_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_dst_arc_graphics_Color_R_float,
	(void *) M_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_hue_R_float,
	(void *) M_arc_graphics_Color_saturation_R_float,
	(void *) M_arc_graphics_Color_value_R_float,
	(void *) M_arc_graphics_Color_hue_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_saturation_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_value_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_toFloatBits_R_float,
	(void *) M_arc_graphics_Color_toDoubleBits_R_double,
	(void *) M_arc_graphics_Color_abgr_R_int,
	(void *) M_arc_graphics_Color_toString_java_lang_StringBuilder,
	(void *) M_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_toHsv_Array1_float_R_Array1_float,
	(void *) M_arc_graphics_Color_cpy_R_arc_graphics_Color,
	(void *) M_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color,
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
	{ "fromDouble", "(D)Larc/graphics/Color;" },
	{ "rgb565", "()I" },
	{ "rgba4444", "()I" },
	{ "rgb888", "()I" },
	{ "rgba8888", "()I" },
	{ "argb8888", "()I" },
	{ "rgb565", "(I)Larc/graphics/Color;" },
	{ "rgba4444", "(I)Larc/graphics/Color;" },
	{ "rgb888", "(I)Larc/graphics/Color;" },
	{ "rgba8888", "(I)Larc/graphics/Color;" },
	{ "argb8888", "(I)Larc/graphics/Color;" },
	{ "abgr8888", "(F)Larc/graphics/Color;" },
	{ "rand", "()Larc/graphics/Color;" },
	{ "randHue", "()Larc/graphics/Color;" },
	{ "diff", "(Larc/graphics/Color;)F" },
	{ "rgba", "()I" },
	{ "set", "(Larc/graphics/Color;)Larc/graphics/Color;" },
	{ "set", "(Larc/math/geom/Vec3;)Larc/graphics/Color;" },
	{ "mul", "(Larc/graphics/Color;)Larc/graphics/Color;" },
	{ "mul", "(F)Larc/graphics/Color;" },
	{ "mula", "(F)Larc/graphics/Color;" },
	{ "add", "(Larc/graphics/Color;)Larc/graphics/Color;" },
	{ "sub", "(Larc/graphics/Color;)Larc/graphics/Color;" },
	{ "clamp", "()Larc/graphics/Color;" },
	{ "set", "(FFFF)Larc/graphics/Color;" },
	{ "set", "(FFF)Larc/graphics/Color;" },
	{ "set", "(I)Larc/graphics/Color;" },
	{ "sum", "()F" },
	{ "add", "(FFFF)Larc/graphics/Color;" },
	{ "add", "(FFF)Larc/graphics/Color;" },
	{ "sub", "(FFFF)Larc/graphics/Color;" },
	{ "sub", "(FFF)Larc/graphics/Color;" },
	{ "inv", "()Larc/graphics/Color;" },
	{ "r", "(F)Larc/graphics/Color;" },
	{ "g", "(F)Larc/graphics/Color;" },
	{ "b", "(F)Larc/graphics/Color;" },
	{ "a", "(F)Larc/graphics/Color;" },
	{ "mulA", "(F)Larc/graphics/Color;" },
	{ "mul", "(FFFF)Larc/graphics/Color;" },
	{ "lerp", "(Larc/graphics/Color;F)Larc/graphics/Color;" },
	{ "lerp", "(FFFFF)Larc/graphics/Color;" },
	{ "premultiplyAlpha", "()Larc/graphics/Color;" },
	{ "dst", "(Larc/graphics/Color;)F" },
	{ "write", "(Larc/graphics/Color;)Larc/graphics/Color;" },
	{ "hue", "()F" },
	{ "saturation", "()F" },
	{ "value", "()F" },
	{ "hue", "(F)Larc/graphics/Color;" },
	{ "saturation", "(F)Larc/graphics/Color;" },
	{ "value", "(F)Larc/graphics/Color;" },
	{ "shiftHue", "(F)Larc/graphics/Color;" },
	{ "shiftSaturation", "(F)Larc/graphics/Color;" },
	{ "shiftValue", "(F)Larc/graphics/Color;" },
	{ "toFloatBits", "()F" },
	{ "toDoubleBits", "()D" },
	{ "abgr", "()I" },
	{ "toString", "(Ljava/lang/StringBuilder;)V" },
	{ "fromHsv", "(FFF)Larc/graphics/Color;" },
	{ "fromHsv", "([F)Larc/graphics/Color;" },
	{ "toHsv", "([F)[F" },
	{ "cpy", "()Larc/graphics/Color;" },
	{ "lerp", "([Larc/graphics/Color;F)Larc/graphics/Color;" },
};

static FieldMetadata fields[] {
	{ "white", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_white, "Larc/graphics/Color;", 25 },
	{ "lightGray", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_lightGray, "Larc/graphics/Color;", 25 },
	{ "gray", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_gray, "Larc/graphics/Color;", 25 },
	{ "darkGray", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_darkGray, "Larc/graphics/Color;", 25 },
	{ "black", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_black, "Larc/graphics/Color;", 25 },
	{ "clear", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_clear, "Larc/graphics/Color;", 25 },
	{ "whiteFloatBits", &class_float, (intptr_t) &SF_arc_graphics_Color_whiteFloatBits, "F", 25 },
	{ "clearFloatBits", &class_float, (intptr_t) &SF_arc_graphics_Color_clearFloatBits, "F", 25 },
	{ "blackFloatBits", &class_float, (intptr_t) &SF_arc_graphics_Color_blackFloatBits, "F", 25 },
	{ "whiteRgba", &class_int, (intptr_t) &SF_arc_graphics_Color_whiteRgba, "I", 25 },
	{ "clearRgba", &class_int, (intptr_t) &SF_arc_graphics_Color_clearRgba, "I", 25 },
	{ "blackRgba", &class_int, (intptr_t) &SF_arc_graphics_Color_blackRgba, "I", 25 },
	{ "blue", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_blue, "Larc/graphics/Color;", 25 },
	{ "navy", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_navy, "Larc/graphics/Color;", 25 },
	{ "royal", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_royal, "Larc/graphics/Color;", 25 },
	{ "slate", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_slate, "Larc/graphics/Color;", 25 },
	{ "sky", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_sky, "Larc/graphics/Color;", 25 },
	{ "cyan", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_cyan, "Larc/graphics/Color;", 25 },
	{ "teal", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_teal, "Larc/graphics/Color;", 25 },
	{ "green", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_green, "Larc/graphics/Color;", 25 },
	{ "acid", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_acid, "Larc/graphics/Color;", 25 },
	{ "lime", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_lime, "Larc/graphics/Color;", 25 },
	{ "forest", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_forest, "Larc/graphics/Color;", 25 },
	{ "olive", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_olive, "Larc/graphics/Color;", 25 },
	{ "yellow", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_yellow, "Larc/graphics/Color;", 25 },
	{ "gold", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_gold, "Larc/graphics/Color;", 25 },
	{ "goldenrod", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_goldenrod, "Larc/graphics/Color;", 25 },
	{ "orange", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_orange, "Larc/graphics/Color;", 25 },
	{ "brown", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_brown, "Larc/graphics/Color;", 25 },
	{ "tan", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_tan, "Larc/graphics/Color;", 25 },
	{ "brick", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_brick, "Larc/graphics/Color;", 25 },
	{ "red", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_red, "Larc/graphics/Color;", 25 },
	{ "scarlet", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_scarlet, "Larc/graphics/Color;", 25 },
	{ "crimson", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_crimson, "Larc/graphics/Color;", 25 },
	{ "coral", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_coral, "Larc/graphics/Color;", 25 },
	{ "salmon", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_salmon, "Larc/graphics/Color;", 25 },
	{ "pink", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_pink, "Larc/graphics/Color;", 25 },
	{ "magenta", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_magenta, "Larc/graphics/Color;", 25 },
	{ "purple", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_purple, "Larc/graphics/Color;", 25 },
	{ "violet", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_violet, "Larc/graphics/Color;", 25 },
	{ "maroon", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_Color_maroon, "Larc/graphics/Color;", 25 },
	{ "tmpHSV", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_Color_tmpHSV, "[F", 26 },
	{ "r", &class_float, offsetof(arc_graphics_Color, F_r), "F", 1 },
	{ "g", &class_float, offsetof(arc_graphics_Color, F_g), "F", 1 },
	{ "b", &class_float, offsetof(arc_graphics_Color, F_b), "F", 1 },
	{ "a", &class_float, offsetof(arc_graphics_Color, F_a), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Color, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Color_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Color_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Color_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Color_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 1 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color, 0, "(Ljava/lang/String;)Larc/graphics/Color;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Color_valueOf_arc_graphics_Color_java_lang_String_R_arc_graphics_Color, 0, "(Larc/graphics/Color;Ljava/lang/String;)Larc/graphics/Color;", 9 },
	{ "parseHex", (intptr_t) SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int, 0, "(Ljava/lang/String;II)I", 10 },
	{ "toFloatBits", (intptr_t) SM_arc_graphics_Color_toFloatBits_int_int_int_int_R_float, 0, "(IIII)F", 9 },
	{ "toFloatBits", (intptr_t) SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "toDoubleBits", (intptr_t) SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double, 0, "(FFFF)D", 9 },
	{ "toDoubleBits", (intptr_t) SM_arc_graphics_Color_toDoubleBits_int_int_int_int_R_double, 0, "(IIII)D", 9 },
	{ "fromDouble", (intptr_t) M_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color, VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color, "(D)Larc/graphics/Color;", 1 },
	{ "abgr", (intptr_t) SM_arc_graphics_Color_abgr_int_int_int_int_R_int, 0, "(IIII)I", 9 },
	{ "alpha", (intptr_t) SM_arc_graphics_Color_alpha_float_R_int, 0, "(F)I", 9 },
	{ "luminanceAlpha", (intptr_t) SM_arc_graphics_Color_luminanceAlpha_float_float_R_int, 0, "(FF)I", 9 },
	{ "rgb565", (intptr_t) SM_arc_graphics_Color_rgb565_float_float_float_R_int, 0, "(FFF)I", 9 },
	{ "rgba4444", (intptr_t) SM_arc_graphics_Color_rgba4444_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "rgb888", (intptr_t) SM_arc_graphics_Color_rgb888_float_float_float_R_int, 0, "(FFF)I", 9 },
	{ "rgba8888", (intptr_t) SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "argb8888", (intptr_t) SM_arc_graphics_Color_argb8888_float_float_float_float_R_int, 0, "(FFFF)I", 9 },
	{ "packRgba", (intptr_t) SM_arc_graphics_Color_packRgba_int_int_int_int_R_int, 0, "(IIII)I", 9 },
	{ "rgb565", (intptr_t) M_arc_graphics_Color_rgb565_R_int, VTABLE_arc_graphics_Color_rgb565_R_int, "()I", 1 },
	{ "rgba4444", (intptr_t) M_arc_graphics_Color_rgba4444_R_int, VTABLE_arc_graphics_Color_rgba4444_R_int, "()I", 1 },
	{ "rgb888", (intptr_t) M_arc_graphics_Color_rgb888_R_int, VTABLE_arc_graphics_Color_rgb888_R_int, "()I", 1 },
	{ "rgba8888", (intptr_t) M_arc_graphics_Color_rgba8888_R_int, VTABLE_arc_graphics_Color_rgba8888_R_int, "()I", 1 },
	{ "argb8888", (intptr_t) M_arc_graphics_Color_argb8888_R_int, VTABLE_arc_graphics_Color_argb8888_R_int, "()I", 1 },
	{ "rgb565", (intptr_t) M_arc_graphics_Color_rgb565_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_rgb565_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "rgba4444", (intptr_t) M_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "rgb888", (intptr_t) M_arc_graphics_Color_rgb888_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_rgb888_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "rgba8888", (intptr_t) M_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "argb8888", (intptr_t) M_arc_graphics_Color_argb8888_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_argb8888_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "abgr8888", (intptr_t) M_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "grays", (intptr_t) SM_arc_graphics_Color_grays_float_R_arc_graphics_Color, 0, "(F)Larc/graphics/Color;", 9 },
	{ "rgb", (intptr_t) SM_arc_graphics_Color_rgb_int_int_int_R_arc_graphics_Color, 0, "(III)Larc/graphics/Color;", 9 },
	{ "floatToIntColor", (intptr_t) SM_arc_graphics_Color_floatToIntColor_float_R_int, 0, "(F)I", 9 },
	{ "intToFloatColor", (intptr_t) SM_arc_graphics_Color_intToFloatColor_int_R_float, 0, "(I)F", 9 },
	{ "rand", (intptr_t) M_arc_graphics_Color_rand_R_arc_graphics_Color, VTABLE_arc_graphics_Color_rand_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "randHue", (intptr_t) M_arc_graphics_Color_randHue_R_arc_graphics_Color, VTABLE_arc_graphics_Color_randHue_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "diff", (intptr_t) M_arc_graphics_Color_diff_arc_graphics_Color_R_float, VTABLE_arc_graphics_Color_diff_arc_graphics_Color_R_float, "(Larc/graphics/Color;)F", 1 },
	{ "rgba", (intptr_t) M_arc_graphics_Color_rgba_R_int, VTABLE_arc_graphics_Color_rgba_R_int, "()I", 1 },
	{ "set", (intptr_t) M_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color, VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color, "(Larc/graphics/Color;)Larc/graphics/Color;", 1 },
	{ "set", (intptr_t) M_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color, VTABLE_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color, "(Larc/math/geom/Vec3;)Larc/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color, VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color, "(Larc/graphics/Color;)Larc/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_arc_graphics_Color_mul_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "mula", (intptr_t) M_arc_graphics_Color_mula_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_mula_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "add", (intptr_t) M_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color, VTABLE_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color, "(Larc/graphics/Color;)Larc/graphics/Color;", 1 },
	{ "sub", (intptr_t) M_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color, VTABLE_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color, "(Larc/graphics/Color;)Larc/graphics/Color;", 1 },
	{ "clamp", (intptr_t) M_arc_graphics_Color_clamp_R_arc_graphics_Color, VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "set", (intptr_t) M_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color, "(FFFF)Larc/graphics/Color;", 1 },
	{ "set", (intptr_t) M_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color, "(FFF)Larc/graphics/Color;", 1 },
	{ "set", (intptr_t) M_arc_graphics_Color_set_int_R_arc_graphics_Color, VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color, "(I)Larc/graphics/Color;", 1 },
	{ "sum", (intptr_t) M_arc_graphics_Color_sum_R_float, VTABLE_arc_graphics_Color_sum_R_float, "()F", 1 },
	{ "add", (intptr_t) M_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color, "(FFFF)Larc/graphics/Color;", 1 },
	{ "add", (intptr_t) M_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color, "(FFF)Larc/graphics/Color;", 1 },
	{ "sub", (intptr_t) M_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color, "(FFFF)Larc/graphics/Color;", 1 },
	{ "sub", (intptr_t) M_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color, "(FFF)Larc/graphics/Color;", 1 },
	{ "inv", (intptr_t) M_arc_graphics_Color_inv_R_arc_graphics_Color, VTABLE_arc_graphics_Color_inv_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "r", (intptr_t) M_arc_graphics_Color_r_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_r_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "g", (intptr_t) M_arc_graphics_Color_g_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_g_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "b", (intptr_t) M_arc_graphics_Color_b_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_b_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "a", (intptr_t) M_arc_graphics_Color_a_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "mulA", (intptr_t) M_arc_graphics_Color_mulA_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_mulA_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "mul", (intptr_t) M_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color, "(FFFF)Larc/graphics/Color;", 1 },
	{ "lerp", (intptr_t) M_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color, "(Larc/graphics/Color;F)Larc/graphics/Color;", 1 },
	{ "lerp", (intptr_t) M_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color, "(FFFFF)Larc/graphics/Color;", 1 },
	{ "premultiplyAlpha", (intptr_t) M_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color, VTABLE_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "dst", (intptr_t) M_arc_graphics_Color_dst_arc_graphics_Color_R_float, VTABLE_arc_graphics_Color_dst_arc_graphics_Color_R_float, "(Larc/graphics/Color;)F", 1 },
	{ "write", (intptr_t) M_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color, VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color, "(Larc/graphics/Color;)Larc/graphics/Color;", 1 },
	{ "hue", (intptr_t) M_arc_graphics_Color_hue_R_float, VTABLE_arc_graphics_Color_hue_R_float, "()F", 1 },
	{ "saturation", (intptr_t) M_arc_graphics_Color_saturation_R_float, VTABLE_arc_graphics_Color_saturation_R_float, "()F", 1 },
	{ "value", (intptr_t) M_arc_graphics_Color_value_R_float, VTABLE_arc_graphics_Color_value_R_float, "()F", 1 },
	{ "hue", (intptr_t) M_arc_graphics_Color_hue_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_hue_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "saturation", (intptr_t) M_arc_graphics_Color_saturation_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_saturation_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "value", (intptr_t) M_arc_graphics_Color_value_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_value_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "shiftHue", (intptr_t) M_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "shiftSaturation", (intptr_t) M_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "shiftValue", (intptr_t) M_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color, "(F)Larc/graphics/Color;", 1 },
	{ "equals", (intptr_t) M_arc_graphics_Color_equals_java_lang_Object_R_boolean, VTABLE_arc_graphics_Color_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_graphics_Color_hashCode_R_int, VTABLE_arc_graphics_Color_hashCode_R_int, "()I", 1 },
	{ "toFloatBits", (intptr_t) M_arc_graphics_Color_toFloatBits_R_float, VTABLE_arc_graphics_Color_toFloatBits_R_float, "()F", 1 },
	{ "toDoubleBits", (intptr_t) M_arc_graphics_Color_toDoubleBits_R_double, VTABLE_arc_graphics_Color_toDoubleBits_R_double, "()D", 1 },
	{ "abgr", (intptr_t) M_arc_graphics_Color_abgr_R_int, VTABLE_arc_graphics_Color_abgr_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_arc_graphics_Color_toString_R_java_lang_String, VTABLE_arc_graphics_Color_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_graphics_Color_toString_java_lang_StringBuilder, VTABLE_arc_graphics_Color_toString_java_lang_StringBuilder, "(Ljava/lang/StringBuilder;)V", 1 },
	{ "fromHsv", (intptr_t) M_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color, "(FFF)Larc/graphics/Color;", 1 },
	{ "fromHsv", (intptr_t) M_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color, "([F)Larc/graphics/Color;", 1 },
	{ "toHsv", (intptr_t) M_arc_graphics_Color_toHsv_Array1_float_R_Array1_float, VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float, "([F)[F", 1 },
	{ "HSVtoRGB", (intptr_t) SM_arc_graphics_Color_HSVtoRGB_float_float_float_float_R_arc_graphics_Color, 0, "(FFFF)Larc/graphics/Color;", 9 },
	{ "HSVtoRGB", (intptr_t) SM_arc_graphics_Color_HSVtoRGB_float_float_float_R_arc_graphics_Color, 0, "(FFF)Larc/graphics/Color;", 9 },
	{ "HSVtoRGB", (intptr_t) SM_arc_graphics_Color_HSVtoRGB_float_float_float_arc_graphics_Color_R_arc_graphics_Color, 0, "(FFFLarc/graphics/Color;)Larc/graphics/Color;", 9 },
	{ "RGBtoHSV", (intptr_t) SM_arc_graphics_Color_RGBtoHSV_arc_graphics_Color_R_Array1_int, 0, "(Larc/graphics/Color;)[I", 9 },
	{ "RGBtoHSV", (intptr_t) SM_arc_graphics_Color_RGBtoHSV_float_float_float_R_Array1_int, 0, "(FFF)[I", 9 },
	{ "cpy", (intptr_t) M_arc_graphics_Color_cpy_R_arc_graphics_Color, VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "lerp", (intptr_t) M_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color, VTABLE_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color, "([Larc/graphics/Color;F)Larc/graphics/Color;", 1 },
	{ "clampf", (intptr_t) SM_arc_graphics_Color_clampf_float_R_int, 0, "(F)I", 10 },
	{ "ri", (intptr_t) SM_arc_graphics_Color_ri_int_R_int, 0, "(I)I", 9 },
	{ "gi", (intptr_t) SM_arc_graphics_Color_gi_int_R_int, 0, "(I)I", 9 },
	{ "bi", (intptr_t) SM_arc_graphics_Color_bi_int_R_int, 0, "(I)I", 9 },
	{ "ai", (intptr_t) SM_arc_graphics_Color_ai_int_R_int, 0, "(I)I", 9 },
	{ "muli", (intptr_t) SM_arc_graphics_Color_muli_int_int_R_int, 0, "(II)I", 9 },
	{ "muli", (intptr_t) SM_arc_graphics_Color_muli_int_float_R_int, 0, "(IF)I", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Color, 0, "()V", 8 },
};

Class class_arc_graphics_Color{
		.nativeName = (intptr_t) "arc/graphics/Color",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Color),
		.classVtable = (intptr_t) vtable_arc_graphics_Color,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Color,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Color,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 46,
		.nativeFields = (intptr_t) fields,
		.methodCount = 103,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 73,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Color = registerClass(&class_arc_graphics_Color);

}
