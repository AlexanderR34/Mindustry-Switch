#include "java/util/concurrent/ForkJoinPool.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Random.h"
#include "java/util/concurrent/CountedCompleter.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/ForkJoinPool_1.h"
#include "java/util/ArrayList.h"
#include "java/util/concurrent/locks/LockSupport.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "java/util/Collection.h"
#include "java/util/concurrent/ForkJoinPool_WorkQueue.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedRunnableAction.h"
#include "java/util/function/Predicate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "java/util/concurrent/ForkJoinPool_InnocuousForkJoinWorkerThreadFactory.h"
#include "java/lang/Exception.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/lang/Object.h"
#include "java/util/Collections.h"
#include "java/lang/RuntimeException.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/concurrent/ForkJoinTask_RunnableExecuteAction.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/ForkJoinWorkerThread.h"
#include "java/lang/String.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedRunnable.h"
#include "java/util/concurrent/ForkJoinPool_ManagedBlocker.h"
#include "java/lang/RuntimePermission.h"
#include "java/lang/Math.h"
#include "java/lang/Runtime.h"
#include "java/util/concurrent/ForkJoinPool_ForkJoinWorkerThreadFactory.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/lang/Thread_State.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Thread_UncaughtExceptionHandler.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/RejectedExecutionException.h"
#include "java/util/concurrent/ForkJoinPool_DefaultForkJoinWorkerThreadFactory.h"
#include "java/util/concurrent/CompletableFuture_AsynchronousCompletionTask.h"
#include "java/util/concurrent/ForkJoinTask_AdaptedCallable.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jint SF_java_util_concurrent_ForkJoinPool_SWIDTH;
jint SF_java_util_concurrent_ForkJoinPool_SMASK;
jint SF_java_util_concurrent_ForkJoinPool_MAX_CAP;
jint SF_java_util_concurrent_ForkJoinPool_SQMASK;
jint SF_java_util_concurrent_ForkJoinPool_UNSIGNALLED;
jint SF_java_util_concurrent_ForkJoinPool_SS_SEQ;
jint SF_java_util_concurrent_ForkJoinPool_QLOCK;
jint SF_java_util_concurrent_ForkJoinPool_OWNED;
jint SF_java_util_concurrent_ForkJoinPool_FIFO;
jint SF_java_util_concurrent_ForkJoinPool_SHUTDOWN;
jint SF_java_util_concurrent_ForkJoinPool_TERMINATED;
jint SF_java_util_concurrent_ForkJoinPool_STOP;
jint SF_java_util_concurrent_ForkJoinPool_QUIET;
jint SF_java_util_concurrent_ForkJoinPool_DORMANT;
jint SF_java_util_concurrent_ForkJoinPool_POLL_LIMIT;
jobject SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory;
jobject SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission;
jobject SF_java_util_concurrent_ForkJoinPool_common;
jint SF_java_util_concurrent_ForkJoinPool_COMMON_PARALLELISM;
jint SF_java_util_concurrent_ForkJoinPool_COMMON_MAX_SPARES;
jint SF_java_util_concurrent_ForkJoinPool_poolNumberSequence;
jlong SF_java_util_concurrent_ForkJoinPool_DEFAULT_KEEPALIVE;
jlong SF_java_util_concurrent_ForkJoinPool_TIMEOUT_SLOP;
jint SF_java_util_concurrent_ForkJoinPool_DEFAULT_COMMON_MAX_SPARES;
jint SF_java_util_concurrent_ForkJoinPool_SEED_INCREMENT;
jlong SF_java_util_concurrent_ForkJoinPool_SP_MASK;
jlong SF_java_util_concurrent_ForkJoinPool_UC_MASK;
jint SF_java_util_concurrent_ForkJoinPool_RC_SHIFT;
jlong SF_java_util_concurrent_ForkJoinPool_RC_UNIT;
jlong SF_java_util_concurrent_ForkJoinPool_RC_MASK;
jint SF_java_util_concurrent_ForkJoinPool_TC_SHIFT;
jlong SF_java_util_concurrent_ForkJoinPool_TC_UNIT;
jlong SF_java_util_concurrent_ForkJoinPool_TC_MASK;
jlong SF_java_util_concurrent_ForkJoinPool_ADD_WORKER;

void mark_java_util_concurrent_ForkJoinPool(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory, mark, depth + 1);
		if (SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission, mark, depth + 1);
		if (SF_java_util_concurrent_ForkJoinPool_common)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ForkJoinPool_common)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ForkJoinPool_common, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_concurrent_AbstractExecutorService(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ForkJoinPool *) object;
	if (self->F_workQueues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workQueues)->clazz)->markFunction)((jobject) self->F_workQueues, mark, depth + 1);
	if (self->F_workerNamePrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_workerNamePrefix)->clazz)->markFunction)((jobject) self->F_workerNamePrefix, mark, depth + 1);
	if (self->F_factory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_factory)->clazz)->markFunction)((jobject) self->F_factory, mark, depth + 1);
	if (self->F_ueh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ueh)->clazz)->markFunction)((jobject) self->F_ueh, mark, depth + 1);
	if (self->F_saturate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_saturate)->clazz)->markFunction)((jobject) self->F_saturate, mark, depth + 1);
}

void SM_java_util_concurrent_ForkJoinPool_checkPermission(jcontext ctx) {
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:checkPermission", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	LINE_NUMBER(614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ForkJoinPool_nextPoolId_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:nextPoolId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_util_concurrent_ForkJoinPool);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(1179);
	jint temp0 = (clinit_java_util_concurrent_ForkJoinPool(ctx), (jint)SF_java_util_concurrent_ForkJoinPool_poolNumberSequence) + (jint(1));
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_poolNumberSequence = temp0;
	popStackFrame(ctx, (jobject) &class_java_util_concurrent_ForkJoinPool);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_createWorker_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:createWorker", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1278);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_factory;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1279);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(1280);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1282);
	if ((frame[1].o) == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, INDEX_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(1283);
	((func_java_util_concurrent_ForkJoinWorkerThread_start) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_start])(ctx, (frame[3].o));
	LINE_NUMBER(1284);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	LINE_NUMBER(1288);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1286);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1287);
	frame[2].o = (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(1289);
	((func_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(1290);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_tryAddWorker_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:tryAddWorker", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
label_0:;
	{
	LINE_NUMBER(1303);
	frame[3].l = (((jlong(-281474976710656ll)) & ((frame[1].l) + (jlong(281474976710656ll)))) | ((jlong(281470681743360ll)) & ((frame[1].l) + (jlong(4294967296ll)))));
	LINE_NUMBER(1305);
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[1].l))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1306);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[3].l);
	LINE_NUMBER(1307);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_createWorker_R_boolean(ctx, (frame[0].o));
	LINE_NUMBER(1308);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1310);
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl;
	frame[1].l = temp0;
	if ((longCompare((temp0 & (jlong(140737488355328ll))), (jlong(0)))) == 0) goto label_6;
	}
	{
	if ((jint((frame[1].l))) == 0) goto label_0;
	}
label_6:;
	LINE_NUMBER(1311);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:registerWorker", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1322);
	((func_java_util_concurrent_ForkJoinWorkerThread_setDaemon_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_setDaemon_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(1323);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ueh;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1324);
	((func_java_util_concurrent_ForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_setUncaughtExceptionHandler_java_lang_Thread$UncaughtExceptionHandler])(ctx, (frame[1].o), (frame[2].o));
	}
label_9:;
	{
	LINE_NUMBER(1325);
	clinit_java_util_concurrent_ForkJoinPool$WorkQueue(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinPool$WorkQueue);
	init_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinPool_java_util_concurrent_ForkJoinWorkerThread(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1326);
	frame[4].i = (jint(0));
	LINE_NUMBER(1327);
	frame[5].i = (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(65536)));
	LINE_NUMBER(1328);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workerNamePrefix;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1329);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1330);
	sp[0].o = frame[6].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1331);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1332);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_indexSeed) + (jint(-1640531527));
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_indexSeed = temp0;
	frame[10].i = temp0;
	LINE_NUMBER(1333);
	if ((frame[8].o) == nullptr) goto label_19;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[8].o)))->length;
	frame[9].i = temp0;
	if (temp0 <= (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(1334);
	frame[11].i = ((frame[9].i) - (jint(1)));
	LINE_NUMBER(1335);
	frame[4].i = ((frame[10].i) & (frame[11].i));
	LINE_NUMBER(1336);
	frame[12].i = ((frame[11].i) & (((frame[10].i) << (jint(1))) | (jint(1))));
	LINE_NUMBER(1337);
	frame[13].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[9].i)) >> (jint(1))));
	}
label_25:;
	{
	LINE_NUMBER(1339);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[12].i));
	frame[14].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_phase) != (jint(1073741824))) goto label_28;
	}
	LINE_NUMBER(1340);
	goto label_27;
label_28:;
	{
	LINE_NUMBER(1341);
	INST_IINC(13, -1);
	if ((frame[13].i) != 0) goto label_30;
	}
	{
	LINE_NUMBER(1342);
	frame[12].i = ((frame[9].i) | (jint(1)));
	LINE_NUMBER(1343);
	goto label_27;
	}
label_30:;
	{
	LINE_NUMBER(1346);
	frame[12].i = (((frame[12].i) + (jint(2))) & (frame[11].i));
	LINE_NUMBER(1347);
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(1349);
	frame[13].i = (((frame[12].i) | (frame[5].i)) | ((frame[10].i) & (jint(1073610752))));
	LINE_NUMBER(1350);
	sp[0].o = frame[3].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[13].i;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[1].o))->F_id = temp0;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_phase = temp0;
	LINE_NUMBER(1352);
	if ((frame[12].i) >= (frame[9].i)) goto label_36;
	}
	{
	LINE_NUMBER(1353);
	ARRAY_ACCESS(jobject, (frame[8].o), (frame[12].i)) = (frame[3].o);
	goto label_19;
	}
label_36:;
	{
	LINE_NUMBER(1355);
	frame[14].i = ((frame[9].i) << (jint(1)));
	LINE_NUMBER(1356);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinPool$WorkQueue, (frame[14].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(1357);
	ARRAY_ACCESS(jobject, (frame[15].o), (frame[12].i)) = (frame[3].o);
	LINE_NUMBER(1358);
	frame[16].i = ((frame[14].i) - (jint(1)));
	LINE_NUMBER(1359);
	frame[17].i = (jint(0));
	}
label_42:;
	{
	if ((frame[17].i) >= (frame[9].i)) goto label_43;
	}
	{
	LINE_NUMBER(1361);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[17].i));
	frame[18].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	LINE_NUMBER(1362);
	ARRAY_ACCESS(jobject, (frame[15].o), ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[18].o)))->F_id) & (frame[16].i)) & (126))) = (frame[18].o);
	}
label_46:;
	{
	LINE_NUMBER(1363);
	INST_IINC(17, 1);
	if ((frame[17].i) < (frame[9].i)) goto label_48;
	}
	LINE_NUMBER(1364);
	goto label_43;
label_48:;
	{
	LINE_NUMBER(1365);
	ARRAY_ACCESS(jobject, (frame[15].o), (frame[17].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[17].i)));
	LINE_NUMBER(1359);
	INST_IINC(17, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(1367);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues = (jref) (frame[15].o);
	}
label_19:;
	{
	LINE_NUMBER(1370);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_51;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[19].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(19);
	INST_ATHROW();
	label_51:;
	{
	LINE_NUMBER(1371);
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((func_java_util_concurrent_ForkJoinWorkerThread_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	{
	LINE_NUMBER(1373);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:deregisterWorker", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1386);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1387);
	frame[4].i = (jint(0));
	LINE_NUMBER(1388);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[1].o)))->F_workQueue;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1389);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workerNamePrefix;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1390);
	frame[6].l = ((jlong(((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_nsteals))) & (jlong(4294967295ll)));
	LINE_NUMBER(1391);
	frame[8].i = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_id) & (jint(65535)));
	LINE_NUMBER(1392);
	if ((frame[5].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1394);
	sp[0].o = frame[5].o;
	frame[10].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1395);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[9].o)))->length) <= (frame[8].i)) goto label_17;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[8].i))) != (frame[3].o)) goto label_17;
	}
	{
	LINE_NUMBER(1397);
	ARRAY_ACCESS(jobject, (frame[9].o), (frame[8].i)) = (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(1398);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_stealCount = (((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_stealCount) + (frame[6].l));
	LINE_NUMBER(1399);
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	goto label_14;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_14:;
	{
	LINE_NUMBER(1401);
	frame[4].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_phase);
	}
label_9:;
	{
	LINE_NUMBER(1403);
	if ((frame[4].i) == (jint(1073741824))) goto label_20;
	}
	{
	LINE_NUMBER(1404);
	frame[5].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(1405);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = ((((jlong(-281474976710656ll)) & ((frame[5].l) - (jlong(281474976710656ll)))) | ((jlong(281470681743360ll)) & ((frame[5].l) - (jlong(4294967296ll))))) | ((jlong(4294967295ll)) & (frame[5].l)));
	}
label_20:;
	{
	LINE_NUMBER(1413);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1414);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll])(ctx, (frame[3].o));
	}
label_23:;
	{
	LINE_NUMBER(1416);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean(ctx, (frame[0].o), (jint(0)), (jint(0)));
	if (temp0 != 0) goto label_25;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_25;
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_array;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(1418);
	((func_java_util_concurrent_ForkJoinPool_signalWork) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_signalWork])(ctx, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(1420);
	if ((frame[2].o) != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(1421);
	SM_java_util_concurrent_ForkJoinTask_helpExpungeStaleExceptions(ctx);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(1423);
	SM_java_util_concurrent_ForkJoinTask_rethrow_java_lang_Throwable(ctx, (frame[2].o));
	}
label_29:;
	LINE_NUMBER(1424);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_signalWork(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:signalWork", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(1432);
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl;
	frame[1].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) < 0) goto label_2;
	}
	LINE_NUMBER(1433);
	goto label_4;
label_2:;
	{
	LINE_NUMBER(1434);
	jint temp0 = jint((frame[1].l));
	frame[3].i = temp0;
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1435);
	if ((longCompare(((frame[1].l) & (jlong(140737488355328ll))), (jlong(0)))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1436);
	M_java_util_concurrent_ForkJoinPool_tryAddWorker_long(ctx, (frame[0].o), (frame[1].l));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(1439);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[4].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_10;
	}
	LINE_NUMBER(1440);
	goto label_4;
label_10:;
	{
	LINE_NUMBER(1441);
	jint temp0 = ((jarray) nullCheck(ctx, (frame[4].o)))->length;
	jint temp1 = (frame[3].i) & (jint(65535));
	frame[5].i = temp1;
	if (temp0 > temp1) goto label_13;
	}
	LINE_NUMBER(1442);
	goto label_4;
label_13:;
	{
	LINE_NUMBER(1443);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i));
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_16;
	}
	LINE_NUMBER(1444);
	goto label_4;
label_16:;
	{
	LINE_NUMBER(1446);
	frame[7].i = ((frame[3].i) & (jint(2147483647)));
	LINE_NUMBER(1447);
	frame[8].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase);
	LINE_NUMBER(1448);
	frame[9].l = (((jlong(((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_stackPred))) & (jlong(4294967295ll))) | ((jlong(-4294967296ll)) & ((frame[1].l) + (jlong(281474976710656ll)))));
	LINE_NUMBER(1449);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_owner;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1450);
	if ((frame[3].i) != (frame[8].i)) goto label_22;
	}
	{
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[1].l))) != 0) goto label_22;
	}
	{
	LINE_NUMBER(1451);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[9].l);
	LINE_NUMBER(1452);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase = (frame[7].i);
	LINE_NUMBER(1453);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_source) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(1454);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[11].o));
	goto label_4;
	}
label_22:;
	LINE_NUMBER(1458);
	goto label_0;
label_4:;
	LINE_NUMBER(1459);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:tryCompensate", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1478);
	frame[5].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(1479);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1480);
	jint temp0 = jshort((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32))))));
	frame[2].i = temp0;
	if (temp0 < 0) goto label_4;
	}
	{
	LINE_NUMBER(1481);
	if ((frame[7].o) == nullptr) goto label_6;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[7].o)))->length;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_6;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_8;
label_6:;
	{
	LINE_NUMBER(1482);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1483);
	jint temp0 = jint((frame[5].l));
	frame[4].i = temp0;
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1484);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((frame[4].i) & ((frame[3].i) - (jint(1))))));
	LINE_NUMBER(1485);
	frame[9].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_phase);
	LINE_NUMBER(1486);
	jlong temp0 = jlong(-4294967296ll);
	sp[0].l = temp0;
	sp += 1;
	if ((frame[9].i) >= 0) goto label_14;
	}
	{
	jlong temp0 = (frame[5].l) + (jlong(281474976710656ll));
	sp[0].l = temp0;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_LLOAD(5);
label_15:;
	{
	sp -= 2;
	frame[10].l = (sp[0].l & sp[1].l);
	LINE_NUMBER(1487);
	frame[12].i = ((frame[4].i) & (jint(2147483647)));
	LINE_NUMBER(1488);
	if ((frame[8].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1489);
	frame[13].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_phase);
	LINE_NUMBER(1490);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_owner;
	frame[14].o = sp[0].o;
	LINE_NUMBER(1491);
	frame[15].l = (((jlong(((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_stackPred))) & (jlong(4294967295ll))) | (frame[10].l));
	LINE_NUMBER(1492);
	if ((frame[13].i) != (frame[4].i)) goto label_18;
	}
	{
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[5].l))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1493);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[15].l);
	LINE_NUMBER(1494);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_phase = (frame[12].i);
	LINE_NUMBER(1495);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_source) >= 0) goto label_26;
	}
	{
	LINE_NUMBER(1496);
	SM_java_util_concurrent_locks_LockSupport_unpark_java_lang_Thread(ctx, (frame[14].o));
	}
label_26:;
	{
	LINE_NUMBER(1497);
	if ((frame[9].i) >= 0) goto label_28;
	}
	INST_ICONST(-1);
	goto label_29;
label_28:;
	INST_ICONST(1);
label_29:;
	popStackFrame(ctx, self);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(1500);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(1502);
	if (((jint(((frame[5].l) >> (48)))) - (jshort((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_bounds) & (jint(65535)))))) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(1504);
	frame[8].l = (((jlong(-281474976710656ll)) & ((frame[5].l) - (jlong(281474976710656ll)))) | ((jlong(281474976710655ll)) & (frame[5].l)));
	LINE_NUMBER(1505);
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[5].l))) == 0) goto label_33;
	}
	{
	LINE_NUMBER(1506);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_33:;
	{
	LINE_NUMBER(1507);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[8].l);
	LINE_NUMBER(1508);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_30:;
	{
	LINE_NUMBER(1511);
	frame[8].i = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode);
	frame[9].i = ((frame[8].i) & (jint(65535)));
	frame[10].i = ((frame[9].i) + (frame[2].i));
	frame[11].i = (jint(0));
	LINE_NUMBER(1512);
	frame[12].i = (jint(0));
	LINE_NUMBER(1513);
	frame[13].i = (jint(1));
	}
label_41:;
	{
	if ((frame[13].i) >= (frame[3].i)) goto label_42;
	}
	{
	LINE_NUMBER(1515);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[13].i));
	frame[14].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	LINE_NUMBER(1516);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_source) != 0) goto label_47;
	}
	{
	LINE_NUMBER(1517);
	frame[12].i = (jint(1));
	LINE_NUMBER(1518);
	goto label_42;
	}
label_47:;
	{
	LINE_NUMBER(1521);
	INST_IINC(10, -1);
	LINE_NUMBER(1522);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_owner;
	frame[15].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_45;
	}
	{
	sp[0].o = frame[15].o;
	LINE_NUMBER(1523);
	sp[0].o = (jobject)((func_java_lang_Thread_getState_R_java_lang_Thread$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getState_R_java_lang_Thread$State])(ctx, sp[0].o);
	frame[16].o = sp[0].o;
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_BLOCKED;
	if (sp[0].o == sp[1].o) goto label_54;
	}
	{
	sp[0].o = frame[16].o;
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_WAITING;
	if (sp[0].o != sp[1].o) goto label_45;
	}
label_54:;
	LINE_NUMBER(1525);
	INST_IINC(11, 1);
label_45:;
	{
	LINE_NUMBER(1513);
	INST_IINC(13, 2);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(1529);
	if ((frame[12].i) != 0) goto label_55;
	}
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_55;
	{
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[5].l))) == 0) goto label_56;
	}
label_55:;
	{
	LINE_NUMBER(1530);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(1531);
	if (((frame[2].i) + (frame[9].i)) >= (32767)) goto label_57;
	}
	{
	if ((frame[2].i) < (bit_cast<jint>(bit_cast<uint32_t>(((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_bounds)) >> (16)))) goto label_4;
	}
label_57:;
	{
	LINE_NUMBER(1533);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_saturate;
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_util_function_Predicate_test_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_function_Predicate, INDEX_java_util_function_Predicate_test_java_lang_Object_R_boolean, (frame[13].o)))(ctx, (frame[13].o), (frame[0].o));
	if (temp0 == 0) goto label_59;
	}
	{
	LINE_NUMBER(1534);
	popStackFrame(ctx, self);
	return (jint(-1));
	}
label_59:;
	{
	LINE_NUMBER(1535);
	if ((frame[11].i) >= (frame[9].i)) goto label_61;
	}
	{
	LINE_NUMBER(1536);
	SM_java_lang_Thread_yield(ctx);
	LINE_NUMBER(1537);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_61:;
	{
	LINE_NUMBER(1540);
	clinit_java_util_concurrent_RejectedExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_RejectedExecutionException);
	init_java_util_concurrent_RejectedExecutionException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Thread limit exceeded replacing blocked worker"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(1546);
	frame[8].l = ((((frame[5].l) + (jlong(4294967296ll))) & (jlong(281470681743360ll))) | ((frame[5].l) & (jlong(-281470681743361ll))));
	LINE_NUMBER(1547);
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[5].l))) == 0) goto label_65;
	}
	{
	LINE_NUMBER(1548);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_65:;
	{
	LINE_NUMBER(1549);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[8].l);
	LINE_NUMBER(1550);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_createWorker_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_68;
	}
	INST_ICONST(1);
	goto label_69;
label_68:;
	INST_ICONST(0);
label_69:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:runWorker", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1559);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask])(ctx, (frame[1].o));
	LINE_NUMBER(1560);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_id;
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 ^ temp1);
	LINE_NUMBER(1561);
	if ((frame[3].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1562);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1563);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1565);
	frame[5].i = (jint(0));
	LINE_NUMBER(1566);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[7].i = (frame[6].i);
	frame[8].i = ((frame[6].i) - (jint(1)));
	}
label_12:;
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_13;
	{
	LINE_NUMBER(1568);
	jint temp0 = (frame[3].i) & (frame[8].i);
	frame[10].i = temp0;
	if (temp0 < 0) goto label_16;
	}
	{
	if ((frame[10].i) >= (frame[6].i)) goto label_16;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[10].i));
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_base;
	frame[11].i = temp0;
	if ((temp0 - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_top)) >= 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_array;
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[13].o)))->length;
	frame[12].i = temp0;
	if (temp0 <= 0) goto label_16;
	}
	{
	LINE_NUMBER(1571);
	frame[14].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_id);
	LINE_NUMBER(1572);
	frame[15].i = (((frame[12].i) - (jint(1))) & (frame[11].i));
	LINE_NUMBER(1573);
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(1574);
	if ((frame[16].o) == nullptr) goto label_25;
	}
	{
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_base)) goto label_25;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i))) != (frame[16].o)) goto label_25;
	}
	{
	LINE_NUMBER(1575);
	ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)) = (jobject(nullptr));
	LINE_NUMBER(1576);
	sp[0].o = frame[9].o;
	jint temp0 = frame[11].i;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_base = temp0;
	if ((temp0 - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_top)) >= 0) goto label_28;
	}
	{
	if ((frame[14].i) == (frame[4].i)) goto label_28;
	}
	{
	LINE_NUMBER(1577);
	((func_java_util_concurrent_ForkJoinPool_signalWork) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_signalWork])(ctx, (frame[0].o));
	}
label_28:;
	{
	LINE_NUMBER(1578);
	sp[0].o = frame[1].o;
	jint temp0 = frame[14].i;
	frame[4].i = temp0;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_source = temp0;
	LINE_NUMBER(1579);
	jint temp3 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[16].o));
	LINE_NUMBER(1580);
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_id) & (jint(65536))) == 0) goto label_32;
	}
	{
	LINE_NUMBER(1581);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int])(ctx, (frame[1].o), (1024));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(1583);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int])(ctx, (frame[1].o), (1024));
	}
label_34:;
	{
	LINE_NUMBER(1584);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_owner;
	frame[17].o = sp[0].o;
	LINE_NUMBER(1585);
	sp[0].o = frame[1].o;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_nsteals = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_nsteals) + (jint(1)));
	LINE_NUMBER(1586);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (jint(0));
	LINE_NUMBER(1587);
	if ((frame[17].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(1588);
	((func_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_afterTopLevelExec])(ctx, (frame[17].o));
	}
label_25:;
	{
	LINE_NUMBER(1590);
	frame[5].i = (jint(1));
	LINE_NUMBER(1591);
	goto label_40;
	}
label_16:;
	{
	LINE_NUMBER(1592);
	if ((frame[5].i) == 0) goto label_41;
	}
	LINE_NUMBER(1593);
	goto label_13;
label_41:;
	LINE_NUMBER(1595);
	INST_IINC(3, 1);
label_40:;
	{
	LINE_NUMBER(1566);
	INST_IINC(7, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1598);
	if ((frame[5].i) == 0) goto label_43;
	}
	{
	LINE_NUMBER(1599);
	frame[3].i = ((frame[3].i) ^ ((frame[3].i) << (13)));
	frame[3].i = ((frame[3].i) ^ (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (17))));
	frame[3].i = ((frame[3].i) ^ ((frame[3].i) << (jint(5))));
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(1603);
	frame[4].i = (jint(0));
	LINE_NUMBER(1604);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_phase;
	frame[6].i = temp0;
	if (temp0 < 0) goto label_48;
	}
	{
	LINE_NUMBER(1605);
	sp[0].o = frame[1].o;
	jint temp0 = ((frame[6].i) + (jint(65536))) | (bit_cast<jint>(0x80000000));
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_phase = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(1607);
	sp[0].o = frame[1].o;
	jlong temp3 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl;
	frame[8].l = temp3;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_stackPred = (jint(temp3));
	LINE_NUMBER(1608);
	frame[10].l = ((((frame[8].l) - (jlong(281474976710656ll))) & (jlong(-4294967296ll))) | ((jlong(4294967295ll)) & (jlong((frame[7].i)))));
	LINE_NUMBER(1609);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[10].l);
	LINE_NUMBER(1610);
	goto label_45;
	}
label_48:;
	{
	LINE_NUMBER(1612);
	frame[7].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_stackPred);
	LINE_NUMBER(1613);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (jint(-1073741824));
	LINE_NUMBER(1614);
	frame[8].i = (jint(0));
	}
label_57:;
	{
	LINE_NUMBER(1616);
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_phase) < 0) goto label_58;
	}
	{
	LINE_NUMBER(1617);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (jint(0));
	LINE_NUMBER(1618);
	goto label_45;
	}
label_58:;
	{
	LINE_NUMBER(1620);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[9].i = temp0;
	if (temp0 >= 0) goto label_62;
	}
	LINE_NUMBER(1621);
	popStackFrame(ctx, self);
	INST_RETURN();
label_62:;
	{
	LINE_NUMBER(1622);
	jint temp0 = (frame[9].i) & (jint(65535));
	jlong temp1 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl;
	frame[11].l = temp1;
	jint temp4 = temp0 + (jint((temp1 >> (48))));
	frame[10].i = temp4;
	if (temp4 > 0) goto label_66;
	}
	{
	if (((frame[9].i) & (jint(262144))) == 0) goto label_66;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	LINE_NUMBER(1625);
	jint temp2 = (jint)M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_66;
	}
	LINE_NUMBER(1626);
	popStackFrame(ctx, self);
	INST_RETURN();
label_66:;
	{
	LINE_NUMBER(1627);
	INST_IINC(8, 1);
	if (((frame[8].i) & (jint(1))) != 0) goto label_69;
	}
	{
	LINE_NUMBER(1628);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	goto label_71;
	}
label_69:;
	{
	LINE_NUMBER(1629);
	if ((frame[10].i) > 0) goto label_72;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_72;
	{
	if ((frame[6].i) != (jint((frame[11].l)))) goto label_72;
	}
	{
	LINE_NUMBER(1630);
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_keepAlive;
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[13].l = (temp0 + temp1);
	LINE_NUMBER(1631);
	SM_java_util_concurrent_locks_LockSupport_parkUntil_java_lang_Object_long(ctx, (frame[0].o), (frame[13].l));
	LINE_NUMBER(1632);
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[11].l))) != 0) goto label_76;
	}
	{
	jlong temp0 = frame[13].l;
	LINE_NUMBER(1633);
	jlong temp1 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - temp1), (jlong(20ll)))) > 0) goto label_76;
	}
	{
	LINE_NUMBER(1634);
	frame[15].l = (((jlong(-4294967296ll)) & ((frame[11].l) - (jlong(4294967296ll)))) | ((jlong(4294967295ll)) & (jlong((frame[7].i)))));
	LINE_NUMBER(1636);
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[11].l))) != 0) goto label_76;
	}
	{
	LINE_NUMBER(1637);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[15].l);
	LINE_NUMBER(1638);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_phase = (jint(1073741824));
	LINE_NUMBER(1639);
	popStackFrame(ctx, self);
	return;
	}
label_76:;
	LINE_NUMBER(1642);
	goto label_71;
label_72:;
	{
	LINE_NUMBER(1644);
	SM_java_util_concurrent_locks_LockSupport_park_java_lang_Object(ctx, (frame[0].o));
	}
label_71:;
	LINE_NUMBER(1645);
	goto label_57;
label_45:;
	LINE_NUMBER(1648);
	goto label_5;
label_7:;
	LINE_NUMBER(1649);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:awaitJoin", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(1663);
	frame[5].i = (jint(0));
	LINE_NUMBER(1664);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_2;
	{
	if ((isInstance(ctx, (frame[2].o), &class_java_util_concurrent_CountedCompleter)) == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = checkCast(ctx, &class_java_util_concurrent_CountedCompleter, (frame[2].o));
	jint temp0 = jint(0);
	LINE_NUMBER(1666);
	jint temp1 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	frame[5].i = temp1;
	if (temp1 < 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1667);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryRemoveAndExec_java_util_concurrent_ForkJoinTask])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1668);
	frame[6].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source);
	frame[7].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_id);
	LINE_NUMBER(1669);
	frame[5].i = ((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[2].o)))->F_status);
	}
label_8:;
	{
	LINE_NUMBER(1670);
	if ((frame[5].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(1672);
	frame[9].i = (jint(0));
	LINE_NUMBER(1673);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[10].i = (temp0 | (jint(1)));
	LINE_NUMBER(1674);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1675);
	frame[11].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[12].i = ((frame[11].i) - (jint(1)));
	frame[13].i = (-(frame[11].i));
	}
label_17:;
	{
	if ((frame[13].i) >= (frame[11].i)) goto label_13;
	}
	{
	LINE_NUMBER(1677);
	jint temp0 = ((frame[10].i) + (frame[13].i)) & (frame[12].i);
	frame[15].i = temp0;
	if (temp0 < 0) goto label_20;
	}
	{
	if ((frame[15].i) >= (frame[11].i)) goto label_20;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[15].i));
	frame[14].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_source) != (frame[7].i)) goto label_20;
	}
	{
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_base;
	frame[16].i = temp0;
	if ((temp0 - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_top)) >= 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_array;
	frame[18].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[18].o)))->length;
	frame[17].i = temp0;
	if (temp0 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(1681);
	frame[19].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_id);
	LINE_NUMBER(1682);
	frame[20].i = (((frame[17].i) - (jint(1))) & (frame[16].i));
	LINE_NUMBER(1683);
	frame[21].o = ((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (frame[20].i)));
	LINE_NUMBER(1684);
	if ((frame[21].o) == nullptr) goto label_29;
	}
	{
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_base)) goto label_29;
	}
	{
	if ((frame[7].i) != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_source)) goto label_29;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (frame[20].i))) != (frame[21].o)) goto label_29;
	}
	{
	LINE_NUMBER(1685);
	ARRAY_ACCESS(jobject, (frame[18].o), (frame[20].i)) = (jobject(nullptr));
	LINE_NUMBER(1686);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[14].o)))->F_base = (frame[16].i);
	LINE_NUMBER(1687);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (frame[19].i);
	LINE_NUMBER(1688);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[21].o));
	LINE_NUMBER(1689);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (frame[6].i);
	}
label_29:;
	{
	LINE_NUMBER(1691);
	frame[9].i = (jint(1));
	LINE_NUMBER(1692);
	goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(1675);
	INST_IINC(13, 2);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(1696);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[2].o)))->F_status;
	frame[5].i = temp0;
	if (temp0 >= 0) goto label_36;
	}
	LINE_NUMBER(1697);
	goto label_2;
label_36:;
	{
	LINE_NUMBER(1698);
	if ((frame[9].i) != 0) goto label_38;
	}
	{
	LINE_NUMBER(1700);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_40;
	}
	{
	LINE_NUMBER(1701);
	frame[11].l = (jlong(0));
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(1702);
	jlong temp0 = frame[3].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	jlong temp2 = temp0 - temp1;
	frame[13].l = temp2;
	if ((longCompare(temp2, (jlong(0)))) > 0) goto label_45;
	}
	LINE_NUMBER(1703);
	goto label_2;
label_45:;
	{
	LINE_NUMBER(1704);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, sp[0].o, (frame[13].l));
	frame[11].l = temp0;
	if ((longCompare(temp0, (jlong(0)))) > 0) goto label_43;
	}
	{
	LINE_NUMBER(1705);
	frame[11].l = (jlong(1));
	}
label_43:;
	{
	LINE_NUMBER(1706);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[15].i = temp0;
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(1707);
	((func_java_util_concurrent_ForkJoinTask_internalWait_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_internalWait_long])(ctx, (frame[2].o), (frame[11].l));
	LINE_NUMBER(1708);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl;
	sp[1].l = temp0;
	sp += 2;
	if ((frame[15].i) <= 0) goto label_53;
	}
	(sp++)->l = jlong(281474976710656ll);
	goto label_54;
label_53:;
	INST_LCONST(0);
label_54:;
	INST_LADD();
	sp -= 2;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = sp[1].l;
label_50:;
	{
	LINE_NUMBER(1711);
	frame[5].i = ((jint)((java_util_concurrent_ForkJoinTask *) NULL_CHECK((frame[2].o)))->F_status);
	}
label_38:;
	LINE_NUMBER(1713);
	goto label_8;
label_2:;
	{
	LINE_NUMBER(1715);
	popStackFrame(ctx, self);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:helpQuiescePool", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1724);
	frame[2].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source);
	frame[3].i = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_id) & (jint(65536)));
	LINE_NUMBER(1725);
	frame[4].i = (frame[2].i);
	frame[5].i = (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(1727);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1728);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPollAndExec_int])(ctx, (frame[1].o), (jint(0)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1730);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localPopAndExec_int])(ctx, (frame[1].o), (jint(0)));
	}
label_7:;
	{
	LINE_NUMBER(1731);
	if ((frame[5].i) != (jint(-1))) goto label_8;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_phase) < 0) goto label_8;
	}
	{
	LINE_NUMBER(1732);
	frame[5].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(1733);
	frame[7].i = (jint(1));
	frame[8].i = (jint(1));
	LINE_NUMBER(1734);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[9].i = temp0;
	LINE_NUMBER(1735);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1736);
	frame[10].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[11].i = (frame[10].i);
	frame[12].i = ((frame[10].i) - (jint(1)));
	}
label_18:;
	INST_ILOAD(11);
	if ((--sp)->i <= 0) goto label_14;
	{
	LINE_NUMBER(1738);
	jint temp0 = ((frame[9].i) - (frame[11].i)) & (frame[12].i);
	frame[14].i = temp0;
	if (temp0 < 0) goto label_21;
	}
	{
	if ((frame[14].i) >= (frame[10].i)) goto label_21;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[14].i));
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(1739);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_base;
	frame[15].i = temp0;
	if ((temp0 - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_top)) >= 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_array;
	frame[17].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[17].o)))->length;
	frame[16].i = temp0;
	if (temp0 <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1741);
	frame[18].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_id);
	LINE_NUMBER(1742);
	if ((frame[5].i) != 0) goto label_30;
	}
	{
	LINE_NUMBER(1743);
	frame[5].i = (jint(1));
	LINE_NUMBER(1744);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = (((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl) + (jlong(281474976710656ll)));
	}
label_30:;
	{
	LINE_NUMBER(1747);
	frame[19].i = (((frame[16].i) - (jint(1))) & (frame[15].i));
	LINE_NUMBER(1748);
	frame[20].o = ((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (frame[19].i)));
	LINE_NUMBER(1749);
	if ((frame[20].o) == nullptr) goto label_35;
	}
	{
	jint temp0 = frame[15].i;
	INST_IINC(15, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_base)) goto label_35;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (frame[19].i))) != (frame[20].o)) goto label_35;
	}
	{
	LINE_NUMBER(1750);
	ARRAY_ACCESS(jobject, (frame[17].o), (frame[19].i)) = (jobject(nullptr));
	LINE_NUMBER(1751);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_base = (frame[15].i);
	LINE_NUMBER(1752);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_id;
	frame[4].i = temp0;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_source = temp0;
	LINE_NUMBER(1753);
	jint temp3 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[20].o));
	LINE_NUMBER(1754);
	sp[0].o = frame[1].o;
	jint temp4 = frame[2].i;
	frame[4].i = temp4;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_source = temp4;
	}
label_35:;
	{
	LINE_NUMBER(1756);
	jint temp0 = jint(0);
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(1757);
	goto label_14;
	}
label_25:;
	{
	LINE_NUMBER(1759);
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[13].o)))->F_source) & (jint(1073741824))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(1760);
	frame[7].i = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(1736);
	INST_IINC(11, -1);
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(1764);
	if ((frame[7].i) == 0) goto label_43;
	}
	{
	LINE_NUMBER(1765);
	if ((frame[5].i) != 0) goto label_45;
	}
	{
	LINE_NUMBER(1766);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = (((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl) + (jlong(281474976710656ll)));
	}
label_45:;
	{
	LINE_NUMBER(1768);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_source = (frame[2].i);
	LINE_NUMBER(1769);
	goto label_48;
	}
label_43:;
	{
	LINE_NUMBER(1771);
	if ((frame[8].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(1772);
	if ((frame[4].i) == (jint(1073741824))) goto label_51;
	}
	{
	LINE_NUMBER(1773);
	sp[0].o = frame[1].o;
	jint temp0 = jint(1073741824);
	frame[4].i = temp0;
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK(sp[0].o))->F_source = temp0;
	}
label_51:;
	{
	LINE_NUMBER(1774);
	if ((frame[5].i) != (jint(1))) goto label_49;
	}
	{
	LINE_NUMBER(1775);
	frame[5].i = (jint(0));
	LINE_NUMBER(1776);
	sp[0].o = frame[0].o;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = (((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl) + (jlong(-281474976710656ll)));
	}
label_49:;
	LINE_NUMBER(1780);
	goto label_4;
label_48:;
	LINE_NUMBER(1781);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:pollScan", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
label_0:;
	{
	LINE_NUMBER(1791);
	if ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (bit_cast<jint>(0x80000000))) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1793);
	frame[4].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(1794);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	LINE_NUMBER(1795);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (16)));
	LINE_NUMBER(1797);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1798);
	frame[7].i = (((frame[5].i) & (-2)) & (frame[4].i));
	LINE_NUMBER(1799);
	frame[8].i = (((frame[6].i) & (-2)) | (jint(2)));
	goto label_12;
	}
label_8:;
	{
	LINE_NUMBER(1802);
	frame[7].i = ((frame[5].i) & (frame[4].i));
	LINE_NUMBER(1803);
	frame[8].i = ((frame[6].i) | (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(1805);
	frame[9].i = (frame[7].i);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(1807);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[9].i));
	frame[12].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1808);
	jint temp0 = frame[11].i;
	jint temp1 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[12].o)))->F_base;
	frame[13].i = temp1;
	frame[11].i = (temp0 + temp1);
	LINE_NUMBER(1809);
	if (((frame[13].i) - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[12].o)))->F_top)) >= 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[12].o)))->F_array;
	frame[15].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[15].o)))->length;
	frame[14].i = temp0;
	if (temp0 <= 0) goto label_18;
	}
	{
	LINE_NUMBER(1811);
	frame[16].i = (((frame[14].i) - (jint(1))) & (frame[13].i));
	LINE_NUMBER(1812);
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[16].i)));
	LINE_NUMBER(1813);
	if ((frame[17].o) == nullptr) goto label_27;
	}
	{
	jint temp0 = frame[13].i;
	INST_IINC(13, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[12].o)))->F_base)) goto label_27;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[16].i))) != (frame[17].o)) goto label_27;
	}
	{
	LINE_NUMBER(1814);
	ARRAY_ACCESS(jobject, (frame[15].o), (frame[16].i)) = (jobject(nullptr));
	LINE_NUMBER(1815);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[12].o)))->F_base = (frame[13].i);
	LINE_NUMBER(1816);
	popStackFrame(ctx, self);
	return (frame[17].o);
	}
label_18:;
	{
	LINE_NUMBER(1822);
	jint temp0 = ((frame[9].i) + (frame[8].i)) & (frame[4].i);
	frame[9].i = temp0;
	if (temp0 != (frame[7].i)) goto label_31;
	}
	{
	LINE_NUMBER(1823);
	jint temp0 = frame[10].i;
	jint temp1 = frame[11].i;
	frame[10].i = temp1;
	if (temp0 != temp1) goto label_33;
	}
	LINE_NUMBER(1824);
	goto label_1;
label_33:;
	{
	LINE_NUMBER(1825);
	frame[11].i = (jint(0));
	}
label_31:;
	LINE_NUMBER(1827);
	goto label_16;
label_27:;
	LINE_NUMBER(1828);
	goto label_0;
label_1:;
	{
	LINE_NUMBER(1829);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:nextTaskFor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1839);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1840);
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[1].o)))->F_id) & (jint(65536))) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[1].o));
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_pop_R_java_util_concurrent_ForkJoinTask])(ctx, sp[0].o);
	sp++;
label_4:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(1843);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:externalPush", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1855);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	}
label_13:;
	{
	LINE_NUMBER(1857);
	frame[3].i = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode);
	LINE_NUMBER(1858);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1859);
	if (((frame[3].i) & (jint(262144))) != 0) goto label_16;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_16;
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 > 0) goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(1860);
	clinit_java_util_concurrent_RejectedExecutionException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_RejectedExecutionException);
	init_java_util_concurrent_RejectedExecutionException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(1863);
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	LINE_NUMBER(1864);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), ((((frame[4].i) - (jint(1))) & (frame[2].i)) & (126)));
	frame[6].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(1865);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workerNamePrefix;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1866);
	frame[10].i = (((frame[2].i) | (jint(1073741824))) & (jint(-65538)));
	LINE_NUMBER(1867);
	clinit_java_util_concurrent_ForkJoinPool$WorkQueue(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinPool$WorkQueue);
	init_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinPool_java_util_concurrent_ForkJoinWorkerThread(ctx, sp[0].o, (frame[0].o), (jobject(nullptr)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1868);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_id = (frame[10].i);
	LINE_NUMBER(1869);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_source = (jint(1073741824));
	LINE_NUMBER(1870);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase = (jint(1));
	LINE_NUMBER(1871);
	if ((frame[9].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1872);
	sp[0].o = frame[9].o;
	frame[11].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1874);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[5].o)))->length;
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_32;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = ((frame[10].i) & ((frame[4].i) - (jint(1)))) & (126);
	frame[12].i = temp0;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0)) != nullptr) goto label_32;
	}
	{
	LINE_NUMBER(1877);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[12].i)) = (frame[6].o);
	LINE_NUMBER(1878);
	jint temp0 = jint(1);
	frame[8].i = temp0;
	frame[7].i = temp0;
	}
label_32:;
	{
	LINE_NUMBER(1880);
	monitorExit(ctx, (frame[11].o));
	}
	popExceptionFrame(frameRef);
	goto label_30;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	monitorExit(ctx, (frame[11].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(13);
	INST_ATHROW();
	label_30:;
	LINE_NUMBER(1882);
	goto label_36;
label_22:;
	{
	LINE_NUMBER(1883);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_tryLockSharedQueue_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(1884);
	frame[9].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_base);
	frame[10].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_top);
	LINE_NUMBER(1885);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_array;
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_41;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[13].o)))->length;
	frame[11].i = temp0;
	if (temp0 <= 0) goto label_41;
	}
	{
	jint temp0 = (frame[11].i) - (jint(1));
	jint temp1 = (frame[9].i) - (frame[10].i);
	frame[12].i = temp1;
	if ((temp0 + temp1) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(1887);
	ARRAY_ACCESS(jobject, (frame[13].o), (((frame[11].i) - (jint(1))) & (frame[10].i))) = (frame[1].o);
	LINE_NUMBER(1888);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_top = ((frame[10].i) + (jint(1)));
	LINE_NUMBER(1889);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase = (jint(0));
	LINE_NUMBER(1890);
	if ((frame[12].i) >= 0) goto label_48;
	}
	{
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_base) - (frame[10].i)) >= (jint(-1))) goto label_48;
	}
	LINE_NUMBER(1891);
	goto label_50;
label_41:;
	{
	LINE_NUMBER(1894);
	frame[8].i = (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(1895);
	frame[7].i = (jint(1));
	}
label_36:;
	{
	LINE_NUMBER(1897);
	if ((frame[7].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(1898);
	if ((frame[8].i) == 0) goto label_53;
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(1900);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_growArray_R_Array1_java_util_concurrent_ForkJoinTask])(ctx, (frame[6].o));
	LINE_NUMBER(1901);
	frame[9].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_top);
	LINE_NUMBER(1902);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_array;
	frame[11].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[11].o)))->length;
	frame[10].i = temp0;
	if (temp0 <= 0) goto label_7;
	}
	{
	LINE_NUMBER(1903);
	ARRAY_ACCESS(jobject, (frame[11].o), (((frame[10].i) - (jint(1))) & (frame[9].i))) = (frame[1].o);
	LINE_NUMBER(1904);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_top = ((frame[9].i) + (jint(1)));
	}
label_7:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(1907);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase = (jint(0));
	LINE_NUMBER(1908);
	goto label_53;
	}
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	LINE_NUMBER(1907);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	{
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[6].o)))->F_phase = (jint(0));
	LINE_NUMBER(1908);
	throwException(ctx, (frame[14].o));	}
label_53:;
	{
	LINE_NUMBER(1910);
	((func_java_util_concurrent_ForkJoinPool_signalWork) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_signalWork])(ctx, (frame[0].o));
	LINE_NUMBER(1911);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(1914);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1916);
	goto label_13;
	}
label_50:;
	LINE_NUMBER(1917);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:externalSubmit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1924);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1925);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_4;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[2].o));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	if (sp[0].o != (frame[0].o)) goto label_4;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[3].o)))->F_workQueue;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1929);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_push_java_util_concurrent_ForkJoinTask])(ctx, (frame[4].o), (frame[1].o));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(1931);
	((func_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o), (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(1932);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinPool_commonSubmitterQueue_R_java_util_concurrent_ForkJoinPool$WorkQueue(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:commonSubmitterQueue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(1939);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	frame[0].o = sp[0].o;
	LINE_NUMBER(1940);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(1942);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[2].o)))->length;
	frame[3].i = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	LINE_NUMBER(1944);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((((frame[3].i) - (jint(1))) & (frame[1].i)) & (126)));
	sp += 1;
	goto label_7;
	}
label_3:;
	INST_ACONST_NULL();
label_7:;
	LINE_NUMBER(1942);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:tryExternalUnpush", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1951);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[3].o)))->length;
	frame[5].i = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((((frame[5].i) - (jint(1))) & (frame[2].i)) & (126)));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1956);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_trySharedUnpush_java_util_concurrent_ForkJoinTask_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_7;
label_3:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(1953);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:externalHelpComplete", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1963);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(1965);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[4].o)))->length;
	frame[6].i = temp0;
	if (temp0 <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((frame[6].i) - (jint(1))) & (frame[3].i)) & (126)));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(1967);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_sharedHelpCC_java_util_concurrent_CountedCompleter_int_R_int])(ctx, (frame[5].o), (frame[1].o), (frame[2].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_7;
	}
label_3:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(1965);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_helpComplete_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_CountedCompleter_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:helpComplete", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1982);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	{
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_localHelpCC_java_util_concurrent_CountedCompleter_int_R_int])(ctx, (frame[1].o), (frame[2].o), (frame[3].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ForkJoinPool_getSurplusQueuedTaskCount_R_int(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getSurplusQueuedTaskCount", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(2029);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[0].o = sp[0].o;
	if ((isInstance(ctx, sp[0].o, &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[0].o));
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[1].o)))->F_workQueue;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2032);
	frame[4].i = (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[2].o)))->F_mode) & (jint(65535)));
	LINE_NUMBER(2033);
	frame[5].i = ((frame[4].i) + (jint((((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[2].o)))->F_ctl) >> (48)))));
	LINE_NUMBER(2034);
	frame[6].i = (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_top) - ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[3].o)))->F_base));
	LINE_NUMBER(2035);
	jint temp0 = frame[6].i;
	jint temp1 = frame[5].i;
	jint temp2 = bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(1)));
	frame[4].i = temp2;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 <= temp2) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	{
	LINE_NUMBER(2036);
	jint temp0 = frame[5].i;
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(1)));
	frame[4].i = temp1;
	if (temp0 <= temp1) goto label_12;
	}
	INST_ICONST(1);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(2037);
	jint temp0 = frame[5].i;
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(1)));
	frame[4].i = temp1;
	if (temp0 <= temp1) goto label_13;
	}
	INST_ICONST(2);
	goto label_11;
label_13:;
	{
	LINE_NUMBER(2038);
	jint temp0 = frame[5].i;
	jint temp1 = bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (jint(1)));
	frame[4].i = temp1;
	if (temp0 <= temp1) goto label_14;
	}
	INST_ICONST(4);
	goto label_11;
label_14:;
	LINE_NUMBER(2039);
	INST_BIPUSH(8);
label_11:;
	{
	sp -= 2;
	jint temp0 = sp[0].i - sp[1].i;
	LINE_NUMBER(2035);
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(2041);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:tryTerminate", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
label_10:;
	{
	LINE_NUMBER(2057);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[3].i = temp0;
	if ((temp0 & (jint(262144))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(2058);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	if (sp[0].o != sp[1].o) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(2059);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2060);
	if (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) != (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(2061);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode = ((frame[3].i) | (jint(262144)));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(2064);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[3].i = temp0;
	if ((temp0 & (bit_cast<jint>(0x80000000))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(2065);
	if ((frame[1].i) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2066);
	frame[4].l = (jlong(0));
	}
label_21:;
	{
	LINE_NUMBER(2067);
	frame[6].i = (jint(0));
	LINE_NUMBER(2068);
	frame[7].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(2069);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[9].o = sp[0].o;
	LINE_NUMBER(2070);
	if ((((frame[3].i) & (jint(65535))) + (jint(((frame[7].l) >> (48))))) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(2071);
	frame[6].i = (jint(1));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(2072);
	if ((frame[9].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(2074);
	frame[12].i = (jint(0));
	}
label_29:;
	{
	if ((frame[12].i) >= (((jarray) nullCheck(ctx, (frame[9].o)))->length)) goto label_27;
	}
	{
	LINE_NUMBER(2075);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[12].i));
	frame[10].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(2076);
	jlong temp0 = frame[7].l;
	jint temp1 = (jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[10].o)))->F_base;
	frame[11].i = temp1;
	frame[7].l = (temp0 + (jlong((temp1 + ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[10].o)))->F_id)))));
	LINE_NUMBER(2077);
	if ((frame[11].i) != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[10].o)))->F_top)) goto label_36;
	}
	{
	if (((frame[12].i) & (jint(1))) != (jint(1))) goto label_32;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[10].o)))->F_source) < 0) goto label_32;
	}
label_36:;
	{
	LINE_NUMBER(2079);
	frame[6].i = (jint(1));
	LINE_NUMBER(2080);
	goto label_27;
	}
label_32:;
	{
	LINE_NUMBER(2074);
	INST_IINC(12, 1);
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(2085);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[3].i = temp0;
	if ((temp0 & (bit_cast<jint>(0x80000000))) == 0) goto label_38;
	}
	LINE_NUMBER(2086);
	goto label_19;
label_38:;
	{
	LINE_NUMBER(2087);
	if ((frame[6].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(2088);
	popStackFrame(ctx, self);
	return (jint(0));
	}
label_40:;
	{
	LINE_NUMBER(2089);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	if (sp[0].o != (frame[9].o)) goto label_42;
	}
	{
	jlong temp0 = frame[4].l;
	jlong temp1 = frame[7].l;
	frame[4].l = temp1;
	if ((longCompare(temp0, temp1)) != 0) goto label_42;
	}
	LINE_NUMBER(2090);
	goto label_19;
label_42:;
	LINE_NUMBER(2091);
	goto label_21;
label_19:;
	{
	LINE_NUMBER(2093);
	if (((frame[3].i) & (bit_cast<jint>(0x80000000))) != 0) goto label_12;
	}
	{
	if (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) != (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(2094);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode = ((frame[3].i) | (bit_cast<jint>(0x80000000)));
	goto label_12;
	}
label_17:;
	{
	LINE_NUMBER(2097);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[3].i = temp0;
	if ((temp0 & (jint(524288))) != 0) goto label_45;
	}
	{
	LINE_NUMBER(2098);
	frame[4].l = (jlong(0));
	}
label_47:;
	{
	LINE_NUMBER(2100);
	frame[8].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(2101);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_50;
	}
	{
	LINE_NUMBER(2102);
	frame[10].i = (jint(0));
	}
label_52:;
	{
	if ((frame[10].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_50;
	}
	{
	LINE_NUMBER(2103);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[10].i));
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_55;
	}
	{
	LINE_NUMBER(2104);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[7].o)))->F_owner;
	frame[11].o = sp[0].o;
	LINE_NUMBER(2105);
	((func_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_cancelAll])(ctx, (frame[7].o));
	LINE_NUMBER(2106);
	if ((frame[11].o) == nullptr) goto label_59;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2108);
	((func_java_util_concurrent_ForkJoinWorkerThread_interrupt) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinWorkerThread_interrupt])(ctx, (frame[11].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2110);
	goto label_59;
label_2:;
	LINE_NUMBER(2109);
	INST_ASTORE(12);
label_59:;
	{
	LINE_NUMBER(2112);
	frame[8].l = ((frame[8].l) + (jlong((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[7].o)))->F_base) + ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[7].o)))->F_id)))));
	}
label_55:;
	{
	LINE_NUMBER(2102);
	INST_IINC(10, 1);
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(2116);
	jint temp0 = (jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode;
	frame[3].i = temp0;
	if ((temp0 & (jint(524288))) != 0) goto label_60;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	if (sp[0].o != (frame[6].o)) goto label_61;
	}
	{
	jlong temp0 = frame[4].l;
	jlong temp1 = frame[8].l;
	frame[4].l = temp1;
	if ((longCompare(temp0, temp1)) != 0) goto label_61;
	}
	LINE_NUMBER(2118);
	goto label_60;
label_61:;
	LINE_NUMBER(2119);
	goto label_47;
label_60:;
	{
	LINE_NUMBER(2120);
	if (((frame[3].i) & (jint(524288))) == 0) goto label_63;
	}
	LINE_NUMBER(2121);
	goto label_45;
label_63:;
	{
	LINE_NUMBER(2122);
	if ((((frame[3].i) & (jint(65535))) + (jshort((jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl)) >> (32)))))))) <= 0) goto label_65;
	}
	LINE_NUMBER(2123);
	goto label_45;
label_65:;
	{
	LINE_NUMBER(2124);
	if (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) != (frame[3].i)) goto label_17;
	}
	{
	LINE_NUMBER(2125);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode = ((frame[3].i) | (jint(524288)));
	LINE_NUMBER(2126);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(2127);
	((func_java_lang_Object_notifyAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_notifyAll])(ctx, (frame[0].o));
	LINE_NUMBER(2128);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_70;
label_6:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(13);
	INST_ATHROW();
	label_70:;
	LINE_NUMBER(2129);
	goto label_45;
label_45:;
	{
	LINE_NUMBER(2132);
	popStackFrame(ctx, self);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinPool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2152);
	sp[0].o = frame[0].o;
	jint temp0 = 32767;
	sp[1].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp1 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[1].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory;
	sp[2].o = jobject(nullptr);
	jint temp3 = jint(0);
	jint temp4 = jint(0);
	jint temp5 = 32767;
	jint temp6 = jint(1);
	sp[3].o = jobject(nullptr);
	jlong temp7 = jlong(60000ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean_int_int_int_java_util_function_Predicate_long_java_util_concurrent_TimeUnit(ctx, sp[0].o, temp2, sp[1].o, sp[2].o, temp3, temp4, temp5, temp6, sp[3].o, temp7, sp[4].o);
	LINE_NUMBER(2155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinPool_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2173);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory;
	sp[2].o = jobject(nullptr);
	jint temp1 = jint(0);
	jint temp2 = jint(0);
	jint temp3 = 32767;
	jint temp4 = jint(1);
	sp[3].o = jobject(nullptr);
	jlong temp5 = jlong(60000ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean_int_int_int_java_util_function_Predicate_long_java_util_concurrent_TimeUnit(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, temp1, temp2, temp3, temp4, sp[3].o, temp5, sp[4].o);
	LINE_NUMBER(2175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2208);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	jint temp1 = frame[4].i;
	jint temp2 = jint(0);
	jint temp3 = 32767;
	jint temp4 = jint(1);
	sp[3].o = jobject(nullptr);
	jlong temp5 = jlong(60000ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[4].o = (jobject)SF_java_util_concurrent_TimeUnit_MILLISECONDS;
	init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean_int_int_int_java_util_function_Predicate_long_java_util_concurrent_TimeUnit(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, temp1, temp2, temp3, temp4, sp[3].o, temp5, sp[4].o);
	LINE_NUMBER(2210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean_int_int_int_java_util_function_Predicate_long_java_util_concurrent_TimeUnit(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jbool param3, jint param4, jint param5, jint param6, jobject param7, jlong param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<init>", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	frame[9].l = param8;
	frame[11].o = param9;
	{
	LINE_NUMBER(2299);
	init_java_util_concurrent_AbstractExecutorService(ctx, (frame[0].o));
	LINE_NUMBER(2301);
	if ((frame[1].i) <= 0) goto label_2;
	}
	{
	if ((frame[1].i) > (32767)) goto label_2;
	}
	{
	if ((frame[6].i) < (frame[1].i)) goto label_2;
	}
	{
	if ((longCompare((frame[9].l), (jlong(0)))) > 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2303);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2304);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2305);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(2306);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, (frame[11].o), (frame[9].l));
	jlong temp1 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, (jlong(20ll)));
	frame[12].l = temp1;
	LINE_NUMBER(2308);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[5].i), (frame[1].i));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, (32767));
	frame[14].i = temp3;
	LINE_NUMBER(2309);
	frame[15].l = ((((jlong((-(frame[14].i)))) << (32)) & (jlong(281470681743360ll))) | (((jlong((-(frame[1].i)))) << (48)) & (jlong(-281474976710656ll))));
	LINE_NUMBER(2311);
	jint temp4 = frame[1].i;
	sp[0].i = temp4;
	sp += 1;
	if ((frame[4].i) == 0) goto label_9;
	}
	(sp++)->i = jint(65536);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 2;
	frame[17].i = (sp[0].i | sp[1].i);
	LINE_NUMBER(2312);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[6].i), (32767));
	frame[18].i = (temp0 - (frame[1].i));
	LINE_NUMBER(2313);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[7].i), (jint(0)));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (32767));
	frame[19].i = temp2;
	LINE_NUMBER(2314);
	frame[20].i = ((((frame[19].i) - (frame[1].i)) & (jint(65535))) | ((frame[18].i) << (16)));
	LINE_NUMBER(2315);
	if ((frame[1].i) <= (jint(1))) goto label_15;
	}
	{
	jint temp0 = (frame[1].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	INST_ICONST(1);
label_16:;
	{
	sp -= 1;
	frame[21].i = sp[0].i;
	LINE_NUMBER(2316);
	frame[21].i = ((frame[21].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[21].i)) >> (jint(1)))));
	frame[21].i = ((frame[21].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[21].i)) >> (jint(2)))));
	frame[21].i = ((frame[21].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[21].i)) >> (jint(4)))));
	frame[21].i = ((frame[21].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[21].i)) >> (8))));
	frame[21].i = ((frame[21].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[21].i)) >> (16))));
	LINE_NUMBER(2317);
	frame[21].i = (((frame[21].i) + (jint(1))) << (jint(1)));
	LINE_NUMBER(2319);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ForkJoinPool-"_j))));
	jint temp0 = (jint)SM_java_util_concurrent_ForkJoinPool_nextPoolId_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-worker-"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_workerNamePrefix = (jref) sp[1].o;
	LINE_NUMBER(2320);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinPool$WorkQueue, (frame[21].i));
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_workQueues = (jref) sp[1].o;
	LINE_NUMBER(2321);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_factory = (jref) (frame[2].o);
	LINE_NUMBER(2322);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ueh = (jref) (frame[3].o);
	LINE_NUMBER(2323);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_saturate = (jref) (frame[8].o);
	LINE_NUMBER(2324);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_keepAlive = (frame[12].l);
	LINE_NUMBER(2325);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_bounds = (frame[20].i);
	LINE_NUMBER(2326);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode = (frame[17].i);
	LINE_NUMBER(2327);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[15].l);
	LINE_NUMBER(2328);
	SM_java_util_concurrent_ForkJoinPool_checkPermission(ctx);
	LINE_NUMBER(2329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:newInstanceFromSystemProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2335);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(2336);
	sp[0].o = jobject(nullptr);
	sp += 1;
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(2337);
	sp[0].o = (jobject)SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(ctx);
	sp[0].o = (jobject)((func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class])(ctx, sp[0].o, (frame[2].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	LINE_NUMBER(2338);
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(2335);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2339);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2340);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ForkJoinPool_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2348);
	init_java_util_concurrent_AbstractExecutorService(ctx, (frame[0].o));
	LINE_NUMBER(2349);
	frame[2].i = (jint(-1));
	LINE_NUMBER(2350);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2351);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2353);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"java.util.concurrent.ForkJoinPool.common.parallelism"_j));
	LINE_NUMBER(2354);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2355);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2356);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[5].o));
	frame[2].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(2357);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"java.util.concurrent.ForkJoinPool.common.threadFactory"_j))));
	frame[3].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, sp[0].o));
	LINE_NUMBER(2359);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"java.util.concurrent.ForkJoinPool.common.exceptionHandler"_j))));
	frame[4].o = (checkCast(ctx, &class_java_lang_Thread$UncaughtExceptionHandler, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(2362);
	goto label_13;
label_2:;
	LINE_NUMBER(2361);
	INST_ASTORE(5);
label_13:;
	{
	LINE_NUMBER(2364);
	if ((frame[3].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(2366);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory;
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(2370);
	if ((frame[2].i) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(2371);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[0].o);
	jint temp1 = temp0 - (jint(1));
	frame[2].i = temp1;
	if (temp1 > 0) goto label_16;
	}
	{
	LINE_NUMBER(2372);
	frame[2].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(2373);
	if ((frame[2].i) <= (32767)) goto label_19;
	}
	{
	LINE_NUMBER(2374);
	frame[2].i = (32767);
	}
label_19:;
	{
	LINE_NUMBER(2376);
	frame[5].l = ((((jlong((-(frame[2].i)))) << (32)) & (jlong(281470681743360ll))) | (((jlong((-(frame[2].i)))) << (48)) & (jlong(-281474976710656ll))));
	LINE_NUMBER(2378);
	frame[7].i = ((((jint(1)) - (frame[2].i)) & (jint(65535))) | ((clinit_java_util_concurrent_ForkJoinPool(ctx), (jint)SF_java_util_concurrent_ForkJoinPool_COMMON_MAX_SPARES) << (16)));
	LINE_NUMBER(2379);
	if ((frame[2].i) <= (jint(1))) goto label_23;
	}
	{
	jint temp0 = (frame[2].i) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ICONST(1);
label_24:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(2380);
	frame[8].i = ((frame[8].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (jint(1)))));
	frame[8].i = ((frame[8].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (jint(2)))));
	frame[8].i = ((frame[8].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (jint(4)))));
	frame[8].i = ((frame[8].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (8))));
	frame[8].i = ((frame[8].i) | (bit_cast<jint>(bit_cast<uint32_t>((frame[8].i)) >> (16))));
	LINE_NUMBER(2381);
	frame[8].i = (((frame[8].i) + (jint(1))) << (jint(1)));
	LINE_NUMBER(2383);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workerNamePrefix = (jref) (((jobject) createStringLiteral(ctx, u8"ForkJoinPool.commonPool-worker-"_j)));
	LINE_NUMBER(2384);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_util_concurrent_ForkJoinPool$WorkQueue, (frame[8].i));
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_workQueues = (jref) sp[1].o;
	LINE_NUMBER(2385);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_factory = (jref) (frame[3].o);
	LINE_NUMBER(2386);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ueh = (jref) (frame[4].o);
	LINE_NUMBER(2387);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_saturate = (jref) (jobject(nullptr));
	LINE_NUMBER(2388);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_keepAlive = (jlong(60000ll));
	LINE_NUMBER(2389);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_bounds = (frame[7].i);
	LINE_NUMBER(2390);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode = (frame[2].i);
	LINE_NUMBER(2391);
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl = (frame[5].l);
	LINE_NUMBER(2392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ForkJoinPool_commonPool_R_java_util_concurrent_ForkJoinPool(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:commonPool", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(2409);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:invoke", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2432);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2433);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2434);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2435);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_join_R_java_lang_Object])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_execute_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:execute", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2447);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2448);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:execute", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2458);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2459);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2461);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_ForkJoinTask)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2462);
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, (frame[1].o)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2464);
	clinit_java_util_concurrent_ForkJoinTask$RunnableExecuteAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$RunnableExecuteAction);
	init_java_util_concurrent_ForkJoinTask$RunnableExecuteAction_java_lang_Runnable(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2465);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(2466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2479);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2488);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedCallable);
	init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2497);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnable(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedRunnable);
	init_java_util_concurrent_ForkJoinTask$AdaptedRunnable_java_lang_Runnable_java_lang_Object(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2506);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2507);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2509);
	if ((isInstance(ctx, (frame[1].o), &class_java_util_concurrent_ForkJoinTask)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(2510);
	frame[2].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, (frame[1].o)));
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(2512);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction);
	init_java_util_concurrent_ForkJoinTask$AdaptedRunnableAction_java_lang_Runnable(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(2513);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_invokeAll_java_util_Collection_R_java_util_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:invokeAll", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2524);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	jint temp0 = (jint)((func_java_util_Collection_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_size_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_util_ArrayList_int(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2527);
	sp[0].o = (jobject)((func_java_util_Collection_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_util_concurrent_Callable, sp[0].o));
	LINE_NUMBER(2528);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedCallable);
	init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2529);
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(2530);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(2531);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2532);
	frame[3].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	}
label_12:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(2533);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	((func_java_util_concurrent_ForkJoinTask_quietlyJoin) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, sp[0].o)))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_quietlyJoin])(ctx, (checkCast(ctx, &class_java_util_concurrent_ForkJoinTask, sp[0].o)));
	LINE_NUMBER(2532);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(2534);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2535);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2536);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	}
label_18:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_19;
	}
	{
	LINE_NUMBER(2537);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	jint temp0 = (jint)((func_java_util_concurrent_Future_cancel_boolean_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o))))(ctx, (checkCast(ctx, &class_java_util_concurrent_Future, sp[0].o)), (jint(0)));
	LINE_NUMBER(2536);
	INST_IINC(4, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(2538);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_getFactory_R_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getFactory", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2548);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_factory;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getUncaughtExceptionHandler", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2558);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ueh;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_getParallelism_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getParallelism", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2567);
	frame[1].i = (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(65535)));
	LINE_NUMBER(2568);
	if ((frame[1].i) <= 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_concurrent_ForkJoinPool_getCommonPoolParallelism_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getCommonPoolParallelism", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(2578);
	popStackFrame(ctx);
	return (clinit_java_util_concurrent_ForkJoinPool(ctx), (jint)SF_java_util_concurrent_ForkJoinPool_COMMON_PARALLELISM);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_getPoolSize_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getPoolSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2590);
	popStackFrame(ctx);
	return ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(65535))) + (jshort((jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl)) >> (32))))))));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_getAsyncMode_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getAsyncMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2600);
	if ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(65536))) == 0) goto label_1;
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

jint M_java_util_concurrent_ForkJoinPool_getRunningThreadCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getRunningThreadCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2612);
	frame[1].i = (jint(0));
	LINE_NUMBER(2614);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2615);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2616);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	LINE_NUMBER(2617);
	INST_IINC(1, 1);
label_8:;
	{
	LINE_NUMBER(2615);
	INST_IINC(4, 2);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2620);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_getActiveThreadCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getActiveThreadCount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2631);
	frame[1].i = ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(65535))) + (jint((((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl) >> (48)))));
	LINE_NUMBER(2632);
	if ((frame[1].i) > 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ILOAD(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:isQuiescent", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(2648);
	frame[1].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(2649);
	frame[3].i = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode);
	frame[4].i = ((frame[3].i) & (jint(65535)));
	LINE_NUMBER(2650);
	frame[5].i = ((frame[4].i) + (jshort((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[1].l)) >> (32))))))));
	LINE_NUMBER(2651);
	frame[6].i = ((frame[4].i) + (jint(((frame[1].l) >> (48)))));
	LINE_NUMBER(2652);
	if (((frame[3].i) & (jint(-2146959360))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2653);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(2654);
	if ((frame[6].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(2655);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(2658);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[7].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2659);
	frame[9].i = (jint(1));
	}
label_13:;
	{
	if ((frame[9].i) >= (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(2660);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i));
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(2661);
	if ((((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[8].o)))->F_source) & (jint(1073741824))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(2662);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	LINE_NUMBER(2663);
	INST_IINC(5, -1);
label_16:;
	{
	LINE_NUMBER(2659);
	INST_IINC(9, 2);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(2667);
	if ((frame[5].i) != 0) goto label_20;
	}
	{
	if ((longCompare(((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl), (frame[1].l))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2668);
	popStackFrame(ctx);
	return (jint(1));
	}
label_20:;
	LINE_NUMBER(2670);
	goto label_0;

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ForkJoinPool_getStealCount_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getStealCount", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2685);
	frame[1].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_stealCount);
	LINE_NUMBER(2687);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2688);
	frame[5].i = (jint(1));
	}
label_5:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2689);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2690);
	frame[1].l = ((frame[1].l) + ((jlong(((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[4].o)))->F_nsteals))) & (jlong(4294967295ll))));
	}
label_8:;
	{
	LINE_NUMBER(2688);
	INST_IINC(5, 2);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2693);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ForkJoinPool_getQueuedTaskCount_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getQueuedTaskCount", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2707);
	frame[1].l = (jlong(0));
	LINE_NUMBER(2709);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2710);
	frame[5].i = (jint(1));
	}
label_5:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2711);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2712);
	jlong temp0 = frame[1].l;
	jint temp1 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int])(ctx, (frame[4].o));
	frame[1].l = (temp0 + (jlong(temp1)));
	}
label_8:;
	{
	LINE_NUMBER(2710);
	INST_IINC(5, 2);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2715);
	popStackFrame(ctx);
	return (frame[1].l);
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_getQueuedSubmissionCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:getQueuedSubmissionCount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2726);
	frame[1].i = (jint(0));
	LINE_NUMBER(2728);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2729);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2730);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2731);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int])(ctx, (frame[3].o));
	frame[1].i = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(2729);
	INST_IINC(4, 2);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2734);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_hasQueuedSubmissions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:hasQueuedSubmissions", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2745);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2746);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(2747);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(2748);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(2746);
	INST_IINC(3, 2);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(2751);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:pollSubmission", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2762);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ForkJoinPool_drainTasksTo_java_util_Collection_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:drainTasksTo", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2783);
	frame[2].i = (jint(0));
	LINE_NUMBER(2785);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2786);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(2787);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i));
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2788);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_poll_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(2789);
	jint temp0 = (jint)((func_java_util_Collection_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Collection, INDEX_java_util_Collection_add_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(2790);
	INST_IINC(2, 1);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(2786);
	INST_IINC(6, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2795);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:toString", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2807);
	frame[1].l = (jlong(0));
	frame[3].l = (jlong(0));
	frame[5].i = (jint(0));
	LINE_NUMBER(2808);
	frame[6].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_stealCount);
	LINE_NUMBER(2810);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_workQueues;
	frame[8].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(2811);
	frame[10].i = (jint(0));
	}
label_8:;
	{
	if ((frame[10].i) >= (((jarray) nullCheck(ctx, (frame[8].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(2812);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i));
	frame[9].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(2813);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_queueSize_R_int])(ctx, (frame[9].o));
	frame[11].i = temp0;
	LINE_NUMBER(2814);
	if (((frame[10].i) & (jint(1))) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2815);
	frame[3].l = ((frame[3].l) + (jlong((frame[11].i))));
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(2817);
	frame[1].l = ((frame[1].l) + (jlong((frame[11].i))));
	LINE_NUMBER(2818);
	frame[6].l = ((frame[6].l) + ((jlong(((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[9].o)))->F_nsteals))) & (jlong(4294967295ll))));
	LINE_NUMBER(2819);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool$WorkQueue_isApparentlyUnblocked_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_11;
	}
	LINE_NUMBER(2820);
	INST_IINC(5, 1);
label_11:;
	{
	LINE_NUMBER(2811);
	INST_IINC(10, 1);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(2826);
	frame[10].i = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode);
	LINE_NUMBER(2827);
	frame[11].i = ((frame[10].i) & (jint(65535)));
	LINE_NUMBER(2828);
	frame[12].l = ((jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_ctl);
	LINE_NUMBER(2829);
	frame[14].i = ((frame[11].i) + (jshort((jint((bit_cast<jlong>(bit_cast<uint64_t>((frame[12].l)) >> (32))))))));
	LINE_NUMBER(2830);
	frame[15].i = ((frame[11].i) + (jint(((frame[12].l) >> (48)))));
	LINE_NUMBER(2831);
	if ((frame[15].i) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(2832);
	frame[15].i = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(2833);
	if (((frame[10].i) & (jint(524288))) == 0) goto label_26;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Terminated"_j));
	goto label_27;
label_26:;
	{
	LINE_NUMBER(2834);
	if (((frame[10].i) & (bit_cast<jint>(0x80000000))) == 0) goto label_28;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Terminating"_j));
	goto label_27;
label_28:;
	{
	LINE_NUMBER(2835);
	if (((frame[10].i) & (jint(262144))) == 0) goto label_29;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Shutting down"_j));
	goto label_27;
label_29:;
	LINE_NUMBER(2836);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Running"_j));
label_27:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(2837);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[16].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", parallelism = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[11].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", size = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[14].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", active = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[15].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", running = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", steals = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", tasks = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", submissions = "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_ForkJoinPool_shutdown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:shutdown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2864);
	SM_java_util_concurrent_ForkJoinPool_checkPermission(ctx);
	LINE_NUMBER(2865);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean(ctx, (frame[0].o), (jint(0)), (jint(1)));
	LINE_NUMBER(2866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_shutdownNow_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:shutdownNow", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2887);
	SM_java_util_concurrent_ForkJoinPool_checkPermission(ctx);
	LINE_NUMBER(2888);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean(ctx, (frame[0].o), (jint(1)), (jint(1)));
	LINE_NUMBER(2889);
	sp[0].o = (jobject)SM_java_util_Collections_emptyList_R_java_util_List(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:isTerminated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2898);
	if ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(524288))) == 0) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinPool_isTerminating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:isTerminating", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2915);
	frame[1].i = ((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode);
	LINE_NUMBER(2916);
	if (((frame[1].i) & (bit_cast<jint>(0x80000000))) == 0) goto label_2;
	}
	{
	if (((frame[1].i) & (jint(524288))) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_isShutdown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:isShutdown", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2925);
	if ((((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[0].o)))->F_mode) & (jint(262144))) == 0) goto label_1;
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

jbool M_java_util_concurrent_ForkJoinPool_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:awaitTermination", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2944);
	jint temp0 = (jint)SM_java_lang_Thread_interrupted_R_boolean(ctx);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(2945);
	clinit_java_lang_InterruptedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_InterruptedException);
	init_java_lang_InterruptedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(2946);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(2947);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean])(ctx, (frame[0].o), (frame[1].l), (frame[3].o));
	LINE_NUMBER(2948);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(2950);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(2951);
	jint temp1 = (jint)((func_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_17;
	}
	{
	LINE_NUMBER(2952);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(2953);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) goto label_19;
	}
	{
	LINE_NUMBER(2954);
	popStackFrame(ctx);
	return (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(2955);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[6].l = (temp0 + (frame[4].l));
	LINE_NUMBER(2956);
	sp[0].o = frame[0].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(2958);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(2959);
	jint temp0 = jint(1);
	monitorExit(ctx, (frame[8].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_9; } // goto label_2
	}
	{
	LINE_NUMBER(2960);
	if ((longCompare((frame[4].l), (jlong(0)))) > 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(2961);
	jint temp0 = jint(0);
	monitorExit(ctx, (frame[8].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_2;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { bypasses[1] = false; goto label_2; }
	{
	LINE_NUMBER(2962);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toMillis_long_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_TimeUnit_toMillis_long_R_long])(ctx, sp[0].o, (frame[4].l));
	frame[9].l = temp0;
	LINE_NUMBER(2963);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((longCompare((frame[9].l), (jlong(0)))) <= 0) goto label_25;
	}
	INST_LLOAD(9);
	goto label_26;
label_25:;
	INST_LCONST(1);
label_26:;
	{
	sp -= 2;
	((func_java_lang_Object_wait_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_wait_long])(ctx, sp[0].o, sp[1].l);
	LINE_NUMBER(2964);
	jlong temp0 = frame[6].l;
	jlong temp1 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[4].l = (temp0 - temp1);
	LINE_NUMBER(2965);
	{ popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2966);
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jbool M_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:awaitQuiescence", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(2981);
	jlong temp0 = (jlong)((func_java_util_concurrent_TimeUnit_toNanos_long_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_util_concurrent_TimeUnit_toNanos_long_R_long])(ctx, (frame[3].o), (frame[1].l));
	frame[4].l = temp0;
	LINE_NUMBER(2983);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2984);
	if ((isInstance(ctx, (frame[7].o), &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_3;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[7].o));
	frame[6].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	{
	LINE_NUMBER(2986);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[6].o)))->F_workQueue;
	((func_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2987);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(2990);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[8].l = temp0;
	}
label_7:;
	{
	LINE_NUMBER(2992);
	sp[0].o = (jobject)M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask(ctx, (frame[0].o), (jint(0)));
	frame[10].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2993);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[10].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(2994);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(2995);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(2996);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	if ((longCompare((temp0 - (frame[8].l)), (frame[4].l))) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(2997);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	LINE_NUMBER(2999);
	SM_java_lang_Thread_yield(ctx);
label_11:;
	LINE_NUMBER(3000);
	goto label_7;

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinPool_quiesceCommonPool(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:quiesceCommonPool", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(3009);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jlong temp0 = jlong(9223372036854775807ll);
	clinit_java_util_concurrent_TimeUnit(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_TimeUnit_NANOSECONDS;
	jint temp1 = (jint)((func_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(3010);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinPool_managedBlock_java_util_concurrent_ForkJoinPool$ManagedBlocker(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:managedBlock", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3117);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(3118);
	if ((isInstance(ctx, (frame[4].o), &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_8;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[4].o));
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[2].o)))->F_workQueue;
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(3122);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(3123);
	jint temp0 = (jint)M_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int(ctx, (frame[1].o), (frame[3].o));
	frame[5].i = temp0;
	if (temp0 == 0) goto label_12;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3125);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(3126);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(3128);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl;
	sp[1].l = temp0;
	sp += 2;
	if ((frame[5].i) <= 0) goto label_17;
	}
	(sp++)->l = jlong(281474976710656ll);
	goto label_18;
label_17:;
	INST_LCONST(0);
label_18:;
	{
	sp -= 3;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = (sp[1].l + sp[2].l);
	LINE_NUMBER(3130);
	goto label_20;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(3128);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl;
	sp[1].l = temp0;
	sp += 2;
	if ((frame[5].i) <= 0) goto label_21;
	}
	(sp++)->l = jlong(281474976710656ll);
	goto label_22;
label_21:;
	INST_LCONST(0);
label_22:;
	{
	sp -= 3;
	((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_ctl = (sp[1].l + sp[2].l);
	LINE_NUMBER(3130);
	throwException(ctx, (frame[6].o));	}
label_20:;
	LINE_NUMBER(3131);
	goto label_13;
label_13:;
	LINE_NUMBER(3134);
	goto label_24;
label_8:;
	{
	LINE_NUMBER(3136);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(3137);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
label_24:;
	LINE_NUMBER(3139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_concurrent_ForkJoinPool_helpAsyncBlocker_java_util_concurrent_Executor_java_util_concurrent_ForkJoinPool$ManagedBlocker(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:helpAsyncBlocker", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_util_concurrent_ForkJoinPool);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3147);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_java_util_concurrent_ForkJoinPool)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3149);
	frame[7].o = (checkCast(ctx, &class_java_util_concurrent_ForkJoinPool, (frame[0].o)));
	LINE_NUMBER(3150);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[8].o = sp[0].o;
	LINE_NUMBER(3151);
	if ((isInstance(ctx, (frame[8].o), &class_java_util_concurrent_ForkJoinWorkerThread)) == 0) goto label_5;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_util_concurrent_ForkJoinWorkerThread, (frame[8].o));
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK(sp[0].o))->F_pool;
	if (sp[0].o != (frame[7].o)) goto label_5;
	}
	{
	LINE_NUMBER(3153);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinWorkerThread *) NULL_CHECK((frame[3].o)))->F_workQueue;
	frame[2].o = sp[0].o;
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(3154);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, sp[0].o);
	frame[5].i = temp0;
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool *) NULL_CHECK((frame[7].o)))->F_workQueues;
	frame[4].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[4].o)))->length;
	frame[6].i = temp0;
	if (temp0 <= 0) goto label_11;
	}
	{
	LINE_NUMBER(3156);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((frame[6].i) - (jint(1))) & (frame[5].i)) & (126))));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(3158);
	frame[2].o = (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(3159);
	if ((frame[2].o) == nullptr) goto label_1;
	}
label_16:;
	{
	LINE_NUMBER(3161);
	frame[9].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[2].o)))->F_base);
	frame[10].i = ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[2].o)))->F_top);
	LINE_NUMBER(3162);
	sp[0].o = (jobject)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[2].o)))->F_array;
	frame[13].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (frame[9].i) - (frame[10].i);
	frame[11].i = temp0;
	if (temp0 >= 0) goto label_1;
	}
	{
	jint temp0 = ((jarray) nullCheck(ctx, (frame[13].o)))->length;
	frame[12].i = temp0;
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(3164);
	frame[14].i = (((frame[12].i) - (jint(1))) & (frame[9].i));
	LINE_NUMBER(3165);
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i)));
	LINE_NUMBER(3166);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ForkJoinPool$ManagedBlocker, INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_25;
	}
	LINE_NUMBER(3167);
	goto label_1;
label_25:;
	{
	LINE_NUMBER(3168);
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	if (temp0 != ((jint)((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[2].o)))->F_base)) goto label_27;
	}
	{
	LINE_NUMBER(3169);
	if ((frame[15].o) != nullptr) goto label_29;
	}
	{
	LINE_NUMBER(3170);
	if ((frame[11].i) != (jint(-1))) goto label_27;
	}
	LINE_NUMBER(3171);
	goto label_1;
label_29:;
	{
	LINE_NUMBER(3173);
	if ((isInstance(ctx, (frame[15].o), &class_java_util_concurrent_CompletableFuture$AsynchronousCompletionTask)) != 0) goto label_32;
	}
	LINE_NUMBER(3175);
	goto label_1;
label_32:;
	{
	LINE_NUMBER(3176);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i))) != (frame[15].o)) goto label_27;
	}
	{
	LINE_NUMBER(3177);
	ARRAY_ACCESS(jobject, (frame[13].o), (frame[14].i)) = (jobject(nullptr));
	LINE_NUMBER(3178);
	((java_util_concurrent_ForkJoinPool$WorkQueue *) NULL_CHECK((frame[2].o)))->F_base = (frame[9].i);
	LINE_NUMBER(3179);
	jint temp0 = (jint)((func_java_util_concurrent_ForkJoinTask_doExec_R_int) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinTask_doExec_R_int])(ctx, (frame[15].o));
	}
label_27:;
	LINE_NUMBER(3185);
	goto label_16;
label_1:;
	LINE_NUMBER(3188);
	popStackFrame(ctx, (jobject) &class_java_util_concurrent_ForkJoinPool);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:newTaskFor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(3195);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedRunnable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedRunnable);
	init_java_util_concurrent_ForkJoinTask$AdaptedRunnable_java_lang_Runnable_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:newTaskFor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3199);
	clinit_java_util_concurrent_ForkJoinTask$AdaptedCallable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinTask$AdaptedCallable);
	init_java_util_concurrent_ForkJoinTask$AdaptedCallable_java_util_concurrent_Callable(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_Future(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:submit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ForkJoinPool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_concurrent_AbstractExecutorService(ctx);
	SF_java_util_concurrent_ForkJoinPool_SWIDTH = jint(16);
	SF_java_util_concurrent_ForkJoinPool_SMASK = jint(65535);
	SF_java_util_concurrent_ForkJoinPool_MAX_CAP = jint(32767);
	SF_java_util_concurrent_ForkJoinPool_SQMASK = jint(126);
	SF_java_util_concurrent_ForkJoinPool_UNSIGNALLED = bit_cast<jint>(0x80000000);
	SF_java_util_concurrent_ForkJoinPool_SS_SEQ = jint(65536);
	SF_java_util_concurrent_ForkJoinPool_QLOCK = jint(1);
	SF_java_util_concurrent_ForkJoinPool_OWNED = jint(1);
	SF_java_util_concurrent_ForkJoinPool_FIFO = jint(65536);
	SF_java_util_concurrent_ForkJoinPool_SHUTDOWN = jint(262144);
	SF_java_util_concurrent_ForkJoinPool_TERMINATED = jint(524288);
	SF_java_util_concurrent_ForkJoinPool_STOP = bit_cast<jint>(0x80000000);
	SF_java_util_concurrent_ForkJoinPool_QUIET = jint(1073741824);
	SF_java_util_concurrent_ForkJoinPool_DORMANT = jint(-1073741824);
	SF_java_util_concurrent_ForkJoinPool_POLL_LIMIT = jint(1024);
	SF_java_util_concurrent_ForkJoinPool_DEFAULT_KEEPALIVE = jlong(60000ll);
	SF_java_util_concurrent_ForkJoinPool_TIMEOUT_SLOP = jlong(20ll);
	SF_java_util_concurrent_ForkJoinPool_DEFAULT_COMMON_MAX_SPARES = jint(256);
	SF_java_util_concurrent_ForkJoinPool_SEED_INCREMENT = jint(-1640531527);
	SF_java_util_concurrent_ForkJoinPool_SP_MASK = jlong(4294967295ll);
	SF_java_util_concurrent_ForkJoinPool_UC_MASK = jlong(-4294967296ll);
	SF_java_util_concurrent_ForkJoinPool_RC_SHIFT = jint(48);
	SF_java_util_concurrent_ForkJoinPool_RC_UNIT = jlong(281474976710656ll);
	SF_java_util_concurrent_ForkJoinPool_RC_MASK = jlong(-281474976710656ll);
	SF_java_util_concurrent_ForkJoinPool_TC_SHIFT = jint(32);
	SF_java_util_concurrent_ForkJoinPool_TC_UNIT = jlong(4294967296ll);
	SF_java_util_concurrent_ForkJoinPool_TC_MASK = jlong(281470681743360ll);
	SF_java_util_concurrent_ForkJoinPool_ADD_WORKER = jlong(140737488355328ll);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinPool:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinPool(ctx);
	{
	LINE_NUMBER(3205);
	frame[0].o = (((jobject) &class_java_util_concurrent_locks_LockSupport));
	LINE_NUMBER(3207);
	frame[1].i = (256);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(3209);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"java.util.concurrent.ForkJoinPool.common.maximumSpares"_j));
	LINE_NUMBER(3210);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(3211);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3212);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	frame[1].i = temp0;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(3213);
	goto label_9;
label_2:;
	INST_ASTORE(2);
label_9:;
	{
	LINE_NUMBER(3214);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_COMMON_MAX_SPARES = (frame[1].i);
	LINE_NUMBER(3216);
	clinit_java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory);
	init_java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory_java_util_concurrent_ForkJoinPool$1(ctx, sp[0].o, (jobject(nullptr)));
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory = sp[0].o;
	LINE_NUMBER(3218);
	clinit_java_lang_RuntimePermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimePermission);
	init_java_lang_RuntimePermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"modifyThread"_j))));
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission = sp[0].o;
	LINE_NUMBER(3220);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ForkJoinPool);
	init_java_util_concurrent_ForkJoinPool_byte(ctx, sp[0].o, (jint(0)));
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_common = sp[0].o;
	LINE_NUMBER(3222);
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ForkJoinPool_common;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jint)((java_util_concurrent_ForkJoinPool *) NULL_CHECK(sp[0].o))->F_mode) & (jint(65535))), (jint(1)));
	clinit_java_util_concurrent_ForkJoinPool(ctx);
	SF_java_util_concurrent_ForkJoinPool_COMMON_PARALLELISM = temp0;
	LINE_NUMBER(3223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinPool[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_ForkJoinPool_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable,
	(void *) M_java_util_concurrent_ForkJoinPool_shutdown,
	(void *) M_java_util_concurrent_ForkJoinPool_shutdownNow_R_java_util_List,
	(void *) M_java_util_concurrent_ForkJoinPool_isShutdown_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_Future,
	(void *) M_java_util_concurrent_ForkJoinPool_invokeAll_java_util_Collection_R_java_util_List,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAll_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_util_List,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_R_java_lang_Object,
	(void *) M_java_util_concurrent_AbstractExecutorService_invokeAny_java_util_Collection_long_java_util_concurrent_TimeUnit_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinPool_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture,
	(void *) M_java_util_concurrent_ForkJoinPool_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture,
	(void *) M_java_util_concurrent_AbstractExecutorService_doInvokeAny_java_util_Collection_boolean_long_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinPool_createWorker_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_tryAddWorker_long,
	(void *) M_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue,
	(void *) M_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable,
	(void *) M_java_util_concurrent_ForkJoinPool_signalWork,
	(void *) M_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue,
	(void *) M_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue,
	(void *) M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_helpComplete_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_CountedCompleter_int_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object,
	(void *) M_java_util_concurrent_ForkJoinPool_execute_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_getFactory_R_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory,
	(void *) M_java_util_concurrent_ForkJoinPool_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler,
	(void *) M_java_util_concurrent_ForkJoinPool_getParallelism_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_getPoolSize_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_getAsyncMode_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_getRunningThreadCount_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_getActiveThreadCount_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_getStealCount_R_long,
	(void *) M_java_util_concurrent_ForkJoinPool_getQueuedTaskCount_R_long,
	(void *) M_java_util_concurrent_ForkJoinPool_getQueuedSubmissionCount_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_hasQueuedSubmissions_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask,
	(void *) M_java_util_concurrent_ForkJoinPool_drainTasksTo_java_util_Collection_R_int,
	(void *) M_java_util_concurrent_ForkJoinPool_isTerminating_R_boolean,
	(void *) M_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean,
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
	{ "execute", "(Ljava/lang/Runnable;)V" },
	{ "shutdown", "()V" },
	{ "shutdownNow", "()Ljava/util/List;" },
	{ "isShutdown", "()Z" },
	{ "isTerminated", "()Z" },
	{ "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" },
	{ "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;" },
	{ "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;" },
	{ "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;" },
	{ "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;" },
	{ "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" },
	{ "newTaskFor", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;" },
	{ "newTaskFor", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;" },
	{ "doInvokeAny", "(Ljava/util/Collection;ZJ)Ljava/lang/Object;" },
	{ "createWorker", "()Z" },
	{ "tryAddWorker", "(J)V" },
	{ "registerWorker", "(Ljava/util/concurrent/ForkJoinWorkerThread;)Ljava/util/concurrent/ForkJoinPool$WorkQueue;" },
	{ "deregisterWorker", "(Ljava/util/concurrent/ForkJoinWorkerThread;Ljava/lang/Throwable;)V" },
	{ "signalWork", "()V" },
	{ "tryCompensate", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)I" },
	{ "runWorker", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V" },
	{ "awaitJoin", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;Ljava/util/concurrent/ForkJoinTask;J)I" },
	{ "helpQuiescePool", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V" },
	{ "pollScan", "(Z)Ljava/util/concurrent/ForkJoinTask;" },
	{ "nextTaskFor", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "externalPush", "(Ljava/util/concurrent/ForkJoinTask;)V" },
	{ "externalSubmit", "(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "tryExternalUnpush", "(Ljava/util/concurrent/ForkJoinTask;)Z" },
	{ "externalHelpComplete", "(Ljava/util/concurrent/CountedCompleter;I)I" },
	{ "helpComplete", "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;Ljava/util/concurrent/CountedCompleter;I)I" },
	{ "tryTerminate", "(ZZ)Z" },
	{ "newInstanceFromSystemProperty", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "invoke", "(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;" },
	{ "execute", "(Ljava/util/concurrent/ForkJoinTask;)V" },
	{ "submit", "(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;" },
	{ "getFactory", "()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;" },
	{ "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" },
	{ "getParallelism", "()I" },
	{ "getPoolSize", "()I" },
	{ "getAsyncMode", "()Z" },
	{ "getRunningThreadCount", "()I" },
	{ "getActiveThreadCount", "()I" },
	{ "isQuiescent", "()Z" },
	{ "getStealCount", "()J" },
	{ "getQueuedTaskCount", "()J" },
	{ "getQueuedSubmissionCount", "()I" },
	{ "hasQueuedSubmissions", "()Z" },
	{ "pollSubmission", "()Ljava/util/concurrent/ForkJoinTask;" },
	{ "drainTasksTo", "(Ljava/util/Collection;)I" },
	{ "isTerminating", "()Z" },
	{ "awaitQuiescence", "(JLjava/util/concurrent/TimeUnit;)Z" },
};

static jclass innerClasses[] {
	&class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory,
	&class_java_util_concurrent_ForkJoinPool$WorkQueue,
	&class_java_util_concurrent_ForkJoinPool$ManagedBlocker,
	&class_java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory,
	&class_java_util_concurrent_ForkJoinPool$InnocuousForkJoinWorkerThreadFactory,
};

static FieldMetadata fields[] {
	{ "SWIDTH", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SWIDTH, "I", 24 },
	{ "SMASK", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SMASK, "I", 24 },
	{ "MAX_CAP", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_MAX_CAP, "I", 24 },
	{ "SQMASK", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SQMASK, "I", 24 },
	{ "UNSIGNALLED", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_UNSIGNALLED, "I", 24 },
	{ "SS_SEQ", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SS_SEQ, "I", 24 },
	{ "QLOCK", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_QLOCK, "I", 24 },
	{ "OWNED", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_OWNED, "I", 24 },
	{ "FIFO", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_FIFO, "I", 24 },
	{ "SHUTDOWN", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SHUTDOWN, "I", 24 },
	{ "TERMINATED", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_TERMINATED, "I", 24 },
	{ "STOP", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_STOP, "I", 24 },
	{ "QUIET", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_QUIET, "I", 24 },
	{ "DORMANT", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_DORMANT, "I", 24 },
	{ "POLL_LIMIT", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_POLL_LIMIT, "I", 24 },
	{ "defaultForkJoinWorkerThreadFactory", &class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_defaultForkJoinWorkerThreadFactory, "Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;", 25 },
	{ "modifyThreadPermission", &class_java_lang_RuntimePermission, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_modifyThreadPermission, "Ljava/lang/RuntimePermission;", 24 },
	{ "common", &class_java_util_concurrent_ForkJoinPool, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_common, "Ljava/util/concurrent/ForkJoinPool;", 24 },
	{ "COMMON_PARALLELISM", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_COMMON_PARALLELISM, "I", 24 },
	{ "COMMON_MAX_SPARES", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_COMMON_MAX_SPARES, "I", 26 },
	{ "poolNumberSequence", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_poolNumberSequence, "I", 10 },
	{ "DEFAULT_KEEPALIVE", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_DEFAULT_KEEPALIVE, "J", 26 },
	{ "TIMEOUT_SLOP", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_TIMEOUT_SLOP, "J", 26 },
	{ "DEFAULT_COMMON_MAX_SPARES", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_DEFAULT_COMMON_MAX_SPARES, "I", 26 },
	{ "SEED_INCREMENT", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SEED_INCREMENT, "I", 26 },
	{ "SP_MASK", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_SP_MASK, "J", 26 },
	{ "UC_MASK", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_UC_MASK, "J", 26 },
	{ "RC_SHIFT", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_RC_SHIFT, "I", 26 },
	{ "RC_UNIT", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_RC_UNIT, "J", 26 },
	{ "RC_MASK", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_RC_MASK, "J", 26 },
	{ "TC_SHIFT", &class_int, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_TC_SHIFT, "I", 26 },
	{ "TC_UNIT", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_TC_UNIT, "J", 26 },
	{ "TC_MASK", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_TC_MASK, "J", 26 },
	{ "ADD_WORKER", &class_long, (intptr_t) &SF_java_util_concurrent_ForkJoinPool_ADD_WORKER, "J", 26 },
	{ "stealCount", &class_long, offsetof(java_util_concurrent_ForkJoinPool, F_stealCount), "J", 64 },
	{ "keepAlive", &class_long, offsetof(java_util_concurrent_ForkJoinPool, F_keepAlive), "J", 16 },
	{ "indexSeed", &class_int, offsetof(java_util_concurrent_ForkJoinPool, F_indexSeed), "I", 0 },
	{ "bounds", &class_int, offsetof(java_util_concurrent_ForkJoinPool, F_bounds), "I", 16 },
	{ "mode", &class_int, offsetof(java_util_concurrent_ForkJoinPool, F_mode), "I", 64 },
	{ "workQueues", getArrayClass(&class_java_util_concurrent_ForkJoinPool$WorkQueue, 1), offsetof(java_util_concurrent_ForkJoinPool, F_workQueues), "[Ljava/util/concurrent/ForkJoinPool$WorkQueue;", 0 },
	{ "workerNamePrefix", &class_java_lang_String, offsetof(java_util_concurrent_ForkJoinPool, F_workerNamePrefix), "Ljava/lang/String;", 16 },
	{ "factory", &class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, offsetof(java_util_concurrent_ForkJoinPool, F_factory), "Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;", 16 },
	{ "ueh", &class_java_lang_Thread$UncaughtExceptionHandler, offsetof(java_util_concurrent_ForkJoinPool, F_ueh), "Ljava/lang/Thread$UncaughtExceptionHandler;", 16 },
	{ "saturate", &class_java_util_function_Predicate, offsetof(java_util_concurrent_ForkJoinPool, F_saturate), "Ljava/util/function/Predicate;", 16 },
	{ "ctl", &class_long, offsetof(java_util_concurrent_ForkJoinPool, F_ctl), "J", 64 },
};

static MethodMetadata methods[] {
	{ "checkPermission", (intptr_t) SM_java_util_concurrent_ForkJoinPool_checkPermission, 0, "()V", 10 },
	{ "nextPoolId", (intptr_t) SM_java_util_concurrent_ForkJoinPool_nextPoolId_R_int, 0, "()I", 58 },
	{ "createWorker", (intptr_t) M_java_util_concurrent_ForkJoinPool_createWorker_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_createWorker_R_boolean, "()Z", 2 },
	{ "tryAddWorker", (intptr_t) M_java_util_concurrent_ForkJoinPool_tryAddWorker_long, VTABLE_java_util_concurrent_ForkJoinPool_tryAddWorker_long, "(J)V", 34 },
	{ "registerWorker", (intptr_t) M_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue, VTABLE_java_util_concurrent_ForkJoinPool_registerWorker_java_util_concurrent_ForkJoinWorkerThread_R_java_util_concurrent_ForkJoinPool$WorkQueue, "(Ljava/util/concurrent/ForkJoinWorkerThread;)Ljava/util/concurrent/ForkJoinPool$WorkQueue;", 16 },
	{ "deregisterWorker", (intptr_t) M_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable, VTABLE_java_util_concurrent_ForkJoinPool_deregisterWorker_java_util_concurrent_ForkJoinWorkerThread_java_lang_Throwable, "(Ljava/util/concurrent/ForkJoinWorkerThread;Ljava/lang/Throwable;)V", 48 },
	{ "signalWork", (intptr_t) M_java_util_concurrent_ForkJoinPool_signalWork, VTABLE_java_util_concurrent_ForkJoinPool_signalWork, "()V", 48 },
	{ "tryCompensate", (intptr_t) M_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int, VTABLE_java_util_concurrent_ForkJoinPool_tryCompensate_java_util_concurrent_ForkJoinPool$WorkQueue_R_int, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)I", 34 },
	{ "runWorker", (intptr_t) M_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue, VTABLE_java_util_concurrent_ForkJoinPool_runWorker_java_util_concurrent_ForkJoinPool$WorkQueue, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V", 48 },
	{ "awaitJoin", (intptr_t) M_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int, VTABLE_java_util_concurrent_ForkJoinPool_awaitJoin_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_ForkJoinTask_long_R_int, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;Ljava/util/concurrent/ForkJoinTask;J)I", 48 },
	{ "helpQuiescePool", (intptr_t) M_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue, VTABLE_java_util_concurrent_ForkJoinPool_helpQuiescePool_java_util_concurrent_ForkJoinPool$WorkQueue, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)V", 48 },
	{ "pollScan", (intptr_t) M_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_pollScan_boolean_R_java_util_concurrent_ForkJoinTask, "(Z)Ljava/util/concurrent/ForkJoinTask;", 34 },
	{ "nextTaskFor", (intptr_t) M_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_nextTaskFor_java_util_concurrent_ForkJoinPool$WorkQueue_R_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;)Ljava/util/concurrent/ForkJoinTask;", 16 },
	{ "externalPush", (intptr_t) M_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_externalPush_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)V", 16 },
	{ "externalSubmit", (intptr_t) M_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_externalSubmit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;", 2 },
	{ "commonSubmitterQueue", (intptr_t) SM_java_util_concurrent_ForkJoinPool_commonSubmitterQueue_R_java_util_concurrent_ForkJoinPool$WorkQueue, 0, "()Ljava/util/concurrent/ForkJoinPool$WorkQueue;", 8 },
	{ "tryExternalUnpush", (intptr_t) M_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_tryExternalUnpush_java_util_concurrent_ForkJoinTask_R_boolean, "(Ljava/util/concurrent/ForkJoinTask;)Z", 16 },
	{ "externalHelpComplete", (intptr_t) M_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int, VTABLE_java_util_concurrent_ForkJoinPool_externalHelpComplete_java_util_concurrent_CountedCompleter_int_R_int, "(Ljava/util/concurrent/CountedCompleter;I)I", 17 },
	{ "helpComplete", (intptr_t) M_java_util_concurrent_ForkJoinPool_helpComplete_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_CountedCompleter_int_R_int, VTABLE_java_util_concurrent_ForkJoinPool_helpComplete_java_util_concurrent_ForkJoinPool$WorkQueue_java_util_concurrent_CountedCompleter_int_R_int, "(Ljava/util/concurrent/ForkJoinPool$WorkQueue;Ljava/util/concurrent/CountedCompleter;I)I", 16 },
	{ "getSurplusQueuedTaskCount", (intptr_t) SM_java_util_concurrent_ForkJoinPool_getSurplusQueuedTaskCount_R_int, 0, "()I", 8 },
	{ "tryTerminate", (intptr_t) M_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_tryTerminate_boolean_boolean_R_boolean, "(ZZ)Z", 34 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean, 0, "(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;Z)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool_int_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_java_lang_Thread$UncaughtExceptionHandler_boolean_int_int_int_java_util_function_Predicate_long_java_util_concurrent_TimeUnit, 0, "(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;ZIIILjava/util/function/Predicate;JLjava/util/concurrent/TimeUnit;)V", 1 },
	{ "newInstanceFromSystemProperty", (intptr_t) M_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinPool_newInstanceFromSystemProperty_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 2 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinPool_byte, 0, "(B)V", 2 },
	{ "commonPool", (intptr_t) SM_java_util_concurrent_ForkJoinPool_commonPool_R_java_util_concurrent_ForkJoinPool, 0, "()Ljava/util/concurrent/ForkJoinPool;", 9 },
	{ "invoke", (intptr_t) M_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object, VTABLE_java_util_concurrent_ForkJoinPool_invoke_java_util_concurrent_ForkJoinTask_R_java_lang_Object, "(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;", 1 },
	{ "execute", (intptr_t) M_java_util_concurrent_ForkJoinPool_execute_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_execute_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)V", 1 },
	{ "execute", (intptr_t) M_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable, VTABLE_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_ForkJoinTask_R_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_ForkJoinTask, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/ForkJoinTask;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_ForkJoinTask, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;", 1 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask, "(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;", 1 },
	{ "invokeAll", (intptr_t) M_java_util_concurrent_ForkJoinPool_invokeAll_java_util_Collection_R_java_util_List, VTABLE_java_util_concurrent_ForkJoinPool_invokeAll_java_util_Collection_R_java_util_List, "(Ljava/util/Collection;)Ljava/util/List;", 1 },
	{ "getFactory", (intptr_t) M_java_util_concurrent_ForkJoinPool_getFactory_R_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, VTABLE_java_util_concurrent_ForkJoinPool_getFactory_R_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory, "()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;", 1 },
	{ "getUncaughtExceptionHandler", (intptr_t) M_java_util_concurrent_ForkJoinPool_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler, VTABLE_java_util_concurrent_ForkJoinPool_getUncaughtExceptionHandler_R_java_lang_Thread$UncaughtExceptionHandler, "()Ljava/lang/Thread$UncaughtExceptionHandler;", 1 },
	{ "getParallelism", (intptr_t) M_java_util_concurrent_ForkJoinPool_getParallelism_R_int, VTABLE_java_util_concurrent_ForkJoinPool_getParallelism_R_int, "()I", 1 },
	{ "getCommonPoolParallelism", (intptr_t) SM_java_util_concurrent_ForkJoinPool_getCommonPoolParallelism_R_int, 0, "()I", 9 },
	{ "getPoolSize", (intptr_t) M_java_util_concurrent_ForkJoinPool_getPoolSize_R_int, VTABLE_java_util_concurrent_ForkJoinPool_getPoolSize_R_int, "()I", 1 },
	{ "getAsyncMode", (intptr_t) M_java_util_concurrent_ForkJoinPool_getAsyncMode_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_getAsyncMode_R_boolean, "()Z", 1 },
	{ "getRunningThreadCount", (intptr_t) M_java_util_concurrent_ForkJoinPool_getRunningThreadCount_R_int, VTABLE_java_util_concurrent_ForkJoinPool_getRunningThreadCount_R_int, "()I", 1 },
	{ "getActiveThreadCount", (intptr_t) M_java_util_concurrent_ForkJoinPool_getActiveThreadCount_R_int, VTABLE_java_util_concurrent_ForkJoinPool_getActiveThreadCount_R_int, "()I", 1 },
	{ "isQuiescent", (intptr_t) M_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_isQuiescent_R_boolean, "()Z", 1 },
	{ "getStealCount", (intptr_t) M_java_util_concurrent_ForkJoinPool_getStealCount_R_long, VTABLE_java_util_concurrent_ForkJoinPool_getStealCount_R_long, "()J", 1 },
	{ "getQueuedTaskCount", (intptr_t) M_java_util_concurrent_ForkJoinPool_getQueuedTaskCount_R_long, VTABLE_java_util_concurrent_ForkJoinPool_getQueuedTaskCount_R_long, "()J", 1 },
	{ "getQueuedSubmissionCount", (intptr_t) M_java_util_concurrent_ForkJoinPool_getQueuedSubmissionCount_R_int, VTABLE_java_util_concurrent_ForkJoinPool_getQueuedSubmissionCount_R_int, "()I", 1 },
	{ "hasQueuedSubmissions", (intptr_t) M_java_util_concurrent_ForkJoinPool_hasQueuedSubmissions_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_hasQueuedSubmissions_R_boolean, "()Z", 1 },
	{ "pollSubmission", (intptr_t) M_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask, VTABLE_java_util_concurrent_ForkJoinPool_pollSubmission_R_java_util_concurrent_ForkJoinTask, "()Ljava/util/concurrent/ForkJoinTask;", 4 },
	{ "drainTasksTo", (intptr_t) M_java_util_concurrent_ForkJoinPool_drainTasksTo_java_util_Collection_R_int, VTABLE_java_util_concurrent_ForkJoinPool_drainTasksTo_java_util_Collection_R_int, "(Ljava/util/Collection;)I", 4 },
	{ "toString", (intptr_t) M_java_util_concurrent_ForkJoinPool_toString_R_java_lang_String, VTABLE_java_util_concurrent_ForkJoinPool_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "shutdown", (intptr_t) M_java_util_concurrent_ForkJoinPool_shutdown, VTABLE_java_util_concurrent_ForkJoinPool_shutdown, "()V", 1 },
	{ "shutdownNow", (intptr_t) M_java_util_concurrent_ForkJoinPool_shutdownNow_R_java_util_List, VTABLE_java_util_concurrent_ForkJoinPool_shutdownNow_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "isTerminated", (intptr_t) M_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_isTerminated_R_boolean, "()Z", 1 },
	{ "isTerminating", (intptr_t) M_java_util_concurrent_ForkJoinPool_isTerminating_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_isTerminating_R_boolean, "()Z", 1 },
	{ "isShutdown", (intptr_t) M_java_util_concurrent_ForkJoinPool_isShutdown_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_isShutdown_R_boolean, "()Z", 1 },
	{ "awaitTermination", (intptr_t) M_java_util_concurrent_ForkJoinPool_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_awaitTermination_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "awaitQuiescence", (intptr_t) M_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_ForkJoinPool_awaitQuiescence_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "quiesceCommonPool", (intptr_t) SM_java_util_concurrent_ForkJoinPool_quiesceCommonPool, 0, "()V", 8 },
	{ "managedBlock", (intptr_t) SM_java_util_concurrent_ForkJoinPool_managedBlock_java_util_concurrent_ForkJoinPool$ManagedBlocker, 0, "(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V", 9 },
	{ "helpAsyncBlocker", (intptr_t) SM_java_util_concurrent_ForkJoinPool_helpAsyncBlocker_java_util_concurrent_Executor_java_util_concurrent_ForkJoinPool$ManagedBlocker, 0, "(Ljava/util/concurrent/Executor;Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V", 40 },
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_ForkJoinPool_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_ForkJoinPool_newTaskFor_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_RunnableFuture, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;", 4 },
	{ "newTaskFor", (intptr_t) M_java_util_concurrent_ForkJoinPool_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, VTABLE_java_util_concurrent_ForkJoinPool_newTaskFor_java_util_concurrent_Callable_R_java_util_concurrent_RunnableFuture, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;", 4 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_util_concurrent_Callable_R_java_util_concurrent_Future, "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;", 4161 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;", 4161 },
	{ "submit", (intptr_t) M_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_Future, VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_Future, "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ForkJoinPool, 0, "()V", 8 },
};

Class class_java_util_concurrent_ForkJoinPool{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinPool",
		.parentClass = (intptr_t) &class_java_util_concurrent_AbstractExecutorService,
		.size = sizeof(java_util_concurrent_ForkJoinPool),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinPool,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinPool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinPool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 45,
		.nativeFields = (intptr_t) fields,
		.methodCount = 68,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 67,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinPool = registerClass(&class_java_util_concurrent_ForkJoinPool);

}
