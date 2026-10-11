#include "java/util/Objects.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/util/function/Supplier.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"

extern "C" {


void mark_java_util_Objects(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Objects *) object;
}

void clinit_java_util_Objects(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Objects(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No java.util.Objects instances for you!"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(62);
	if ((frame[0].o) == (frame[1].o)) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o == nullptr) goto label_2;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_Objects_deepEquals_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:deepEquals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(83);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(85);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)SM_java_util_Arrays_deepEqualsElements_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Objects_hashCode_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Objects_hash_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:hash", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Objects_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(162);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Objects_compare_java_lang_Object_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(186);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[2].o)))(ctx, (frame[2].o), (frame[0].o), (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:requireNonNull", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(205);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(206);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:requireNonNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(230);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(231);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Objects_isNull_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:isNull", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(250);
	if ((frame[0].o) != nullptr) goto label_1;
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

jbool SM_java_util_Objects_nonNull_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:nonNull", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(268);
	if ((frame[0].o) == nullptr) goto label_1;
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

jobject SM_java_util_Objects_requireNonNull_java_lang_Object_java_util_function_Supplier_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Objects:requireNonNull", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Objects(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(272);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(273);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	sp[0].o = (jobject)((func_java_util_function_Supplier_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Supplier, INDEX_java_util_function_Supplier_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	}
label_5:;
	POP_N(2); // Pop method args
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, sp[1].o);
	INST_ATHROW();
	label_1:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Objects[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Objects, 0, "()V", 2 },
	{ "equals", (intptr_t) SM_java_util_Objects_equals_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "deepEquals", (intptr_t) SM_java_util_Objects_deepEquals_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Objects_hashCode_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 9 },
	{ "hash", (intptr_t) SM_java_util_Objects_hash_Array1_java_lang_Object_R_int, 0, "([Ljava/lang/Object;)I", 137 },
	{ "toString", (intptr_t) SM_java_util_Objects_toString_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Objects_toString_java_lang_Object_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "compare", (intptr_t) SM_java_util_Objects_compare_java_lang_Object_java_lang_Object_java_util_Comparator_R_int, 0, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I", 9 },
	{ "requireNonNull", (intptr_t) SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;)Ljava/lang/Object;", 9 },
	{ "requireNonNull", (intptr_t) SM_java_util_Objects_requireNonNull_java_lang_Object_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "isNull", (intptr_t) SM_java_util_Objects_isNull_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "nonNull", (intptr_t) SM_java_util_Objects_nonNull_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "requireNonNull", (intptr_t) SM_java_util_Objects_requireNonNull_java_lang_Object_java_util_function_Supplier_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/util/function/Supplier;)Ljava/lang/Object;", 9 },
};

Class class_java_util_Objects{
		.nativeName = (intptr_t) "java/util/Objects",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Objects),
		.classVtable = (intptr_t) vtable_java_util_Objects,
		.staticInitializer = (intptr_t) clinit_java_util_Objects,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Objects,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Objects = registerClass(&class_java_util_Objects);

}
