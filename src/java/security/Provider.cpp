#include "java/security/Provider.h"
#include "java/security/Provider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/util/Properties.h"
#include "java/util/HashMap.h"
#include "java/lang/NullPointerException.h"
#include "java/util/Map.h"
#include "java/lang/Double.h"
#include "java/util/AbstractMap.h"

extern "C" {


void mark_java_security_Provider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Properties(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_Provider *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_versionStr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_versionStr)->clazz)->markFunction)((jobject) self->F_versionStr, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_java_security_Provider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Properties(ctx);
}

void init_java_security_Provider_java_lang_String_double_java_lang_String(jcontext ctx, jobject self, jobject param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_Provider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(11);
	init_java_util_Properties(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(13);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_version = (frame[2].d);
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Double_toString_double_R_java_lang_String(ctx, (frame[2].d));
	((java_security_Provider *) NULL_CHECK(sp[0].o))->F_versionStr = (jref) sp[1].o;
	LINE_NUMBER(15);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_info = (jref) (frame[4].o);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_Provider_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_Provider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	init_java_util_Properties(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(20);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_versionStr = (jref) (frame[2].o);
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_security_Provider_parseVersionStr_java_lang_String_R_double(ctx, (frame[2].o));
	((java_security_Provider *) NULL_CHECK(sp[0].o))->F_version = temp0;
	LINE_NUMBER(22);
	((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_info = (jref) (frame[3].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_Provider_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_java_security_Provider_getVersion_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:getVersion", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jdouble)((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_version);
	}

	popStackFrame(ctx);
}

jobject M_java_security_Provider_getVersionStr_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:getVersionStr", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_versionStr;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_security_Provider_getInfo_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:getInfo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((java_security_Provider *) NULL_CHECK((frame[0].o)))->F_info;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble SM_java_security_Provider_parseVersionStr_java_lang_String_R_double(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/Provider:parseVersionStr", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_Provider(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NullPointerException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (46));
	frame[1].i = temp0;
	LINE_NUMBER(44);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[0].o), (46), ((frame[1].i) + (jint(1))));
	frame[2].i = temp1;
	LINE_NUMBER(45);
	if ((frame[2].i) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[2].i));
	frame[0].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (45));
	frame[3].i = temp0;
	LINE_NUMBER(50);
	if ((frame[3].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[3].i));
	frame[0].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[0].o), (43));
	frame[3].i = temp0;
	LINE_NUMBER(55);
	if ((frame[3].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)), (frame[3].i));
	frame[0].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(59);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[0].o));
	sp[0].d = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_DRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(60);
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jdouble(0));
	}

	popStackFrame(ctx);
}

void *vtable_java_security_Provider[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_HashMap_clear,
	(void *) M_java_util_HashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_isEmpty_R_boolean,
	(void *) M_java_util_HashMap_keySet_R_java_util_Set,
	(void *) M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_HashMap_size_R_int,
	(void *) M_java_util_HashMap_values_R_java_util_Collection,
	(void *) M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_computeThreshold,
	(void *) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putAllImpl_java_util_Map,
	(void *) M_java_util_HashMap_rehash_int,
	(void *) M_java_util_HashMap_rehash,
	(void *) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean,
	(void *) M_java_util_Properties_getProperty_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Properties_load_java_io_InputStream,
	(void *) M_java_util_Properties_load_java_io_Reader,
	(void *) M_java_util_Properties_propertyNames_R_java_util_Enumeration,
	(void *) M_java_util_Properties_stringPropertyNames_R_java_util_Set,
	(void *) M_java_util_Properties_selectProperties_java_util_Hashtable_boolean,
	(void *) M_java_util_Properties_save_java_io_OutputStream_java_lang_String,
	(void *) M_java_util_Properties_setProperty_java_lang_String_java_lang_String_R_java_lang_Object,
	(void *) M_java_util_Properties_store_java_io_OutputStream_java_lang_String,
	(void *) M_java_util_Properties_store_java_io_Writer_java_lang_String,
	(void *) M_java_security_Provider_getName_R_java_lang_String,
	(void *) M_java_security_Provider_getVersion_R_double,
	(void *) M_java_security_Provider_getVersionStr_R_java_lang_String,
	(void *) M_java_security_Provider_getInfo_R_java_lang_String,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newElementArray", "(I)[Ljava/util/HashMap$Entry;" },
	{ "computeThreshold", "()V" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "findNonNullKeyEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "findNullKeyEntry", "()Ljava/util/HashMap$Entry;" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "createEntry", "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "createHashedEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
	{ "rehash", "(I)V" },
	{ "rehash", "()V" },
	{ "removeEntry", "(Ljava/util/HashMap$Entry;)V" },
	{ "removeEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "dumpString", "(Ljava/lang/StringBuilder;Ljava/lang/String;Z)V" },
	{ "getProperty", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "load", "(Ljava/io/InputStream;)V" },
	{ "load", "(Ljava/io/Reader;)V" },
	{ "propertyNames", "()Ljava/util/Enumeration;" },
	{ "stringPropertyNames", "()Ljava/util/Set;" },
	{ "selectProperties", "(Ljava/util/Hashtable;Z)V" },
	{ "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V" },
	{ "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V" },
	{ "store", "(Ljava/io/Writer;Ljava/lang/String;)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getVersion", "()D" },
	{ "getVersionStr", "()Ljava/lang/String;" },
	{ "getInfo", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "version", &class_double, offsetof(java_security_Provider, F_version), "D", 18 },
	{ "name", &class_java_lang_String, offsetof(java_security_Provider, F_name), "Ljava/lang/String;", 18 },
	{ "versionStr", &class_java_lang_String, offsetof(java_security_Provider, F_versionStr), "Ljava/lang/String;", 18 },
	{ "info", &class_java_lang_String, offsetof(java_security_Provider, F_info), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_security_Provider_java_lang_String_double_java_lang_String, 0, "(Ljava/lang/String;DLjava/lang/String;)V", 4 },
	{ "<init>", (intptr_t) init_java_security_Provider_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 4 },
	{ "getName", (intptr_t) M_java_security_Provider_getName_R_java_lang_String, VTABLE_java_security_Provider_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getVersion", (intptr_t) M_java_security_Provider_getVersion_R_double, VTABLE_java_security_Provider_getVersion_R_double, "()D", 1 },
	{ "getVersionStr", (intptr_t) M_java_security_Provider_getVersionStr_R_java_lang_String, VTABLE_java_security_Provider_getVersionStr_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getInfo", (intptr_t) M_java_security_Provider_getInfo_R_java_lang_String, VTABLE_java_security_Provider_getInfo_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "parseVersionStr", (intptr_t) SM_java_security_Provider_parseVersionStr_java_lang_String_R_double, 0, "(Ljava/lang/String;)D", 10 },
};

Class class_java_security_Provider{
		.nativeName = (intptr_t) "java/security/Provider",
		.parentClass = (intptr_t) &class_java_util_Properties,
		.size = sizeof(java_security_Provider),
		.classVtable = (intptr_t) vtable_java_security_Provider,
		.staticInitializer = (intptr_t) clinit_java_security_Provider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_Provider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_Provider = registerClass(&class_java_security_Provider);

}
