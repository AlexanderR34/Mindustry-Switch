#include "arc/graphics/Pixmaps_invoke_arc_func_Intc2_0.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/Pixmaps_invoke_arc_func_Intc2_0.h"
#include "java/lang/Object.h"
#include "arc/func/Intc2.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/IntSeq.h"

extern "C" {


void mark_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_Pixmaps_invoke_arc_func_Intc2_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
}

void clinit_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0_get_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/graphics/Pixmaps_invoke_arc_func_Intc2_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_graphics_Pixmaps_invoke_arc_func_Intc2_0 *) self;
	SM_arc_graphics_Pixmaps_lambda$median$0_arc_struct_IntSeq_arc_graphics_Pixmap_int_arc_graphics_Pixmap_double_int_int(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, proxy->F_field2, (jobject) proxy->F_field3, proxy->F_field4, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0[] {
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
	(void *) M_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0_get_int_int,
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
	{ "get", "(II)V" },
};

static jclass interfaces[] { &class_arc_func_Intc2, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_struct_IntSeq, offsetof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0, F_field0), "Larc/struct/IntSeq;", 0 },
	{ "field1", &class_arc_graphics_Pixmap, offsetof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0, F_field1), "Larc/graphics/Pixmap;", 0 },
	{ "field2", &class_int, offsetof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0, F_field2), "I", 0 },
	{ "field3", &class_arc_graphics_Pixmap, offsetof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0, F_field3), "Larc/graphics/Pixmap;", 0 },
	{ "field4", &class_double, offsetof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0, F_field4), "D", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0_get_int_int, VTABLE_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0_get_int_int, "(II)V", 0 },
};

Class class_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0{
		.nativeName = (intptr_t) "arc/graphics/Pixmaps_invoke_arc_func_Intc2_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Pixmaps_invoke_arc_func_Intc2_0),
		.classVtable = (intptr_t) vtable_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0 = registerClass(&class_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0);

}
