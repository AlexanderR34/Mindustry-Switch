#include "arc/struct/IntIntMap_MapIterator.h"
#include "java/lang/Object.h"
#include "arc/struct/IntIntMap_MapIterator.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/IntIntMap.h"

extern "C" {

jint SF_arc_struct_IntIntMap$MapIterator_INDEX_ILLEGAL;
jint SF_arc_struct_IntIntMap$MapIterator_INDEX_ZERO;

void mark_arc_struct_IntIntMap$MapIterator(jobject object, jint mark, jint depth) {
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
	auto self = (arc_struct_IntIntMap$MapIterator *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_arc_struct_IntIntMap$MapIterator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_struct_IntIntMap$MapIterator_INDEX_ILLEGAL = jint(-2);
	SF_arc_struct_IntIntMap$MapIterator_INDEX_ZERO = jint(-1);
}

void init_arc_struct_IntIntMap$MapIterator_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap$MapIterator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_struct_IntIntMap$MapIterator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(562);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(560);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_valid = (jint(1));
	LINE_NUMBER(563);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(564);
	((func_arc_struct_IntIntMap$MapIterator_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap$MapIterator_reset])(ctx, (frame[0].o));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap$MapIterator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap$MapIterator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(568);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(569);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex = (jint(-1));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_3;
	}
	{
	LINE_NUMBER(571);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(573);
	((func_arc_struct_IntIntMap$MapIterator_findNextIndex) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntIntMap$MapIterator_findNextIndex])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(574);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap$MapIterator_findNextIndex(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap$MapIterator:findNextIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[1].o = sp[0].o;
	LINE_NUMBER(578);
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) + (jint(1));
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = temp0;
	if (temp0 >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(579);
	if (((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_nextIndex))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(580);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(1));
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(584);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_hasNext = (jint(0));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_struct_IntIntMap$MapIterator_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/struct/IntIntMap$MapIterator:remove", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	frame[1].i = ((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex);
	LINE_NUMBER(589);
	if ((frame[1].i) != (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue) == 0) goto label_2;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_hasZeroValue = (jint(0));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(591);
	if ((frame[1].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(592);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"next must be called before remove."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_keyTable;
	frame[2].o = sp[0].o;
	LINE_NUMBER(595);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_valueTable;
	frame[3].o = sp[0].o;
	LINE_NUMBER(596);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	frame[4].i = ((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_mask);
	frame[5].i = (((frame[1].i) + (jint(1))) & (frame[4].i));
	}
label_10:;
	{
	LINE_NUMBER(597);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i));
	frame[6].i = temp0;
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_arc_struct_IntIntMap_place_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_place_int_R_int])(ctx, sp[0].o, (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(599);
	if ((((frame[5].i) - (frame[7].i)) & (frame[4].i)) <= (((frame[1].i) - (frame[7].i)) & (frame[4].i))) goto label_15;
	}
	{
	LINE_NUMBER(600);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = (frame[6].i);
	LINE_NUMBER(601);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[1].i)) = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(602);
	frame[1].i = (frame[5].i);
	}
label_15:;
	{
	LINE_NUMBER(604);
	frame[5].i = (((frame[5].i) + (jint(1))) & (frame[4].i));
	LINE_NUMBER(605);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(606);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[1].i)) = (jint(0));
	LINE_NUMBER(607);
	if ((frame[1].i) == ((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex = (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK(sp[0].o))->F_nextIndex) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(609);
	((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_currentIndex = (-2);
	LINE_NUMBER(610);
	sp[0].o = (jobject)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[0].o)))->F_map;
	((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_IntIntMap *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_struct_IntIntMap$MapIterator[] {
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
	(void *) M_arc_struct_IntIntMap$MapIterator_reset,
	(void *) M_arc_struct_IntIntMap$MapIterator_findNextIndex,
	(void *) M_arc_struct_IntIntMap$MapIterator_remove,
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
};

static FieldMetadata fields[] {
	{ "INDEX_ILLEGAL", &class_int, (intptr_t) &SF_arc_struct_IntIntMap$MapIterator_INDEX_ILLEGAL, "I", 26 },
	{ "INDEX_ZERO", &class_int, (intptr_t) &SF_arc_struct_IntIntMap$MapIterator_INDEX_ZERO, "I", 24 },
	{ "hasNext", &class_boolean, offsetof(arc_struct_IntIntMap$MapIterator, F_hasNext), "Z", 1 },
	{ "map", &class_arc_struct_IntIntMap, offsetof(arc_struct_IntIntMap$MapIterator, F_map), "Larc/struct/IntIntMap;", 16 },
	{ "nextIndex", &class_int, offsetof(arc_struct_IntIntMap$MapIterator, F_nextIndex), "I", 0 },
	{ "currentIndex", &class_int, offsetof(arc_struct_IntIntMap$MapIterator, F_currentIndex), "I", 0 },
	{ "valid", &class_boolean, offsetof(arc_struct_IntIntMap$MapIterator, F_valid), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_struct_IntIntMap$MapIterator_arc_struct_IntIntMap, 0, "(Larc/struct/IntIntMap;)V", 1 },
	{ "reset", (intptr_t) M_arc_struct_IntIntMap$MapIterator_reset, VTABLE_arc_struct_IntIntMap$MapIterator_reset, "()V", 1 },
	{ "findNextIndex", (intptr_t) M_arc_struct_IntIntMap$MapIterator_findNextIndex, VTABLE_arc_struct_IntIntMap$MapIterator_findNextIndex, "()V", 0 },
	{ "remove", (intptr_t) M_arc_struct_IntIntMap$MapIterator_remove, VTABLE_arc_struct_IntIntMap$MapIterator_remove, "()V", 1 },
};

Class class_arc_struct_IntIntMap$MapIterator{
		.nativeName = (intptr_t) "arc/struct/IntIntMap$MapIterator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_struct_IntIntMap$MapIterator),
		.classVtable = (intptr_t) vtable_arc_struct_IntIntMap$MapIterator,
		.staticInitializer = (intptr_t) clinit_arc_struct_IntIntMap$MapIterator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_struct_IntIntMap$MapIterator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_struct_IntIntMap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_struct_IntIntMap$MapIterator = registerClass(&class_arc_struct_IntIntMap$MapIterator);

}

