#include "java/util/AbstractMap_SimpleEntry.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/AbstractMap_SimpleEntry.h"
#include "java/util/Map_Entry.h"
#include "java/util/AbstractMap.h"

extern "C" {

jlong SF_java_util_AbstractMap$SimpleEntry_serialVersionUID;

void mark_java_util_AbstractMap$SimpleEntry(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_AbstractMap$SimpleEntry *) object;
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_java_util_AbstractMap$SimpleEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_AbstractMap$SimpleEntry_serialVersionUID = jlong(-8499721149061103585ll);
}

void init_java_util_AbstractMap$SimpleEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractMap$SimpleEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(181);
	((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	LINE_NUMBER(182);
	((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_AbstractMap$SimpleEntry_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_AbstractMap$SimpleEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((java_util_AbstractMap$SimpleEntry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((java_util_AbstractMap$SimpleEntry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap$SimpleEntry_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap$SimpleEntry_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap$SimpleEntry_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	frame[2].o = sp[0].o;
	LINE_NUMBER(221);
	((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_java_util_AbstractMap$SimpleEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(236);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(237);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_8;
label_6:;
	{
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[1].o = frame[2].o;
	LINE_NUMBER(239);
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_7;
	}
	goto label_13;
label_11:;
	{
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[2].o;
	LINE_NUMBER(241);
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
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_AbstractMap$SimpleEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_AbstractMap$SimpleEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/AbstractMap$SimpleEntry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((java_util_AbstractMap$SimpleEntry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_AbstractMap$SimpleEntry[] {
	(void *) M_java_util_AbstractMap$SimpleEntry_hashCode_R_int,
	(void *) M_java_util_AbstractMap$SimpleEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap$SimpleEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_AbstractMap$SimpleEntry_getKey_R_java_lang_Object,
	(void *) M_java_util_AbstractMap$SimpleEntry_getValue_R_java_lang_Object,
	(void *) M_java_util_AbstractMap$SimpleEntry_setValue_java_lang_Object_R_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_AbstractMap$SimpleEntry_serialVersionUID, "J", 26 },
	{ "key", &class_java_lang_Object, offsetof(java_util_AbstractMap$SimpleEntry, F_key), "Ljava/lang/Object;", 2 },
	{ "value", &class_java_lang_Object, offsetof(java_util_AbstractMap$SimpleEntry, F_value), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_AbstractMap$SimpleEntry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_AbstractMap$SimpleEntry_java_util_Map$Entry, 0, "(Ljava/util/Map$Entry;)V", 1 },
	{ "getKey", (intptr_t) M_java_util_AbstractMap$SimpleEntry_getKey_R_java_lang_Object, VTABLE_java_util_AbstractMap$SimpleEntry_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_java_util_AbstractMap$SimpleEntry_getValue_R_java_lang_Object, VTABLE_java_util_AbstractMap$SimpleEntry_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setValue", (intptr_t) M_java_util_AbstractMap$SimpleEntry_setValue_java_lang_Object_R_java_lang_Object, VTABLE_java_util_AbstractMap$SimpleEntry_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "equals", (intptr_t) M_java_util_AbstractMap$SimpleEntry_equals_java_lang_Object_R_boolean, VTABLE_java_util_AbstractMap$SimpleEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_AbstractMap$SimpleEntry_hashCode_R_int, VTABLE_java_util_AbstractMap$SimpleEntry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_AbstractMap$SimpleEntry_toString_R_java_lang_String, VTABLE_java_util_AbstractMap$SimpleEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_AbstractMap$SimpleEntry{
		.nativeName = (intptr_t) "java/util/AbstractMap$SimpleEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_AbstractMap$SimpleEntry),
		.classVtable = (intptr_t) vtable_java_util_AbstractMap$SimpleEntry,
		.staticInitializer = (intptr_t) clinit_java_util_AbstractMap$SimpleEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_AbstractMap$SimpleEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_AbstractMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_AbstractMap$SimpleEntry = registerClass(&class_java_util_AbstractMap$SimpleEntry);

}

