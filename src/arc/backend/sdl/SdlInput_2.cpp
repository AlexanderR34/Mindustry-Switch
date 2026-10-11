#include "arc/backend/sdl/SdlInput_2.h"
#include "arc/backend/sdl/SdlInput_2.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/SdlInput.h"
#include "arc/backend/sdl/SdlInput_1ImeData.h"

extern "C" {


void mark_arc_backend_sdl_SdlInput$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_backend_sdl_SdlInput$1ImeData(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlInput$2 *) object;
	if (self->F_val$field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$field)->clazz)->markFunction)((jobject) self->F_val$field, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlInput$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_backend_sdl_SdlInput$1ImeData(ctx);
}

void init_arc_backend_sdl_SdlInput$2_arc_backend_sdl_SdlInput_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlInput$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlInput$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(158);
	((arc_backend_sdl_SdlInput$2 *) NULL_CHECK((frame[0].o)))->F_val$field = (jref) (frame[2].o);
	((arc_backend_sdl_SdlInput$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_backend_sdl_SdlInput$1ImeData_arc_backend_sdl_SdlInput(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$2 *) NULL_CHECK((frame[0].o)))->F_val$field;
	jint temp0 = (jint)((func_arc_scene_ui_TextField_getCursorPosition_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getCursorPosition_R_int])(ctx, sp[1].o);
	((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK(sp[0].o))->F_cursor = temp0;
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlInput$2 *) NULL_CHECK((frame[0].o)))->F_val$field;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, sp[1].o);
	((arc_backend_sdl_SdlInput$1ImeData *) NULL_CHECK(sp[0].o))->F_realText = (jref) sp[1].o;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlInput$2[] {
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
	{ "val$field", &class_arc_scene_ui_TextField, offsetof(arc_backend_sdl_SdlInput$2, F_val$field), "Larc/scene/ui/TextField;", 4112 },
	{ "this$0", &class_arc_backend_sdl_SdlInput, offsetof(arc_backend_sdl_SdlInput$2, F_this$0), "Larc/backend/sdl/SdlInput;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlInput$2_arc_backend_sdl_SdlInput_arc_scene_ui_TextField, 0, "(Larc/backend/sdl/SdlInput;Larc/scene/ui/TextField;)V", 0 },
};

Class class_arc_backend_sdl_SdlInput$2{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlInput$2",
		.parentClass = (intptr_t) &class_arc_backend_sdl_SdlInput$1ImeData,
		.size = sizeof(arc_backend_sdl_SdlInput$2),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlInput$2,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlInput$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlInput$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlInput$2 = registerClass(&class_arc_backend_sdl_SdlInput$2);

}

