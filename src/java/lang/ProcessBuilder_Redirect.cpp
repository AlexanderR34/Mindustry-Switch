#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/ProcessBuilder_Redirect_6.h"
#include "java/lang/ProcessBuilder_Redirect_4.h"
#include "java/lang/ProcessBuilder_Redirect_5.h"
#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/lang/ProcessBuilder.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/ProcessBuilder_Redirect_2.h"
#include "java/lang/ProcessBuilder_1.h"
#include "java/lang/ProcessBuilder_Redirect_3.h"
#include "java/lang/ProcessBuilder_Redirect_1.h"
#include "java/lang/Class.h"
#include "java/io/File.h"

extern "C" {

jobject SF_java_lang_ProcessBuilder$Redirect_NULL_FILE;
jobject SF_java_lang_ProcessBuilder$Redirect_PIPE;
jobject SF_java_lang_ProcessBuilder$Redirect_INHERIT;
jobject SF_java_lang_ProcessBuilder$Redirect_DISCARD;
jbool SF_java_lang_ProcessBuilder$Redirect_$assertionsDisabled;

void mark_java_lang_ProcessBuilder$Redirect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ProcessBuilder$Redirect_NULL_FILE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect_NULL_FILE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect_NULL_FILE, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect_PIPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect_PIPE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect_PIPE, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect_INHERIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect_INHERIT)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect_INHERIT, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect_DISCARD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect_DISCARD)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect_DISCARD, mark, depth + 1);
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
	auto self = (java_lang_ProcessBuilder$Redirect *) object;
}

jobject M_java_lang_ProcessBuilder$Redirect_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:file", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ProcessBuilder$Redirect_append_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:append", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(331);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect_from_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:from", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(335);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(336);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(338);
	clinit_java_lang_ProcessBuilder$Redirect$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$4);
	init_java_lang_ProcessBuilder$Redirect$4_java_io_File(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect_to_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:to", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(355);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(356);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(358);
	clinit_java_lang_ProcessBuilder$Redirect$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$5);
	init_java_lang_ProcessBuilder$Redirect$5_java_io_File(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect_appendTo_java_io_File_R_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:appendTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(379);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(380);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(382);
	clinit_java_lang_ProcessBuilder$Redirect$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$6);
	init_java_lang_ProcessBuilder$Redirect$6_java_io_File(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(405);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_ProcessBuilder$Redirect)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(406);
	frame[2].o = (checkCast(ctx, &class_java_lang_ProcessBuilder$Redirect, (frame[1].o)));
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(410);
	if ((clinit_java_lang_ProcessBuilder$Redirect(ctx), (jint)SF_java_lang_ProcessBuilder$Redirect_$assertionsDisabled) != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_lang_ProcessBuilder$Redirect_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((func_java_lang_ProcessBuilder$Redirect_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_hashCode_R_int(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void init_java_lang_ProcessBuilder$Redirect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(424);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ProcessBuilder$Redirect_java_lang_ProcessBuilder$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	init_java_lang_ProcessBuilder$Redirect(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect_access$100_R_java_io_File(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:access$100", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	{
	LINE_NUMBER(286);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	sp[0].o = (jobject)SF_java_lang_ProcessBuilder$Redirect_NULL_FILE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_ProcessBuilder$Redirect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_ProcessBuilder)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_lang_ProcessBuilder)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	SF_java_lang_ProcessBuilder$Redirect_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(287);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/dev/null"_j))));
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	SF_java_lang_ProcessBuilder$Redirect_NULL_FILE = sp[0].o;
	LINE_NUMBER(288);
	clinit_java_lang_ProcessBuilder$Redirect$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$1);
	init_java_lang_ProcessBuilder$Redirect$1(ctx, sp[0].o);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	SF_java_lang_ProcessBuilder$Redirect_PIPE = sp[0].o;
	LINE_NUMBER(297);
	clinit_java_lang_ProcessBuilder$Redirect$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$2);
	init_java_lang_ProcessBuilder$Redirect$2(ctx, sp[0].o);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	SF_java_lang_ProcessBuilder$Redirect_INHERIT = sp[0].o;
	LINE_NUMBER(306);
	clinit_java_lang_ProcessBuilder$Redirect$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$3);
	init_java_lang_ProcessBuilder$Redirect$3(ctx, sp[0].o);
	clinit_java_lang_ProcessBuilder$Redirect(ctx);
	SF_java_lang_ProcessBuilder$Redirect_DISCARD = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$Redirect[] {
	(void *) M_java_lang_ProcessBuilder$Redirect_hashCode_R_int,
	(void *) M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) M_java_lang_ProcessBuilder$Redirect_file_R_java_io_File,
	(void *) M_java_lang_ProcessBuilder$Redirect_append_R_boolean,
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
	{ "type", "()Ljava/lang/ProcessBuilder$Redirect$Type;" },
	{ "file", "()Ljava/io/File;" },
	{ "append", "()Z" },
};

static jclass innerClasses[] {
	&class_java_lang_ProcessBuilder$Redirect$Type,
};

static FieldMetadata fields[] {
	{ "NULL_FILE", &class_java_io_File, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect_NULL_FILE, "Ljava/io/File;", 26 },
	{ "PIPE", &class_java_lang_ProcessBuilder$Redirect, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect_PIPE, "Ljava/lang/ProcessBuilder$Redirect;", 25 },
	{ "INHERIT", &class_java_lang_ProcessBuilder$Redirect, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect_INHERIT, "Ljava/lang/ProcessBuilder$Redirect;", 25 },
	{ "DISCARD", &class_java_lang_ProcessBuilder$Redirect, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect_DISCARD, "Ljava/lang/ProcessBuilder$Redirect;", 25 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "type", 0, VTABLE_java_lang_ProcessBuilder$Redirect_type_R_java_lang_ProcessBuilder$Redirect$Type, "()Ljava/lang/ProcessBuilder$Redirect$Type;", 1025 },
	{ "file", (intptr_t) M_java_lang_ProcessBuilder$Redirect_file_R_java_io_File, VTABLE_java_lang_ProcessBuilder$Redirect_file_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "append", (intptr_t) M_java_lang_ProcessBuilder$Redirect_append_R_boolean, VTABLE_java_lang_ProcessBuilder$Redirect_append_R_boolean, "()Z", 0 },
	{ "from", (intptr_t) SM_java_lang_ProcessBuilder$Redirect_from_java_io_File_R_java_lang_ProcessBuilder$Redirect, 0, "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", 9 },
	{ "to", (intptr_t) SM_java_lang_ProcessBuilder$Redirect_to_java_io_File_R_java_lang_ProcessBuilder$Redirect, 0, "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", 9 },
	{ "appendTo", (intptr_t) SM_java_lang_ProcessBuilder$Redirect_appendTo_java_io_File_R_java_lang_ProcessBuilder$Redirect, 0, "(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;", 9 },
	{ "equals", (intptr_t) M_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean, VTABLE_java_lang_ProcessBuilder$Redirect_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_lang_ProcessBuilder$Redirect_hashCode_R_int, VTABLE_java_lang_ProcessBuilder$Redirect_hashCode_R_int, "()I", 1 },
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$Redirect, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$Redirect_java_lang_ProcessBuilder$1, 0, "(Ljava/lang/ProcessBuilder$1;)V", 4096 },
	{ "access$100", (intptr_t) SM_java_lang_ProcessBuilder$Redirect_access$100_R_java_io_File, 0, "()Ljava/io/File;", 4104 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ProcessBuilder$Redirect, 0, "()V", 8 },
};

Class class_java_lang_ProcessBuilder$Redirect{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$Redirect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ProcessBuilder$Redirect),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$Redirect,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$Redirect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$Redirect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_ProcessBuilder,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$Redirect = registerClass(&class_java_lang_ProcessBuilder$Redirect);

}

