#include "java/util/Scanner_PatternLRUCache.h"
#include "java/lang/Object.h"
#include "java/util/Scanner.h"
#include "java/util/regex/Pattern.h"
#include "java/lang/String.h"
#include "java/util/Scanner_PatternLRUCache.h"

extern "C" {


void mark_java_util_Scanner$PatternLRUCache(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Scanner$PatternLRUCache *) object;
	if (self->F_oa)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oa)->clazz)->markFunction)((jobject) self->F_oa, mark, depth + 1);
}

void clinit_java_util_Scanner$PatternLRUCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Scanner$PatternLRUCache_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$PatternLRUCache:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Scanner$PatternLRUCache(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2920);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2917);
	((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa = (jref) (jobject(nullptr));
	LINE_NUMBER(2921);
	((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(2922);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$PatternLRUCache:hasName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2925);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_pattern_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Pattern_pattern_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$PatternLRUCache:moveToFront", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2929);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(2930);
	frame[4].i = (frame[2].i);
	}
label_2:;
	INST_ILOAD(4);
	if ((--sp)->i <= 0) goto label_3;
	{
	LINE_NUMBER(2931);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[4].i) - (jint(1)))));
	LINE_NUMBER(2930);
	INST_IINC(4, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2932);
	ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))) = (frame[3].o);
	LINE_NUMBER(2933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Scanner$PatternLRUCache:forName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2936);
	sp[0].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2937);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_regex_Pattern, ((jint)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_size));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2938);
	((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa = (jref) (frame[2].o);
	LINE_NUMBER(2939);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(2940);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(2941);
	sp[0].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(2942);
	if ((frame[3].o) != nullptr) goto label_9;
	}
	LINE_NUMBER(2943);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(2944);
	jint temp0 = (jint)((func_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(2945);
	if ((frame[2].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(2946);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	((func_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, (frame[2].i));
	}
label_13:;
	{
	LINE_NUMBER(2947);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(2940);
	INST_IINC(2, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2953);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2954);
	sp[0].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	sp[1].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	ARRAY_ACCESS(jobject, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)))) = (frame[2].o);
	LINE_NUMBER(2955);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	sp[2].o = (jobject)((java_util_Scanner$PatternLRUCache *) NULL_CHECK((frame[0].o)))->F_oa;
	((func_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (jint(1))));
	LINE_NUMBER(2956);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Scanner$PatternLRUCache[] {
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
	(void *) M_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean,
	(void *) M_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int,
	(void *) M_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern,
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
	{ "hasName", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z" },
	{ "moveToFront", "([Ljava/lang/Object;I)V" },
	{ "forName", "(Ljava/lang/String;)Ljava/util/regex/Pattern;" },
};

static FieldMetadata fields[] {
	{ "oa", getArrayClass(&class_java_util_regex_Pattern, 1), offsetof(java_util_Scanner$PatternLRUCache, F_oa), "[Ljava/util/regex/Pattern;", 2 },
	{ "size", &class_int, offsetof(java_util_Scanner$PatternLRUCache, F_size), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Scanner$PatternLRUCache_int, 0, "(I)V", 0 },
	{ "hasName", (intptr_t) M_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean, VTABLE_java_util_Scanner$PatternLRUCache_hasName_java_util_regex_Pattern_java_lang_String_R_boolean, "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", 0 },
	{ "moveToFront", (intptr_t) M_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int, VTABLE_java_util_Scanner$PatternLRUCache_moveToFront_Array1_java_lang_Object_int, "([Ljava/lang/Object;I)V", 0 },
	{ "forName", (intptr_t) M_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern, VTABLE_java_util_Scanner$PatternLRUCache_forName_java_lang_String_R_java_util_regex_Pattern, "(Ljava/lang/String;)Ljava/util/regex/Pattern;", 0 },
};

Class class_java_util_Scanner$PatternLRUCache{
		.nativeName = (intptr_t) "java/util/Scanner$PatternLRUCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Scanner$PatternLRUCache),
		.classVtable = (intptr_t) vtable_java_util_Scanner$PatternLRUCache,
		.staticInitializer = (intptr_t) clinit_java_util_Scanner$PatternLRUCache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Scanner$PatternLRUCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Scanner,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Scanner$PatternLRUCache = registerClass(&class_java_util_Scanner$PatternLRUCache);

}

