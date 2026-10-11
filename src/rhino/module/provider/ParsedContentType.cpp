#include "rhino/module/provider/ParsedContentType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/module/provider/ParsedContentType.h"
#include "java/util/StringTokenizer.h"

extern "C" {


void mark_rhino_module_provider_ParsedContentType(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_ParsedContentType *) object;
	if (self->F_contentType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentType)->clazz)->markFunction)((jobject) self->F_contentType, mark, depth + 1);
	if (self->F_encoding)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encoding)->clazz)->markFunction)((jobject) self->F_encoding, mark, depth + 1);
}

void clinit_rhino_module_provider_ParsedContentType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_ParsedContentType_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ParsedContentType:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_ParsedContentType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(22);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(23);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(24);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"charset="_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[5].o), (8));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(32);
	if ((frame[6].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	if (temp0 != (34)) goto label_16;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), (jint(1)));
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(36);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), ((frame[6].i) - (jint(1))));
	if (temp0 != (34)) goto label_4;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), ((frame[6].i) - (jint(1))));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_11:;
	LINE_NUMBER(42);
	goto label_8;
label_4:;
	{
	LINE_NUMBER(45);
	((rhino_module_provider_ParsedContentType *) NULL_CHECK((frame[0].o)))->F_contentType = (jref) (frame[2].o);
	LINE_NUMBER(46);
	((rhino_module_provider_ParsedContentType *) NULL_CHECK((frame[0].o)))->F_encoding = (jref) (frame[3].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ParsedContentType:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((rhino_module_provider_ParsedContentType *) NULL_CHECK((frame[0].o)))->F_contentType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/ParsedContentType:getEncoding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((rhino_module_provider_ParsedContentType *) NULL_CHECK((frame[0].o)))->F_encoding;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_ParsedContentType[] {
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
	(void *) M_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String,
	(void *) M_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String,
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
	{ "getContentType", "()Ljava/lang/String;" },
	{ "getEncoding", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "contentType", &class_java_lang_String, offsetof(rhino_module_provider_ParsedContentType, F_contentType), "Ljava/lang/String;", 18 },
	{ "encoding", &class_java_lang_String, offsetof(rhino_module_provider_ParsedContentType, F_encoding), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_ParsedContentType_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getContentType", (intptr_t) M_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String, VTABLE_rhino_module_provider_ParsedContentType_getContentType_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getEncoding", (intptr_t) M_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String, VTABLE_rhino_module_provider_ParsedContentType_getEncoding_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_module_provider_ParsedContentType{
		.nativeName = (intptr_t) "rhino/module/provider/ParsedContentType",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_ParsedContentType),
		.classVtable = (intptr_t) vtable_rhino_module_provider_ParsedContentType,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_ParsedContentType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_ParsedContentType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_ParsedContentType = registerClass(&class_rhino_module_provider_ParsedContentType);

}
