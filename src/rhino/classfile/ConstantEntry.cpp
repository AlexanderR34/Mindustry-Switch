#include "rhino/classfile/ConstantEntry.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/classfile/ConstantEntry.h"
#include "java/lang/RuntimeException.h"

extern "C" {


void mark_rhino_classfile_ConstantEntry(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_classfile_ConstantEntry *) object;
	if (self->F_str1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str1)->clazz)->markFunction)((jobject) self->F_str1, mark, depth + 1);
	if (self->F_str2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_str2)->clazz)->markFunction)((jobject) self->F_str2, mark, depth + 1);
}

void clinit_rhino_classfile_ConstantEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_classfile_ConstantEntry_int_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantEntry:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_classfile_ConstantEntry(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_type = (frame[1].i);
	LINE_NUMBER(13);
	((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_intval = (frame[2].i);
	LINE_NUMBER(14);
	((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str1 = (jref) (frame[3].o);
	LINE_NUMBER(15);
	((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str2 = (jref) (frame[4].o);
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[4].o));
	((rhino_classfile_ConstantEntry *) NULL_CHECK(sp[0].o))->F_hashcode = (temp0 ^ (temp1 + (temp2 * temp3)));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_classfile_ConstantEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantEntry:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return ((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_hashcode);
	}

	popStackFrame(ctx);
}

jbool M_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/classfile/ConstantEntry:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_classfile_ConstantEntry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(29);
	frame[2].o = (checkCast(ctx, &class_rhino_classfile_ConstantEntry, (frame[1].o)));
	LINE_NUMBER(30);
	if (((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_type) == ((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_type)) goto label_4;
	}
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(33);
	switch(((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_type)) {
		case 3: goto label_6;
		case 4: goto label_6;
		case 5: goto label_7;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_8;
		case 9: goto label_8;
		case 10: goto label_8;
		case 11: goto label_8;
		case 12: goto label_9;
		case 13: goto label_8;
		case 14: goto label_8;
		case 15: goto label_8;
		case 16: goto label_8;
		case 17: goto label_8;
		case 18: goto label_10;
		default: goto label_8;
	}
	}
label_6:;
	{
	LINE_NUMBER(36);
	if (((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_intval) != ((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_intval)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(39);
	if ((longCompare(((jlong)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_longval), ((jlong)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_longval))) != 0) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str1;
	sp[1].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_str1;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str2;
	sp[1].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_str2;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(43);
	if (((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_intval) != ((jint)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_intval)) goto label_17;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str1;
	sp[1].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_str1;
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[0].o)))->F_str2;
	sp[1].o = (jobject)((rhino_classfile_ConstantEntry *) NULL_CHECK((frame[2].o)))->F_str2;
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_20;
label_17:;
	INST_ICONST(0);
label_20:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(47);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unsupported constant type"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_rhino_classfile_ConstantEntry[] {
	(void *) M_rhino_classfile_ConstantEntry_hashCode_R_int,
	(void *) M_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean,
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
	{ "type", &class_int, offsetof(rhino_classfile_ConstantEntry, F_type), "I", 18 },
	{ "intval", &class_int, offsetof(rhino_classfile_ConstantEntry, F_intval), "I", 18 },
	{ "longval", &class_long, offsetof(rhino_classfile_ConstantEntry, F_longval), "J", 2 },
	{ "str1", &class_java_lang_String, offsetof(rhino_classfile_ConstantEntry, F_str1), "Ljava/lang/String;", 18 },
	{ "str2", &class_java_lang_String, offsetof(rhino_classfile_ConstantEntry, F_str2), "Ljava/lang/String;", 18 },
	{ "hashcode", &class_int, offsetof(rhino_classfile_ConstantEntry, F_hashcode), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_classfile_ConstantEntry_int_int_java_lang_String_java_lang_String, 0, "(IILjava/lang/String;Ljava/lang/String;)V", 0 },
	{ "hashCode", (intptr_t) M_rhino_classfile_ConstantEntry_hashCode_R_int, VTABLE_rhino_classfile_ConstantEntry_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean, VTABLE_rhino_classfile_ConstantEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_rhino_classfile_ConstantEntry{
		.nativeName = (intptr_t) "rhino/classfile/ConstantEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_classfile_ConstantEntry),
		.classVtable = (intptr_t) vtable_rhino_classfile_ConstantEntry,
		.staticInitializer = (intptr_t) clinit_rhino_classfile_ConstantEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_classfile_ConstantEntry,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_classfile_ConstantEntry = registerClass(&class_rhino_classfile_ConstantEntry);

}
