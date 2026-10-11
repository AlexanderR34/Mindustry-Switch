#include "arc/graphics/g2d/SpriteBatch_PopulateTask.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/SpriteBatch_PopulateTask.h"
#include "java/util/Arrays.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "arc/graphics/g2d/SpriteBatch_DrawRequest.h"
#include "java/util/concurrent/RecursiveAction.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks;
jobject SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src;
jobject SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest;
jobject SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs;

void mark_arc_graphics_g2d_SpriteBatch$PopulateTask(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_RecursiveAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_SpriteBatch$PopulateTask *) object;
}

void clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_RecursiveAction(ctx);
}

void init_arc_graphics_g2d_SpriteBatch$PopulateTask_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$PopulateTask:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(839);
	init_java_util_concurrent_RecursiveAction(ctx, (frame[0].o));
	LINE_NUMBER(840);
	((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from = (frame[1].i);
	LINE_NUMBER(841);
	((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to = (frame[2].i);
	LINE_NUMBER(842);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_SpriteBatch$PopulateTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$PopulateTask:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(844);
	init_java_util_concurrent_RecursiveAction(ctx, (frame[0].o));
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_SpriteBatch$PopulateTask_compute(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$PopulateTask:compute", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(849);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs;
	frame[1].o = sp[0].o;
	LINE_NUMBER(850);
	if ((((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to) - ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from)) <= (jint(1))) goto label_2;
	}
	{
	if ((((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to))) - ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from)))) <= (2048)) goto label_2;
	}
	{
	LINE_NUMBER(851);
	frame[2].i = ((((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to))) + ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from)))) >> (jint(1)));
	LINE_NUMBER(852);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_int_int_int_int_R_int(ctx, (frame[1].o), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(853);
	if ((frame[3].i) >= 0) goto label_6;
	}
	{
	frame[3].i = ((-(frame[3].i)) - (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(854);
	if ((frame[3].i) == ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from)) goto label_2;
	}
	{
	if ((frame[3].i) == ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to)) goto label_2;
	}
	{
	LINE_NUMBER(855);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$PopulateTask);
	init_arc_graphics_g2d_SpriteBatch$PopulateTask_int_int(ctx, sp[0].o, ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from), (frame[3].i));
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$PopulateTask);
	init_arc_graphics_g2d_SpriteBatch$PopulateTask_int_int(ctx, sp[1].o, (frame[3].i), ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to));
	SM_java_util_concurrent_ForkJoinTask_invokeAll_java_util_concurrent_ForkJoinTask_java_util_concurrent_ForkJoinTask(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(856);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(859);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src;
	frame[2].o = sp[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest;
	frame[3].o = sp[0].o;
	LINE_NUMBER(860);
	clinit_arc_graphics_g2d_SpriteBatch$PopulateTask(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks;
	frame[4].o = sp[0].o;
	LINE_NUMBER(861);
	frame[5].i = ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_from);
	}
label_12:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_g2d_SpriteBatch$PopulateTask *) NULL_CHECK((frame[0].o)))->F_to)) goto label_13;
	}
	{
	LINE_NUMBER(862);
	frame[6].i = ((frame[5].i) * (jint(3)));
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), ((frame[6].i) + (jint(1)))));
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), ((frame[6].i) + (jint(2)))));
	LINE_NUMBER(863);
	if ((frame[8].i) >= (10)) goto label_18;
	}
	{
	LINE_NUMBER(864);
	frame[9].i = ((frame[7].i) + (frame[8].i));
	LINE_NUMBER(865);
	frame[10].i = (frame[7].i);
	frame[11].i = ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)));
	}
label_22:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_23;
	}
	{
	LINE_NUMBER(866);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(865);
	INST_IINC(10, 1);
	INST_IINC(11, 1);
	goto label_22;
	}
label_23:;
	LINE_NUMBER(868);
	goto label_26;
label_18:;
	{
	LINE_NUMBER(869);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	sp[1].o = frame[3].o;
	jint temp1 = (jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[8].i), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[5].i)))));
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, temp2);
	}
label_26:;
	{
	LINE_NUMBER(861);
	INST_IINC(5, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(872);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch$PopulateTask[] {
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
	(void *) M_java_util_concurrent_ForkJoinTask_cancel_boolean_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCancelled_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isDone_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_get_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_setCompletion_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doExec_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_internalWait_long,
	(void *) M_java_util_concurrent_ForkJoinTask_externalAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_externalInterruptibleAwaitDone_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doJoin_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_doInvoke_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_recordExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_setExceptionalCompletion_java_lang_Throwable_R_int,
	(void *) M_java_util_concurrent_ForkJoinTask_internalPropagateException_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_clearExceptionalCompletion,
	(void *) M_java_util_concurrent_ForkJoinTask_getThrowableException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_reportException_int,
	(void *) M_java_util_concurrent_ForkJoinTask_fork_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_invoke_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedAbnormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_isCompletedNormally_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getException_R_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_completeExceptionally_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinTask_complete_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyComplete,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyJoin,
	(void *) M_java_util_concurrent_ForkJoinTask_quietlyInvoke,
	(void *) M_java_util_concurrent_ForkJoinTask_reinitialize,
	(void *) M_java_util_concurrent_ForkJoinTask_tryUnfork_R_boolean,
	(void *) M_java_util_concurrent_RecursiveAction_getRawResult_R_java_lang_Object,
	(void *) M_java_util_concurrent_RecursiveAction_setRawResult_java_lang_Object,
	(void *) M_java_util_concurrent_RecursiveAction_exec_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_getForkJoinTaskTag_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_setForkJoinTaskTag_short_R_short,
	(void *) M_java_util_concurrent_ForkJoinTask_compareAndSetForkJoinTaskTag_short_short_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinTask_writeObject_java_io_ObjectOutputStream,
	(void *) M_java_util_concurrent_ForkJoinTask_readObject_java_io_ObjectInputStream,
	(void *) M_arc_graphics_g2d_SpriteBatch$PopulateTask_compute,
	(void *) M_java_util_concurrent_RecursiveAction_getRawResult_R_java_lang_Void,
	(void *) M_java_util_concurrent_RecursiveAction_setRawResult_java_lang_Void,
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
	{ "cancel", "(Z)Z" },
	{ "isCancelled", "()Z" },
	{ "isDone", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "setCompletion", "(I)I" },
	{ "doExec", "()I" },
	{ "internalWait", "(J)V" },
	{ "externalAwaitDone", "()I" },
	{ "externalInterruptibleAwaitDone", "()I" },
	{ "doJoin", "()I" },
	{ "doInvoke", "()I" },
	{ "recordExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "setExceptionalCompletion", "(Ljava/lang/Throwable;)I" },
	{ "internalPropagateException", "(Ljava/lang/Throwable;)V" },
	{ "clearExceptionalCompletion", "()V" },
	{ "getThrowableException", "()Ljava/lang/Throwable;" },
	{ "reportException", "(I)V" },
	{ "fork", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "join", "()Ljava/lang/Object;" },
	{ "invoke", "()Ljava/lang/Object;" },
	{ "isCompletedAbnormally", "()Z" },
	{ "isCompletedNormally", "()Z" },
	{ "getException", "()Ljava/lang/Throwable;" },
	{ "completeExceptionally", "(Ljava/lang/Throwable;)V" },
	{ "complete", "(Ljava/lang/Object;)V" },
	{ "quietlyComplete", "()V" },
	{ "quietlyJoin", "()V" },
	{ "quietlyInvoke", "()V" },
	{ "reinitialize", "()V" },
	{ "tryUnfork", "()Z" },
	{ "getRawResult", "()Ljava/lang/Object;" },
	{ "setRawResult", "(Ljava/lang/Object;)V" },
	{ "exec", "()Z" },
	{ "getForkJoinTaskTag", "()S" },
	{ "setForkJoinTaskTag", "(S)S" },
	{ "compareAndSetForkJoinTaskTag", "(SS)Z" },
	{ "writeObject", "(Ljava/io/ObjectOutputStream;)V" },
	{ "readObject", "(Ljava/io/ObjectInputStream;)V" },
	{ "compute", "()V" },
	{ "getRawResult", "()Ljava/lang/Void;" },
	{ "setRawResult", "(Ljava/lang/Void;)V" },
};

static FieldMetadata fields[] {
	{ "from", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$PopulateTask, F_from), "I", 0 },
	{ "to", &class_int, offsetof(arc_graphics_g2d_SpriteBatch$PopulateTask, F_to), "I", 0 },
	{ "tasks", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$PopulateTask_tasks, "[I", 8 },
	{ "src", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$PopulateTask_src, "[Larc/graphics/g2d/SpriteBatch$DrawRequest;", 8 },
	{ "dest", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$DrawRequest, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$PopulateTask_dest, "[Larc/graphics/g2d/SpriteBatch$DrawRequest;", 8 },
	{ "locs", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$PopulateTask_locs, "[I", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$PopulateTask_int_int, 0, "(II)V", 0 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$PopulateTask, 0, "()V", 1 },
	{ "compute", (intptr_t) M_arc_graphics_g2d_SpriteBatch$PopulateTask_compute, VTABLE_arc_graphics_g2d_SpriteBatch$PopulateTask_compute, "()V", 4 },
};

Class class_arc_graphics_g2d_SpriteBatch$PopulateTask{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch$PopulateTask",
		.parentClass = (intptr_t) &class_java_util_concurrent_RecursiveAction,
		.size = sizeof(arc_graphics_g2d_SpriteBatch$PopulateTask),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch$PopulateTask,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$PopulateTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch$PopulateTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteBatch,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch$PopulateTask = registerClass(&class_arc_graphics_g2d_SpriteBatch$PopulateTask);

}

