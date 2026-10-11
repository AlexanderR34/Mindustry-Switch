#include "rhino/classfile/ClassFileField.h"
#include "java/lang/Object.h"
#include "rhino/classfile/ClassFileField.h"
#include "rhino/classfile/ClassFileWriter.h"

extern "C" {


void mark_rhino_classfile_ClassFileField(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileField *) object;
}

void clinit_rhino_classfile_ClassFileField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ClassFileField_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileField:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileField(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsNameIndex = (frame[1].i);
	LINE_NUMBER(6);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsTypeIndex = (frame[2].i);
	LINE_NUMBER(7);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsFlags = (frame[3].i);
	LINE_NUMBER(8);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsHasAttributes = (jint(0));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_classfile_ClassFileField_setAttributes_short_short_short_int(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileField:setAttributes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(12);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsHasAttributes = (jint(1));
	LINE_NUMBER(13);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr1 = (frame[1].i);
	LINE_NUMBER(14);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr2 = (frame[2].i);
	LINE_NUMBER(15);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr3 = (frame[3].i);
	LINE_NUMBER(16);
	((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsIndex = (frame[4].i);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileField:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsFlags), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(21);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsNameIndex), (frame[1].o), (frame[2].i));
	frame[2].i = temp1;
	LINE_NUMBER(22);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsTypeIndex), (frame[1].o), (frame[2].i));
	frame[2].i = temp2;
	LINE_NUMBER(23);
	if (((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsHasAttributes) != 0) goto label_4;
	}
	{
	LINE_NUMBER(25);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (jint(0)), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, (jint(1)), (frame[1].o), (frame[2].i));
	frame[2].i = temp0;
	LINE_NUMBER(28);
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr1), (frame[1].o), (frame[2].i));
	frame[2].i = temp1;
	LINE_NUMBER(29);
	jint temp2 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr2), (frame[1].o), (frame[2].i));
	frame[2].i = temp2;
	LINE_NUMBER(30);
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsAttr3), (frame[1].o), (frame[2].i));
	frame[2].i = temp3;
	LINE_NUMBER(31);
	jint temp4 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, ((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsIndex), (frame[1].o), (frame[2].i));
	frame[2].i = temp4;
	}
label_6:;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileField_getWriteSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileField:getWriteSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	frame[1].i = (6);
	LINE_NUMBER(38);
	if (((jint)((rhino_classfile_ClassFileField *) NULL_CHECK((frame[0].o)))->F_itsHasAttributes) != 0) goto label_2;
	}
	{
	LINE_NUMBER(39);
	INST_IINC(1, 2);
	goto label_4;
	}
label_2:;
	LINE_NUMBER(41);
	INST_IINC(1, 10);
label_4:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileField[] {
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
	(void *) M_rhino_classfile_ClassFileField_setAttributes_short_short_short_int,
	(void *) M_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int,
	(void *) M_rhino_classfile_ClassFileField_getWriteSize_R_int,
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
	{ "setAttributes", "(SSSI)V" },
	{ "write", "([BI)I" },
	{ "getWriteSize", "()I" },
};

static FieldMetadata fields[] {
	{ "itsNameIndex", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsNameIndex), "S", 18 },
	{ "itsTypeIndex", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsTypeIndex), "S", 18 },
	{ "itsFlags", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsFlags), "S", 18 },
	{ "itsHasAttributes", &class_boolean, offsetof(rhino_classfile_ClassFileField, F_itsHasAttributes), "Z", 2 },
	{ "itsAttr1", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsAttr1), "S", 2 },
	{ "itsAttr2", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsAttr2), "S", 2 },
	{ "itsAttr3", &class_short, offsetof(rhino_classfile_ClassFileField, F_itsAttr3), "S", 2 },
	{ "itsIndex", &class_int, offsetof(rhino_classfile_ClassFileField, F_itsIndex), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileField_short_short_short, 0, "(SSS)V", 0 },
	{ "setAttributes", (intptr_t) M_rhino_classfile_ClassFileField_setAttributes_short_short_short_int, VTABLE_rhino_classfile_ClassFileField_setAttributes_short_short_short_int, "(SSSI)V", 0 },
	{ "write", (intptr_t) M_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int, VTABLE_rhino_classfile_ClassFileField_write_Array1_byte_int_R_int, "([BI)I", 0 },
	{ "getWriteSize", (intptr_t) M_rhino_classfile_ClassFileField_getWriteSize_R_int, VTABLE_rhino_classfile_ClassFileField_getWriteSize_R_int, "()I", 0 },
};

Class class_rhino_classfile_ClassFileField{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileField",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileField),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileField,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileField = registerClass(&class_rhino_classfile_ClassFileField);

}
