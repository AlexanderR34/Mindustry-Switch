#include "java/net/URIHelper_URIQueryTokenizer.h"
#include "java/net/URIHelper.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URIHelper_URIQueryTokenizer.h"
#include "java/lang/StringBuffer.h"

extern "C" {


void mark_java_net_URIHelper$URIQueryTokenizer(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_URIHelper$URIQueryTokenizer *) object;
	if (self->F_source)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_source)->clazz)->markFunction)((jobject) self->F_source, mark, depth + 1);
}

void clinit_java_net_URIHelper$URIQueryTokenizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_URIHelper$URIQueryTokenizer_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$URIQueryTokenizer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper$URIQueryTokenizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(354);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(355);
	((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source = (jref) (frame[1].o);
	LINE_NUMBER(356);
	((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$URIQueryTokenizer:hasMoreTokens", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	if (((jint)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index) == (jint(-1))) goto label_1;
	}
	{
	jint temp0 = (jint)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$URIQueryTokenizer:nextToken", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(365);
	frame[2].i = ((jint)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index);
	}
label_2:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, (38), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(369);
	if ((frame[3].i) != (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(371);
	((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(372);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, (59), (frame[3].i));
	frame[4].i = temp0;
	LINE_NUMBER(377);
	if ((frame[4].i) == (jint(-1))) goto label_10;
	}
	{
	if (((frame[4].i) - (frame[3].i)) <= (6)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(379);
	((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(380);
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[3].i), ((frame[4].i) + (jint(1))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(385);
	jint temp0 = (jint)SM_java_net_URIHelper_decodeEntity_java_lang_String_R_char(ctx, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(386);
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (frame[6].i));
	LINE_NUMBER(389);
	frame[2].i = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(390);
	goto label_2;
	}
label_16:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_source;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(395);
	((java_net_URIHelper$URIQueryTokenizer *) NULL_CHECK((frame[0].o)))->F_index = ((frame[3].i) + (jint(1)));
	LINE_NUMBER(396);
	goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_URIHelper$URIQueryTokenizer[] {
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
	(void *) M_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean,
	(void *) M_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String,
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
	{ "hasMoreTokens", "()Z" },
	{ "nextToken", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "source", &class_java_lang_String, offsetof(java_net_URIHelper$URIQueryTokenizer, F_source), "Ljava/lang/String;", 2 },
	{ "index", &class_int, offsetof(java_net_URIHelper$URIQueryTokenizer, F_index), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URIHelper$URIQueryTokenizer_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "hasMoreTokens", (intptr_t) M_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean, VTABLE_java_net_URIHelper$URIQueryTokenizer_hasMoreTokens_R_boolean, "()Z", 1 },
	{ "nextToken", (intptr_t) M_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String, VTABLE_java_net_URIHelper$URIQueryTokenizer_nextToken_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_net_URIHelper$URIQueryTokenizer{
		.nativeName = (intptr_t) "java/net/URIHelper$URIQueryTokenizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_URIHelper$URIQueryTokenizer),
		.classVtable = (intptr_t) vtable_java_net_URIHelper$URIQueryTokenizer,
		.staticInitializer = (intptr_t) clinit_java_net_URIHelper$URIQueryTokenizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URIHelper$URIQueryTokenizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_URIHelper,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
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
static bool registered_java_net_URIHelper$URIQueryTokenizer = registerClass(&class_java_net_URIHelper$URIQueryTokenizer);

}

