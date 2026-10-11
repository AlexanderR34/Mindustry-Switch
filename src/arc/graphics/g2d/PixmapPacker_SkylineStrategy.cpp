#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage_Row.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"
#include "arc/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy_invoke_java_util_Comparator_0.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker$SkylineStrategy *) object;
}

void clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$SkylineStrategy:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(809);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$SkylineStrategy:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(813);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy_invoke_java_util_Comparator_0(ctx);
		auto proxy = (arc_graphics_g2d_PixmapPacker$SkylineStrategy_invoke_java_util_Comparator_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy_invoke_java_util_Comparator_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$SkylineStrategy:pack", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(817);
	frame[4].i = ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding);
	LINE_NUMBER(818);
	frame[5].i = (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth) - ((frame[4].i) * (jint(2))));
	frame[6].i = (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight) - ((frame[4].i) * (jint(2))));
	LINE_NUMBER(819);
	frame[7].i = ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_width))) + (frame[4].i));
	frame[8].i = ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_height))) + (frame[4].i));
	LINE_NUMBER(820);
	frame[9].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	frame[10].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_8;
	}
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[9].i));
	frame[11].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage, sp[0].o));
	LINE_NUMBER(822);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(824);
	frame[13].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	frame[14].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_13:;
	{
	if ((frame[13].i) >= (frame[14].i)) goto label_14;
	}
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[13].i));
	frame[15].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row, sp[0].o));
	LINE_NUMBER(826);
	if ((((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_x) + (frame[7].i)) < (frame[5].i)) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(827);
	if ((((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_y) + (frame[8].i)) < (frame[6].i)) goto label_19;
	}
	goto label_18;
label_19:;
	{
	LINE_NUMBER(828);
	if ((frame[8].i) <= ((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_height)) goto label_20;
	}
	goto label_18;
label_20:;
	{
	LINE_NUMBER(829);
	if ((frame[12].o) == nullptr) goto label_21;
	}
	{
	if (((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_height) >= ((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_height)) goto label_18;
	}
label_21:;
	INST_ALOAD(15);
	INST_ASTORE(12);
label_18:;
	{
	LINE_NUMBER(824);
	INST_IINC(13, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(831);
	if ((frame[12].o) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[13].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row, sp[0].o));
	LINE_NUMBER(834);
	if ((((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + (frame[8].i)) < (frame[6].i)) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(835);
	if ((((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_x) + (frame[7].i)) >= (frame[5].i)) goto label_27;
	}
	{
	LINE_NUMBER(836);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height), (frame[8].i));
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_height = temp0;
	LINE_NUMBER(837);
	frame[12].o = (frame[13].o);
	goto label_22;
	}
label_27:;
	{
	LINE_NUMBER(838);
	if (((((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + ((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height)) + (frame[8].i)) >= (frame[6].i)) goto label_22;
	}
	{
	LINE_NUMBER(840);
	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row);
	init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(841);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_y = (((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + ((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height));
	LINE_NUMBER(842);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_height = (frame[8].i);
	LINE_NUMBER(843);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[12].o));
	}
label_22:;
	{
	LINE_NUMBER(846);
	if ((frame[12].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(847);
	((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_x = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_x)));
	LINE_NUMBER(848);
	((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_y = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_y)));
	LINE_NUMBER(849);
	sp[0].o = frame[12].o;
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_x) + (frame[7].i));
	LINE_NUMBER(850);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_26:;
	{
	LINE_NUMBER(820);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(854);
	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage);
	init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_arc_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(856);
	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row);
	init_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(857);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_x = ((frame[4].i) + (frame[7].i));
	LINE_NUMBER(858);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_y = (frame[4].i);
	LINE_NUMBER(859);
	((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_height = (frame[8].i);
	LINE_NUMBER(860);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[9].o)))->F_rows;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(861);
	((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_x = (jfloat((frame[4].i)));
	LINE_NUMBER(862);
	((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_y = (jfloat((frame[4].i)));
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_g2d_PixmapPacker$SkylineStrategy_lambda$sort$0_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$SkylineStrategy:lambda$sort$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height) - ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height));
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$SkylineStrategy[] {
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
	(void *) M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page,
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
};

static jclass interfaces[] { &class_arc_graphics_g2d_PixmapPacker$PackStrategy, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$SkylineStrategy, 0, "()V", 1 },
	{ "sort", (intptr_t) M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq, VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_sort_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, VTABLE_arc_graphics_g2d_PixmapPacker$SkylineStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, "(Larc/graphics/g2d/PixmapPacker;Ljava/lang/String;Larc/math/geom/Rect;)Larc/graphics/g2d/PixmapPacker$Page;", 1 },
	{ "lambda$sort$0", (intptr_t) SM_arc_graphics_g2d_PixmapPacker$SkylineStrategy_lambda$sort$0_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_R_int, 0, "(Larc/graphics/g2d/PixmapRegion;Larc/graphics/g2d/PixmapRegion;)I", 4106 },
};

Class class_arc_graphics_g2d_PixmapPacker$SkylineStrategy{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$SkylineStrategy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$SkylineStrategy),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$SkylineStrategy,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$SkylineStrategy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$SkylineStrategy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$SkylineStrategy = registerClass(&class_arc_graphics_g2d_PixmapPacker$SkylineStrategy);

}

