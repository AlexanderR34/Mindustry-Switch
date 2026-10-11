#include "arc/freetype/FreeType_Size.h"
#include "arc/freetype/FreeType_Size.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_SizeMetrics.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$Size(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeType$Size *) object;
}

void clinit_arc_freetype_FreeType$Size(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$Size_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Size:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$Size(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(395);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Size:getMetrics", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	clinit_arc_freetype_FreeType$SizeMetrics(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeType$SizeMetrics);
	jlong temp0 = (jlong)SM_arc_freetype_FreeType$Size_getMetrics_long_R_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	init_arc_freetype_FreeType$SizeMetrics_long(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$Size[] {
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
	(void *) M_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics,
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
	{ "getMetrics", "()Larc/freetype/FreeType$SizeMetrics;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$Size_long, 0, "(J)V", 0 },
	{ "getMetrics", (intptr_t) SM_arc_freetype_FreeType$Size_getMetrics_long_R_long, 0, "(J)J", 266 },
	{ "getMetrics", (intptr_t) M_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics, VTABLE_arc_freetype_FreeType$Size_getMetrics_R_arc_freetype_FreeType$SizeMetrics, "()Larc/freetype/FreeType$SizeMetrics;", 1 },
};

Class class_arc_freetype_FreeType$Size{
		.nativeName = (intptr_t) "arc/freetype/FreeType$Size",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$Size),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$Size,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$Size,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$Size,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$Size = registerClass(&class_arc_freetype_FreeType$Size);

}

