#include "arc/freetype/FreeType_SizeMetrics.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_SizeMetrics.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$SizeMetrics(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_freetype_FreeType$SizeMetrics *) object;
}

void clinit_arc_freetype_FreeType$SizeMetrics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$SizeMetrics_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$SizeMetrics(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(409);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getXppem_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getXppem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(445);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getXppem_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getYppem_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getYppem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(449);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getYppem_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getXScale_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getXScale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(453);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getXscale_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getYscale_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getYscale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getYscale_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getAscender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getAscender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getAscender_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getDescender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getDescender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getDescender_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getHeight_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$SizeMetrics:getMaxAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	jint temp0 = (jint)SM_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$SizeMetrics[] {
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
	(void *) M_arc_freetype_FreeType$SizeMetrics_getXppem_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getYppem_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getXScale_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getYscale_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getAscender_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getDescender_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getHeight_R_int,
	(void *) M_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int,
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
	{ "getXppem", "()I" },
	{ "getYppem", "()I" },
	{ "getXScale", "()I" },
	{ "getYscale", "()I" },
	{ "getAscender", "()I" },
	{ "getDescender", "()I" },
	{ "getHeight", "()I" },
	{ "getMaxAdvance", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$SizeMetrics_long, 0, "(J)V", 0 },
	{ "getXppem", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getXppem_long_R_int, 0, "(J)I", 266 },
	{ "getYppem", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getYppem_long_R_int, 0, "(J)I", 266 },
	{ "getXscale", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getXscale_long_R_int, 0, "(J)I", 266 },
	{ "getYscale", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getYscale_long_R_int, 0, "(J)I", 266 },
	{ "getAscender", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getAscender_long_R_int, 0, "(J)I", 266 },
	{ "getDescender", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getDescender_long_R_int, 0, "(J)I", 266 },
	{ "getHeight", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getHeight_long_R_int, 0, "(J)I", 266 },
	{ "getMaxAdvance", (intptr_t) SM_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int, 0, "(J)I", 266 },
	{ "getXppem", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getXppem_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getXppem_R_int, "()I", 1 },
	{ "getYppem", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getYppem_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getYppem_R_int, "()I", 1 },
	{ "getXScale", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getXScale_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getXScale_R_int, "()I", 1 },
	{ "getYscale", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getYscale_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getYscale_R_int, "()I", 1 },
	{ "getAscender", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getAscender_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getAscender_R_int, "()I", 1 },
	{ "getDescender", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getDescender_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getDescender_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getHeight_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getHeight_R_int, "()I", 1 },
	{ "getMaxAdvance", (intptr_t) M_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int, VTABLE_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int, "()I", 1 },
};

Class class_arc_freetype_FreeType$SizeMetrics{
		.nativeName = (intptr_t) "arc/freetype/FreeType$SizeMetrics",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$SizeMetrics),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$SizeMetrics,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$SizeMetrics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$SizeMetrics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$SizeMetrics = registerClass(&class_arc_freetype_FreeType$SizeMetrics);

}

