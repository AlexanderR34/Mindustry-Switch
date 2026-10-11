#include "arc/scene/Scene_invoke_arc_func_Prov_6.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_6.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_arc_scene_Scene_invoke_arc_func_Prov_6(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_Scene_invoke_arc_func_Prov_6 *) object;
}

void clinit_arc_scene_Scene_invoke_arc_func_Prov_6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_scene_Scene_invoke_arc_func_Prov_6_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/scene/Scene_invoke_arc_func_Prov_6:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_6 *) self;
	auto object = gcAlloc(ctx, &class_arc_scene_event_InputEvent);
	init_arc_scene_event_InputEvent(ctx, object);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_scene_Scene_invoke_arc_func_Prov_6[] {
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
	(void *) M_arc_scene_Scene_invoke_arc_func_Prov_6_get_R_java_lang_Object,
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
	{ "get", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_arc_func_Prov, };

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_arc_scene_Scene_invoke_arc_func_Prov_6_get_R_java_lang_Object, VTABLE_arc_scene_Scene_invoke_arc_func_Prov_6_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_arc_scene_Scene_invoke_arc_func_Prov_6{
		.nativeName = (intptr_t) "arc/scene/Scene_invoke_arc_func_Prov_6",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_Scene_invoke_arc_func_Prov_6),
		.classVtable = (intptr_t) vtable_arc_scene_Scene_invoke_arc_func_Prov_6,
		.staticInitializer = (intptr_t) clinit_arc_scene_Scene_invoke_arc_func_Prov_6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Scene_invoke_arc_func_Prov_6,
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
static bool registered_arc_scene_Scene_invoke_arc_func_Prov_6 = registerClass(&class_arc_scene_Scene_invoke_arc_func_Prov_6);

}
