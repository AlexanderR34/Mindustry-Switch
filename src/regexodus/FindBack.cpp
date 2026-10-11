#include "regexodus/FindBack.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/FindBack.h"
#include "java/lang/IllegalArgumentException.h"
#include "regexodus/Term.h"

extern "C" {


void mark_regexodus_FindBack(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_regexodus_Term(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (regexodus_FindBack *) object;
}

void clinit_regexodus_FindBack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
}

void init_regexodus_FindBack_regexodus_Term_int_int_regexodus_Term(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/FindBack:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_FindBack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(146);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(147);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount = (frame[3].i);
	LINE_NUMBER(148);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 0: goto label_3;
		case 1: goto label_3;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_4;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_5;
		case 8: goto label_4;
		case 9: goto label_4;
		case 10: goto label_4;
		case 11: goto label_4;
		case 12: goto label_4;
		case 13: goto label_4;
		case 14: goto label_4;
		case 15: goto label_5;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(152);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (52);
	LINE_NUMBER(153);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(157);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (53);
	LINE_NUMBER(158);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(160);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"wrong target type: "_j))));
	sp[2].o = (jobject)SM_regexodus_Term_termLookup_int_R_java_lang_String(ctx, ((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(163);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(164);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance = (frame[2].i);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[4].o)))->F_next;
	frame[5].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[1].o) != (frame[5].o)) goto label_12;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_next;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(168);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_eat = (jint(1));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(170);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[5].o);
	LINE_NUMBER(171);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_eat = (jint(0));
	}
label_15:;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_regexodus_FindBack[] {
	(void *) M_regexodus_Term_hashCode_R_int,
	(void *) M_regexodus_Term_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_Term_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Term_append_int_int_Array1_char_Array1_int_Array1_int_java_util_ArrayList_java_util_HashMap,
	(void *) M_regexodus_Term_append_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_newBranch,
	(void *) M_regexodus_Term_close,
	(void *) M_regexodus_Term_startNewBranch,
	(void *) M_regexodus_Term_parseTerm_Array1_char_int_int_regexodus_Term_int_R_int,
	(void *) M_regexodus_Term_toStringAll_R_java_lang_String,
	(void *) M_regexodus_Term_toStringAll_java_util_ArrayList_R_java_lang_String,
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
	{ "append", "(II[C[I[ILjava/util/ArrayList;Ljava/util/HashMap;)V" },
	{ "append", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "replaceCurrent", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "newBranch", "()V" },
	{ "close", "()V" },
	{ "startNewBranch", "()V" },
	{ "parseTerm", "([CIILregexodus/Term;I)I" },
	{ "toStringAll", "()Ljava/lang/String;" },
	{ "toStringAll", "(Ljava/util/ArrayList;)Ljava/lang/String;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_FindBack_regexodus_Term_int_int_regexodus_Term, 0, "(Lregexodus/Term;IILregexodus/Term;)V", 0 },
};

Class class_regexodus_FindBack{
		.nativeName = (intptr_t) "regexodus/FindBack",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_FindBack),
		.classVtable = (intptr_t) vtable_regexodus_FindBack,
		.staticInitializer = (intptr_t) clinit_regexodus_FindBack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_FindBack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_FindBack = registerClass(&class_regexodus_FindBack);

}
