#include "java/util/IdentityHashMap_IdentityHashMapEntry.h"
#include "java/util/IdentityHashMap_IdentityHashMapEntry.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Map_Entry.h"
#include "java/util/MapEntry.h"
#include "java/util/IdentityHashMap.h"
#include "java/lang/System.h"

extern "C" {


void mark_java_util_IdentityHashMap$IdentityHashMapEntry(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_MapEntry(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_IdentityHashMap$IdentityHashMapEntry *) object;
}

void clinit_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_MapEntry(ctx);
}

void init_java_util_IdentityHashMap$IdentityHashMapEntry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_IdentityHashMap$IdentityHashMapEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(80);
	init_java_util_MapEntry_java_lang_Object_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(88);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(89);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != sp[1].o) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_java_util_IdentityHashMap$IdentityHashMapEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntry:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, sp[0].o);
	sp[0].o = (jobject)((java_util_MapEntry *) NULL_CHECK((frame[0].o)))->F_value;
	LINE_NUMBER(98);
	jint temp1 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, sp[0].o);
	jint temp2 = temp0 ^ temp1;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_util_IdentityHashMap$IdentityHashMapEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/IdentityHashMap$IdentityHashMapEntry:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
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

void *vtable_java_util_IdentityHashMap$IdentityHashMapEntry[] {
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntry_hashCode_R_int,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_IdentityHashMap$IdentityHashMapEntry_toString_R_java_lang_String,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_IdentityHashMap$IdentityHashMapEntry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "equals", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntry_hashCode_R_int, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_java_util_IdentityHashMap$IdentityHashMapEntry_toString_R_java_lang_String, VTABLE_java_util_IdentityHashMap$IdentityHashMapEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_IdentityHashMap$IdentityHashMapEntry{
		.nativeName = (intptr_t) "java/util/IdentityHashMap$IdentityHashMapEntry",
		.parentClass = (intptr_t) &class_java_util_MapEntry,
		.size = sizeof(java_util_IdentityHashMap$IdentityHashMapEntry),
		.classVtable = (intptr_t) vtable_java_util_IdentityHashMap$IdentityHashMapEntry,
		.staticInitializer = (intptr_t) clinit_java_util_IdentityHashMap$IdentityHashMapEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_IdentityHashMap$IdentityHashMapEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_IdentityHashMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_IdentityHashMap$IdentityHashMapEntry = registerClass(&class_java_util_IdentityHashMap$IdentityHashMapEntry);

}

