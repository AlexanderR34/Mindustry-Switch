#include "java/lang/Enum.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Comparable.h"
#include "java/lang/NoSuchFieldException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_lang_Enum(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_Enum *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_java_lang_Enum(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_Enum_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Enum(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(41);
	((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_ordinal = (frame[2].i);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Enum_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:clone", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Clone not supported"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_java_lang_Enum_setEnumValues_Array1_java_lang_Object_java_lang_Class(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:setEnumValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Enum(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_lang_Enum_getEnumValues_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:getEnumValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Enum(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:valueOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	clinit_java_lang_Enum(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { goto label_4; }
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_12; }
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"$VALUES"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[2].o), (jobject(nullptr)));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Enum, 1), sp[0].o));
	LINE_NUMBER(60);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_6
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 2); goto label_5; }
	}
	LINE_NUMBER(62);
	INST_ALOAD(7);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { goto label_8; }
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_6; }
	{
	LINE_NUMBER(60);
	INST_IINC(6, 1);
	{ popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_3; } // goto label_12
	}
label_6:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(63);
	goto label_15;
label_2:;
	INST_ASTORE(2);
label_15:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_Enum_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
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

jint M_java_lang_Enum_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return ((jint)((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_ordinal);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Enum_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Enum_compareTo_java_lang_Enum_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (((jint)((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_ordinal) - ((jint)((java_lang_Enum *) NULL_CHECK((frame[1].o)))->F_ordinal));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Enum_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_lang_Enum_ordinal_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:ordinal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return ((jint)((java_lang_Enum *) NULL_CHECK((frame[0].o)))->F_ordinal);
	}

	popStackFrame(ctx);
}

jobject M_java_lang_Enum_getDeclaringClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:getDeclaringClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_lang_Enum_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Enum:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Enum_compareTo_java_lang_Enum_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Enum_compareTo_java_lang_Enum_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_Enum, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Enum[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_lang_Enum, F_name), "Ljava/lang/String;", 18 },
	{ "ordinal", &class_int, offsetof(java_lang_Enum, F_ordinal), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Enum_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 4 },
	{ "clone", (intptr_t) M_java_lang_Enum_clone_R_java_lang_Object, VTABLE_java_lang_Enum_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setEnumValues", (intptr_t) SM_java_lang_Enum_setEnumValues_Array1_java_lang_Object_java_lang_Class, 0, "([Ljava/lang/Object;Ljava/lang/Class;)V", 28 },
	{ "getEnumValues", (intptr_t) SM_java_lang_Enum_getEnumValues_java_lang_Class_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;)[Ljava/lang/Object;", 28 },
	{ "valueOf", (intptr_t) SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;", 9 },
	{ "equals", (intptr_t) M_java_lang_Enum_equals_java_lang_Object_R_boolean, VTABLE_java_lang_Enum_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 17 },
	{ "hashCode", (intptr_t) M_java_lang_Enum_hashCode_R_int, VTABLE_java_lang_Enum_hashCode_R_int, "()I", 17 },
	{ "toString", (intptr_t) M_java_lang_Enum_toString_R_java_lang_String, VTABLE_java_lang_Enum_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_java_lang_Enum_compareTo_java_lang_Enum_R_int, VTABLE_java_lang_Enum_compareTo_java_lang_Enum_R_int, "(Ljava/lang/Enum;)I", 17 },
	{ "name", (intptr_t) M_java_lang_Enum_name_R_java_lang_String, VTABLE_java_lang_Enum_name_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "ordinal", (intptr_t) M_java_lang_Enum_ordinal_R_int, VTABLE_java_lang_Enum_ordinal_R_int, "()I", 17 },
	{ "getDeclaringClass", (intptr_t) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class, VTABLE_java_lang_Enum_getDeclaringClass_R_java_lang_Class, "()Ljava/lang/Class;", 17 },
	{ "compareTo", (intptr_t) M_java_lang_Enum_compareTo_java_lang_Object_R_int, VTABLE_java_lang_Enum_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_lang_Enum{
		.nativeName = (intptr_t) "java/lang/Enum",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Enum),
		.classVtable = (intptr_t) vtable_java_lang_Enum,
		.staticInitializer = (intptr_t) clinit_java_lang_Enum,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Enum,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Enum = registerClass(&class_java_lang_Enum);

}
