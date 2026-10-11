#include "arc/scene/ui/TextField_TextFieldFilter_invoke_arc_scene_ui_TextField_TextFieldFilter_1.h"
#include "arc/scene/ui/TextField_TextFieldFilter_invoke_arc_scene_ui_TextField_TextFieldFilter_1.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"

extern "C" {


void mark_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1 *) object;
}

void clinit_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1_acceptChar_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1:acceptChar", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1 *) self;
	auto object = SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$1_arc_scene_ui_TextField_char_R_boolean(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1[] {
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
	(void *) M_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1_acceptChar_arc_scene_ui_TextField_char_R_boolean,
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
	{ "acceptChar", "(Larc/scene/ui/TextField;C)Z" },
};

static jclass interfaces[] { &class_arc_scene_ui_TextField$TextFieldFilter, };

static MethodMetadata methods[] {
	{ "acceptChar", (intptr_t) M_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1_acceptChar_arc_scene_ui_TextField_char_R_boolean, VTABLE_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1_acceptChar_arc_scene_ui_TextField_char_R_boolean, "(Larc/scene/ui/TextField;C)Z", 0 },
};

Class class_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1{
		.nativeName = (intptr_t) "arc/scene/ui/TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1 = registerClass(&class_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1);

}

