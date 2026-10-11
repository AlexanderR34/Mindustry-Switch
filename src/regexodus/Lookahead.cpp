#include "regexodus/Lookahead.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/Class.h"
#include "regexodus/Term.h"
#include "regexodus/Lookahead.h"

extern "C" {

jlong SF_regexodus_Lookahead_serialVersionUID;

void mark_regexodus_Lookahead(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Lookahead *) object;
}

void clinit_regexodus_Lookahead(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_Lookahead_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_Lookahead_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookahead:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Lookahead(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2238);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(2239);
	((regexodus_Lookahead *) NULL_CHECK((frame[0].o)))->F_isPositive = (frame[2].i);
	LINE_NUMBER(2240);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[0].o);
	LINE_NUMBER(2241);
	sp[0].o = frame[0].o;
	clinit_regexodus_Term(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[1].o);
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(2242);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2243);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (35);
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (36);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(2246);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (37);
	LINE_NUMBER(2247);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (38);
	LINE_NUMBER(2248);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_branchOut = (jref) (frame[0].o);
	}
label_8:;
	{
	LINE_NUMBER(2250);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId = (frame[1].i);
	LINE_NUMBER(2251);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_lookaheadId = (frame[1].i);
	LINE_NUMBER(2252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Lookahead_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookahead:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2256);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2257);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2258);
	jint temp0 = (jint)M_regexodus_Term_equals_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2260);
	frame[2].o = (checkCast(ctx, &class_regexodus_Lookahead, (frame[1].o)));
	LINE_NUMBER(2262);
	if (((jint)((regexodus_Lookahead *) NULL_CHECK((frame[0].o)))->F_isPositive) != ((jint)((regexodus_Lookahead *) NULL_CHECK((frame[2].o)))->F_isPositive)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Lookahead_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookahead:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2268);
	jint temp0 = (jint)M_regexodus_Term_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2269);
	jint temp1 = (31) * (frame[1].i);
	sp[0].i = temp1;
	sp += 1;
	if (((jint)((regexodus_Lookahead *) NULL_CHECK((frame[0].o)))->F_isPositive) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2270);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Lookahead[] {
	(void *) M_regexodus_Lookahead_hashCode_R_int,
	(void *) M_regexodus_Lookahead_equals_java_lang_Object_R_boolean,
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

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Lookahead_serialVersionUID, "J", 26 },
	{ "isPositive", &class_boolean, offsetof(regexodus_Lookahead, F_isPositive), "Z", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Lookahead_int_boolean, 0, "(IZ)V", 0 },
	{ "equals", (intptr_t) M_regexodus_Lookahead_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Lookahead_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Lookahead_hashCode_R_int, VTABLE_regexodus_Lookahead_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_Lookahead{
		.nativeName = (intptr_t) "regexodus/Lookahead",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_Lookahead),
		.classVtable = (intptr_t) vtable_regexodus_Lookahead,
		.staticInitializer = (intptr_t) clinit_regexodus_Lookahead,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Lookahead,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Lookahead = registerClass(&class_regexodus_Lookahead);

}
