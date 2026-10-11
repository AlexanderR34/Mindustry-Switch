#include "rhino/classfile/ClassFileMethod.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/ClassFileMethod.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_classfile_ClassFileMethod(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileMethod *) object;
	if (self->F_itsName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsName)->clazz)->markFunction)((jobject) self->F_itsName, mark, depth + 1);
	if (self->F_itsType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsType)->clazz)->markFunction)((jobject) self->F_itsType, mark, depth + 1);
	if (self->F_itsCodeAttribute)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itsCodeAttribute)->clazz)->markFunction)((jobject) self->F_itsCodeAttribute, mark, depth + 1);
}

void clinit_rhino_classfile_ClassFileMethod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ClassFileMethod_java_lang_String_short_java_lang_String_short_short(jcontext ctx, jobject self, jobject param0, jshort param1, jobject param2, jshort param3, jshort param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsName = (jref) (frame[1].o);
	LINE_NUMBER(7);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsNameIndex = (frame[2].i);
	LINE_NUMBER(8);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsType = (jref) (frame[3].o);
	LINE_NUMBER(9);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsTypeIndex = (frame[4].i);
	LINE_NUMBER(10);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsFlags = (frame[5].i);
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:setCodeAttribute", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsCodeAttribute = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:write", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(18);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsFlags), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(19);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsNameIndex), (frame[1].o), (frame[2].i));
	frame[2].i = temp1;
	LINE_NUMBER(20);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsTypeIndex), (frame[1].o), (frame[2].i));
	frame[2].i = temp2;
	LINE_NUMBER(22);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (jint(1)), (frame[1].o), (frame[2].i));
	frame[2].i = temp3;
	LINE_NUMBER(23);
	sp[0].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsCodeAttribute;
	jint temp4 = jint(0);
	sp[1].o = frame[1].o;
	jint temp5 = frame[2].i;
	sp[2].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsCodeAttribute;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp4, sp[1].o, temp5, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(25);
	jint temp6 = frame[2].i;
	sp[0].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsCodeAttribute;
	frame[2].i = (temp6 + (((jarray) nullCheck(ctx, sp[0].o))->length));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileMethod_getWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:getWriteSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	jint temp0 = 8;
	sp[0].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsCodeAttribute;
	popStackFrame(ctx);
	return (temp0 + (((jarray) nullCheck(ctx, sp[0].o))->length));
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileMethod_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileMethod_getType_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jshort M_rhino_classfile_ClassFileMethod_getFlags_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileMethod:getFlags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ClassFileMethod *) NULL_CHECK((frame[0].o)))->F_itsFlags);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileMethod[] {
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
	(void *) M_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte,
	(void *) M_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int,
	(void *) M_rhino_classfile_ClassFileMethod_getWriteSize_R_int,
	(void *) M_rhino_classfile_ClassFileMethod_getName_R_java_lang_String,
	(void *) M_rhino_classfile_ClassFileMethod_getType_R_java_lang_String,
	(void *) M_rhino_classfile_ClassFileMethod_getFlags_R_short,
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
	{ "setCodeAttribute", "([B)V" },
	{ "write", "([BI)I" },
	{ "getWriteSize", "()I" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getType", "()Ljava/lang/String;" },
	{ "getFlags", "()S" },
};

static FieldMetadata fields[] {
	{ "itsName", &class_java_lang_String, offsetof(rhino_classfile_ClassFileMethod, F_itsName), "Ljava/lang/String;", 18 },
	{ "itsType", &class_java_lang_String, offsetof(rhino_classfile_ClassFileMethod, F_itsType), "Ljava/lang/String;", 18 },
	{ "itsNameIndex", &class_short, offsetof(rhino_classfile_ClassFileMethod, F_itsNameIndex), "S", 18 },
	{ "itsTypeIndex", &class_short, offsetof(rhino_classfile_ClassFileMethod, F_itsTypeIndex), "S", 18 },
	{ "itsFlags", &class_short, offsetof(rhino_classfile_ClassFileMethod, F_itsFlags), "S", 18 },
	{ "itsCodeAttribute", getArrayClass(&class_byte, 1), offsetof(rhino_classfile_ClassFileMethod, F_itsCodeAttribute), "[B", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileMethod_java_lang_String_short_java_lang_String_short_short, 0, "(Ljava/lang/String;SLjava/lang/String;SS)V", 0 },
	{ "setCodeAttribute", (intptr_t) M_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte, VTABLE_rhino_classfile_ClassFileMethod_setCodeAttribute_Array1_byte, "([B)V", 0 },
	{ "write", (intptr_t) M_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int, VTABLE_rhino_classfile_ClassFileMethod_write_Array1_byte_int_R_int, "([BI)I", 0 },
	{ "getWriteSize", (intptr_t) M_rhino_classfile_ClassFileMethod_getWriteSize_R_int, VTABLE_rhino_classfile_ClassFileMethod_getWriteSize_R_int, "()I", 0 },
	{ "getName", (intptr_t) M_rhino_classfile_ClassFileMethod_getName_R_java_lang_String, VTABLE_rhino_classfile_ClassFileMethod_getName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getType", (intptr_t) M_rhino_classfile_ClassFileMethod_getType_R_java_lang_String, VTABLE_rhino_classfile_ClassFileMethod_getType_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getFlags", (intptr_t) M_rhino_classfile_ClassFileMethod_getFlags_R_short, VTABLE_rhino_classfile_ClassFileMethod_getFlags_R_short, "()S", 0 },
};

Class class_rhino_classfile_ClassFileMethod{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileMethod",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileMethod),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileMethod,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileMethod,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileMethod,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileMethod = registerClass(&class_rhino_classfile_ClassFileMethod);

}
