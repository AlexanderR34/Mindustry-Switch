#include "arc/graphics/g2d/SpriteBatch_CountingSort.h"
#include "java/lang/Math.h"
#include "java/util/concurrent/ExecutionException.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask2.h"
#include "arc/struct/IntIntMap_Entry.h"
#include "java/lang/Runtime.h"
#include "java/lang/InterruptedException.h"
#include "java/util/concurrent/Future.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort_CountingSortTask.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/ForkJoinHolder.h"
#include "java/lang/Object.h"
#include "java/util/Arrays.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "arc/struct/IntIntMap_Entries.h"
#include "arc/graphics/g2d/SpriteBatch.h"
#include "java/util/concurrent/ForkJoinPool.h"
#include "arc/graphics/g2d/SpriteBatch_CountingSort.h"
#include "arc/struct/IntIntMap.h"

extern "C" {

jint SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s;
jobject SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures;

void mark_arc_graphics_g2d_SpriteBatch$CountingSort(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s, mark, depth + 1);
		if (SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_SpriteBatch$CountingSort *) object;
}

void init_arc_graphics_g2d_SpriteBatch$CountingSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(603);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMapMT_Array1_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[27];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort:countingSortMapMT", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(689);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
	frame[3].o = sp[0].o;
	LINE_NUMBER(690);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses;
	frame[4].o = sp[0].o;
	LINE_NUMBER(691);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors), (((frame[2].i) + (4095)) / (4096)));
	frame[5].i = temp0;
	LINE_NUMBER(692);
	frame[6].i = (((frame[2].i) / (frame[5].i)) + (jint(1)));
	LINE_NUMBER(693);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks;
	frame[7].o = sp[0].o;
	LINE_NUMBER(694);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s;
	frame[8].o = sp[0].o;
	LINE_NUMBER(695);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures;
	frame[9].o = sp[0].o;
	LINE_NUMBER(696);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_src = sp[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_arr = sp[0].o;
	LINE_NUMBER(697);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_dest = (frame[1].o);
	LINE_NUMBER(699);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	}
label_21:;
	{
	if ((frame[11].i) >= (frame[5].i)) goto label_22;
	}
	{
	LINE_NUMBER(700);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[11].i)));
	LINE_NUMBER(701);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[10].i) + (frame[6].i)), (frame[2].i));
	frame[13].i = temp0;
	LINE_NUMBER(702);
	((func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask_set_int_int_int])(ctx, (frame[12].o), (frame[10].i), (frame[13].i), (frame[11].i));
	LINE_NUMBER(703);
	((func_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[11].i))))->vtable)[VTABLE_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2_set_int_int_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[11].i))), (frame[10].i), (frame[13].i), (frame[11].i));
	LINE_NUMBER(704);
	sp[0].o = frame[9].o;
	jint temp1 = frame[11].i;
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_commonPool;
	sp[1].o = (jobject)((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[1].o))->F_pool;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask])(ctx, sp[1].o, (frame[12].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(699);
	INST_IINC(11, 1);
	frame[10].i = ((frame[10].i) + (frame[6].i));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(707);
	frame[10].i = (jint(0));
	LINE_NUMBER(708);
	frame[11].i = (jint(0));
	}
label_30:;
	{
	if ((frame[11].i) >= (frame[5].i)) goto label_31;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i))));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(713);
	goto label_32;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(711);
	frame[12].o = sp[0].o;
	LINE_NUMBER(712);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_commonPool;
	sp[0].o = (jobject)((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[0].o))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[11].i))));
	}
label_32:;
	{
	LINE_NUMBER(714);
	frame[10].i = ((frame[10].i) + ((jint)((arc_struct_IntIntMap *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[11].i)))))->F_size));
	LINE_NUMBER(708);
	INST_IINC(11, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(717);
	frame[11].i = (frame[10].i);
	LINE_NUMBER(718);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= ((frame[11].i) * (jint(3)))) goto label_36;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((frame[11].i) * (jint(3))) * (jint(3))) / (jint(2))));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3 = sp[0].o;
	LINE_NUMBER(720);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((frame[11].i) * (jint(3))) * (jint(3))) / (jint(2))));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a = sp[0].o;
	}
label_36:;
	{
	LINE_NUMBER(722);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[11].i)) goto label_39;
	}
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject) createArray(ctx, &class_long, (((frame[11].i) * (jint(3))) / (jint(2))));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(725);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3;
	frame[12].o = sp[0].o;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a;
	frame[13].o = sp[0].o;
	LINE_NUMBER(726);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT;
	frame[14].o = sp[0].o;
	LINE_NUMBER(728);
	frame[15].i = (jint(0));
	LINE_NUMBER(729);
	frame[16].i = (jint(0));
	}
label_45:;
	{
	if ((frame[16].i) >= (frame[5].i)) goto label_46;
	}
	{
	LINE_NUMBER(730);
	if (((jint)((arc_struct_IntIntMap *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[16].i)))))->F_size) != 0) goto label_48;
	}
	goto label_49;
label_48:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[16].i))))->vtable)[VTABLE_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[16].i))));
	frame[17].o = sp[0].o;
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry])(ctx, (frame[17].o));
	frame[18].o = sp[0].o;
	LINE_NUMBER(733);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[15].i)) = ((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[18].o)))->F_key);
	LINE_NUMBER(734);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[15].i) + (jint(1)))) = ((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[18].o)))->F_value);
	LINE_NUMBER(735);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[15].i) + (jint(2)))) = (frame[16].i);
	LINE_NUMBER(736);
	INST_IINC(15, 3);
	}
label_55:;
	{
	LINE_NUMBER(737);
	if (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[17].o)))->F_hasNext) == 0) goto label_49;
	}
	{
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry])(ctx, (frame[17].o));
	LINE_NUMBER(739);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[15].i)) = ((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[18].o)))->F_key);
	LINE_NUMBER(740);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[15].i) + (jint(1)))) = ((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[18].o)))->F_value);
	LINE_NUMBER(741);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[15].i) + (jint(2)))) = (frame[16].i);
	LINE_NUMBER(742);
	INST_IINC(15, 3);
	goto label_55;
	}
label_49:;
	{
	LINE_NUMBER(729);
	INST_IINC(16, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(747);
	frame[16].i = (jint(0));
	}
label_61:;
	{
	if ((frame[16].i) >= (frame[11].i)) goto label_62;
	}
	{
	LINE_NUMBER(748);
	ARRAY_ACCESS(jlong, (frame[14].o), (frame[16].i)) = (((jlong(((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[16].i) * (jint(3))))))) << (32)) | ((jlong((frame[16].i))) & (jlong(4294967295ll))));
	LINE_NUMBER(747);
	INST_IINC(16, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(750);
	SM_java_util_Arrays_sort_Array1_long_int_int(ctx, (frame[14].o), (jint(0)), (frame[11].i));
	LINE_NUMBER(752);
	frame[16].i = (jint(0));
	}
label_66:;
	{
	if ((frame[16].i) >= (frame[11].i)) goto label_67;
	}
	{
	LINE_NUMBER(753);
	frame[17].i = ((jint(((jlong)ARRAY_ACCESS(jlong, (frame[14].o), (frame[16].i))))) * (jint(3)));
	frame[18].i = ((frame[16].i) * (jint(3)));
	LINE_NUMBER(754);
	ARRAY_ACCESS(jint, (frame[13].o), (frame[18].i)) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[17].i)));
	LINE_NUMBER(755);
	ARRAY_ACCESS(jint, (frame[13].o), ((frame[18].i) + (jint(1)))) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[17].i) + (jint(1)))));
	LINE_NUMBER(756);
	ARRAY_ACCESS(jint, (frame[13].o), ((frame[18].i) + (jint(2)))) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[17].i) + (jint(2)))));
	LINE_NUMBER(752);
	INST_IINC(16, 1);
	goto label_66;
	}
label_67:;
	{
	LINE_NUMBER(759);
	frame[16].i = (jint(0));
	frame[17].i = (jint(0));
	}
label_75:;
	{
	if ((frame[16].i) >= ((frame[11].i) * (jint(3)))) goto label_76;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[13].o), ((frame[16].i) + (jint(2))))));
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[13].o), ((frame[16].i) + (jint(1))));
	jint temp3 = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[17].i);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	frame[17].i = temp3;
	LINE_NUMBER(759);
	INST_IINC(16, 3);
	goto label_75;
	}
label_76:;
	{
	LINE_NUMBER(763);
	frame[16].i = (jint(0));
	}
label_79:;
	{
	if ((frame[16].i) >= (frame[5].i)) goto label_80;
	}
	{
	LINE_NUMBER(764);
	sp[0].o = frame[9].o;
	jint temp0 = frame[16].i;
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_commonPool;
	sp[1].o = (jobject)((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[1].o))->F_pool;
	sp[1].o = (jobject)((func_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_submit_java_lang_Runnable_R_java_util_concurrent_ForkJoinTask])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[16].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(763);
	INST_IINC(16, 1);
	goto label_79;
	}
label_80:;
	{
	LINE_NUMBER(766);
	frame[16].i = (jint(0));
	}
label_83:;
	{
	if ((frame[16].i) >= (frame[5].i)) goto label_84;
	}
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_util_concurrent_ExecutionException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_7; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InterruptedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_7; }
	}
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((func_java_util_concurrent_Future_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_concurrent_Future, INDEX_java_util_concurrent_Future_get_R_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[16].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[16].i))));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(771);
	goto label_85;
label_7:;
	{
	sp -= 1;
	LINE_NUMBER(769);
	frame[17].o = sp[0].o;
	LINE_NUMBER(770);
	clinit_arc_graphics_g2d_SpriteBatch(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch_commonPool;
	sp[0].o = (jobject)((arc_graphics_g2d_ForkJoinHolder *) NULL_CHECK(sp[0].o))->F_pool;
	((func_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_ForkJoinPool_execute_java_lang_Runnable])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[16].i))));
	}
label_85:;
	{
	LINE_NUMBER(766);
	INST_IINC(16, 1);
	goto label_83;
	}
label_84:;
	{
	LINE_NUMBER(773);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMap_Array1_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[24];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort:countingSortMap", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(777);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs;
	frame[3].o = sp[0].o;
	LINE_NUMBER(778);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(779);
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, (frame[4].o));
	LINE_NUMBER(781);
	frame[5].i = (jint(0));
	LINE_NUMBER(782);
	frame[6].i = ((frame[2].i) * (jint(3)));
	LINE_NUMBER(783);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(784);
	jint temp0 = (jint)((func_arc_struct_IntIntMap_putMissing_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntIntMap_putMissing_int_int_R_int])(ctx, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[7].i))), (frame[5].i));
	frame[8].i = temp0;
	LINE_NUMBER(785);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[7].i)) = (frame[8].i);
	LINE_NUMBER(786);
	if ((frame[8].i) != (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(787);
	if ((frame[5].i) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_13;
	}
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, (frame[3].o), (((frame[5].i) * (jint(3))) / (jint(2))));
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(790);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(792);
	sp[0].o = frame[3].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(783);
	INST_IINC(7, 3);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(795);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs = (frame[3].o);
	LINE_NUMBER(797);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[5].i)) goto label_17;
	}
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject) createArray(ctx, &class_long, (((frame[5].i) * (jint(3))) / (jint(2))));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(800);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys;
	frame[7].o = sp[0].o;
	LINE_NUMBER(803);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries])(ctx, (frame[4].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(804);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(805);
	ARRAY_ACCESS(jlong, (frame[7].o), (jint(0))) = (((jlong(((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_key))) << (32)) | ((jlong(((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_value))) & (jlong(4294967295ll))));
	LINE_NUMBER(806);
	frame[10].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(807);
	if (((jint)((arc_struct_IntIntMap$MapIterator *) NULL_CHECK((frame[8].o)))->F_hasNext) == 0) goto label_24;
	}
	{
	LINE_NUMBER(808);
	sp[0].o = (jobject)((func_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntIntMap$Entries_next_R_arc_struct_IntIntMap$Entry])(ctx, (frame[8].o));
	LINE_NUMBER(809);
	sp[0].o = frame[7].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (((jlong(((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_key))) << (32)) | ((jlong(((jint)((arc_struct_IntIntMap$Entry *) NULL_CHECK((frame[9].o)))->F_value))) & (jlong(4294967295ll))));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(813);
	SM_java_util_Arrays_sort_Array1_long_int_int(ctx, (frame[7].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(815);
	frame[11].i = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[7].o), (jint(0))))));
	LINE_NUMBER(816);
	frame[13].i = (jint(1));
	}
label_29:;
	{
	if ((frame[13].i) >= (frame[5].i)) goto label_30;
	}
	{
	LINE_NUMBER(817);
	frame[12].i = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[7].o), (frame[13].i)))));
	LINE_NUMBER(818);
	sp[0].o = frame[3].o;
	jint temp0 = frame[12].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[11].i))));
	LINE_NUMBER(819);
	frame[11].i = (frame[12].i);
	LINE_NUMBER(816);
	INST_IINC(13, 1);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(821);
	frame[13].i = ((frame[2].i) - (jint(1)));
	frame[14].i = ((frame[13].i) * (jint(3)));
	}
label_36:;
	INST_ILOAD(13);
	if ((--sp)->i < 0) goto label_37;
	{
	LINE_NUMBER(822);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[14].i));
	jint temp3 = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp3;
	frame[15].i = (temp3 * (jint(3)));
	LINE_NUMBER(823);
	ARRAY_ACCESS(jint, (frame[1].o), (frame[15].i)) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[14].i)));
	LINE_NUMBER(824);
	ARRAY_ACCESS(jint, (frame[1].o), ((frame[15].i) + (jint(1)))) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[14].i) + (jint(1)))));
	LINE_NUMBER(825);
	ARRAY_ACCESS(jint, (frame[1].o), ((frame[15].i) + (jint(2)))) = ((jint)ARRAY_ACCESS(jint, (frame[0].o), ((frame[14].i) + (jint(2)))));
	LINE_NUMBER(821);
	INST_IINC(13, -1);
	INST_IINC(14, -3);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(827);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_SpriteBatch$CountingSort(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/SpriteBatch$CountingSort:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[0].o);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors = (temp0 * (8));
	LINE_NUMBER(606);
	sp[0].o = (jobject) createArray(ctx, &class_int, (100));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs = sp[0].o;
	LINE_NUMBER(607);
	sp[0].o = (jobject)createMultiArray(ctx, &class_int, {(clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors), (100)});
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses = sp[0].o;
	LINE_NUMBER(609);
	sp[0].o = (jobject)createArray(ctx, &class_arc_struct_IntIntMap, (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses = sp[0].o;
	LINE_NUMBER(611);
	sp[0].o = (jobject) createArray(ctx, &class_int, (300));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3 = sp[0].o;
	sp[0].o = (jobject) createArray(ctx, &class_int, (300));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a = sp[0].o;
	LINE_NUMBER(614);
	sp[0].o = (jobject) createArray(ctx, &class_long, (100));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys = sp[0].o;
	LINE_NUMBER(615);
	sp[0].o = (jobject) createArray(ctx, &class_long, (100));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT = sp[0].o;
	LINE_NUMBER(617);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks = sp[0].o;
	LINE_NUMBER(618);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s = sp[0].o;
	LINE_NUMBER(619);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_concurrent_Future, (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors));
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures = sp[0].o;
	LINE_NUMBER(622);
	frame[0].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[0].i;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses;
	jint temp0 = frame[0].i;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	INST_IINC(0, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(624);
	frame[0].i = (jint(0));
	}
label_13:;
	{
	if ((frame[0].i) >= (clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx), (jint)SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors)) goto label_14;
	}
	{
	LINE_NUMBER(625);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks;
	jint temp0 = frame[0].i;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask);
	init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(626);
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s;
	jint temp1 = frame[0].i;
	clinit_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2);
	init_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(624);
	INST_IINC(0, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(628);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_SpriteBatch$CountingSort[] {
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

static jclass innerClasses[] {
	&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask,
	&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2,
};

static FieldMetadata fields[] {
	{ "processors", &class_int, (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_processors, "I", 26 },
	{ "locs", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_locs, "[I", 8 },
	{ "locses", getArrayClass(&class_int, 2), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_locses, "[[I", 24 },
	{ "countses", getArrayClass(&class_arc_struct_IntIntMap, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_countses, "[Larc/struct/IntIntMap;", 24 },
	{ "entries3", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3, "[I", 10 },
	{ "entries3a", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_entries3a, "[I", 10 },
	{ "packedKeys", getArrayClass(&class_long, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeys, "[J", 10 },
	{ "packedKeysMT", getArrayClass(&class_long, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_packedKeysMT, "[J", 10 },
	{ "tasks", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_tasks, "[Larc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask;", 26 },
	{ "task2s", getArrayClass(&class_arc_graphics_g2d_SpriteBatch$CountingSort$CountingSortTask2, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_task2s, "[Larc/graphics/g2d/SpriteBatch$CountingSort$CountingSortTask2;", 26 },
	{ "futures", getArrayClass(&class_java_util_concurrent_Future, 1), (intptr_t) &SF_arc_graphics_g2d_SpriteBatch$CountingSort_futures, "[Ljava/util/concurrent/Future;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_SpriteBatch$CountingSort, 0, "()V", 0 },
	{ "countingSortMapMT", (intptr_t) SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMapMT_Array1_int_Array1_int_int_R_Array1_int, 0, "([I[II)[I", 8 },
	{ "countingSortMap", (intptr_t) SM_arc_graphics_g2d_SpriteBatch$CountingSort_countingSortMap_Array1_int_Array1_int_int_R_Array1_int, 0, "([I[II)[I", 8 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$CountingSort, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_SpriteBatch$CountingSort{
		.nativeName = (intptr_t) "arc/graphics/g2d/SpriteBatch$CountingSort",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_SpriteBatch$CountingSort),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_SpriteBatch$CountingSort,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_SpriteBatch$CountingSort,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_SpriteBatch$CountingSort,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_SpriteBatch,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_SpriteBatch$CountingSort = registerClass(&class_arc_graphics_g2d_SpriteBatch$CountingSort);

}

