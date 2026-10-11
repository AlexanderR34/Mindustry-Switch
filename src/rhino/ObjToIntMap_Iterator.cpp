#include "rhino/ObjToIntMap_Iterator.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/ObjToIntMap.h"
#include "java/lang/RuntimeException.h"
#include "rhino/ObjToIntMap_Iterator.h"
#include "rhino/UniqueTag.h"

extern "C" {


void mark_rhino_ObjToIntMap$Iterator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ObjToIntMap$Iterator *) object;
	if (self->F_master)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_master)->clazz)->markFunction)((jobject) self->F_master, mark, depth + 1);
	if (self->F_keys)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keys)->clazz)->markFunction)((jobject) self->F_keys, mark, depth + 1);
	if (self->F_values)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_values)->clazz)->markFunction)((jobject) self->F_values, mark, depth + 1);
}

void clinit_rhino_ObjToIntMap$Iterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ObjToIntMap$Iterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_master = (jref) (frame[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:init", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(24);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_keys = (jref) (frame[1].o);
	LINE_NUMBER(25);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_values = (jref) (frame[2].o);
	LINE_NUMBER(26);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor = (jint(-1));
	LINE_NUMBER(27);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_remaining = (frame[3].i);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap$Iterator_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:start", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_master;
	((func_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_ObjToIntMap_initIterator_rhino_ObjToIntMap$Iterator])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(32);
	((func_rhino_ObjToIntMap$Iterator_next) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ObjToIntMap$Iterator_next])(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ObjToIntMap$Iterator_done_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:done", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	if (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_remaining) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap$Iterator_next(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	if (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_remaining) != (jint(-1))) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(41);
	if (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_remaining) != 0) goto label_2;
	}
	{
	LINE_NUMBER(42);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_remaining = (jint(-1));
	LINE_NUMBER(43);
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor = (jint(-1));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor)));
	LINE_NUMBER(47);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_rhino_ObjToIntMap_access$000_R_java_lang_Object(ctx);
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_remaining = (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_remaining) - (jint(1)));
	LINE_NUMBER(49);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	goto label_6;
	}
label_5:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:getKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_keys;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor)));
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(58);
	frame[1].o = (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_ObjToIntMap$Iterator_getValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:getValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_values;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor)));
	}

	popStackFrame(ctx);
}

void M_rhino_ObjToIntMap$Iterator_setValue_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ObjToIntMap$Iterator:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_values;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((rhino_ObjToIntMap$Iterator *) NULL_CHECK((frame[0].o)))->F_cursor)) = (frame[1].i);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ObjToIntMap$Iterator[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int,
	(void *) M_rhino_ObjToIntMap$Iterator_start,
	(void *) M_rhino_ObjToIntMap$Iterator_done_R_boolean,
	(void *) M_rhino_ObjToIntMap$Iterator_next,
	(void *) M_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object,
	(void *) M_rhino_ObjToIntMap$Iterator_getValue_R_int,
	(void *) M_rhino_ObjToIntMap$Iterator_setValue_int,
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
	{ "init", "([Ljava/lang/Object;[II)V" },
	{ "start", "()V" },
	{ "done", "()Z" },
	{ "next", "()V" },
	{ "getKey", "()Ljava/lang/Object;" },
	{ "getValue", "()I" },
	{ "setValue", "(I)V" },
};

static FieldMetadata fields[] {
	{ "master", &class_rhino_ObjToIntMap, offsetof(rhino_ObjToIntMap$Iterator, F_master), "Lrhino/ObjToIntMap;", 0 },
	{ "cursor", &class_int, offsetof(rhino_ObjToIntMap$Iterator, F_cursor), "I", 2 },
	{ "remaining", &class_int, offsetof(rhino_ObjToIntMap$Iterator, F_remaining), "I", 2 },
	{ "keys", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_ObjToIntMap$Iterator, F_keys), "[Ljava/lang/Object;", 2 },
	{ "values", getArrayClass(&class_int, 1), offsetof(rhino_ObjToIntMap$Iterator, F_values), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ObjToIntMap$Iterator_rhino_ObjToIntMap, 0, "(Lrhino/ObjToIntMap;)V", 0 },
	{ "init", (intptr_t) M_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int, VTABLE_rhino_ObjToIntMap$Iterator_init_Array1_java_lang_Object_Array1_int_int, "([Ljava/lang/Object;[II)V", 16 },
	{ "start", (intptr_t) M_rhino_ObjToIntMap$Iterator_start, VTABLE_rhino_ObjToIntMap$Iterator_start, "()V", 1 },
	{ "done", (intptr_t) M_rhino_ObjToIntMap$Iterator_done_R_boolean, VTABLE_rhino_ObjToIntMap$Iterator_done_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_ObjToIntMap$Iterator_next, VTABLE_rhino_ObjToIntMap$Iterator_next, "()V", 1 },
	{ "getKey", (intptr_t) M_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object, VTABLE_rhino_ObjToIntMap$Iterator_getKey_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getValue", (intptr_t) M_rhino_ObjToIntMap$Iterator_getValue_R_int, VTABLE_rhino_ObjToIntMap$Iterator_getValue_R_int, "()I", 1 },
	{ "setValue", (intptr_t) M_rhino_ObjToIntMap$Iterator_setValue_int, VTABLE_rhino_ObjToIntMap$Iterator_setValue_int, "(I)V", 1 },
};

Class class_rhino_ObjToIntMap$Iterator{
		.nativeName = (intptr_t) "rhino/ObjToIntMap$Iterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ObjToIntMap$Iterator),
		.classVtable = (intptr_t) vtable_rhino_ObjToIntMap$Iterator,
		.staticInitializer = (intptr_t) clinit_rhino_ObjToIntMap$Iterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ObjToIntMap$Iterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ObjToIntMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ObjToIntMap$Iterator = registerClass(&class_rhino_ObjToIntMap$Iterator);

}

