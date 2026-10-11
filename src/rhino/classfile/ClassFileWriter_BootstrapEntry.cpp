#include "rhino/classfile/ClassFileWriter_BootstrapEntry.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/ClassFileWriter_MHandle.h"
#include "rhino/classfile/ConstantPool.h"
#include "rhino/classfile/ClassFileWriter_BootstrapEntry.h"

extern "C" {


void mark_rhino_classfile_ClassFileWriter$BootstrapEntry(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileWriter$BootstrapEntry *) object;
	if (self->F_code)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_code)->clazz)->markFunction)((jobject) self->F_code, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_rhino_classfile_ClassFileWriter$BootstrapEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ClassFileWriter$BootstrapEntry_rhino_classfile_ClassFileWriter_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$BootstrapEntry:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter$BootstrapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(4469);
	((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(4470);
	frame[4].i = ((jint(4)) + ((((jarray) nullCheck(ctx, (frame[3].o)))->length) * (jint(2))));
	LINE_NUMBER(4471);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[4].i));
	((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK(sp[0].o))->F_code = (jref) sp[1].o;
	LINE_NUMBER(4472);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addMethodHandle_rhino_classfile_ClassFileWriter$MHandle_R_short])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_code;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp0, sp[0].o, (jint(0)));
	LINE_NUMBER(4473);
	jint temp2 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_code;
	jint temp3 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp2, sp[0].o, (jint(2)));
	LINE_NUMBER(4474);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(4475);
	sp[0].o = (jobject)SM_rhino_classfile_ClassFileWriter_access$800_rhino_classfile_ClassFileWriter_R_rhino_classfile_ConstantPool(ctx, (frame[1].o));
	jint temp0 = (jint)((func_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_classfile_ConstantPool_addConstant_java_lang_Object_R_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))));
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_code;
	jint temp1 = (jint)SM_rhino_classfile_ClassFileWriter_putInt16_int_Array1_byte_int_R_int(ctx, temp0, sp[0].o, ((jint(4)) + ((frame[5].i) * (jint(2)))));
	LINE_NUMBER(4474);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(4477);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$BootstrapEntry:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4481);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_classfile_ClassFileWriter$BootstrapEntry)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_code;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((checkCast(ctx, &class_rhino_classfile_ClassFileWriter$BootstrapEntry, (frame[1].o)))))->F_code;
	LINE_NUMBER(4482);
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(4481);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$BootstrapEntry:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4487);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$BootstrapEntry *) NULL_CHECK((frame[0].o)))->F_code;
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_byte_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 ^ (jint(-1)));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileWriter$BootstrapEntry[] {
	(void *) M_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean,
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
	{ "code", getArrayClass(&class_byte, 1), offsetof(rhino_classfile_ClassFileWriter$BootstrapEntry, F_code), "[B", 16 },
	{ "this$0", &class_rhino_classfile_ClassFileWriter, offsetof(rhino_classfile_ClassFileWriter$BootstrapEntry, F_this$0), "Lrhino/classfile/ClassFileWriter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileWriter$BootstrapEntry_rhino_classfile_ClassFileWriter_rhino_classfile_ClassFileWriter$MHandle_Array1_java_lang_Object, 0, "(Lrhino/classfile/ClassFileWriter;Lrhino/classfile/ClassFileWriter$MHandle;[Ljava/lang/Object;)V", 128 },
	{ "equals", (intptr_t) M_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean, VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int, VTABLE_rhino_classfile_ClassFileWriter$BootstrapEntry_hashCode_R_int, "()I", 1 },
};

Class class_rhino_classfile_ClassFileWriter$BootstrapEntry{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileWriter$BootstrapEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileWriter$BootstrapEntry),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileWriter$BootstrapEntry,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileWriter$BootstrapEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileWriter$BootstrapEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_classfile_ClassFileWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileWriter$BootstrapEntry = registerClass(&class_rhino_classfile_ClassFileWriter$BootstrapEntry);

}

