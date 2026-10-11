#include "arc/backend/sdl/SdlGraphics_SdlCursor.h"
#include "arc/backend/sdl/SdlGraphics.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "arc/backend/sdl/SdlGraphics_SdlCursor.h"
#include "arc/Graphics_Cursor.h"

extern "C" {


void mark_arc_backend_sdl_SdlGraphics$SdlCursor(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlGraphics$SdlCursor *) object;
}

void clinit_arc_backend_sdl_SdlGraphics$SdlCursor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlGraphics$SdlCursor_long_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics$SdlCursor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlGraphics$SdlCursor(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(294);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(295);
	((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_surfaceHandle = (frame[1].l);
	LINE_NUMBER(296);
	((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_cursorHandle = (frame[3].l);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics$SdlCursor_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics$SdlCursor:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	if ((longCompare(((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_cursorHandle), (jlong(0)))) == 0) goto label_1;
	}
	{
	SM_arc_backend_sdl_jni_SDL_SDL_FreeCursor_long(ctx, ((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_cursorHandle));
	}
label_1:;
	{
	LINE_NUMBER(302);
	if ((longCompare(((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_surfaceHandle), (jlong(0)))) == 0) goto label_2;
	}
	{
	SM_arc_backend_sdl_jni_SDL_SDL_FreeSurface_long(ctx, ((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((frame[0].o)))->F_surfaceHandle));
	}
label_2:;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlGraphics$SdlCursor[] {
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
	(void *) M_arc_backend_sdl_SdlGraphics$SdlCursor_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
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
};

static jclass interfaces[] { &class_arc_Graphics$Cursor, };

static FieldMetadata fields[] {
	{ "surfaceHandle", &class_long, offsetof(arc_backend_sdl_SdlGraphics$SdlCursor, F_surfaceHandle), "J", 16 },
	{ "cursorHandle", &class_long, offsetof(arc_backend_sdl_SdlGraphics$SdlCursor, F_cursorHandle), "J", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlGraphics$SdlCursor_long_long, 0, "(JJ)V", 1 },
	{ "dispose", (intptr_t) M_arc_backend_sdl_SdlGraphics$SdlCursor_dispose, VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_dispose, "()V", 1 },
};

Class class_arc_backend_sdl_SdlGraphics$SdlCursor{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlGraphics$SdlCursor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlGraphics$SdlCursor),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlGraphics$SdlCursor,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlGraphics$SdlCursor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlGraphics$SdlCursor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_backend_sdl_SdlGraphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlGraphics$SdlCursor = registerClass(&class_arc_backend_sdl_SdlGraphics$SdlCursor);

}

