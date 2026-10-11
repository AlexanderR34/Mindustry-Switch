#include "arc/graphics/g2d/GlyphLayout.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/Colors.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "arc/graphics/g2d/GlyphLayout_invoke_arc_func_Prov_3.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/GlyphLayout_invoke_arc_func_Prov_2.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/GlyphLayout_invoke_arc_func_Prov_1.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/util/pooling/Pool.h"
#include "arc/graphics/g2d/GlyphLayout_invoke_arc_func_Prov_0.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_graphics_g2d_GlyphLayout(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_GlyphLayout *) object;
	if (self->F_runs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runs)->clazz)->markFunction)((jobject) self->F_runs, mark, depth + 1);
	if (self->F_colorStack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorStack)->clazz)->markFunction)((jobject) self->F_colorStack, mark, depth + 1);
}

void clinit_arc_graphics_g2d_GlyphLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colorStack = (jref) sp[1].o;
	LINE_NUMBER(23);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_GlyphLayout_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colorStack = (jref) sp[1].o;
	LINE_NUMBER(23);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(31);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (frame[1].i);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colorStack = (jref) sp[1].o;
	LINE_NUMBER(23);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(35);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colorStack = (jref) sp[1].o;
	LINE_NUMBER(23);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(39);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].i), (frame[6].i));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(4)));
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colorStack = (jref) sp[1].o;
	LINE_NUMBER(23);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(44);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].o), (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_GlyphLayout_obtain_R_arc_graphics_g2d_GlyphLayout(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:obtain", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	{
	LINE_NUMBER(48);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_free(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:free", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:setText", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	sp[3].o = (jobject)((func_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, (jfloat(0)), (8), (jint(0)), (jobject(nullptr)));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:setText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, (frame[3].o), (frame[4].f), (frame[5].i), (frame[6].i), (jobject(nullptr)));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[45];
	auto stack = &frame[38];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:setText", 45 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[1].o)))->F_data;
	frame[10].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[9].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(79);
	frame[8].i = (jint(1));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(80);
	if ((floatCompare((frame[6].f), (((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_spaceXadvance) * (jfloat(3.0f))), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(81);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(83);
	if (((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_markupEnabled) == 0) goto label_6;
	}
	{
	if (((jint)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(85);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout$GlyphRun);
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[0].o, sp[1].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	frame[13].o = sp[0].o;
	LINE_NUMBER(87);
	((func_arc_util_pooling_Pool_freeAll_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq])(ctx, (frame[12].o), (frame[13].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[13].o));
	LINE_NUMBER(90);
	frame[14].f = (jfloat(0));
	frame[15].f = (jfloat(0));
	frame[16].f = (jfloat(0));
	LINE_NUMBER(91);
	frame[17].i = (jint(0));
	frame[18].i = (jint(0));
	LINE_NUMBER(92);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(94);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colorStack;
	frame[20].o = sp[0].o;
	LINE_NUMBER(95);
	frame[21].o = (frame[5].o);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[20].o), (frame[5].o));
	LINE_NUMBER(97);
	sp[0].o = ((jobject) &class_arc_graphics_Color);
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[0].o, sp[1].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(99);
	frame[23].i = (frame[3].i);
	}
label_23:;
	{
	LINE_NUMBER(103);
	frame[24].i = (jint(-1));
	LINE_NUMBER(104);
	frame[25].i = (jint(0));
	LINE_NUMBER(105);
	if ((frame[3].i) != (frame[4].i)) goto label_26;
	}
	{
	LINE_NUMBER(106);
	if ((frame[23].i) != (frame[4].i)) goto label_28;
	}
	goto label_29;
label_28:;
	{
	LINE_NUMBER(107);
	frame[24].i = (frame[4].i);
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, temp0);
	switch(temp1) {
		case 10: goto label_31;
		case 91: goto label_32;
		default: goto label_30;
	}
	}
label_31:;
	{
	LINE_NUMBER(112);
	frame[24].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(113);
	frame[25].i = (jint(1));
	LINE_NUMBER(114);
	goto label_30;
	}
label_32:;
	{
	LINE_NUMBER(117);
	if ((frame[11].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)M_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[22].o));
	frame[26].i = temp0;
	LINE_NUMBER(119);
	if ((frame[26].i) < 0) goto label_37;
	}
	{
	LINE_NUMBER(120);
	frame[24].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(121);
	frame[3].i = ((frame[3].i) + ((frame[26].i) + (jint(1))));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[20].o));
	frame[21].o = (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	goto label_30;
	}
label_37:;
	{
	LINE_NUMBER(123);
	if ((frame[26].i) != (-2)) goto label_30;
	}
	{
	LINE_NUMBER(124);
	INST_IINC(3, 1);
	LINE_NUMBER(125);
	goto label_23;
	}
label_30:;
	{
	LINE_NUMBER(132);
	if ((frame[24].i) == (jint(-1))) goto label_43;
	}
	{
	LINE_NUMBER(134);
	if ((frame[24].i) == (frame[23].i)) goto label_45;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[12].o));
	frame[26].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(138);
	frame[27].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_markupEnabled);
	LINE_NUMBER(139);
	if (((jint)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup) == 0) goto label_50;
	}
	{
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_markupEnabled = (jint(0));
	}
label_50:;
	{
	LINE_NUMBER(140);
	((func_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[10].o), (frame[26].o), (frame[2].o), (frame[23].i), (frame[24].i), (frame[19].o));
	LINE_NUMBER(141);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_markupEnabled = (frame[27].i);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_53;
	}
	{
	LINE_NUMBER(144);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, (frame[12].o), (frame[26].o));
	LINE_NUMBER(145);
	goto label_45;
	}
label_53:;
	{
	LINE_NUMBER(147);
	if ((frame[19].o) == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(148);
	jfloat temp0 = frame[14].f;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[19].o)))->F_fixedWidth) == 0) goto label_58;
	}
	{
	jfloat temp0 = (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[19].o)))->F_xadvance))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_scaleX);
	sp[0].f = temp0;
	sp += 1;
	goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(149);
	jfloat temp0 = ((jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[19].o)))->F_width) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[19].o)))->F_xoffset)))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_scaleX)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_padRight);
	sp[0].f = temp0;
	sp += 1;
	}
label_59:;
	INST_FSUB();
	INST_FSTORE(14);
label_56:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[19].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(152);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_x = (frame[14].f);
	LINE_NUMBER(153);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_y = (frame[15].f);
	LINE_NUMBER(154);
	if ((frame[25].i) != 0) goto label_63;
	}
	{
	if ((frame[24].i) != (frame[4].i)) goto label_64;
	}
label_63:;
	{
	M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[10].o), (frame[26].o));
	}
label_64:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[13].o), (frame[26].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_xAdvances;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[28].o = sp[0].o;
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_xAdvances;
	frame[29].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(159);
	if ((frame[8].i) != 0) goto label_68;
	}
	{
	LINE_NUMBER(160);
	frame[30].f = (jfloat(0));
	LINE_NUMBER(161);
	frame[31].i = (jint(0));
	}
label_71:;
	{
	if ((frame[31].i) >= (frame[29].i)) goto label_72;
	}
	{
	LINE_NUMBER(162);
	frame[30].f = ((frame[30].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (frame[31].i))));
	LINE_NUMBER(161);
	INST_IINC(31, 1);
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(163);
	frame[14].f = ((frame[14].f) + (frame[30].f));
	LINE_NUMBER(164);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_width = (frame[30].f);
	LINE_NUMBER(165);
	goto label_45;
	}
label_68:;
	{
	LINE_NUMBER(169);
	frame[14].f = ((frame[14].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(0)))));
	LINE_NUMBER(170);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_width = ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(0))));
	LINE_NUMBER(171);
	if ((frame[29].i) >= (jint(1))) goto label_79;
	}
	goto label_45;
label_79:;
	{
	LINE_NUMBER(172);
	frame[14].f = ((frame[14].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(1)))));
	LINE_NUMBER(173);
	sp[0].o = frame[26].o;
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(1)))));
	LINE_NUMBER(174);
	frame[30].i = (jint(2));
	}
label_82:;
	{
	if ((frame[30].i) >= (frame[29].i)) goto label_45;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[30].i) - (jint(1))));
	frame[31].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(176);
	frame[32].f = (((jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[31].o)))->F_width) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[31].o)))->F_xoffset)))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_scaleX)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_padRight));
	LINE_NUMBER(177);
	if ((floatCompare(((frame[14].f) + (frame[32].f)), (frame[6].f), 1)) > 0) goto label_86;
	}
	{
	LINE_NUMBER(179);
	frame[14].f = ((frame[14].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (frame[30].i))));
	LINE_NUMBER(180);
	sp[0].o = frame[26].o;
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (frame[30].i))));
	LINE_NUMBER(181);
	goto label_90;
	}
label_86:;
	{
	LINE_NUMBER(184);
	if ((frame[9].o) == nullptr) goto label_91;
	}
	{
	LINE_NUMBER(186);
	M_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool(ctx, (frame[0].o), (frame[10].o), (frame[26].o), (frame[6].f), (frame[9].o), (frame[30].i), (frame[12].o));
	LINE_NUMBER(187);
	frame[14].f = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_x) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_width));
	LINE_NUMBER(188);
	goto label_29;
	}
label_91:;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[30].i));
	frame[33].i = temp0;
	LINE_NUMBER(193);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_96;
	}
	INST_ILOAD(33);
	if ((--sp)->i == 0) goto label_97;
label_96:;
	{
	jint temp0 = frame[33].i;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_98;
	}
label_97:;
	{
	LINE_NUMBER(195);
	frame[33].i = ((frame[30].i) - (jint(1)));
	}
label_98:;
	{
	LINE_NUMBER(198);
	if ((frame[33].i) != 0) goto label_99;
	}
	{
	LINE_NUMBER(199);
	frame[34].o = (frame[26].o);
	LINE_NUMBER(200);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_width = (jfloat(0));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	frame[35].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_103:;
	{
	if ((frame[33].i) >= (frame[35].i)) goto label_104;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[33].i));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_106;
	}
	goto label_104;
label_106:;
	{
	LINE_NUMBER(203);
	INST_IINC(33, 1);
	goto label_103;
	}
label_104:;
	{
	LINE_NUMBER(205);
	if ((frame[33].i) <= 0) goto label_107;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	((func_arc_struct_Seq_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeRange_int_int])(ctx, sp[0].o, (jint(0)), ((frame[33].i) - (jint(1))));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_removeRange_int_int])(ctx, sp[0].o, (jint(1)), (frame[33].i));
	}
label_107:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_xAdvances;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_glyphs;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, temp0, (((jfloat((-((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_xoffset)))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_scaleX)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_padLeft)));
	LINE_NUMBER(211);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[13].o)))->F_size) <= (jint(1))) goto label_111;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[13].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[13].o)))->F_size) - (jint(2))));
	frame[35].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_glyphs;
	frame[36].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_114:;
	{
	LINE_NUMBER(215);
	if ((frame[36].i) <= 0) goto label_115;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[36].i));
	frame[37].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, (frame[10].o), (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[37].o)))->F_id))));
	if (temp0 != 0) goto label_118;
	}
	goto label_115;
label_118:;
	{
	LINE_NUMBER(218);
	sp[0].o = frame[35].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_xAdvances;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, ((frame[36].i) + (jint(1))));
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 - temp1);
	LINE_NUMBER(215);
	INST_IINC(36, -1);
	goto label_114;
	}
label_115:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_glyphs;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, ((frame[36].i) + (jint(1))));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_truncate_int])(ctx, sp[0].o, ((frame[36].i) + (jint(2))));
	LINE_NUMBER(222);
	M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[10].o), (frame[35].o));
	LINE_NUMBER(223);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[16].f), (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_x) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[35].o)))->F_width)));
	frame[16].f = temp0;
	LINE_NUMBER(224);
	goto label_111;
	}
label_99:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)M_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[10].o), (frame[26].o), (frame[12].o), (frame[33].i), (frame[30].i));
	frame[34].o = sp[0].o;
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[16].f), (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_x) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[26].o)))->F_width)));
	frame[16].f = temp0;
	LINE_NUMBER(228);
	if ((frame[34].o) != nullptr) goto label_126;
	}
	{
	LINE_NUMBER(229);
	frame[14].f = (jfloat(0));
	LINE_NUMBER(230);
	frame[15].f = ((frame[15].f) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_down));
	LINE_NUMBER(231);
	INST_IINC(17, 1);
	LINE_NUMBER(232);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(233);
	goto label_45;
	}
label_126:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[13].o), (frame[34].o));
	}
label_111:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[34].o)))->F_xAdvances;
	frame[29].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[34].o)))->F_xAdvances;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[28].o = sp[0].o;
	LINE_NUMBER(241);
	frame[14].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(0))));
	LINE_NUMBER(242);
	if ((frame[29].i) <= (jint(1))) goto label_135;
	}
	{
	frame[14].f = ((frame[14].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[28].o), (jint(1)))));
	}
label_135:;
	{
	LINE_NUMBER(243);
	sp[0].o = frame[34].o;
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width) + (frame[14].f));
	LINE_NUMBER(244);
	frame[15].f = ((frame[15].f) + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_down));
	LINE_NUMBER(245);
	INST_IINC(17, 1);
	LINE_NUMBER(246);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[34].o)))->F_x = (jfloat(0));
	LINE_NUMBER(247);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[34].o)))->F_y = (frame[15].f);
	LINE_NUMBER(248);
	frame[30].i = (jint(1));
	LINE_NUMBER(249);
	frame[26].o = (frame[34].o);
	LINE_NUMBER(250);
	frame[19].o = (jobject(nullptr));
	}
label_90:;
	{
	LINE_NUMBER(174);
	INST_IINC(30, 1);
	goto label_82;
	}
label_45:;
	{
	LINE_NUMBER(254);
	if ((frame[25].i) == 0) goto label_143;
	}
	{
	LINE_NUMBER(256);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[16].f), (frame[14].f));
	frame[16].f = temp0;
	LINE_NUMBER(257);
	frame[14].f = (jfloat(0));
	LINE_NUMBER(258);
	frame[26].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_down);
	LINE_NUMBER(259);
	if ((frame[24].i) != (frame[23].i)) goto label_148;
	}
	{
	LINE_NUMBER(260);
	frame[26].f = ((frame[26].f) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_blankLineScale));
	LINE_NUMBER(261);
	INST_IINC(18, 1);
	goto label_151;
	}
label_148:;
	LINE_NUMBER(263);
	INST_IINC(17, 1);
label_151:;
	{
	LINE_NUMBER(264);
	frame[15].f = ((frame[15].f) + (frame[26].f));
	LINE_NUMBER(265);
	frame[19].o = (jobject(nullptr));
	}
label_143:;
	{
	LINE_NUMBER(268);
	frame[23].i = (frame[3].i);
	LINE_NUMBER(269);
	frame[5].o = (frame[21].o);
	}
label_43:;
	LINE_NUMBER(271);
	goto label_23;
label_29:;
	{
	LINE_NUMBER(272);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[16].f), (frame[14].f));
	frame[16].f = temp0;
	LINE_NUMBER(274);
	frame[24].i = (jint(1));
	frame[25].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[20].o)))->F_size);
	}
label_156:;
	{
	if ((frame[24].i) >= (frame[25].i)) goto label_157;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = frame[22].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[20].o), (frame[24].i));
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Color, sp[1].o)));
	LINE_NUMBER(274);
	INST_IINC(24, 1);
	goto label_156;
	}
label_157:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[20].o));
	LINE_NUMBER(279);
	if (((frame[7].i) & (8)) != 0) goto label_161;
	}
	{
	LINE_NUMBER(280);
	if (((frame[7].i) & (jint(1))) == 0) goto label_163;
	}
	INST_ICONST(1);
	goto label_164;
label_163:;
	INST_ICONST(0);
label_164:;
	{
	sp -= 1;
	frame[24].i = sp[0].i;
	LINE_NUMBER(281);
	frame[25].f = (jfloat(0));
	frame[26].f = (jfloat(-2,147484e+09f));
	LINE_NUMBER(282);
	frame[27].i = (jint(0));
	frame[28].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[13].o)))->F_size);
	LINE_NUMBER(283);
	frame[29].i = (jint(0));
	}
label_170:;
	{
	if ((frame[29].i) >= (frame[28].i)) goto label_171;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[13].o), (frame[29].i));
	frame[30].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(285);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[30].o)))->F_y), (frame[26].f), -1)) == 0) goto label_174;
	}
	{
	LINE_NUMBER(286);
	frame[26].f = ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[30].o)))->F_y);
	LINE_NUMBER(287);
	frame[31].f = ((frame[6].f) - (frame[25].f));
	LINE_NUMBER(288);
	if ((frame[24].i) == 0) goto label_178;
	}
	{
	frame[31].f = ((frame[31].f) / (jfloat(2)));
	}
label_178:;
	{
	LINE_NUMBER(289);
	if ((frame[27].i) >= (frame[29].i)) goto label_179;
	}
	{
	LINE_NUMBER(290);
	sp[0].o = frame[13].o;
	jint temp0 = frame[27].i;
	INST_IINC(27, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	sp[0].o = checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x) + (frame[31].f));
	goto label_178;
	}
label_179:;
	{
	LINE_NUMBER(291);
	frame[25].f = (jfloat(0));
	}
label_174:;
	{
	LINE_NUMBER(293);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[25].f), (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[30].o)))->F_x) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[30].o)))->F_width)));
	frame[25].f = temp0;
	LINE_NUMBER(283);
	INST_IINC(29, 1);
	goto label_170;
	}
label_171:;
	{
	LINE_NUMBER(295);
	frame[29].f = ((frame[6].f) - (frame[25].f));
	LINE_NUMBER(296);
	if ((frame[24].i) == 0) goto label_183;
	}
	{
	frame[29].f = ((frame[29].f) / (jfloat(2)));
	}
label_183:;
	{
	LINE_NUMBER(297);
	if ((frame[27].i) >= (frame[28].i)) goto label_161;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = frame[13].o;
	jint temp0 = frame[27].i;
	INST_IINC(27, 1);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	sp[0].o = checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x) + (frame[29].f));
	goto label_183;
	}
label_161:;
	{
	LINE_NUMBER(301);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width = (frame[16].f);
	LINE_NUMBER(302);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height = ((((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_capHeight) - ((jfloat((frame[17].i))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_down))) - (((jfloat((frame[18].i))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_down)) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[10].o)))->F_blankLineScale)));
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:truncate", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(311);
	frame[8].i = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled);
	LINE_NUMBER(312);
	if (((jint)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup) == 0) goto label_3;
	}
	{
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[1].o;
	sp[1].o = frame[7].o;
	sp[2].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	((func_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, (jobject(nullptr)));
	LINE_NUMBER(314);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled = (frame[8].i);
	LINE_NUMBER(315);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(317);
	M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[7].o));
	LINE_NUMBER(318);
	frame[10].i = (jint(1));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	frame[11].i = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_7;
	}
	{
	LINE_NUMBER(319);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[10].i));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(318);
	INST_IINC(10, 1);
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(321);
	frame[3].f = ((frame[3].f) - (frame[9].f));
	LINE_NUMBER(324);
	frame[10].i = (jint(0));
	LINE_NUMBER(325);
	frame[11].f = ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_x);
	}
label_16:;
	{
	LINE_NUMBER(326);
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[10].i));
	frame[12].f = temp0;
	LINE_NUMBER(328);
	frame[11].f = ((frame[11].f) + (frame[12].f));
	LINE_NUMBER(329);
	if ((floatCompare((frame[11].f), (frame[3].f), -1)) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(330);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_width = (((frame[11].f) - ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_x)) - (frame[12].f));
	LINE_NUMBER(331);
	goto label_17;
	}
label_21:;
	{
	LINE_NUMBER(333);
	INST_IINC(10, 1);
	LINE_NUMBER(334);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(336);
	if ((frame[10].i) <= (jint(1))) goto label_25;
	}
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, ((frame[10].i) - (jint(1))));
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_truncate_int])(ctx, sp[0].o, (frame[10].i));
	LINE_NUMBER(340);
	M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	goto label_30;
	}
label_25:;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(347);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(348);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_30;
	}
	{
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (jint(0)));
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 + temp1);
	}
label_30:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(351);
	sp[0].o = frame[2].o;
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width) + (frame[9].f));
	LINE_NUMBER(353);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, (frame[6].o), (frame[7].o));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:wrap", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[6].o = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(363);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	frame[8].o = sp[0].o;
	LINE_NUMBER(366);
	frame[9].i = (frame[4].i);
	}
label_4:;
	{
	LINE_NUMBER(367);
	if ((frame[9].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), ((frame[9].i) - (jint(1))));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_7;
	}
	goto label_5;
label_7:;
	{
	LINE_NUMBER(367);
	INST_IINC(9, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(371);
	frame[10].i = (frame[4].i);
	}
label_8:;
	{
	LINE_NUMBER(372);
	if ((frame[10].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[10].i));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_11;
	}
	goto label_9;
label_11:;
	{
	LINE_NUMBER(372);
	INST_IINC(10, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(376);
	if ((frame[5].i) >= (frame[9].i)) goto label_12;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width;
	sp[1].o = frame[8].o;
	jint temp1 = frame[5].i;
	INST_IINC(5, 1);
	jfloat temp2 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, temp1);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 + temp2);
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(380);
	frame[11].i = ((frame[9].i) + (jint(1)));
	}
label_14:;
	{
	if ((frame[5].i) <= (frame[11].i)) goto label_15;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width;
	sp[1].o = frame[8].o;
	INST_IINC(5, -1);
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[1].o, (frame[5].i));
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 - temp1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(385);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(386);
	if ((frame[10].i) >= (frame[7].i)) goto label_18;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[3].o));
	frame[11].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_color;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_glyphs;
	frame[12].o = sp[0].o;
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq])(ctx, (frame[12].o), (frame[6].o), (jint(0)), (frame[9].i));
	LINE_NUMBER(392);
	((func_arc_struct_Seq_removeRange_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_removeRange_int_int])(ctx, (frame[6].o), (jint(0)), ((frame[10].i) - (jint(1))));
	LINE_NUMBER(393);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs = (jref) (frame[12].o);
	LINE_NUMBER(394);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_glyphs = (jref) (frame[6].o);
	LINE_NUMBER(396);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_xAdvances;
	frame[13].o = sp[0].o;
	LINE_NUMBER(397);
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int])(ctx, (frame[13].o), (frame[8].o), (jint(0)), ((frame[9].i) + (jint(1))));
	LINE_NUMBER(398);
	((func_arc_struct_FloatSeq_removeRange_int_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_FloatSeq_removeRange_int_int])(ctx, (frame[8].o), (jint(1)), (frame[10].i));
	LINE_NUMBER(399);
	sp[0].o = frame[8].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[6].o));
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, temp0, (((jfloat((-((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_xoffset)))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_scaleX)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_padLeft)));
	LINE_NUMBER(400);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances = (jref) (frame[13].o);
	LINE_NUMBER(401);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_xAdvances = (jref) (frame[8].o);
	LINE_NUMBER(402);
	goto label_33;
	}
label_18:;
	{
	LINE_NUMBER(404);
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, (frame[6].o), (frame[9].i));
	LINE_NUMBER(405);
	((func_arc_struct_FloatSeq_truncate_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_FloatSeq_truncate_int])(ctx, (frame[8].o), ((frame[9].i) + (jint(1))));
	}
label_33:;
	{
	LINE_NUMBER(408);
	if ((frame[9].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(410);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	goto label_38;
	}
label_35:;
	{
	LINE_NUMBER(413);
	M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_38:;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:adjustLastGlyph", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(421);
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_fixedWidth) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(422);
	frame[4].f = (((jfloat((((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_width) + ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[3].o)))->F_xoffset)))) * ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_scaleX)) - ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_padRight));
	LINE_NUMBER(423);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width;
	jfloat temp1 = frame[4].f;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	jfloat temp2 = (jfloat)((func_arc_struct_FloatSeq_peek_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_FloatSeq_peek_R_float])(ctx, sp[1].o);
	((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 + (temp1 - temp2));
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))), (frame[4].f));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:parseColorMarkup", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(428);
	if ((frame[2].i) != (frame[3].i)) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i));
	switch(temp0) {
		case 35: goto label_2;
		case 91: goto label_3;
		case 93: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(432);
	frame[5].i = (jint(0));
	LINE_NUMBER(433);
	frame[6].i = ((frame[2].i) + (jint(1)));
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(434);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(435);
	if ((frame[7].i) != (93)) goto label_11;
	}
	{
	LINE_NUMBER(436);
	if ((frame[6].i) < ((frame[2].i) + (jint(2)))) goto label_8;
	}
	{
	if ((frame[6].i) > ((frame[2].i) + (9))) goto label_8;
	}
	{
	if ((frame[6].i) != ((frame[2].i) + (8))) goto label_13;
	}
	goto label_8;
label_13:;
	{
	LINE_NUMBER(437);
	if (((frame[6].i) - (frame[2].i)) > (7)) goto label_14;
	}
	{
	LINE_NUMBER(438);
	frame[8].i = (jint(0));
	frame[9].i = ((9) - ((frame[6].i) - (frame[2].i)));
	}
label_17:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_18;
	}
	{
	LINE_NUMBER(439);
	frame[5].i = ((frame[5].i) << (jint(4)));
	LINE_NUMBER(438);
	INST_IINC(8, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(440);
	frame[5].i = ((frame[5].i) | (255));
	}
label_14:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[4].o));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colorStack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color])(ctx, (frame[8].o), (frame[5].i));
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return ((frame[6].i) - (frame[2].i));
	}
label_11:;
	{
	LINE_NUMBER(447);
	if ((frame[7].i) < (48)) goto label_24;
	}
	{
	if ((frame[7].i) > (57)) goto label_24;
	}
	{
	frame[5].i = (((frame[5].i) * (16)) + ((frame[7].i) - (48)));
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(448);
	if ((frame[7].i) < (97)) goto label_26;
	}
	{
	if ((frame[7].i) > (102)) goto label_26;
	}
	{
	frame[5].i = (((frame[5].i) * (16)) + ((frame[7].i) - (87)));
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(449);
	if ((frame[7].i) < (65)) goto label_8;
	}
	{
	if ((frame[7].i) > (70)) goto label_8;
	}
	{
	frame[5].i = (((frame[5].i) * (16)) + ((frame[7].i) - (55)));
	}
label_25:;
	{
	LINE_NUMBER(433);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (-2);
	}
label_4:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colorStack;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_27;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colorStack;
	sp[1].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[1].o);
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Color, sp[1].o)));
	}
label_27:;
	{
	LINE_NUMBER(457);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(460);
	frame[5].i = ((frame[2].i) + (jint(1)));
	}
label_28:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_29;
	}
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(462);
	if ((frame[6].i) == (93)) goto label_32;
	}
	goto label_33;
label_32:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_Colors_get_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(464);
	if ((frame[7].o) != nullptr) goto label_35;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_35:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object])(ctx, (frame[4].o));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_Color, sp[0].o));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colorStack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, (frame[8].o), (frame[7].o));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[2].i));
	}
label_33:;
	{
	LINE_NUMBER(460);
	INST_IINC(5, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_GlyphLayout_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout$GlyphRun);
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_3(ctx);
		auto proxy = (arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	((func_arc_util_pooling_Pool_freeAll_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(478);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_ignoreMarkup = (jint(0));
	LINE_NUMBER(479);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	LINE_NUMBER(480);
	((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(0));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/GlyphLayout:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(485);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[1].o = sp[0].o;
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (120));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(490);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[1].o)))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String])(ctx, (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[1].o)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(490);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(494);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_GlyphLayout[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_GlyphLayout_reset,
	(void *) M_arc_graphics_g2d_GlyphLayout_free,
	(void *) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence,
	(void *) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean,
	(void *) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String,
	(void *) M_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool,
	(void *) M_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun,
	(void *) M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun,
	(void *) M_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int,
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
	{ "free", "()V" },
	{ "setText", "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;)V" },
	{ "setText", "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;Larc/graphics/Color;FIZ)V" },
	{ "setText", "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;IILarc/graphics/Color;FIZLjava/lang/String;)V" },
	{ "truncate", "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;FLjava/lang/String;ILarc/util/pooling/Pool;)V" },
	{ "wrap", "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;Larc/util/pooling/Pool;II)Larc/graphics/g2d/GlyphLayout$GlyphRun;" },
	{ "adjustLastGlyph", "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;)V" },
	{ "parseColorMarkup", "(Ljava/lang/CharSequence;IILarc/util/pooling/Pool;)I" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_GlyphLayout$GlyphRun,
};

static FieldMetadata fields[] {
	{ "runs", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_GlyphLayout, F_runs), "Larc/struct/Seq;", 17 },
	{ "colorStack", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_GlyphLayout, F_colorStack), "Larc/struct/Seq;", 18 },
	{ "ignoreMarkup", &class_boolean, offsetof(arc_graphics_g2d_GlyphLayout, F_ignoreMarkup), "Z", 1 },
	{ "width", &class_float, offsetof(arc_graphics_g2d_GlyphLayout, F_width), "F", 1 },
	{ "height", &class_float, offsetof(arc_graphics_g2d_GlyphLayout, F_height), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence, 0, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean, 0, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;Larc/graphics/Color;FIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String, 0, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;IILarc/graphics/Color;FIZLjava/lang/String;)V", 1 },
	{ "obtain", (intptr_t) SM_arc_graphics_g2d_GlyphLayout_obtain_R_arc_graphics_g2d_GlyphLayout, 0, "()Larc/graphics/g2d/GlyphLayout;", 9 },
	{ "free", (intptr_t) M_arc_graphics_g2d_GlyphLayout_free, VTABLE_arc_graphics_g2d_GlyphLayout_free, "()V", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence, VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;)V", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean, VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;Larc/graphics/Color;FIZ)V", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String, VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String, "(Larc/graphics/g2d/Font;Ljava/lang/CharSequence;IILarc/graphics/Color;FIZLjava/lang/String;)V", 1 },
	{ "truncate", (intptr_t) M_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool, VTABLE_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool, "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;FLjava/lang/String;ILarc/util/pooling/Pool;)V", 2 },
	{ "wrap", (intptr_t) M_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun, VTABLE_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun, "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;Larc/util/pooling/Pool;II)Larc/graphics/g2d/GlyphLayout$GlyphRun;", 2 },
	{ "adjustLastGlyph", (intptr_t) M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun, VTABLE_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun, "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/GlyphLayout$GlyphRun;)V", 2 },
	{ "parseColorMarkup", (intptr_t) M_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int, VTABLE_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int, "(Ljava/lang/CharSequence;IILarc/util/pooling/Pool;)I", 2 },
	{ "reset", (intptr_t) M_arc_graphics_g2d_GlyphLayout_reset, VTABLE_arc_graphics_g2d_GlyphLayout_reset, "()V", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_g2d_GlyphLayout{
		.nativeName = (intptr_t) "arc/graphics/g2d/GlyphLayout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_GlyphLayout),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_GlyphLayout,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_GlyphLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_GlyphLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_GlyphLayout = registerClass(&class_arc_graphics_g2d_GlyphLayout);

}
