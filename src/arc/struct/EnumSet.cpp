#include "arc/struct/EnumSet.h"
#include "arc/struct/EnumSet.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_struct_EnumSet(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_EnumSet *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void clinit_arc_struct_EnumSet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_struct_EnumSet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_EnumSet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_struct_EnumSet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_EnumSet(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:of", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_EnumSet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	clinit_arc_struct_EnumSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_EnumSet);
	init_arc_struct_EnumSet_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(20);
	((arc_struct_EnumSet *) NULL_CHECK((frame[1].o)))->F_array = (jref) (frame[0].o);
	LINE_NUMBER(21);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(22);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_mask;
	jint temp1 = jint(1);
	jint temp2 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (frame[5].o));
	((arc_struct_EnumSet *) NULL_CHECK(sp[0].o))->F_mask = (temp0 | (temp1 << temp2));
	LINE_NUMBER(21);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:with", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) + (jint(1))));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Enum, 1), sp[0].o));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_array;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(32);
	ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)))) = (frame[1].o);
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_mask;
	jint temp1 = jint(1);
	jint temp2 = (jint)((func_java_lang_Enum_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Enum_ordinal_R_int])(ctx, (frame[1].o));
	if ((temp0 & (temp1 << temp2)) == 0) goto label_1;
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

jbool M_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:containsAny", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	if ((((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_mask) & ((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[1].o)))->F_mask)) == 0) goto label_1;
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

jbool M_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/EnumSet:containsAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	if ((((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[0].o)))->F_mask) & ((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[1].o)))->F_mask)) != ((jint)((arc_struct_EnumSet *) NULL_CHECK((frame[1].o)))->F_mask)) goto label_1;
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

void *vtable_arc_struct_EnumSet[] {
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
	(void *) M_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet,
	(void *) M_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean,
	(void *) M_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean,
	(void *) M_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean,
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
	{ "with", "(Ljava/lang/Enum;)Larc/struct/EnumSet;" },
	{ "contains", "(Ljava/lang/Enum;)Z" },
	{ "containsAny", "(Larc/struct/EnumSet;)Z" },
	{ "containsAll", "(Larc/struct/EnumSet;)Z" },
};

static FieldMetadata fields[] {
	{ "mask", &class_int, offsetof(arc_struct_EnumSet, F_mask), "I", 2 },
	{ "array", getArrayClass(&class_java_lang_Enum, 1), offsetof(arc_struct_EnumSet, F_array), "[Ljava/lang/Enum;", 1 },
	{ "size", &class_int, offsetof(arc_struct_EnumSet, F_size), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_EnumSet, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_arc_struct_EnumSet_int, 0, "(I)V", 0 },
	{ "of", (intptr_t) SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet, 0, "([Ljava/lang/Enum;)Larc/struct/EnumSet;", 137 },
	{ "with", (intptr_t) M_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet, VTABLE_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet, "(Ljava/lang/Enum;)Larc/struct/EnumSet;", 1 },
	{ "contains", (intptr_t) M_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean, VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean, "(Ljava/lang/Enum;)Z", 1 },
	{ "containsAny", (intptr_t) M_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean, VTABLE_arc_struct_EnumSet_containsAny_arc_struct_EnumSet_R_boolean, "(Larc/struct/EnumSet;)Z", 1 },
	{ "containsAll", (intptr_t) M_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean, VTABLE_arc_struct_EnumSet_containsAll_arc_struct_EnumSet_R_boolean, "(Larc/struct/EnumSet;)Z", 1 },
};

Class class_arc_struct_EnumSet{
		.nativeName = (intptr_t) "arc/struct/EnumSet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_EnumSet),
		.classVtable = (intptr_t) vtable_arc_struct_EnumSet,
		.staticInitializer = (intptr_t) clinit_arc_struct_EnumSet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_EnumSet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_EnumSet = registerClass(&class_arc_struct_EnumSet);

}
