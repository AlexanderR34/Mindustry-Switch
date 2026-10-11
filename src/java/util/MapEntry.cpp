#include "java/util/MapEntry.h"
#include "java/util/MapEntry_Type.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Map_Entry.h"
#include "java/util/MapEntry.h"

extern "C" {


void mark_java_util_MapEntry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_MapEntry *) object;
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_java_util_MapEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_MapEntry_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_MapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_MapEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_MapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(38);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_MapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(46);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(47);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_8;
label_6:;
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[1].o = frame[2].o;
	LINE_NUMBER(49);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_13;
label_11:;
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[2].o;
	LINE_NUMBER(51);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_13:;
	INST_ICONST(1);
	goto label_15;
label_7:;
	INST_ICONST(0);
label_15:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_MapEntry_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_MapEntry_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_MapEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_MapEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/MapEntry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_MapEntry[] {
	(void *) M_java_util_MapEntry_hashCode_R_int,
	(void *) M_java_util_MapEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_MapEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_MapEntry_getKey_R_java_lang_Object,
	(void *) M_java_util_MapEntry_getValue_R_java_lang_Object,
	(void *) M_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object,
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
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Map$Entry, };

static jclass innerClasses[] {
	&class_java_util_MapEntry$Type,
};

static FieldMetadata fields[] {
	{ "key", &class_java_lang_Object, offsetof(java_util_MapEntry, F_key), "Ljava/lang/Object;", 0 },
	{ "value", &class_java_lang_Object, offsetof(java_util_MapEntry, F_value), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_MapEntry_java_lang_Object, 0, "(Ljava/lang/Object;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_MapEntry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "equals", (intptr_t) M_java_util_MapEntry_equals_java_lang_Object_R_boolean, VTABLE_java_util_MapEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "getKey", (intptr_t) M_java_util_MapEntry_getKey_R_java_lang_Object, VTABLE_java_util_MapEntry_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_java_util_MapEntry_getValue_R_java_lang_Object, VTABLE_java_util_MapEntry_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hashCode", (intptr_t) M_java_util_MapEntry_hashCode_R_int, VTABLE_java_util_MapEntry_hashCode_R_int, "()I", 1 },
	{ "setValue", (intptr_t) M_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_MapEntry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "toString", (intptr_t) M_java_util_MapEntry_toString_R_java_lang_String, VTABLE_java_util_MapEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_MapEntry{
		.nativeName = (intptr_t) "java/util/MapEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_MapEntry),
		.classVtable = (intptr_t) vtable_java_util_MapEntry,
		.staticInitializer = (intptr_t) clinit_java_util_MapEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_MapEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_MapEntry = registerClass(&class_java_util_MapEntry);

}
