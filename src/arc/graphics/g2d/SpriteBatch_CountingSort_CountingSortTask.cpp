#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort.h"
#include "arc/struct/IntIntMap.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask.h"

extern "C" {

jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr;

void mark_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) object;
}

void clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(630);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(635);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_start = (frame[1].i);
	LINE_NUMBER(636);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_end = (frame[2].i);
	LINE_NUMBER(637);
	((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_id = (frame[3].i);
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask:run", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	frame[1].i = ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_id);
	frame[2].i = ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_start);
	frame[3].i = ((jint)((arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask *) NULL_CHECK((frame[0].o)))->F_end);
	LINE_NUMBER(643);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(644);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr;
	frame[5].o = sp[0].o;
	LINE_NUMBER(645);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(646);
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, (frame[6].o));
	LINE_NUMBER(647);
	frame[7].i = (jint(0));
	LINE_NUMBER(648);
	frame[8].i = (frame[2].i);
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_putMissing_int_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_IntIntMap_putMissing_int_int_R_int])(ctx, (frame[6].o), ((jint)ARRAY_ACCESS(jint, (frame[5].o), ((frame[8].i) * (jint(3))))), (frame[7].i));
	frame[9].i = temp0;
	LINE_NUMBER(650);
	ARRAY_ACCESS(jint, (frame[5].o), ((frame[8].i) * (jint(3)))) = (frame[9].i);
	LINE_NUMBER(651);
	if ((frame[9].i) != (frame[7].i)) goto label_14;
	}
	{
	LINE_NUMBER(652);
	if ((frame[7].i) < (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[4].o), (((frame[7].i) * (jint(3))) / (jint(2))));
	frame[4].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(655);
	sp[0].o = frame[4].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(657);
	sp[0].o = frame[4].o;
	jint temp0 = frame[9].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	}
label_18:;
	{
	LINE_NUMBER(648);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(660);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[4].o);
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask[] {
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
	(void *) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_run,
	(void *) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int,
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
	{ "run", "()V" },
	{ "set", "(III)V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "arr", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr, "[I", 8 },
	{ "start", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, F_start), "I", 0 },
	{ "end", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, F_end), "I", 0 },
	{ "id", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, F_id), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, 0, "()V", 0 },
	{ "set", (intptr_t) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int, VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int, "(III)V", 1 },
	{ "run", (intptr_t) M_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_run, VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_run, "()V", 1 },
};

Class class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteBatch$CountingSort,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask = registerClass(&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask);

}

