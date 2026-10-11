#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_17.h"
#include "java/lang/Object.h"
#include "mindustry/mod/ContentParser.h"
#include "arc/func/Func.h"
#include "java/lang/String.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_17.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/mod/ContentParser_TypeParser.h"

extern "C" {


void mark_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17:parse", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17 *) self;
	auto object = ((func_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, param0, param1, param2);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17[] {
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
	(void *) M_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content,
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
	{ "parse", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/ctype/Content;" },
};

static jclass interfaces[] { &class_mindustry_mod_ContentParser$TypeParser, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_mod_ContentParser, offsetof(mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17, F_field0), "Lmindustry/mod/ContentParser;", 0 },
	{ "field1", &class_mindustry_ctype_ContentType, offsetof(mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17, F_field1), "Lmindustry/ctype/ContentType;", 0 },
	{ "field2", &class_arc_func_Func, offsetof(mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17, F_field2), "Larc/func/Func;", 0 },
};

static MethodMetadata methods[] {
	{ "parse", (intptr_t) M_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content, VTABLE_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/ctype/Content;", 0 },
};

Class class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17,
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
static bool registered_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17 = registerClass(&class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17);

}

