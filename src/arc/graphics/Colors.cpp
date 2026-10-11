#include "arc/graphics/Colors.h"
#include "arc/graphics/Colors.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/OrderedMap.h"
#include "arc/graphics/Colors_invoke_arc_func_Cons2_0.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons2.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"

extern "C" {

jobject SF_arc_graphics_Colors_map;

void mark_arc_graphics_Colors(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Colors_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Colors_map)->clazz)->markFunction)((jobject) SF_arc_graphics_Colors_map, mark, depth + 1);
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
	auto self = (arc_graphics_Colors *) object;
}

void init_arc_graphics_Colors(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Colors_getColors_R_arc_struct_OrderedMap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:getColors", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(49);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Colors_reset(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	{
	LINE_NUMBER(54);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	((func_arc_struct_OrderedMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(55);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CLEAR"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_clear;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(56);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BLACK"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_black;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(58);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"WHITE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(59);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LIGHT_GRAY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(60);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GRAY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DARK_GRAY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_darkGray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LIGHT_GREY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(63);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GREY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_gray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(64);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DARK_GREY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_darkGray;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BLUE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_royal;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(67);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"NAVY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_navy;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(68);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ROYAL"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_royal;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(69);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SLATE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_slate;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(70);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SKY"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_sky;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CYAN"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_cyan;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"TEAL"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_teal;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(74);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GREEN"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"38d667"_j))));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(75);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ACID"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_acid;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(76);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"LIME"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lime;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(77);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"FOREST"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_forest;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(78);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"OLIVE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_olive;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"YELLOW"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_yellow;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GOLD"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_gold;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(82);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"GOLDENROD"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_goldenrod;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(83);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ORANGE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_orange;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BROWN"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_brown;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"TAN"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_tan;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"BRICK"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_brick;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(89);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"RED"_j));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e55454"_j))));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(90);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SCARLET"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_scarlet;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(91);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CRIMSON"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_crimson;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(92);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"CORAL"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_coral;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(93);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"SALMON"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_salmon;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(94);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"PINK"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_pink;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(95);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAGENTA"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_magenta;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"PURPLE"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_purple;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"VIOLET"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_violet;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(99);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"MAROON"_j));
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_maroon;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(103);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_copy_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_copy_R_arc_struct_ObjectMap])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_arc_graphics_Colors_invoke_arc_func_Cons2_0(ctx);
		auto proxy = (arc_graphics_Colors_invoke_arc_func_Cons2_0 *) gcAlloc(ctx, &class_arc_graphics_Colors_invoke_arc_func_Cons2_0);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Colors_lambda$reset$0_java_lang_String_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:lambda$reset$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(103);
	clinit_arc_graphics_Colors(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Colors_map;
	sp[1].o = frame[0].o;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"_"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Colors(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Colors:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Colors(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_struct_OrderedMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[0].o);
	clinit_arc_graphics_Colors(ctx);
	SF_arc_graphics_Colors_map = sp[0].o;
	LINE_NUMBER(17);
	SM_arc_graphics_Colors_reset(ctx);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Colors[] {
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
	{ "map", &class_arc_struct_OrderedMap, (intptr_t) &SF_arc_graphics_Colors_map, "Larc/struct/OrderedMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Colors, 0, "()V", 2 },
	{ "getColors", (intptr_t) SM_arc_graphics_Colors_getColors_R_arc_struct_OrderedMap, 0, "()Larc/struct/OrderedMap;", 9 },
	{ "get", (intptr_t) SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color, 0, "(Ljava/lang/String;)Larc/graphics/Color;", 9 },
	{ "put", (intptr_t) SM_arc_graphics_Colors_put_java_lang_String_arc_graphics_Color_R_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)Larc/graphics/Color;", 9 },
	{ "reset", (intptr_t) SM_arc_graphics_Colors_reset, 0, "()V", 9 },
	{ "lambda$reset$0", (intptr_t) SM_arc_graphics_Colors_lambda$reset$0_java_lang_String_arc_graphics_Color, 0, "(Ljava/lang/String;Larc/graphics/Color;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Colors, 0, "()V", 8 },
};

Class class_arc_graphics_Colors{
		.nativeName = (intptr_t) "arc/graphics/Colors",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Colors),
		.classVtable = (intptr_t) vtable_arc_graphics_Colors,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Colors,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Colors,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Colors = registerClass(&class_arc_graphics_Colors);

}
