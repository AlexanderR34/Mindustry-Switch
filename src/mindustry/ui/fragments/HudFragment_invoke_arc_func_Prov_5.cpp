#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_5.h"
#include "java/lang/Object.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_5.h"

extern "C" {


void mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_5:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5 *) self;
	auto object = SM_mindustry_ui_fragments_HudFragment_lambda$build$70_java_lang_StringBuilder_int_java_lang_String_R_java_lang_CharSequence(ctx, (jobject) proxy->F_field0, proxy->F_field1, (jobject) proxy->F_field2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5[] {
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
	(void *) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5_get_R_java_lang_Object,
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
	{ "field0", &class_java_lang_StringBuilder, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5, F_field0), "Ljava/lang/StringBuilder;", 0 },
	{ "field1", &class_int, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5, F_field1), "I", 0 },
	{ "field2", &class_java_lang_String, offsetof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5, F_field2), "Ljava/lang/String;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5_get_R_java_lang_Object, VTABLE_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5_get_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment_invoke_arc_func_Prov_5",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5,
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
static bool registered_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5 = registerClass(&class_mindustry_ui_fragments_HudFragment_invoke_arc_func_Prov_5);

}
