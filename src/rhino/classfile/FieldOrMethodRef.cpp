#include "rhino/classfile/FieldOrMethodRef.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/classfile/FieldOrMethodRef.h"

extern "C" {


void mark_rhino_classfile_FieldOrMethodRef(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_FieldOrMethodRef *) object;
	if (self->F_className)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_className)->clazz)->markFunction)((jobject) self->F_className, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_rhino_classfile_FieldOrMethodRef(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_FieldOrMethodRef(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_hashCode = (jint(-1));
	LINE_NUMBER(5);
	((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_className = (jref) (frame[1].o);
	LINE_NUMBER(6);
	((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(7);
	((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[3].o);
	LINE_NUMBER(8);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_className;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_classfile_FieldOrMethodRef)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(27);
	frame[2].o = (checkCast(ctx, &class_rhino_classfile_FieldOrMethodRef, (frame[1].o)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_className;
	sp[1].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[2].o)))->F_className;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[2].o)))->F_name;
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[2].o)))->F_type;
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_7;
label_4:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_FieldOrMethodRef_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/FieldOrMethodRef:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if (((jint)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_hashCode) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_className;
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(37);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp1 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[2].i = temp1;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[3].i = temp2;
	LINE_NUMBER(39);
	((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_hashCode = (((frame[1].i) ^ (frame[2].i)) ^ (frame[3].i));
	}
label_1:;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_FieldOrMethodRef *) NULL_CHECK((frame[0].o)))->F_hashCode);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_FieldOrMethodRef[] {
	(void *) M_rhino_classfile_FieldOrMethodRef_hashCode_R_int,
	(void *) M_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String,
	(void *) M_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String,
	(void *) M_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getType", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "className", &class_java_lang_String, offsetof(rhino_classfile_FieldOrMethodRef, F_className), "Ljava/lang/String;", 18 },
	{ "name", &class_java_lang_String, offsetof(rhino_classfile_FieldOrMethodRef, F_name), "Ljava/lang/String;", 18 },
	{ "type", &class_java_lang_String, offsetof(rhino_classfile_FieldOrMethodRef, F_type), "Ljava/lang/String;", 18 },
	{ "hashCode", &class_int, offsetof(rhino_classfile_FieldOrMethodRef, F_hashCode), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_FieldOrMethodRef_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "getClassName", (intptr_t) M_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String, VTABLE_rhino_classfile_FieldOrMethodRef_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getName", (intptr_t) M_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String, VTABLE_rhino_classfile_FieldOrMethodRef_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getType", (intptr_t) M_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String, VTABLE_rhino_classfile_FieldOrMethodRef_getType_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean, VTABLE_rhino_classfile_FieldOrMethodRef_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_classfile_FieldOrMethodRef_hashCode_R_int, VTABLE_rhino_classfile_FieldOrMethodRef_hashCode_R_int, "()I", 1 },
};

Class class_rhino_classfile_FieldOrMethodRef{
		.nativeName = (intptr_t) "rhino/classfile/FieldOrMethodRef",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_FieldOrMethodRef),
		.classVtable = (intptr_t) vtable_rhino_classfile_FieldOrMethodRef,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_FieldOrMethodRef,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_FieldOrMethodRef,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_FieldOrMethodRef = registerClass(&class_rhino_classfile_FieldOrMethodRef);

}
