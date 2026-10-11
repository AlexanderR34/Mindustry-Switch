#include "java/util/Comparators_NullComparator.h"
#include "java/util/Comparators_NullComparator.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"
#include "java/util/Comparators.h"
#include "java/util/Objects.h"

extern "C" {

jlong SF_java_util_Comparators$NullComparator_serialVersionUID;

void mark_java_util_Comparators$NullComparator(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Comparators$NullComparator *) object;
	if (self->F_real)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_real)->clazz)->markFunction)((jobject) self->F_real, mark, depth + 1);
}

void clinit_java_util_Comparators$NullComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Comparators$NullComparator_serialVersionUID = jlong(-7569533591570686392ll);
}

void init_java_util_Comparators$NullComparator_boolean_java_util_Comparator(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NullComparator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Comparators$NullComparator(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(72);
	((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_nullFirst = (frame[1].i);
	LINE_NUMBER(73);
	((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real = (jref) (frame[2].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Comparators$NullComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NullComparator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(79);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	if (((jint)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_nullFirst) == 0) goto label_5;
	}
	INST_ICONST(-1);
	goto label_4;
label_5:;
	INST_ICONST(1);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(80);
	if ((frame[2].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(81);
	if (((jint)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_nullFirst) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	{
	sp[0].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Comparators$NullComparator_thenComparing_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NullComparator:thenComparing", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[1].o));
	LINE_NUMBER(90);
	clinit_java_util_Comparators$NullComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Comparators$NullComparator);
	jint temp0 = (jint)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_nullFirst;
	sp[1].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	sp[0].o = (jobject)((func_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_3:;
	POP_N(3); // Pop method args
	init_java_util_Comparators$NullComparator_boolean_java_util_Comparator(ctx, sp[0].o, sp[1].i, sp[2].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Comparators$NullComparator_reversed_R_java_util_Comparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Comparators$NullComparator:reversed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_java_util_Comparators$NullComparator(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Comparators$NullComparator);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_nullFirst) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp[0].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_util_Comparators$NullComparator *) NULL_CHECK((frame[0].o)))->F_real;
	sp[0].o = (jobject)((func_java_util_Comparator_reversed_R_java_util_Comparator) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_reversed_R_java_util_Comparator, sp[0].o))(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	POP_N(3); // Pop method args
	init_java_util_Comparators$NullComparator_boolean_java_util_Comparator(ctx, sp[0].o, sp[1].i, sp[2].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_Comparators$NullComparator[] {
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
	(void *) M_java_util_Comparators$NullComparator_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparators$NullComparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparators$NullComparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_Comparators$NullComparator_serialVersionUID, "J", 26 },
	{ "nullFirst", &class_boolean, offsetof(java_util_Comparators$NullComparator, F_nullFirst), "Z", 18 },
	{ "real", &class_java_util_Comparator, offsetof(java_util_Comparators$NullComparator, F_real), "Ljava/util/Comparator;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Comparators$NullComparator_boolean_java_util_Comparator, 0, "(ZLjava/util/Comparator;)V", 0 },
	{ "compare", (intptr_t) M_java_util_Comparators$NullComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_java_util_Comparators$NullComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
	{ "thenComparing", (intptr_t) M_java_util_Comparators$NullComparator_thenComparing_java_util_Comparator_R_java_util_Comparator, VTABLE_java_util_Comparators$NullComparator_thenComparing_java_util_Comparator_R_java_util_Comparator, "(Ljava/util/Comparator;)Ljava/util/Comparator;", 1 },
	{ "reversed", (intptr_t) M_java_util_Comparators$NullComparator_reversed_R_java_util_Comparator, VTABLE_java_util_Comparators$NullComparator_reversed_R_java_util_Comparator, "()Ljava/util/Comparator;", 1 },
};

Class class_java_util_Comparators$NullComparator{
		.nativeName = (intptr_t) "java/util/Comparators$NullComparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Comparators$NullComparator),
		.classVtable = (intptr_t) vtable_java_util_Comparators$NullComparator,
		.staticInitializer = (intptr_t) clinit_java_util_Comparators$NullComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Comparators$NullComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Comparators,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Comparators$NullComparator = registerClass(&class_java_util_Comparators$NullComparator);

}

