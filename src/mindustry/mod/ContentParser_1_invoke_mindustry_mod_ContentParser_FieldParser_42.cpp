#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_42.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_42.h"
#include "mindustry/mod/ContentParser_1.h"
#include "java/lang/Class.h"
#include "mindustry/mod/ContentParser_FieldParser.h"

extern "C" {


void mark_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42:parse", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42 *) self;
	auto object = ((func_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, (jobject) proxy->F_field0, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42[] {
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
	(void *) M_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
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
	{ "parse", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_mindustry_mod_ContentParser$FieldParser, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_mod_ContentParser$1, offsetof(mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42, F_field0), "Lmindustry/mod/ContentParser$1;", 0 },
};

static MethodMetadata methods[] {
	{ "parse", (intptr_t) M_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 0 },
};

Class class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42 = registerClass(&class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42);

}

