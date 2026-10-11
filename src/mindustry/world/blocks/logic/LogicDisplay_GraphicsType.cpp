#include "mindustry/world/blocks/logic/LogicDisplay_GraphicsType.h"
#include "mindustry/world/blocks/logic/LogicDisplay_GraphicsType.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all;
jobject SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES;

void mark_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all, mark, depth + 1);
		if (SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_LogicDisplay$GraphicsType *) object;
}

jobject SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$GraphicsType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	{
	LINE_NUMBER(319);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_valueOf_java_lang_String_R_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$GraphicsType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$GraphicsType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(319);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$GraphicsType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (16));
	jint temp0 = jint(0);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$GraphicsType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	{
	LINE_NUMBER(320);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"clear"_j))), (jint(0)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear = sp[0].o;
	LINE_NUMBER(321);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"color"_j))), (jint(1)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color = sp[0].o;
	LINE_NUMBER(323);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"col"_j))), (jint(2)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col = sp[0].o;
	LINE_NUMBER(324);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stroke"_j))), (jint(3)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke = sp[0].o;
	LINE_NUMBER(325);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"line"_j))), (jint(4)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line = sp[0].o;
	LINE_NUMBER(326);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rect"_j))), (jint(5)));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect = sp[0].o;
	LINE_NUMBER(327);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lineRect"_j))), (6));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect = sp[0].o;
	LINE_NUMBER(328);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"poly"_j))), (7));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly = sp[0].o;
	LINE_NUMBER(329);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linePoly"_j))), (8));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly = sp[0].o;
	LINE_NUMBER(330);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"triangle"_j))), (9));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle = sp[0].o;
	LINE_NUMBER(331);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"image"_j))), (10));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image = sp[0].o;
	LINE_NUMBER(333);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"print"_j))), (11));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print = sp[0].o;
	LINE_NUMBER(334);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"translate"_j))), (12));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate = sp[0].o;
	LINE_NUMBER(335);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scale"_j))), (13));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale = sp[0].o;
	LINE_NUMBER(336);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rotate"_j))), (14));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate = sp[0].o;
	LINE_NUMBER(337);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);
	init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reset"_j))), (15));
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset = sp[0].o;
	LINE_NUMBER(319);
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES = sp[0].o;
	LINE_NUMBER(340);
	sp[0].o = (jobject)SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(ctx);
	SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_LogicDisplay$GraphicsType[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "clear", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_clear, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "color", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_color, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "col", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_col, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "stroke", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_stroke, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "line", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_line, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "rect", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rect, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "lineRect", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_lineRect, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "poly", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_poly, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "linePoly", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_linePoly, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "triangle", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_triangle, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "image", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_image, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "print", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_print, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "translate", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_translate, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "scale", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_scale, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "rotate", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_rotate, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "reset", &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_reset, "Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 16409 },
	{ "all", getArrayClass(&class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 1), (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_all, "[Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 1), (intptr_t) &SF_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$VALUES, "[Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 0, "()[Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_valueOf_java_lang_String_R_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 0, "(Ljava/lang/String;)Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_blocks_logic_LogicDisplay$GraphicsType_$values_R_Array1_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 0, "()[Lmindustry/world/blocks/logic/LogicDisplay$GraphicsType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicDisplay$GraphicsType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_blocks_logic_LogicDisplay$GraphicsType),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicDisplay$GraphicsType,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicDisplay$GraphicsType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicDisplay$GraphicsType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicDisplay,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicDisplay$GraphicsType = registerClass(&class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType);

}

