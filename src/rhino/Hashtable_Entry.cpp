#include "rhino/Hashtable_Entry.h"
#include "rhino/ConsString.h"
#include "java/lang/ClassCastException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "rhino/Hashtable.h"
#include "java/lang/Double.h"
#include "rhino/Undefined.h"
#include "rhino/Hashtable_Entry.h"

extern "C" {


void mark_rhino_Hashtable$Entry(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Hashtable$Entry *) object;
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
}

void clinit_rhino_Hashtable$Entry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Hashtable$Entry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable$Entry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_hashCode = (jint(0));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Hashtable$Entry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Double)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_java_lang_Number_doubleValue_R_double) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))))->vtable)[VTABLE_java_lang_Number_doubleValue_R_double])(ctx, (checkCast(ctx, &class_java_lang_Number, (frame[1].o))));
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, temp0);
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(48);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_ConsString)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(51);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(55);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_hashCode = (jint(0));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (clinit_rhino_ScriptRuntime(ctx), (jdouble)SF_rhino_ScriptRuntime_negativeZero));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(57);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_hashCode = (jint(0));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_key;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[1].o);
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_hashCode = temp0;
	}
label_9:;
	{
	LINE_NUMBER(62);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable$Entry_key_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:key", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_key;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable$Entry_value_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:value", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Hashtable$Entry_clear_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:clear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_value;
	frame[1].o = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	((rhino_Hashtable$Entry *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(80);
	((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_deleted = (jint(1));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_Hashtable$Entry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return ((jint)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_hashCode);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Hashtable$Entry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(91);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ClassCastException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((frame[0].o)))->F_key;
	sp[1].o = (jobject)((rhino_Hashtable$Entry *) NULL_CHECK((checkCast(ctx, &class_rhino_Hashtable$Entry, (frame[1].o)))))->F_key;
	jint temp0 = (jint)SM_rhino_ScriptRuntime_sameZero_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(96);
	frame[2].o = sp[0].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Hashtable$Entry[] {
	(void *) M_rhino_Hashtable$Entry_hashCode_R_int,
	(void *) M_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_Hashtable$Entry_key_R_java_lang_Object,
	(void *) M_rhino_Hashtable$Entry_value_R_java_lang_Object,
	(void *) M_rhino_Hashtable$Entry_clear_R_java_lang_Object,
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
	{ "key", "()Ljava/lang/Object;" },
	{ "value", "()Ljava/lang/Object;" },
	{ "clear", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "key", &class_java_lang_Object, offsetof(rhino_Hashtable$Entry, F_key), "Ljava/lang/Object;", 4 },
	{ "value", &class_java_lang_Object, offsetof(rhino_Hashtable$Entry, F_value), "Ljava/lang/Object;", 4 },
	{ "deleted", &class_boolean, offsetof(rhino_Hashtable$Entry, F_deleted), "Z", 4 },
	{ "next", &class_rhino_Hashtable$Entry, offsetof(rhino_Hashtable$Entry, F_next), "Lrhino/Hashtable$Entry;", 4 },
	{ "prev", &class_rhino_Hashtable$Entry, offsetof(rhino_Hashtable$Entry, F_prev), "Lrhino/Hashtable$Entry;", 4 },
	{ "hashCode", &class_int, offsetof(rhino_Hashtable$Entry, F_hashCode), "I", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Hashtable$Entry, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_rhino_Hashtable$Entry_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "key", (intptr_t) M_rhino_Hashtable$Entry_key_R_java_lang_Object, VTABLE_rhino_Hashtable$Entry_key_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "value", (intptr_t) M_rhino_Hashtable$Entry_value_R_java_lang_Object, VTABLE_rhino_Hashtable$Entry_value_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "clear", (intptr_t) M_rhino_Hashtable$Entry_clear_R_java_lang_Object, VTABLE_rhino_Hashtable$Entry_clear_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
	{ "hashCode", (intptr_t) M_rhino_Hashtable$Entry_hashCode_R_int, VTABLE_rhino_Hashtable$Entry_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean, VTABLE_rhino_Hashtable$Entry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
};

Class class_rhino_Hashtable$Entry{
		.nativeName = (intptr_t) "rhino/Hashtable$Entry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Hashtable$Entry),
		.classVtable = (intptr_t) vtable_rhino_Hashtable$Entry,
		.staticInitializer = (intptr_t) clinit_rhino_Hashtable$Entry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Hashtable$Entry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Hashtable,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Hashtable$Entry = registerClass(&class_rhino_Hashtable$Entry);

}

