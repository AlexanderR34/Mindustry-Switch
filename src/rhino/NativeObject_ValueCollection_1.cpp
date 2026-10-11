#include "rhino/NativeObject_ValueCollection_1.h"
#include "java/lang/Object.h"
#include "rhino/NativeObject.h"
#include "java/util/Iterator.h"
#include "rhino/NativeObject_ValueCollection.h"
#include "rhino/NativeObject_ValueCollection_1.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/Map.h"

extern "C" {


void mark_rhino_NativeObject$ValueCollection$1(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeObject$ValueCollection$1 *) object;
	if (self->F_ids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ids)->clazz)->markFunction)((jobject) self->F_ids, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_rhino_NativeObject$ValueCollection$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeObject$ValueCollection$1_rhino_NativeObject$ValueCollection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$ValueCollection$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeObject$ValueCollection$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(771);
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(772);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((rhino_NativeObject$ValueCollection *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((func_rhino_NativeObject_getIds_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_NativeObject_getIds_R_Array1_java_lang_Object])(ctx, sp[1].o);
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK(sp[0].o))->F_ids = (jref) sp[1].o;
	LINE_NUMBER(774);
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeObject$ValueCollection$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$ValueCollection$1:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(778);
	jint temp0 = (jint)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_ids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
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

jobject M_rhino_NativeObject$ValueCollection$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$ValueCollection$1:next", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_ids;
	sp[3].o = frame[0].o;
	jint temp0 = (jint)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK(sp[3].o))->F_index;
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK(sp[3].o))->F_index = (temp0 + (jint(1)));
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, temp0);
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK(sp[1].o))->F_key = (jref) sp[2].o;
	sp[0].o = (jobject)((func_rhino_NativeObject_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeObject$ValueCollection$1_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeObject$ValueCollection$1:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_key;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(789);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((rhino_NativeObject$ValueCollection *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_key;
	sp[0].o = (jobject)((func_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeObject_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(792);
	((rhino_NativeObject$ValueCollection$1 *) NULL_CHECK((frame[0].o)))->F_key = (jref) (jobject(nullptr));
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeObject$ValueCollection$1[] {
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
	(void *) M_rhino_NativeObject$ValueCollection$1_hasNext_R_boolean,
	(void *) M_rhino_NativeObject$ValueCollection$1_next_R_java_lang_Object,
	(void *) M_rhino_NativeObject$ValueCollection$1_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
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
	{ "hasNext", "()Z" },
	{ "next", "()Ljava/lang/Object;" },
	{ "remove", "()V" },
	{ "forEachRemaining", "(Ljava/util/function/Consumer;)V" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "ids", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_NativeObject$ValueCollection$1, F_ids), "[Ljava/lang/Object;", 16 },
	{ "key", &class_java_lang_Object, offsetof(rhino_NativeObject$ValueCollection$1, F_key), "Ljava/lang/Object;", 0 },
	{ "index", &class_int, offsetof(rhino_NativeObject$ValueCollection$1, F_index), "I", 0 },
	{ "this$1", &class_rhino_NativeObject$ValueCollection, offsetof(rhino_NativeObject$ValueCollection$1, F_this$1), "Lrhino/NativeObject$ValueCollection;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeObject$ValueCollection$1_rhino_NativeObject$ValueCollection, 0, "(Lrhino/NativeObject$ValueCollection;)V", 0 },
	{ "hasNext", (intptr_t) M_rhino_NativeObject$ValueCollection$1_hasNext_R_boolean, VTABLE_rhino_NativeObject$ValueCollection$1_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_rhino_NativeObject$ValueCollection$1_next_R_java_lang_Object, VTABLE_rhino_NativeObject$ValueCollection$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "remove", (intptr_t) M_rhino_NativeObject$ValueCollection$1_remove, VTABLE_rhino_NativeObject$ValueCollection$1_remove, "()V", 1 },
};

Class class_rhino_NativeObject$ValueCollection$1{
		.nativeName = (intptr_t) "rhino/NativeObject$ValueCollection$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeObject$ValueCollection$1),
		.classVtable = (intptr_t) vtable_rhino_NativeObject$ValueCollection$1,
		.staticInitializer = (intptr_t) clinit_rhino_NativeObject$ValueCollection$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeObject$ValueCollection$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_rhino_NativeObject$ValueCollection$1 = registerClass(&class_rhino_NativeObject$ValueCollection$1);

}

