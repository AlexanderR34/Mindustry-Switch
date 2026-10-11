#include "java/util/jar/Attributes_Name.h"
#include "java/lang/Object.h"
#include "java/util/jar/Attributes.h"
#include "java/lang/String.h"
#include "java/util/jar/Attributes_Name.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Locale.h"

extern "C" {

jobject SF_java_util_jar_Attributes$Name_CLASS_PATH;
jobject SF_java_util_jar_Attributes$Name_MANIFEST_VERSION;
jobject SF_java_util_jar_Attributes$Name_MAIN_CLASS;
jobject SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION;
jobject SF_java_util_jar_Attributes$Name_CONTENT_TYPE;
jobject SF_java_util_jar_Attributes$Name_SEALED;
jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE;
jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION;
jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR;
jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE;
jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION;
jobject SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR;
jobject SF_java_util_jar_Attributes$Name_EXTENSION_LIST;
jobject SF_java_util_jar_Attributes$Name_EXTENSION_NAME;
jobject SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION;
jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID;
jobject SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL;
jobject SF_java_util_jar_Attributes$Name_NAME;

void mark_java_util_jar_Attributes$Name(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_jar_Attributes$Name_CLASS_PATH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_CLASS_PATH)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_CLASS_PATH, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_MANIFEST_VERSION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_MANIFEST_VERSION)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_MANIFEST_VERSION, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_MAIN_CLASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_MAIN_CLASS)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_MAIN_CLASS, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_CONTENT_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_CONTENT_TYPE)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_CONTENT_TYPE, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_SEALED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_SEALED)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_SEALED, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_EXTENSION_LIST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_LIST)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_LIST, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_EXTENSION_NAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_NAME)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_NAME, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL, mark, depth + 1);
		if (SF_java_util_jar_Attributes$Name_NAME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_jar_Attributes$Name_NAME)->clazz)->markFunction)((jobject) SF_java_util_jar_Attributes$Name_NAME, mark, depth + 1);
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
	auto self = (java_util_jar_Attributes$Name *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_java_util_jar_Attributes$Name_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Attributes$Name(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (70)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(151);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(154);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(156);
	if ((frame[3].i) < (97)) goto label_8;
	}
	{
	if ((frame[3].i) <= (122)) goto label_9;
	}
label_8:;
	{
	if ((frame[3].i) < (65)) goto label_10;
	}
	{
	if ((frame[3].i) <= (90)) goto label_9;
	}
label_10:;
	{
	if ((frame[3].i) == (95)) goto label_9;
	}
	{
	if ((frame[3].i) == (45)) goto label_9;
	}
	{
	if ((frame[3].i) < (48)) goto label_11;
	}
	{
	if ((frame[3].i) <= (57)) goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(158);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(154);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(162);
	((java_util_jar_Attributes$Name *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes$Name_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((java_util_jar_Attributes$Name *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_jar_Attributes$Name)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_jar_Attributes$Name *) NULL_CHECK((checkCast(ctx, &class_java_util_jar_Attributes$Name, (frame[1].o)))))->F_name;
	sp[1].o = (jobject)((java_util_jar_Attributes$Name *) NULL_CHECK((frame[0].o)))->F_name;
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_jar_Attributes$Name_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((java_util_jar_Attributes$Name *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[1].o = (jobject)SF_java_util_Locale_US;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_jar_Attributes$Name_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_util_jar_Attributes$Name *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_jar_Attributes$Name(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/jar/Attributes$Name:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_jar_Attributes$Name(ctx);
	{
	LINE_NUMBER(54);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Class-Path"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_CLASS_PATH = sp[0].o;
	LINE_NUMBER(57);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Manifest-Version"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_MANIFEST_VERSION = sp[0].o;
	LINE_NUMBER(60);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Main-Class"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_MAIN_CLASS = sp[0].o;
	LINE_NUMBER(63);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Signature-Version"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION = sp[0].o;
	LINE_NUMBER(66);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Content-Type"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_CONTENT_TYPE = sp[0].o;
	LINE_NUMBER(72);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Sealed"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_SEALED = sp[0].o;
	LINE_NUMBER(78);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Implementation-Title"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE = sp[0].o;
	LINE_NUMBER(84);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Implementation-Version"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION = sp[0].o;
	LINE_NUMBER(90);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Implementation-Vendor"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR = sp[0].o;
	LINE_NUMBER(96);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Specification-Title"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE = sp[0].o;
	LINE_NUMBER(102);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Specification-Version"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION = sp[0].o;
	LINE_NUMBER(108);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Specification-Vendor"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR = sp[0].o;
	LINE_NUMBER(114);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension-List"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_EXTENSION_LIST = sp[0].o;
	LINE_NUMBER(120);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension-Name"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_EXTENSION_NAME = sp[0].o;
	LINE_NUMBER(125);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension-Installation"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION = sp[0].o;
	LINE_NUMBER(132);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Implementation-Vendor-Id"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID = sp[0].o;
	LINE_NUMBER(139);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Implementation-URL"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL = sp[0].o;
	LINE_NUMBER(144);
	clinit_java_util_jar_Attributes$Name(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_jar_Attributes$Name);
	init_java_util_jar_Attributes$Name_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Name"_j))));
	clinit_java_util_jar_Attributes$Name(ctx);
	SF_java_util_jar_Attributes$Name_NAME = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_jar_Attributes$Name[] {
	(void *) M_java_util_jar_Attributes$Name_hashCode_R_int,
	(void *) M_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_jar_Attributes$Name_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_jar_Attributes$Name_getName_R_java_lang_String,
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
	{ "getName", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "CLASS_PATH", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_CLASS_PATH, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "MANIFEST_VERSION", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_MANIFEST_VERSION, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "MAIN_CLASS", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_MAIN_CLASS, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "SIGNATURE_VERSION", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_SIGNATURE_VERSION, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "CONTENT_TYPE", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_CONTENT_TYPE, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "SEALED", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_SEALED, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "IMPLEMENTATION_TITLE", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_IMPLEMENTATION_TITLE, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "IMPLEMENTATION_VERSION", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VERSION, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "IMPLEMENTATION_VENDOR", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "SPECIFICATION_TITLE", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_SPECIFICATION_TITLE, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "SPECIFICATION_VERSION", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_SPECIFICATION_VERSION, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "SPECIFICATION_VENDOR", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_SPECIFICATION_VENDOR, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "EXTENSION_LIST", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_EXTENSION_LIST, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "EXTENSION_NAME", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_EXTENSION_NAME, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "EXTENSION_INSTALLATION", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_EXTENSION_INSTALLATION, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "IMPLEMENTATION_VENDOR_ID", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_IMPLEMENTATION_VENDOR_ID, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "IMPLEMENTATION_URL", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_IMPLEMENTATION_URL, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "NAME", &class_java_util_jar_Attributes$Name, (intptr_t) &SF_java_util_jar_Attributes$Name_NAME, "Ljava/util/jar/Attributes$Name;", 25 },
	{ "name", &class_java_lang_String, offsetof(java_util_jar_Attributes$Name, F_name), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_jar_Attributes$Name_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "getName", (intptr_t) M_java_util_jar_Attributes$Name_getName_R_java_lang_String, VTABLE_java_util_jar_Attributes$Name_getName_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "equals", (intptr_t) M_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean, VTABLE_java_util_jar_Attributes$Name_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_jar_Attributes$Name_hashCode_R_int, VTABLE_java_util_jar_Attributes$Name_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_jar_Attributes$Name_toString_R_java_lang_String, VTABLE_java_util_jar_Attributes$Name_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_util_jar_Attributes$Name, 0, "()V", 8 },
};

Class class_java_util_jar_Attributes$Name{
		.nativeName = (intptr_t) "java/util/jar/Attributes$Name",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_jar_Attributes$Name),
		.classVtable = (intptr_t) vtable_java_util_jar_Attributes$Name,
		.staticInitializer = (intptr_t) clinit_java_util_jar_Attributes$Name,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_jar_Attributes$Name,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_jar_Attributes,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_jar_Attributes$Name = registerClass(&class_java_util_jar_Attributes$Name);

}

