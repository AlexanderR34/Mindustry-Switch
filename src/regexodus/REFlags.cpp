#include "regexodus/REFlags.h"
#include "java/lang/Object.h"

extern "C" {

jint SF_regexodus_REFlags_DEFAULT;
jint SF_regexodus_REFlags_IGNORE_CASE;
jint SF_regexodus_REFlags_MULTILINE;
jint SF_regexodus_REFlags_DOTALL;
jint SF_regexodus_REFlags_IGNORE_SPACES;
jint SF_regexodus_REFlags_UNICODE;
jint SF_regexodus_REFlags_XML_SCHEMA;

void mark_regexodus_REFlags(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_REFlags *) object;
}

void clinit_regexodus_REFlags(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_REFlags_DEFAULT = jint(16);
	SF_regexodus_REFlags_IGNORE_CASE = jint(1);
	SF_regexodus_REFlags_MULTILINE = jint(2);
	SF_regexodus_REFlags_DOTALL = jint(4);
	SF_regexodus_REFlags_IGNORE_SPACES = jint(8);
	SF_regexodus_REFlags_UNICODE = jint(16);
	SF_regexodus_REFlags_XML_SCHEMA = jint(32);
}

void *vtable_regexodus_REFlags[] {
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
};

static FieldMetadata fields[] {
	{ "DEFAULT", &class_int, (intptr_t) &SF_regexodus_REFlags_DEFAULT, "I", 25 },
	{ "IGNORE_CASE", &class_int, (intptr_t) &SF_regexodus_REFlags_IGNORE_CASE, "I", 25 },
	{ "MULTILINE", &class_int, (intptr_t) &SF_regexodus_REFlags_MULTILINE, "I", 25 },
	{ "DOTALL", &class_int, (intptr_t) &SF_regexodus_REFlags_DOTALL, "I", 25 },
	{ "IGNORE_SPACES", &class_int, (intptr_t) &SF_regexodus_REFlags_IGNORE_SPACES, "I", 25 },
	{ "UNICODE", &class_int, (intptr_t) &SF_regexodus_REFlags_UNICODE, "I", 25 },
	{ "XML_SCHEMA", &class_int, (intptr_t) &SF_regexodus_REFlags_XML_SCHEMA, "I", 25 },
};

Class class_regexodus_REFlags{
		.nativeName = (intptr_t) "regexodus/REFlags",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_REFlags),
		.classVtable = (intptr_t) vtable_regexodus_REFlags,
		.staticInitializer = (intptr_t) clinit_regexodus_REFlags,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_REFlags,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 0,
		.nativeMethods = (intptr_t) nullptr,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_REFlags = registerClass(&class_regexodus_REFlags);

}
