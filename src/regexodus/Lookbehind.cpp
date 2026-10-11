#include "regexodus/Lookbehind.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "regexodus/Lookbehind.h"
#include "java/lang/Class.h"
#include "regexodus/Term.h"
#include "regexodus/PatternSyntaxException.h"

extern "C" {

jlong SF_regexodus_Lookbehind_serialVersionUID;

void mark_regexodus_Lookbehind(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Lookbehind *) object;
}

void clinit_regexodus_Lookbehind(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_regexodus_Term(ctx);
	SF_regexodus_Lookbehind_serialVersionUID = jlong(2528136757932720807ll);
}

void init_regexodus_Lookbehind_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Lookbehind(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2280);
	init_regexodus_Term(ctx, (frame[0].o));
	LINE_NUMBER(2278);
	((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_prevDistance = (jint(-1));
	LINE_NUMBER(2281);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance = (jint(0));
	LINE_NUMBER(2282);
	((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_isPositive = (frame[2].i);
	LINE_NUMBER(2283);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[0].o);
	LINE_NUMBER(2284);
	sp[0].o = frame[0].o;
	clinit_regexodus_Term(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_Term);
	init_regexodus_Term(ctx, sp[1].o);
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(2285);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2286);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (39);
	LINE_NUMBER(2287);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (40);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(2289);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type = (41);
	LINE_NUMBER(2290);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_type = (42);
	LINE_NUMBER(2291);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_branchOut = (jref) (frame[0].o);
	}
label_10:;
	{
	LINE_NUMBER(2293);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_lookaheadId = (frame[1].i);
	LINE_NUMBER(2294);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_out;
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_lookaheadId = (frame[1].i);
	LINE_NUMBER(2295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Lookbehind_append_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:append", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2298);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_Term *) NULL_CHECK(sp[0].o))->F_distance;
	jint temp1 = (jint)SM_regexodus_Lookbehind_length_regexodus_Term_R_int(ctx, (frame[1].o));
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_distance = (temp0 + temp1);
	LINE_NUMBER(2299);
	sp[0].o = (jobject)M_regexodus_Term_append_regexodus_Term_R_regexodus_Term(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Lookbehind_replaceCurrent_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:replaceCurrent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2303);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((regexodus_Term *) NULL_CHECK(sp[0].o))->F_distance;
	jint temp1 = (jint)SM_regexodus_Lookbehind_length_regexodus_Term_R_int(ctx, (frame[1].o));
	sp[1].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp2 = (jint)SM_regexodus_Lookbehind_length_regexodus_Term_R_int(ctx, sp[1].o);
	((regexodus_Term *) NULL_CHECK(sp[0].o))->F_distance = (temp0 + (temp1 - temp2));
	LINE_NUMBER(2304);
	sp[0].o = (jobject)M_regexodus_Term_replaceCurrent_regexodus_Term_R_regexodus_Term(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_regexodus_Lookbehind_length_regexodus_Term_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:length", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Lookbehind(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2308);
	frame[1].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type);
	LINE_NUMBER(2309);
	switch((frame[1].i)) {
		case 0: goto label_2;
		case 1: goto label_2;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_2;
		case 5: goto label_2;
		case 6: goto label_3;
		case 7: goto label_3;
		case 8: goto label_3;
		case 9: goto label_3;
		case 10: goto label_3;
		case 11: goto label_4;
		case 12: goto label_4;
		case 13: goto label_4;
		case 14: goto label_4;
		default: goto label_3;
	}
	}
label_2:;
	{
	LINE_NUMBER(2315);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(2320);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2322);
	if ((frame[1].i) < (11)) goto label_5;
	}
	{
	if ((frame[1].i) > (31)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2323);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"variable length element within a lookbehind assertion"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_regexodus_Lookbehind_startNewBranch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:startNewBranch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2328);
	((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_prevDistance = ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance);
	LINE_NUMBER(2329);
	((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance = (jint(0));
	LINE_NUMBER(2330);
	M_regexodus_Term_startNewBranch(ctx, (frame[0].o));
	LINE_NUMBER(2331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_Lookbehind_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2334);
	frame[1].i = ((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_prevDistance);
	LINE_NUMBER(2335);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(2336);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_distance) == (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(2337);
	clinit_regexodus_PatternSyntaxException(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PatternSyntaxException);
	init_regexodus_PatternSyntaxException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"non-equal branch lengths within a lookbehind assertion"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(2339);
	M_regexodus_Term_close(ctx, (frame[0].o));
	LINE_NUMBER(2340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_Lookbehind_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2344);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2345);
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
	LINE_NUMBER(2346);
	jint temp0 = (jint)M_regexodus_Term_equals_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2348);
	frame[2].o = (checkCast(ctx, &class_regexodus_Lookbehind, (frame[1].o)));
	LINE_NUMBER(2350);
	if (((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_isPositive) != ((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[2].o)))->F_isPositive)) goto label_6;
	}
	{
	if (((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_prevDistance) != ((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[2].o)))->F_prevDistance)) goto label_6;
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

jint M_regexodus_Lookbehind_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Lookbehind:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2356);
	jint temp0 = (jint)M_regexodus_Term_hashCode_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(2357);
	jint temp1 = (31) * (frame[1].i);
	sp[0].i = temp1;
	sp += 1;
	if (((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_isPositive) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2358);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Lookbehind *) NULL_CHECK((frame[0].o)))->F_prevDistance));
	LINE_NUMBER(2359);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Lookbehind[] {
	(void *) M_regexodus_Lookbehind_hashCode_R_int,
	(void *) M_regexodus_Lookbehind_equals_java_lang_Object_R_boolean,
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
	(void *) M_regexodus_Lookbehind_append_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Lookbehind_replaceCurrent_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Term_newBranch,
	(void *) M_regexodus_Lookbehind_close,
	(void *) M_regexodus_Lookbehind_startNewBranch,
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
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_Lookbehind_serialVersionUID, "J", 26 },
	{ "isPositive", &class_boolean, offsetof(regexodus_Lookbehind, F_isPositive), "Z", 16 },
	{ "prevDistance", &class_int, offsetof(regexodus_Lookbehind, F_prevDistance), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_Lookbehind_int_boolean, 0, "(IZ)V", 0 },
	{ "append", (intptr_t) M_regexodus_Lookbehind_append_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Lookbehind_append_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 4 },
	{ "replaceCurrent", (intptr_t) M_regexodus_Lookbehind_replaceCurrent_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Lookbehind_replaceCurrent_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 4 },
	{ "length", (intptr_t) SM_regexodus_Lookbehind_length_regexodus_Term_R_int, 0, "(Lregexodus/Term;)I", 10 },
	{ "startNewBranch", (intptr_t) M_regexodus_Lookbehind_startNewBranch, VTABLE_regexodus_Lookbehind_startNewBranch, "()V", 4 },
	{ "close", (intptr_t) M_regexodus_Lookbehind_close, VTABLE_regexodus_Lookbehind_close, "()V", 4 },
	{ "equals", (intptr_t) M_regexodus_Lookbehind_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Lookbehind_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Lookbehind_hashCode_R_int, VTABLE_regexodus_Lookbehind_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_Lookbehind{
		.nativeName = (intptr_t) "regexodus/Lookbehind",
		.parentClass = (intptr_t) &class_regexodus_Term,
		.size = sizeof(regexodus_Lookbehind),
		.classVtable = (intptr_t) vtable_regexodus_Lookbehind,
		.staticInitializer = (intptr_t) clinit_regexodus_Lookbehind,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Lookbehind,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Lookbehind = registerClass(&class_regexodus_Lookbehind);

}
