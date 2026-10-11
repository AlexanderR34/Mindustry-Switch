#include "regexodus/TermIterator.h"
#include "regexodus/Optimizer.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "regexodus/TermIterator.h"
#include "java/util/ArrayList.h"
#include "regexodus/Term.h"
#include "regexodus/PatternSyntaxException.h"

extern "C" {

jlong SF_regexodus_TermIterator_serialVersionUID;

void mark_regexodus_TermIterator(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_TermIterator *) object;
}

void clinit_regexodus_TermIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_TermIterator_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_TermIterator_regexodus_Term_int_int_java_util_ArrayList(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/TermIterator:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_TermIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2366);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(2367);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(2368);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 0: goto label_3;
		case 1: goto label_3;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_3;
		case 5: goto label_3;
		case 6: goto label_5;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(2374);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(2375);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2376);
	if ((frame[2].i) > 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_8;
	{
	LINE_NUMBER(2377);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (45);
	LINE_NUMBER(2378);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type = (50);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(2379);
	if ((frame[2].i) <= 0) goto label_12;
	}
	INST_ILOAD(3);
	if ((--sp)->i >= 0) goto label_12;
	{
	LINE_NUMBER(2380);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (46);
	LINE_NUMBER(2381);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type = (51);
	LINE_NUMBER(2382);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jint temp0 = frame[2].i;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_minCount = temp0;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_minCount = temp0;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(2384);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (47);
	LINE_NUMBER(2385);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type = (51);
	LINE_NUMBER(2386);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jint temp0 = frame[2].i;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_minCount = temp0;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_minCount = temp0;
	LINE_NUMBER(2387);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount = (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(2390);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext = (jref) (frame[5].o);
	LINE_NUMBER(2392);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[0].o);
	LINE_NUMBER(2393);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[0].o);
	LINE_NUMBER(2394);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out1 = (jref) (frame[5].o);
	LINE_NUMBER(2395);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(2396);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(2399);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(2400);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_memreg = ((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_memreg);
	LINE_NUMBER(2401);
	clinit_regexodus_Term(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2402);
	if ((frame[3].i) >= 0) goto label_27;
	}
	{
	LINE_NUMBER(2403);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (48);
	LINE_NUMBER(2404);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type = (54);
	LINE_NUMBER(2405);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jint temp0 = frame[2].i;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_minCount = temp0;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_minCount = temp0;
	goto label_31;
	}
label_27:;
	{
	LINE_NUMBER(2407);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (49);
	LINE_NUMBER(2408);
	((regexodus_Term *) NULL_CHECK((frame[5].o)))->F_type = (54);
	LINE_NUMBER(2409);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	jint temp0 = frame[2].i;
	((regexodus_Term *) NULL_CHECK(sp[1].o))->F_minCount = temp0;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_minCount = temp0;
	LINE_NUMBER(2410);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_maxCount = (frame[3].i);
	}
label_31:;
	{
	LINE_NUMBER(2413);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext = (jref) (frame[5].o);
	LINE_NUMBER(2415);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[0].o);
	LINE_NUMBER(2416);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out = (jref) (frame[0].o);
	LINE_NUMBER(2417);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out1 = (jref) (frame[5].o);
	LINE_NUMBER(2418);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_branchOut = (jref) (jobject(nullptr));
	LINE_NUMBER(2419);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(2422);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"can't iterate this type: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_regexodus_TermIterator_optimize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/TermIterator:optimize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2428);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_failNext;
	frame[1].o = sp[0].o;
	LINE_NUMBER(2429);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_next;
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_R_regexodus_Optimizer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2430);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2431);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term])(ctx, (frame[2].o), (frame[1].o));
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_failNext = (jref) sp[1].o;
	LINE_NUMBER(2432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_TermIterator[] {
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
	(void *) M_regexodus_TermIterator_optimize,
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
	{ "optimize", "()V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_TermIterator_serialVersionUID, "J", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_TermIterator_regexodus_Term_int_int_java_util_ArrayList, 0, "(Lregexodus/Term;IILjava/util/ArrayList;)V", 0 },
	{ "optimize", (intptr_t) M_regexodus_TermIterator_optimize, VTABLE_regexodus_TermIterator_optimize, "()V", 0 },
};

Class class_regexodus_TermIterator{
		.nativeName = (intptr_t) "regexodus/TermIterator",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_TermIterator),
		.classVtable = (intptr_t) vtable_regexodus_TermIterator,
		.staticInitializer = (intptr_t) clinit_regexodus_TermIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_TermIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_TermIterator = registerClass(&class_regexodus_TermIterator);

}
