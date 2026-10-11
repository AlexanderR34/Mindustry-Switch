#include "regexodus/Replacer_TableSubstitution.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "regexodus/Replacer_TableSubstitution.h"
#include "java/util/Map_Entry.h"
#include "java/util/LinkedHashMap.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/Replacer.h"

extern "C" {


void mark_regexodus_Replacer$TableSubstitution(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Replacer$TableSubstitution *) object;
	if (self->F_dictionary)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dictionary)->clazz)->markFunction)((jobject) self->F_dictionary, mark, depth + 1);
}

void clinit_regexodus_Replacer$TableSubstitution(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_regexodus_Replacer$TableSubstitution_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$TableSubstitution:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$TableSubstitution(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(367);
	((regexodus_Replacer$TableSubstitution *) NULL_CHECK((frame[0].o)))->F_dictionary = (jref) (frame[1].o);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_Replacer$TableSubstitution_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$TableSubstitution:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Replacer$TableSubstitution(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(371);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	clinit_java_util_LinkedHashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_LinkedHashMap);
	init_java_util_LinkedHashMap_int(ctx, sp[1].o, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) / (jint(2))));
	((regexodus_Replacer$TableSubstitution *) NULL_CHECK(sp[0].o))->F_dictionary = (jref) sp[1].o;
	LINE_NUMBER(373);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_4;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((regexodus_Replacer$TableSubstitution *) NULL_CHECK((frame[0].o)))->F_dictionary;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) + (jint(1))))));
	LINE_NUMBER(373);
	INST_IINC(2, 2);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Replacer$TableSubstitution:appendSubstitution", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_regexodus_MatchResult_group_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_group_int_R_java_lang_String, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(380);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	LINE_NUMBER(381);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((regexodus_Replacer$TableSubstitution *) NULL_CHECK((frame[0].o)))->F_dictionary;
	sp[0].o = (jobject)((func_java_util_LinkedHashMap_entrySet_R_java_util_Set) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_LinkedHashMap_entrySet_R_java_util_Set])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_java_util_Map$Entry, sp[0].o));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return;
	}
label_7:;
	LINE_NUMBER(387);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(388);
	((func_regexodus_TextBuffer_append_java_lang_String) resolveInterfaceMethod(ctx, &class_regexodus_TextBuffer, INDEX_regexodus_TextBuffer_append_java_lang_String, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Replacer$TableSubstitution[] {
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
	(void *) M_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer,
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
	{ "appendSubstitution", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
};

static jclass interfaces[] { &class_regexodus_Substitution, };

static FieldMetadata fields[] {
	{ "dictionary", &class_java_util_LinkedHashMap, offsetof(regexodus_Replacer$TableSubstitution, F_dictionary), "Ljava/util/LinkedHashMap;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Replacer$TableSubstitution_java_util_LinkedHashMap, 0, "(Ljava/util/LinkedHashMap;)V", 0 },
	{ "<init>", (intptr_t) init_regexodus_Replacer$TableSubstitution_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 128 },
	{ "appendSubstitution", (intptr_t) M_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_regexodus_Replacer$TableSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 1 },
};

Class class_regexodus_Replacer$TableSubstitution{
		.nativeName = (intptr_t) "regexodus/Replacer$TableSubstitution",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Replacer$TableSubstitution),
		.classVtable = (intptr_t) vtable_regexodus_Replacer$TableSubstitution,
		.staticInitializer = (intptr_t) clinit_regexodus_Replacer$TableSubstitution,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Replacer$TableSubstitution,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_regexodus_Replacer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Replacer$TableSubstitution = registerClass(&class_regexodus_Replacer$TableSubstitution);

}

