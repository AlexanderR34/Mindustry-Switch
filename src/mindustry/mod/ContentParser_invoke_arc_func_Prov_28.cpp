#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_28.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "mindustry/mod/ContentParser.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/type/Planet.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_28.h"

extern "C" {


void mark_mindustry_mod_ContentParser_invoke_arc_func_Prov_28(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ContentParser_invoke_arc_func_Prov_28 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_28(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_mod_ContentParser_invoke_arc_func_Prov_28_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/mod/ContentParser_invoke_arc_func_Prov_28:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_28 *) self;
	auto object = ((func_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ContentParser_invoke_arc_func_Prov_28[] {
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
	(void *) M_mindustry_mod_ContentParser_invoke_arc_func_Prov_28_get_R_java_lang_Object,
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
	{ "field0", &class_mindustry_mod_ContentParser, offsetof(mindustry_mod_ContentParser_invoke_arc_func_Prov_28, F_field0), "Lmindustry/mod/ContentParser;", 0 },
	{ "field1", &class_mindustry_type_Planet, offsetof(mindustry_mod_ContentParser_invoke_arc_func_Prov_28, F_field1), "Lmindustry/type/Planet;", 0 },
	{ "field2", &class_arc_util_serialization_JsonValue, offsetof(mindustry_mod_ContentParser_invoke_arc_func_Prov_28, F_field2), "Larc/util/serialization/JsonValue;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_mod_ContentParser_invoke_arc_func_Prov_28_get_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_invoke_arc_func_Prov_28_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_mindustry_mod_ContentParser_invoke_arc_func_Prov_28{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser_invoke_arc_func_Prov_28",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ContentParser_invoke_arc_func_Prov_28),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser_invoke_arc_func_Prov_28,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_28,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser_invoke_arc_func_Prov_28,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser_invoke_arc_func_Prov_28 = registerClass(&class_mindustry_mod_ContentParser_invoke_arc_func_Prov_28);

}
