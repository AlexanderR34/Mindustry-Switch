#include "rhino/NativeObject_EntrySet_1_1.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/Map_Entry.h"
#include "rhino/NativeObject_EntrySet_1_1.h"
#include "rhino/NativeObject_EntrySet_1.h"

extern "C" {


void mark_rhino_NativeObject$EntrySet$1$1(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeObject$EntrySet$1$1 *) object;
	if (self->F_val$ekey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$ekey)->clazz)->markFunction)((jobject) self->F_val$ekey, mark, depth + 1);
	if (self->F_val$value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$value)->clazz)->markFunction)((jobject) self->F_val$value, mark, depth + 1);
	if (self->F_this$2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$2)->clazz)->markFunction)((jobject) self->F_this$2, mark, depth + 1);
}

void clinit_rhino_NativeObject$EntrySet$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeObject$EntrySet$1$1_rhino_NativeObject$EntrySet$1_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject$EntrySet$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(665);
	((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_this$2 = (jref) (frame[1].o);
	((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey = (jref) (frame[2].o);
	((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value = (jref) (frame[3].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(678);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(683);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_Map$Entry)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(684);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(686);
	frame[2].o = (checkCast(ctx, &class_java_util_Map$Entry, (frame[1].o)));
	LINE_NUMBER(687);
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	if (sp[0].o != nullptr) goto label_5;
	}
	goto label_6;
label_4:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getKey_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getKey_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_5;
	}
	goto label_9;
label_7:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	sp[1].o = (jobject)((func_java_util_Map$Entry_getValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map$Entry, INDEX_java_util_Map$Entry_getValue_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
label_9:;
	INST_ICONST(1);
	goto label_10;
label_5:;
	INST_ICONST(0);
label_10:;
	LINE_NUMBER(687);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_NativeObject$EntrySet$1$1_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:hashCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	LINE_NUMBER(694);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	jint temp0 = sp[0].i ^ sp[1].i;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$EntrySet$1$1:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(699);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$ekey;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"="_j))));
	sp[1].o = (jobject)((rhino_NativeObject$EntrySet$1$1 *) NULL_CHECK((frame[0].o)))->F_val$value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeObject$EntrySet$1$1[] {
	(void *) M_rhino_NativeObject$EntrySet$1$1_hashCode_R_int,
	(void *) M_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object,
	(void *) M_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object,
	(void *) M_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object,
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
	{ "val$ekey", &class_java_lang_Object, offsetof(rhino_NativeObject$EntrySet$1$1, F_val$ekey), "Ljava/lang/Object;", 4112 },
	{ "val$value", &class_java_lang_Object, offsetof(rhino_NativeObject$EntrySet$1$1, F_val$value), "Ljava/lang/Object;", 4112 },
	{ "this$2", &class_rhino_NativeObject$EntrySet$1, offsetof(rhino_NativeObject$EntrySet$1$1, F_this$2), "Lrhino/NativeObject$EntrySet$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeObject$EntrySet$1$1_rhino_NativeObject$EntrySet$1_java_lang_Object_java_lang_Object, 0, "(Lrhino/NativeObject$EntrySet$1;Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "getKey", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object, VTABLE_rhino_NativeObject$EntrySet$1$1_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object, VTABLE_rhino_NativeObject$EntrySet$1$1_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setValue", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeObject$EntrySet$1$1_setValue_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "equals", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean, VTABLE_rhino_NativeObject$EntrySet$1$1_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_hashCode_R_int, VTABLE_rhino_NativeObject$EntrySet$1$1_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String, VTABLE_rhino_NativeObject$EntrySet$1$1_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_NativeObject$EntrySet$1$1{
		.nativeName = (intptr_t) "rhino/NativeObject$EntrySet$1$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeObject$EntrySet$1$1),
		.classVtable = (intptr_t) vtable_rhino_NativeObject$EntrySet$1$1,
		.staticInitializer = (intptr_t) clinit_rhino_NativeObject$EntrySet$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeObject$EntrySet$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_rhino_NativeObject$EntrySet$1$1 = registerClass(&class_rhino_NativeObject$EntrySet$1$1);

}

