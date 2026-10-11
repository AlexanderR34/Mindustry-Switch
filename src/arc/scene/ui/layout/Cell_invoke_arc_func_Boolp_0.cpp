#include "arc/scene/ui/layout/Cell_invoke_arc_func_Boolp_0.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/layout/Cell_invoke_arc_func_Boolp_0.h"
#include "arc/func/Boolp.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0_get_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/scene/ui/layout/Cell_invoke_arc_func_Boolp_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0 *) self;
	auto object = SM_arc_scene_ui_layout_Cell_lambda$disabled$0_arc_func_Boolf_arc_scene_Element_R_boolean(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0[] {
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
	(void *) M_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0_get_R_boolean,
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
	{ "get", "()Z" },
};

static jclass interfaces[] { &class_arc_func_Boolp, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_func_Boolf, offsetof(arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0, F_field0), "Larc/func/Boolf;", 0 },
	{ "field1", &class_arc_scene_Element, offsetof(arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0, F_field1), "Larc/scene/Element;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0_get_R_boolean, VTABLE_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0_get_R_boolean, "()Z", 0 },
};

Class class_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Cell_invoke_arc_func_Boolp_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0,
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
static bool registered_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0 = registerClass(&class_arc_scene_ui_layout_Cell_invoke_arc_func_Boolp_0);

}
