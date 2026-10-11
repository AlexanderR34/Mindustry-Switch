#include "rhino/classfile/ClassFileWriter_MHandle.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "rhino/classfile/ClassFileWriter.h"
#include "rhino/classfile/ClassFileWriter_MHandle.h"

extern "C" {


void mark_rhino_classfile_ClassFileWriter$MHandle(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ClassFileWriter$MHandle *) object;
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_desc)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_desc)->clazz)->markFunction)((jobject) self->F_desc, mark, depth + 1);
}

void clinit_rhino_classfile_ClassFileWriter$MHandle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ClassFileWriter$MHandle_byte_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jbyte param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$MHandle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ClassFileWriter$MHandle(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(3267);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(3268);
	((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_tag = (frame[1].i);
	LINE_NUMBER(3269);
	((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[2].o);
	LINE_NUMBER(3270);
	((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(3271);
	((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_desc = (jref) (frame[4].o);
	LINE_NUMBER(3272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$MHandle:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3276);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(3277);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(3279);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_classfile_ClassFileWriter$MHandle)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3280);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(3282);
	frame[2].o = (checkCast(ctx, &class_rhino_classfile_ClassFileWriter$MHandle, (frame[1].o)));
	LINE_NUMBER(3283);
	if (((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_tag) != ((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[2].o)))->F_tag)) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_owner;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[2].o)))->F_owner;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[2].o)))->F_name;
	LINE_NUMBER(3284);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[2].o)))->F_desc;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_8;
label_6:;
	INST_ICONST(0);
label_8:;
	LINE_NUMBER(3283);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$MHandle:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3289);
	jint temp0 = (jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_tag;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_owner;
	jint temp1 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_name;
	jint temp2 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	jint temp3 = temp1 * temp2;
	sp[0].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_desc;
	jint temp4 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 + (temp3 * temp4));
	}

	popStackFrame(ctx);
}

jobject M_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ClassFileWriter$MHandle:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3294);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_owner;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_desc;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((rhino_classfile_ClassFileWriter$MHandle *) NULL_CHECK((frame[0].o)))->F_tag));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (41));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ClassFileWriter$MHandle[] {
	(void *) M_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int,
	(void *) M_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String,
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
	{ "tag", &class_byte, offsetof(rhino_classfile_ClassFileWriter$MHandle, F_tag), "B", 16 },
	{ "owner", &class_java_lang_String, offsetof(rhino_classfile_ClassFileWriter$MHandle, F_owner), "Ljava/lang/String;", 16 },
	{ "name", &class_java_lang_String, offsetof(rhino_classfile_ClassFileWriter$MHandle, F_name), "Ljava/lang/String;", 16 },
	{ "desc", &class_java_lang_String, offsetof(rhino_classfile_ClassFileWriter$MHandle, F_desc), "Ljava/lang/String;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ClassFileWriter$MHandle_byte_java_lang_String_java_lang_String_java_lang_String, 0, "(BLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "equals", (intptr_t) M_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean, VTABLE_rhino_classfile_ClassFileWriter$MHandle_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int, VTABLE_rhino_classfile_ClassFileWriter$MHandle_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String, VTABLE_rhino_classfile_ClassFileWriter$MHandle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_classfile_ClassFileWriter$MHandle{
		.nativeName = (intptr_t) "rhino/classfile/ClassFileWriter$MHandle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ClassFileWriter$MHandle),
		.classVtable = (intptr_t) vtable_rhino_classfile_ClassFileWriter$MHandle,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ClassFileWriter$MHandle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ClassFileWriter$MHandle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_classfile_ClassFileWriter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ClassFileWriter$MHandle = registerClass(&class_rhino_classfile_ClassFileWriter$MHandle);

}

