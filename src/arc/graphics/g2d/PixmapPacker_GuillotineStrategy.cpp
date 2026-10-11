#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/Structs.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_GuillotinePage.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_invoke_arc_func_Intf_0.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "arc/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy_Node.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/func/Intf.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker$GuillotineStrategy *) object;
}

void clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(697);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_invoke_arc_func_Intf_0(ctx);
		auto proxy = (arc_graphics_g2d_PixmapPacker$GuillotineStrategy_invoke_arc_func_Intf_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_invoke_arc_func_Intf_0);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy:pack", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(710);
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(711);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(717);
	frame[5].i = ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding);
	LINE_NUMBER(718);
	sp[0].o = frame[3].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) + (jfloat((frame[5].i))));
	LINE_NUMBER(719);
	sp[0].o = frame[3].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) + (jfloat((frame[5].i))));
	LINE_NUMBER(720);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[0].o = (jobject)M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(721);
	if ((frame[6].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(722);
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_allowMultiplePages) != 0) goto label_11;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed to fit sprites into one page"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(724);
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_arc_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(725);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(726);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[0].o = (jobject)M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(728);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Failed to pack sprite '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' of size "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_width))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_height))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" into page of size "_j))));
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[2].o))->F_rect;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[2].o))->F_rect;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(729);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_full = (jint(1));
	LINE_NUMBER(730);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jfloat temp2 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width) - (jfloat((frame[5].i)));
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp2, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height) - (jfloat((frame[5].i)))));
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(735);
	if (((jint)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_full) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(737);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(740);
	if (((jint)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_full) == 0) goto label_5;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width), -1)) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height), -1)) != 0) goto label_6;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width), 1)) < 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height), 1)) >= 0) goto label_8;
	}
label_7:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_leftChild = (jref) sp[1].o;
	LINE_NUMBER(745);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rightChild = (jref) sp[1].o;
	LINE_NUMBER(747);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	frame[3].i = ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width))) - (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width))));
	LINE_NUMBER(748);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	frame[4].i = ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height))) - (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height))));
	LINE_NUMBER(749);
	if ((frame[3].i) <= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(751);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(752);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(753);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(755);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(756);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(757);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(758);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height);
	goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(761);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(762);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(763);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height);
	LINE_NUMBER(765);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(766);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(767);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(768);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[1].o))->F_height) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height));
	}
label_22:;
	{
	LINE_NUMBER(771);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_lambda$sort$0_arc_graphics_g2d_PixmapRegion_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$GuillotineStrategy:lambda$sort$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(702);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy[] {
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
	(void *) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page,
	(void *) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
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
	{ "sort", "(Larc/struct/Seq;)V" },
	{ "pack", "(Larc/graphics/g2d/PixmapPacker;Ljava/lang/String;Larc/math/geom/Rect;)Larc/graphics/g2d/PixmapPacker$Page;" },
	{ "insert", "(Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;Larc/math/geom/Rect;)Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;" },
};

static jclass interfaces[] { &class_arc_graphics_g2d_PixmapPacker$PackStrategy, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage,
	&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
};

static FieldMetadata fields[] {
	{ "full", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy, F_full), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy, 0, "()V", 1 },
	{ "sort", (intptr_t) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_arc_struct_Seq, VTABLE_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, VTABLE_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, "(Larc/graphics/g2d/PixmapPacker;Ljava/lang/String;Larc/math/geom/Rect;)Larc/graphics/g2d/PixmapPacker$Page;", 1 },
	{ "insert", (intptr_t) M_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, VTABLE_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, "(Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;Larc/math/geom/Rect;)Larc/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;", 2 },
	{ "lambda$sort$0", (intptr_t) SM_arc_graphics_g2d_PixmapPacker$GuillotineStrategy_lambda$sort$0_arc_graphics_g2d_PixmapRegion_R_int, 0, "(Larc/graphics/g2d/PixmapRegion;)I", 4106 },
};

Class class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$GuillotineStrategy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$GuillotineStrategy),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$GuillotineStrategy = registerClass(&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy);

}

