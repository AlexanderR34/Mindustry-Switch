#include "mindustry/entities/Effect_invoke_java_lang_Runnable_2.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Effect_invoke_java_lang_Runnable_2.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_mindustry_entities_Effect_invoke_java_lang_Runnable_2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Effect_invoke_java_lang_Runnable_2 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
}

void clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_entities_Effect_invoke_java_lang_Runnable_2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/Effect_invoke_java_lang_Runnable_2:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_Effect_invoke_java_lang_Runnable_2 *) self;
	((func_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Effect_invoke_java_lang_Runnable_2[] {
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
	(void *) M_mindustry_entities_Effect_invoke_java_lang_Runnable_2_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_entities_Effect, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field0), "Lmindustry/entities/Effect;", 0 },
	{ "field1", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field1), "F", 0 },
	{ "field2", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field3), "F", 0 },
	{ "field4", &class_arc_graphics_Color, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field4), "Larc/graphics/Color;", 0 },
	{ "field5", &class_java_lang_Object, offsetof(mindustry_entities_Effect_invoke_java_lang_Runnable_2, F_field5), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_mindustry_entities_Effect_invoke_java_lang_Runnable_2_run, VTABLE_mindustry_entities_Effect_invoke_java_lang_Runnable_2_run, "()V", 0 },
};

Class class_mindustry_entities_Effect_invoke_java_lang_Runnable_2{
		.nativeName = (intptr_t) "mindustry/entities/Effect_invoke_java_lang_Runnable_2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Effect_invoke_java_lang_Runnable_2),
		.classVtable = (intptr_t) vtable_mindustry_entities_Effect_invoke_java_lang_Runnable_2,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Effect_invoke_java_lang_Runnable_2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Effect_invoke_java_lang_Runnable_2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Effect_invoke_java_lang_Runnable_2 = registerClass(&class_mindustry_entities_Effect_invoke_java_lang_Runnable_2);

}
