#include "regexodus/Optimizer.h"
#include "regexodus/Optimizer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Error.h"
#include "java/lang/String.h"
#include "regexodus/FindBack.h"
#include "regexodus/Find.h"
#include "java/lang/Class.h"
#include "regexodus/Term.h"

extern "C" {

jint SF_regexodus_Optimizer_THRESHOLD;

void mark_regexodus_Optimizer(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_Optimizer *) object;
	if (self->F_atom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atom)->clazz)->markFunction)((jobject) self->F_atom, mark, depth + 1);
}

void clinit_regexodus_Optimizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_Optimizer_THRESHOLD = jint(20);
}

jobject SM_regexodus_Optimizer_find_regexodus_Term_R_regexodus_Optimizer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:find", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Optimizer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:find", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Optimizer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	frame[2].o = sp[0].o;
	LINE_NUMBER(43);
	frame[3].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_type);
	LINE_NUMBER(44);
	switch((frame[3].i)) {
		case 0: goto label_4;
		case 1: goto label_5;
		case 2: goto label_5;
		case 4: goto label_6;
		case 5: goto label_6;
		case 6: goto label_4;
		case 7: goto label_4;
		case 15: goto label_4;
		case 46: goto label_7;
		case 47: goto label_7;
		default: goto label_8;
	}
	}
label_4:;
	{
	LINE_NUMBER(49);
	clinit_regexodus_Optimizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Optimizer);
	init_regexodus_Optimizer_regexodus_Term_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(52);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_weight) > (20)) goto label_9;
	}
	{
	clinit_regexodus_Optimizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Optimizer);
	init_regexodus_Optimizer_regexodus_Term_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_next;
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(ctx, sp[0].o, ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(ctx, (frame[2].o), ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(59);
	if (((jint)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_minCount) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((regexodus_Term *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(63);
	if ((frame[3].i) < (11)) goto label_12;
	}
	{
	if ((frame[3].i) > (31)) goto label_12;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(ctx, (frame[2].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void init_regexodus_Optimizer_regexodus_Term_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_Optimizer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(72);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(73);
	((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom = (jref) (frame[1].o);
	LINE_NUMBER(74);
	((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_distance = (frame[2].i);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:makeFirst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	clinit_regexodus_Find(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Find);
	sp[1].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	init_regexodus_Find_regexodus_Term_int_regexodus_Term(ctx, sp[0].o, sp[1].o, ((jint)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_distance), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:makeBacktrack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	frame[2].i = ((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_minCount);
	LINE_NUMBER(83);
	switch(((jint)((regexodus_Term *) NULL_CHECK((frame[1].o)))->F_type)) {
		case 50: goto label_2;
		case 51: goto label_3;
		case 52: goto label_4;
		case 53: goto label_4;
		case 54: goto label_5;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(85);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(87);
	clinit_regexodus_FindBack(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_FindBack);
	sp[1].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	init_regexodus_FindBack_regexodus_Term_int_int_regexodus_Term(ctx, sp[0].o, sp[1].o, ((jint)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_distance), (frame[2].i), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(93);
	clinit_java_lang_Error(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Error);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unexpected iterator's backtracker:"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_Error_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_regexodus_Optimizer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(101);
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
	LINE_NUMBER(103);
	frame[2].o = (checkCast(ctx, &class_regexodus_Optimizer, (frame[1].o)));
	LINE_NUMBER(105);
	if (((jint)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_distance) != ((jint)((regexodus_Optimizer *) NULL_CHECK((frame[2].o)))->F_distance)) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	sp[1].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[2].o)))->F_atom;
	jint temp0 = (jint)((func_regexodus_Term_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[2].o)))->F_atom;
	if (sp[0].o != nullptr) goto label_5;
	}
label_7:;
	INST_ICONST(1);
	goto label_8;
label_5:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_Optimizer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/Optimizer:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_atom;
	jint temp0 = (jint)((func_regexodus_Term_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(112);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_Optimizer *) NULL_CHECK((frame[0].o)))->F_distance));
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_Optimizer[] {
	(void *) M_regexodus_Optimizer_hashCode_R_int,
	(void *) M_regexodus_Optimizer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term,
	(void *) M_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term,
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
	{ "makeFirst", "(Lregexodus/Term;)Lregexodus/Term;" },
	{ "makeBacktrack", "(Lregexodus/Term;)Lregexodus/Term;" },
};

static FieldMetadata fields[] {
	{ "THRESHOLD", &class_int, (intptr_t) &SF_regexodus_Optimizer_THRESHOLD, "I", 26 },
	{ "atom", &class_regexodus_Term, offsetof(regexodus_Optimizer, F_atom), "Lregexodus/Term;", 2 },
	{ "distance", &class_int, offsetof(regexodus_Optimizer, F_distance), "I", 2 },
};

static MethodMetadata methods[] {
	{ "find", (intptr_t) SM_regexodus_Optimizer_find_regexodus_Term_R_regexodus_Optimizer, 0, "(Lregexodus/Term;)Lregexodus/Optimizer;", 8 },
	{ "find", (intptr_t) SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer, 0, "(Lregexodus/Term;I)Lregexodus/Optimizer;", 10 },
	{ "<init>", (intptr_t) init_regexodus_Optimizer_regexodus_Term_int, 0, "(Lregexodus/Term;I)V", 2 },
	{ "makeFirst", (intptr_t) M_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 0 },
	{ "makeBacktrack", (intptr_t) M_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term, VTABLE_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term, "(Lregexodus/Term;)Lregexodus/Term;", 0 },
	{ "equals", (intptr_t) M_regexodus_Optimizer_equals_java_lang_Object_R_boolean, VTABLE_regexodus_Optimizer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_Optimizer_hashCode_R_int, VTABLE_regexodus_Optimizer_hashCode_R_int, "()I", 1 },
};

Class class_regexodus_Optimizer{
		.nativeName = (intptr_t) "regexodus/Optimizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_Optimizer),
		.classVtable = (intptr_t) vtable_regexodus_Optimizer,
		.staticInitializer = (intptr_t) clinit_regexodus_Optimizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_Optimizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_Optimizer = registerClass(&class_regexodus_Optimizer);

}
