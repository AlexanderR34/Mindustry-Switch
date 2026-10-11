#include "rhino/JavaMembers_MethodSignature.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "java/lang/reflect/Method.h"
#include "rhino/JavaMembers_MethodSignature.h"
#include "java/lang/Class.h"
#include "rhino/JavaMembers.h"

extern "C" {


void mark_rhino_JavaMembers$MethodSignature(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_JavaMembers$MethodSignature *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_args)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_args)->clazz)->markFunction)((jobject) self->F_args, mark, depth + 1);
}

void clinit_rhino_JavaMembers$MethodSignature(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_JavaMembers$MethodSignature_java_lang_String_Array1_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers$MethodSignature:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers$MethodSignature(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(355);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(356);
	((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(357);
	((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_args = (jref) (frame[2].o);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_JavaMembers$MethodSignature_java_lang_reflect_Method(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers$MethodSignature:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_JavaMembers$MethodSignature(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getParameterTypes_R_Array1_java_lang_Class])(ctx, (frame[1].o));
	init_rhino_JavaMembers$MethodSignature_java_lang_String_Array1_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers$MethodSignature:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(366);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_JavaMembers$MethodSignature)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(367);
	frame[2].o = (checkCast(ctx, &class_rhino_JavaMembers$MethodSignature, (frame[1].o)));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[2].o)))->F_name;
	sp[1].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[2].o)))->F_args;
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_JavaMembers$MethodSignature_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/JavaMembers$MethodSignature:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_JavaMembers$MethodSignature *) NULL_CHECK((frame[0].o)))->F_args;
	popStackFrame(ctx);
	return (temp0 ^ (((jarray) nullCheck(ctx, sp[0].o))->length));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_JavaMembers$MethodSignature[] {
	(void *) M_rhino_JavaMembers$MethodSignature_hashCode_R_int,
	(void *) M_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean,
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

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(rhino_JavaMembers$MethodSignature, F_name), "Ljava/lang/String;", 18 },
	{ "args", getArrayClass(&class_java_lang_Class, 1), offsetof(rhino_JavaMembers$MethodSignature, F_args), "[Ljava/lang/Class;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_JavaMembers$MethodSignature_java_lang_String_Array1_java_lang_Class, 0, "(Ljava/lang/String;[Ljava/lang/Class;)V", 2 },
	{ "<init>", (intptr_t) init_rhino_JavaMembers$MethodSignature_java_lang_reflect_Method, 0, "(Ljava/lang/reflect/Method;)V", 0 },
	{ "equals", (intptr_t) M_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean, VTABLE_rhino_JavaMembers$MethodSignature_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_JavaMembers$MethodSignature_hashCode_R_int, VTABLE_rhino_JavaMembers$MethodSignature_hashCode_R_int, "()I", 1 },
};

Class class_rhino_JavaMembers$MethodSignature{
		.nativeName = (intptr_t) "rhino/JavaMembers$MethodSignature",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_JavaMembers$MethodSignature),
		.classVtable = (intptr_t) vtable_rhino_JavaMembers$MethodSignature,
		.staticInitializer = (intptr_t) clinit_rhino_JavaMembers$MethodSignature,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_JavaMembers$MethodSignature,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_JavaMembers,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_JavaMembers$MethodSignature = registerClass(&class_rhino_JavaMembers$MethodSignature);

}

