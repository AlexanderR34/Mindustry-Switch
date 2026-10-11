#include "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField_TextFieldListener_0.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/ui/TextField_TextFieldListener.h"
#include "java/lang/Runnable.h"
#include "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField_TextFieldListener_0.h"

extern "C" {


void mark_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0 *) object;
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0_keyTyped_arc_scene_ui_TextField_char(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0:keyTyped", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0 *) self;
	SM_arc_scene_ui_TextField_lambda$typed$0_char_java_lang_Runnable_arc_scene_ui_TextField_char(ctx, proxy->F_field0, (jobject) proxy->F_field1, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0[] {
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
	(void *) M_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0_keyTyped_arc_scene_ui_TextField_char,
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
	{ "keyTyped", "(Larc/scene/ui/TextField;C)V" },
};

static jclass interfaces[] { &class_arc_scene_ui_TextField$TextFieldListener, };

static FieldMetadata fields[] {
	{ "field0", &class_char, offsetof(arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0, F_field0), "C", 0 },
	{ "field1", &class_java_lang_Runnable, offsetof(arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0, F_field1), "Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "keyTyped", (intptr_t) M_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0_keyTyped_arc_scene_ui_TextField_char, VTABLE_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0_keyTyped_arc_scene_ui_TextField_char, "(Larc/scene/ui/TextField;C)V", 0 },
};

Class class_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0{
		.nativeName = (intptr_t) "arc/scene/ui/TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0 = registerClass(&class_arc_scene_ui_TextField_invoke_arc_scene_ui_TextField$TextFieldListener_0);

}

