#include "arc/struct/LongMap_Keys.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Object.h"
#include "arc/struct/LongMap.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/struct/LongMap_Keys.h"
#include "arc/struct/LongSeq.h"
#include "arc/struct/LongMap_MapIterator.h"

extern "C" {


void mark_arc_struct_LongMap$Keys(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_LongMap$MapIterator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_struct_LongMap$Keys *) object;
}

void clinit_arc_struct_LongMap$Keys(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_LongMap$MapIterator(ctx);
}

void init_arc_struct_LongMap$Keys_arc_struct_LongMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_LongMap$Keys(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(685);
	init_arc_struct_LongMap$MapIterator_arc_struct_LongMap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_arc_struct_LongMap$Keys_next_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) != 0) goto label_1;
	}
	{
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(690);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#iterator() cannot be used nested."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(691);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex) != (jint(-1))) goto label_3;
	}
	INST_LCONST(0);
	goto label_4;
label_3:;
	{
	sp[0].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_LongMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex));
	sp[0].l = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[1].l = sp[0].l;
	LINE_NUMBER(692);
	((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = ((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex);
	LINE_NUMBER(693);
	((func_arc_struct_LongMap$Keys_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Keys_findNextIndex])(ctx, (frame[0].o));
	LINE_NUMBER(694);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Keys_toSeq_R_arc_struct_LongSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:toSeq", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(699);
	clinit_arc_struct_LongSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	init_arc_struct_LongSeq_boolean_int(ctx, sp[0].o, temp0, ((jint)((arc_struct_LongMap *) NULL_CHECK(sp[1].o))->F_size));
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(700);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_2;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_arc_struct_LongMap$Keys_next_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Keys_next_R_long])(ctx, (frame[0].o));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_struct_LongMap$Keys_toSeq_arc_struct_LongSeq_R_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:toSeq", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_0:;
	{
	LINE_NUMBER(707);
	if (((jint)((arc_struct_LongMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext) == 0) goto label_1;
	}
	{
	LINE_NUMBER(708);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_arc_struct_LongMap$Keys_next_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_LongMap$Keys_next_R_long])(ctx, (frame[0].o));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp0);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Keys_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(683);
	M_arc_struct_LongMap$MapIterator_remove(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_LongMap$Keys_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/LongMap$Keys:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(683);
	M_arc_struct_LongMap$MapIterator_reset(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_LongMap$Keys[] {
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
	(void *) M_arc_struct_LongMap$Keys_reset,
	(void *) M_arc_struct_LongMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_LongMap$Keys_remove,
	(void *) M_arc_struct_LongMap$Keys_next_R_long,
	(void *) M_arc_struct_LongMap$Keys_toSeq_R_arc_struct_LongSeq,
	(void *) M_arc_struct_LongMap$Keys_toSeq_arc_struct_LongSeq_R_arc_struct_LongSeq,
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
	{ "reset", "()V" },
	{ "findNextIndex", "()V" },
	{ "remove", "()V" },
	{ "next", "()J" },
	{ "toSeq", "()Larc/struct/LongSeq;" },
	{ "toSeq", "(Larc/struct/LongSeq;)Larc/struct/LongSeq;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_LongMap$Keys_arc_struct_LongMap, 0, "(Larc/struct/LongMap;)V", 1 },
	{ "next", (intptr_t) M_arc_struct_LongMap$Keys_next_R_long, VTABLE_arc_struct_LongMap$Keys_next_R_long, "()J", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_LongMap$Keys_toSeq_R_arc_struct_LongSeq, VTABLE_arc_struct_LongMap$Keys_toSeq_R_arc_struct_LongSeq, "()Larc/struct/LongSeq;", 1 },
	{ "toSeq", (intptr_t) M_arc_struct_LongMap$Keys_toSeq_arc_struct_LongSeq_R_arc_struct_LongSeq, VTABLE_arc_struct_LongMap$Keys_toSeq_arc_struct_LongSeq_R_arc_struct_LongSeq, "(Larc/struct/LongSeq;)Larc/struct/LongSeq;", 1 },
	{ "remove", (intptr_t) M_arc_struct_LongMap$Keys_remove, VTABLE_arc_struct_LongMap$Keys_remove, "()V", 4161 },
	{ "reset", (intptr_t) M_arc_struct_LongMap$Keys_reset, VTABLE_arc_struct_LongMap$Keys_reset, "()V", 4161 },
};

Class class_arc_struct_LongMap$Keys{
		.nativeName = (intptr_t) "arc/struct/LongMap$Keys",
		.parentClass = (intptr_t) &class_arc_struct_LongMap$MapIterator,
		.size = sizeof(arc_struct_LongMap$Keys),
		.classVtable = (intptr_t) vtable_arc_struct_LongMap$Keys,
		.staticInitializer = (intptr_t) clinit_arc_struct_LongMap$Keys,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_LongMap$Keys,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_LongMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_LongMap$Keys = registerClass(&class_arc_struct_LongMap$Keys);

}

