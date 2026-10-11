#include "rhino/Kit_ComplexKey.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/Kit_ComplexKey.h"

extern "C" {


void mark_rhino_Kit$ComplexKey(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Kit$ComplexKey *) object;
	if (self->F_key1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key1)->clazz)->markFunction)((jobject) self->F_key1, mark, depth + 1);
	if (self->F_key2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key2)->clazz)->markFunction)((jobject) self->F_key2, mark, depth + 1);
}

void clinit_rhino_Kit$ComplexKey(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Kit$ComplexKey_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit$ComplexKey:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Kit$ComplexKey(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(264);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(265);
	((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key1 = (jref) (frame[1].o);
	LINE_NUMBER(266);
	((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key2 = (jref) (frame[2].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit$ComplexKey:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(271);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Kit$ComplexKey)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(273);
	frame[2].o = (checkCast(ctx, &class_rhino_Kit$ComplexKey, (frame[1].o)));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key1;
	sp[1].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[2].o)))->F_key1;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key2;
	sp[1].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[2].o)))->F_key2;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_rhino_Kit$ComplexKey_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Kit$ComplexKey:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	if (((jint)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_hash) != 0) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key1;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_key2;
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[1].o);
	((rhino_Kit$ComplexKey *) NULL_CHECK(sp[0].o))->F_hash = (temp0 ^ temp1);
	}
label_1:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return ((jint)((rhino_Kit$ComplexKey *) NULL_CHECK((frame[0].o)))->F_hash);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Kit$ComplexKey[] {
	(void *) M_rhino_Kit$ComplexKey_hashCode_R_int,
	(void *) M_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean,
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
	{ "key1", &class_java_lang_Object, offsetof(rhino_Kit$ComplexKey, F_key1), "Ljava/lang/Object;", 18 },
	{ "key2", &class_java_lang_Object, offsetof(rhino_Kit$ComplexKey, F_key2), "Ljava/lang/Object;", 18 },
	{ "hash", &class_int, offsetof(rhino_Kit$ComplexKey, F_hash), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Kit$ComplexKey_java_lang_Object_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/Object;)V", 0 },
	{ "equals", (intptr_t) M_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean, VTABLE_rhino_Kit$ComplexKey_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_Kit$ComplexKey_hashCode_R_int, VTABLE_rhino_Kit$ComplexKey_hashCode_R_int, "()I", 1 },
};

Class class_rhino_Kit$ComplexKey{
		.nativeName = (intptr_t) "rhino/Kit$ComplexKey",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Kit$ComplexKey),
		.classVtable = (intptr_t) vtable_rhino_Kit$ComplexKey,
		.staticInitializer = (intptr_t) clinit_rhino_Kit$ComplexKey,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Kit$ComplexKey,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Kit,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Kit$ComplexKey = registerClass(&class_rhino_Kit$ComplexKey);

}

