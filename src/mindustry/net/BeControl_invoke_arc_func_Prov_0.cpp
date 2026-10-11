#include "mindustry/net/BeControl_invoke_arc_func_Prov_0.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "mindustry/net/BeControl.h"
#include "mindustry/net/BeControl_invoke_arc_func_Prov_0.h"

extern "C" {


void mark_mindustry_net_BeControl_invoke_arc_func_Prov_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_BeControl_invoke_arc_func_Prov_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
}

void clinit_mindustry_net_BeControl_invoke_arc_func_Prov_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_net_BeControl_invoke_arc_func_Prov_0_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/net/BeControl_invoke_arc_func_Prov_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_net_BeControl_invoke_arc_func_Prov_0 *) self;
	auto object = SM_mindustry_net_BeControl_lambda$showUpdateDialog$6_Array1_int_Array1_float_R_java_lang_CharSequence(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_net_BeControl_invoke_arc_func_Prov_0[] {
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
	(void *) M_mindustry_net_BeControl_invoke_arc_func_Prov_0_get_R_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "field0", getArrayClass(&class_int, 1), offsetof(mindustry_net_BeControl_invoke_arc_func_Prov_0, F_field0), "[I", 0 },
	{ "field1", getArrayClass(&class_float, 1), offsetof(mindustry_net_BeControl_invoke_arc_func_Prov_0, F_field1), "[F", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_net_BeControl_invoke_arc_func_Prov_0_get_R_java_lang_Object, VTABLE_mindustry_net_BeControl_invoke_arc_func_Prov_0_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_mindustry_net_BeControl_invoke_arc_func_Prov_0{
		.nativeName = (intptr_t) "mindustry/net/BeControl_invoke_arc_func_Prov_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_BeControl_invoke_arc_func_Prov_0),
		.classVtable = (intptr_t) vtable_mindustry_net_BeControl_invoke_arc_func_Prov_0,
		.staticInitializer = (intptr_t) clinit_mindustry_net_BeControl_invoke_arc_func_Prov_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_BeControl_invoke_arc_func_Prov_0,
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
static bool registered_mindustry_net_BeControl_invoke_arc_func_Prov_0 = registerClass(&class_mindustry_net_BeControl_invoke_arc_func_Prov_0);

}
