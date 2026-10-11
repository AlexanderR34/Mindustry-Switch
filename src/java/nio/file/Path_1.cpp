#include "java/nio/file/Path_1.h"
#include "java/nio/file/Path.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Iterator.h"
#include "java/nio/file/Path_1.h"

extern "C" {


void mark_java_nio_file_Path$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_file_Path$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_nio_file_Path$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_nio_file_Path$1_java_nio_file_Path(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_file_Path$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(113);
	((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_i = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_file_Path$1_hasNext_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path$1:hasNext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_java_nio_file_Path_getNameCount_R_int) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getNameCount_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
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

jobject M_java_nio_file_Path$1_next_R_java_nio_file_Path(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path$1:next", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_java_nio_file_Path_getNameCount_R_int) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getNameCount_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_nio_file_Path_getName_int_R_java_nio_file_Path) resolveInterfaceMethod(ctx, &class_java_nio_file_Path, INDEX_java_nio_file_Path_getName_int_R_java_nio_file_Path, sp[0].o))(ctx, sp[0].o, ((jint)((java_nio_file_Path$1 *) NULL_CHECK((frame[0].o)))->F_i));
	frame[1].o = sp[0].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	((java_nio_file_Path$1 *) NULL_CHECK(sp[0].o))->F_i = (((jint)((java_nio_file_Path$1 *) NULL_CHECK(sp[0].o))->F_i) + (jint(1)));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(125);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_file_Path$1_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/file/Path$1:next", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_java_nio_file_Path$1_next_R_java_nio_file_Path) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_file_Path$1_next_R_java_nio_file_Path])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_file_Path$1[] {
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
	(void *) M_java_nio_file_Path$1_hasNext_R_boolean,
	(void *) M_java_nio_file_Path$1_next_R_java_lang_Object,
	(void *) M_java_util_Iterator_remove,
	(void *) M_java_util_Iterator_forEachRemaining_java_util_function_Consumer,
	(void *) M_java_nio_file_Path$1_next_R_java_nio_file_Path,
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
	{ "next", "()Ljava/nio/file/Path;" },
};

static jclass interfaces[] { &class_java_util_Iterator, };

static FieldMetadata fields[] {
	{ "i", &class_int, offsetof(java_nio_file_Path$1, F_i), "I", 2 },
	{ "this$0", &class_java_nio_file_Path, offsetof(java_nio_file_Path$1, F_this$0), "Ljava/nio/file/Path;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_file_Path$1_java_nio_file_Path, 0, "(Ljava/nio/file/Path;)V", 0 },
	{ "hasNext", (intptr_t) M_java_nio_file_Path$1_hasNext_R_boolean, VTABLE_java_nio_file_Path$1_hasNext_R_boolean, "()Z", 1 },
	{ "next", (intptr_t) M_java_nio_file_Path$1_next_R_java_nio_file_Path, VTABLE_java_nio_file_Path$1_next_R_java_nio_file_Path, "()Ljava/nio/file/Path;", 1 },
	{ "next", (intptr_t) M_java_nio_file_Path$1_next_R_java_lang_Object, VTABLE_java_nio_file_Path$1_next_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_java_nio_file_Path$1{
		.nativeName = (intptr_t) "java/nio/file/Path$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_file_Path$1),
		.classVtable = (intptr_t) vtable_java_nio_file_Path$1,
		.staticInitializer = (intptr_t) clinit_java_nio_file_Path$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_file_Path$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_nio_file_Path$1 = registerClass(&class_java_nio_file_Path$1);

}

