#include "arc/freetype/FreeType_Stroker.h"
#include "arc/util/Disposable.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeType_Stroker.h"
#include "arc/freetype/FreeType.h"
#include "arc/freetype/FreeType_Pointer.h"

extern "C" {


void mark_arc_freetype_FreeType$Stroker(jobject object, jint mark, jint depth) {
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
	auto self = (arc_freetype_FreeType$Stroker *) object;
}

void clinit_arc_freetype_FreeType$Stroker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeType$Pointer(ctx);
}

void init_arc_freetype_FreeType$Stroker_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Stroker:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeType$Stroker(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(849);
	init_arc_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(850);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Stroker_set_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Stroker:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(861);
	SM_arc_freetype_FreeType$Stroker_set_long_int_int_int_int(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeType$Stroker_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeType$Stroker:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(866);
	SM_arc_freetype_FreeType$Stroker_done_long(ctx, ((jlong)((arc_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeType$Stroker[] {
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
	(void *) M_arc_freetype_FreeType$Stroker_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_freetype_FreeType$Stroker_set_int_int_int_int,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "set", "(IIII)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeType$Stroker_long, 0, "(J)V", 0 },
	{ "set", (intptr_t) SM_arc_freetype_FreeType$Stroker_set_long_int_int_int_int, 0, "(JIIII)V", 266 },
	{ "done", (intptr_t) SM_arc_freetype_FreeType$Stroker_done_long, 0, "(J)V", 266 },
	{ "set", (intptr_t) M_arc_freetype_FreeType$Stroker_set_int_int_int_int, VTABLE_arc_freetype_FreeType$Stroker_set_int_int_int_int, "(IIII)V", 1 },
	{ "dispose", (intptr_t) M_arc_freetype_FreeType$Stroker_dispose, VTABLE_arc_freetype_FreeType$Stroker_dispose, "()V", 1 },
};

Class class_arc_freetype_FreeType$Stroker{
		.nativeName = (intptr_t) "arc/freetype/FreeType$Stroker",
		.parentClass = (intptr_t) &class_arc_freetype_FreeType$Pointer,
		.size = sizeof(arc_freetype_FreeType$Stroker),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeType$Stroker,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeType$Stroker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeType$Stroker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeType$Stroker = registerClass(&class_arc_freetype_FreeType$Stroker);

}

