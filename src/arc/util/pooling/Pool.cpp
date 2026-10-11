#include "arc/util/pooling/Pool.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/pooling/Pool.h"

extern "C" {


void mark_arc_util_pooling_Pool(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_pooling_Pool *) object;
	if (self->F_freeObjects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_freeObjects)->clazz)->markFunction)((jobject) self->F_freeObjects, mark, depth + 1);
}

void clinit_arc_util_pooling_Pool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_pooling_Pool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pool(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_arc_util_pooling_Pool_int_int(ctx, (frame[0].o), (16), (jint(2147483647)));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_pooling_Pool_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	init_arc_util_pooling_Pool_int_int(ctx, (frame[0].o), (frame[1].i), (jint(2147483647)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_pooling_Pool_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_pooling_Pool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int(ctx, sp[1].o, (jint(0)), (frame[1].i));
	((arc_util_pooling_Pool *) NULL_CHECK(sp[0].o))->F_freeObjects = (jref) sp[1].o;
	LINE_NUMBER(30);
	((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].i);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_pooling_Pool_obtain_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:obtain", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_pooling_Pool_newObject_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_pooling_Pool_newObject_R_java_lang_Object])(ctx, (frame[0].o));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_arc_util_pooling_Pool_free_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:free", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) >= ((jint)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_max)) goto label_2;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_peak;
	sp[1].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((arc_util_pooling_Pool *) NULL_CHECK(sp[0].o))->F_peak = temp1;
	}
label_2:;
	{
	LINE_NUMBER(55);
	((func_arc_util_pooling_Pool_reset_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_pooling_Pool_reset_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_pooling_Pool_reset_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	if ((isInstance(ctx, (frame[1].o), &class_arc_util_pooling_Pool$Poolable)) == 0) goto label_1;
	}
	{
	((func_arc_util_pooling_Pool$Poolable_reset) resolveInterfaceMethod(ctx, &class_arc_util_pooling_Pool$Poolable, INDEX_arc_util_pooling_Pool$Poolable_reset, (checkCast(ctx, &class_arc_util_pooling_Pool$Poolable, (frame[1].o)))))(ctx, (checkCast(ctx, &class_arc_util_pooling_Pool$Poolable, (frame[1].o))));
	}
label_1:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_util_pooling_Pool_freeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:freeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"objects cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	frame[2].o = sp[0].o;
	LINE_NUMBER(75);
	frame[3].i = ((jint)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_max);
	LINE_NUMBER(76);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(79);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) >= (frame[3].i)) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[5].o));
	}
label_10:;
	{
	LINE_NUMBER(80);
	((func_arc_util_pooling_Pool_reset_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_pooling_Pool_reset_java_lang_Object])(ctx, (frame[0].o), (frame[5].o));
	}
label_9:;
	{
	LINE_NUMBER(76);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_peak), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size));
	((arc_util_pooling_Pool *) NULL_CHECK(sp[0].o))->F_peak = temp0;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_pooling_Pool_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_util_pooling_Pool_getFree_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/pooling/Pool:getFree", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_util_pooling_Pool *) NULL_CHECK((frame[0].o)))->F_freeObjects;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_pooling_Pool[] {
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
	(void *) nullptr,
	(void *) M_arc_util_pooling_Pool_obtain_R_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_free_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_reset_java_lang_Object,
	(void *) M_arc_util_pooling_Pool_freeAll_arc_struct_Seq,
	(void *) M_arc_util_pooling_Pool_clear,
	(void *) M_arc_util_pooling_Pool_getFree_R_int,
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
	{ "newObject", "()Ljava/lang/Object;" },
	{ "obtain", "()Ljava/lang/Object;" },
	{ "free", "(Ljava/lang/Object;)V" },
	{ "reset", "(Ljava/lang/Object;)V" },
	{ "freeAll", "(Larc/struct/Seq;)V" },
	{ "clear", "()V" },
	{ "getFree", "()I" },
};

static jclass innerClasses[] {
	&class_arc_util_pooling_Pool$Poolable,
};

static FieldMetadata fields[] {
	{ "max", &class_int, offsetof(arc_util_pooling_Pool, F_max), "I", 17 },
	{ "freeObjects", &class_arc_struct_Seq, offsetof(arc_util_pooling_Pool, F_freeObjects), "Larc/struct/Seq;", 18 },
	{ "peak", &class_int, offsetof(arc_util_pooling_Pool, F_peak), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_pooling_Pool, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_util_pooling_Pool_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_util_pooling_Pool_int_int, 0, "(II)V", 1 },
	{ "newObject", 0, VTABLE_arc_util_pooling_Pool_newObject_R_java_lang_Object, "()Ljava/lang/Object;", 1028 },
	{ "obtain", (intptr_t) M_arc_util_pooling_Pool_obtain_R_java_lang_Object, VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "free", (intptr_t) M_arc_util_pooling_Pool_free_java_lang_Object, VTABLE_arc_util_pooling_Pool_free_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "reset", (intptr_t) M_arc_util_pooling_Pool_reset_java_lang_Object, VTABLE_arc_util_pooling_Pool_reset_java_lang_Object, "(Ljava/lang/Object;)V", 4 },
	{ "freeAll", (intptr_t) M_arc_util_pooling_Pool_freeAll_arc_struct_Seq, VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "clear", (intptr_t) M_arc_util_pooling_Pool_clear, VTABLE_arc_util_pooling_Pool_clear, "()V", 1 },
	{ "getFree", (intptr_t) M_arc_util_pooling_Pool_getFree_R_int, VTABLE_arc_util_pooling_Pool_getFree_R_int, "()I", 1 },
};

Class class_arc_util_pooling_Pool{
		.nativeName = (intptr_t) "arc/util/pooling/Pool",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_pooling_Pool),
		.classVtable = (intptr_t) vtable_arc_util_pooling_Pool,
		.staticInitializer = (intptr_t) clinit_arc_util_pooling_Pool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_pooling_Pool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_pooling_Pool = registerClass(&class_arc_util_pooling_Pool);

}
