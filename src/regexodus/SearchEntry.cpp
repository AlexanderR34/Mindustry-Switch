#include "regexodus/SearchEntry.h"
#include "regexodus/SearchEntry_1.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "regexodus/SearchEntry_CState.h"
#include "regexodus/SearchEntry.h"
#include "regexodus/MemReg.h"
#include "regexodus/SearchEntry_MState.h"
#include "java/lang/Class.h"
#include "regexodus/Term.h"

extern "C" {

jlong SF_regexodus_SearchEntry_serialVersionUID;

void mark_regexodus_SearchEntry(jobject object, jint mark, jint depth) {
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
	auto self = (regexodus_SearchEntry *) object;
	if (self->F_term)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_term)->clazz)->markFunction)((jobject) self->F_term, mark, depth + 1);
	if (self->F_sub)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sub)->clazz)->markFunction)((jobject) self->F_sub, mark, depth + 1);
	if (self->F_on)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_on)->clazz)->markFunction)((jobject) self->F_on, mark, depth + 1);
	if (self->F_mHead)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mHead)->clazz)->markFunction)((jobject) self->F_mHead, mark, depth + 1);
	if (self->F_mCurrent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mCurrent)->clazz)->markFunction)((jobject) self->F_mCurrent, mark, depth + 1);
	if (self->F_cHead)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cHead)->clazz)->markFunction)((jobject) self->F_cHead, mark, depth + 1);
	if (self->F_cCurrent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cCurrent)->clazz)->markFunction)((jobject) self->F_cCurrent, mark, depth + 1);
}

void clinit_regexodus_SearchEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_SearchEntry_serialVersionUID = jlong(-3628346657932720807ll);
}

void init_regexodus_SearchEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2589);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_SearchEntry_saveMemregState_regexodus_SearchEntry_int_regexodus_MemReg(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:saveMemregState", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2615);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState = (jint(1));
	LINE_NUMBER(2616);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2617);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2618);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mHead;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2619);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_regexodus_SearchEntry$MState(ctx);
	sp[2].o = gcAlloc(ctx, &class_regexodus_SearchEntry$MState);
	init_regexodus_SearchEntry$MState_regexodus_SearchEntry$1(ctx, sp[2].o, (jobject(nullptr)));
	frame[3].o = sp[2].o;
	((regexodus_SearchEntry *) NULL_CHECK(sp[1].o))->F_mCurrent = (jref) sp[2].o;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_mHead = (jref) sp[2].o;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2620);
	frame[3].o = (frame[4].o);
	}
label_7:;
	LINE_NUMBER(2621);
	goto label_8;
label_3:;
	{
	LINE_NUMBER(2622);
	sp[0].o = (jobject)((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2623);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2624);
	sp[0].o = frame[3].o;
	clinit_regexodus_SearchEntry$MState(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_SearchEntry$MState);
	init_regexodus_SearchEntry$MState_regexodus_SearchEntry$1(ctx, sp[1].o, (jobject(nullptr)));
	frame[4].o = sp[1].o;
	((regexodus_SearchEntry$MState *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(2625);
	((regexodus_SearchEntry$MState *) NULL_CHECK((frame[4].o)))->F_prev = (jref) (frame[3].o);
	}
label_10:;
	{
	LINE_NUMBER(2627);
	frame[3].o = (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(2629);
	((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_index = (frame[1].i);
	LINE_NUMBER(2630);
	((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_in = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_in);
	LINE_NUMBER(2631);
	((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_out = ((jint)((regexodus_MemReg *) NULL_CHECK((frame[2].o)))->F_out);
	LINE_NUMBER(2632);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent = (jref) (frame[3].o);
	LINE_NUMBER(2633);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_SearchEntry_saveCntState_regexodus_SearchEntry_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:saveCntState", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2636);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState = (jint(1));
	LINE_NUMBER(2637);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2638);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2639);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cHead;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2640);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_regexodus_SearchEntry$CState(ctx);
	sp[2].o = gcAlloc(ctx, &class_regexodus_SearchEntry$CState);
	init_regexodus_SearchEntry$CState_regexodus_SearchEntry$1(ctx, sp[2].o, (jobject(nullptr)));
	frame[3].o = sp[2].o;
	((regexodus_SearchEntry *) NULL_CHECK(sp[1].o))->F_cCurrent = (jref) sp[2].o;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_cHead = (jref) sp[2].o;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(2641);
	frame[3].o = (frame[4].o);
	}
label_7:;
	LINE_NUMBER(2642);
	goto label_8;
label_3:;
	{
	LINE_NUMBER(2643);
	sp[0].o = (jobject)((regexodus_SearchEntry$CState *) NULL_CHECK((frame[3].o)))->F_next;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2644);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(2645);
	sp[0].o = frame[3].o;
	clinit_regexodus_SearchEntry$CState(ctx);
	sp[1].o = gcAlloc(ctx, &class_regexodus_SearchEntry$CState);
	init_regexodus_SearchEntry$CState_regexodus_SearchEntry$1(ctx, sp[1].o, (jobject(nullptr)));
	frame[4].o = sp[1].o;
	((regexodus_SearchEntry$CState *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(2646);
	((regexodus_SearchEntry$CState *) NULL_CHECK((frame[4].o)))->F_prev = (jref) (frame[3].o);
	}
label_10:;
	{
	LINE_NUMBER(2648);
	frame[3].o = (frame[4].o);
	}
label_8:;
	{
	LINE_NUMBER(2650);
	((regexodus_SearchEntry$CState *) NULL_CHECK((frame[3].o)))->F_index = (frame[1].i);
	LINE_NUMBER(2651);
	((regexodus_SearchEntry$CState *) NULL_CHECK((frame[3].o)))->F_value = (frame[2].i);
	LINE_NUMBER(2652);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent = (jref) (frame[3].o);
	LINE_NUMBER(2653);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:popState", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_SearchEntry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2656);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2657);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2658);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_index)));
	LINE_NUMBER(2659);
	((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_in = ((jint)((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_in);
	LINE_NUMBER(2660);
	((regexodus_MemReg *) NULL_CHECK((frame[4].o)))->F_out = ((jint)((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_out);
	LINE_NUMBER(2661);
	sp[0].o = (jobject)((regexodus_SearchEntry$MState *) NULL_CHECK((frame[3].o)))->F_prev;
	frame[3].o = sp[0].o;
	LINE_NUMBER(2662);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(2663);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	frame[4].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2664);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2665);
	ARRAY_ACCESS(jint, (frame[2].o), ((jint)((regexodus_SearchEntry$CState *) NULL_CHECK((frame[4].o)))->F_index)) = ((jint)((regexodus_SearchEntry$CState *) NULL_CHECK((frame[4].o)))->F_value);
	LINE_NUMBER(2666);
	sp[0].o = (jobject)((regexodus_SearchEntry$CState *) NULL_CHECK((frame[4].o)))->F_prev;
	frame[4].o = sp[0].o;
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2668);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent = (jref) (jobject(nullptr));
	LINE_NUMBER(2669);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent = (jref) (jobject(nullptr));
	LINE_NUMBER(2670);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState = (jint(0));
	LINE_NUMBER(2671);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_regexodus_SearchEntry_reset_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:reset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(2674);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_term = (jref) (jobject(nullptr));
	LINE_NUMBER(2675);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((regexodus_SearchEntry *) NULL_CHECK(sp[2].o))->F_regLen = temp0;
	((regexodus_SearchEntry *) NULL_CHECK(sp[1].o))->F_cnt = temp0;
	((regexodus_SearchEntry *) NULL_CHECK(sp[0].o))->F_index = temp0;
	LINE_NUMBER(2677);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent = (jref) (jobject(nullptr));
	LINE_NUMBER(2678);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent = (jref) (jobject(nullptr));
	LINE_NUMBER(2679);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState = (jint(0));
	LINE_NUMBER(2681);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_on;
	frame[2].o = sp[0].o;
	LINE_NUMBER(2682);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2683);
	if ((frame[1].i) <= 0) goto label_9;
	}
	{
	((func_regexodus_SearchEntry_reset_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_SearchEntry_reset_int])(ctx, (frame[2].o), ((frame[1].i) - (jint(1))));
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2685);
	((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_on = (jref) (jobject(nullptr));
	LINE_NUMBER(2686);
	((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_sub = (jref) (jobject(nullptr));
	}
label_7:;
	LINE_NUMBER(2689);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_regexodus_SearchEntry_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2693);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2694);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(2696);
	frame[2].o = (checkCast(ctx, &class_regexodus_SearchEntry, (frame[1].o)));
	LINE_NUMBER(2698);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_index) == ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_index)) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(2699);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cnt) == ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_cnt)) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(2700);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_regLen) == ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_regLen)) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(2701);
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState) == ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_isState)) goto label_8;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(2702);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_term;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_term;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_term;
	jint temp0 = (jint)((func_regexodus_Term_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	goto label_11;
label_9:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_term;
	if (sp[0].o == nullptr) goto label_10;
	}
label_11:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(2703);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_sub;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_sub;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_sub;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	goto label_14;
label_12:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_sub;
	if (sp[0].o == nullptr) goto label_13;
	}
label_14:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(2704);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_on;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_on;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_on;
	jint temp0 = (jint)((func_regexodus_SearchEntry_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_16;
	}
	goto label_17;
label_15:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_on;
	if (sp[0].o == nullptr) goto label_16;
	}
label_17:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_16:;
	{
	LINE_NUMBER(2705);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mHead;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mHead;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_mHead;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_19;
	}
	goto label_20;
label_18:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_mHead;
	if (sp[0].o == nullptr) goto label_19;
	}
label_20:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_19:;
	{
	LINE_NUMBER(2706);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_mCurrent;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_mCurrent;
	if (sp[0].o != nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cHead;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cHead;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_cHead;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_23;
	}
	goto label_25;
label_24:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_cHead;
	if (sp[0].o != nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	sp[1].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_cCurrent;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_23;
	}
	goto label_25;
label_26:;
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[2].o)))->F_cCurrent;
	if (sp[0].o != nullptr) goto label_23;
	}
label_25:;
	INST_ICONST(1);
	goto label_22;
label_23:;
	INST_ICONST(0);
label_22:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_SearchEntry_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2712);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_term;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_term;
	jint temp0 = (jint)((func_regexodus_Term_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Term_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(2713);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(2714);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cnt));
	LINE_NUMBER(2715);
	frame[1].i = (((31) * (frame[1].i)) + ((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_regLen));
	LINE_NUMBER(2716);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_isState) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2717);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mHead;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mHead;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2718);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_mCurrent;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2719);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cHead;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cHead;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2720);
	jint temp0 = (31) * (frame[1].i);
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((regexodus_SearchEntry *) NULL_CHECK((frame[0].o)))->F_cCurrent;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_20;
	}
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(2721);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_regexodus_SearchEntry_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/SearchEntry:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2726);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"SearchEntry{???}"_j)));
	}

	popStackFrame(ctx);
}

void *vtable_regexodus_SearchEntry[] {
	(void *) M_regexodus_SearchEntry_hashCode_R_int,
	(void *) M_regexodus_SearchEntry_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_SearchEntry_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_SearchEntry_reset_int,
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
	{ "reset", "(I)V" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_regexodus_SearchEntry$CState,
	&class_regexodus_SearchEntry$MState,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_SearchEntry_serialVersionUID, "J", 26 },
	{ "term", &class_regexodus_Term, offsetof(regexodus_SearchEntry, F_term), "Lregexodus/Term;", 0 },
	{ "index", &class_int, offsetof(regexodus_SearchEntry, F_index), "I", 0 },
	{ "cnt", &class_int, offsetof(regexodus_SearchEntry, F_cnt), "I", 0 },
	{ "regLen", &class_int, offsetof(regexodus_SearchEntry, F_regLen), "I", 0 },
	{ "isState", &class_boolean, offsetof(regexodus_SearchEntry, F_isState), "Z", 0 },
	{ "sub", &class_regexodus_SearchEntry, offsetof(regexodus_SearchEntry, F_sub), "Lregexodus/SearchEntry;", 0 },
	{ "on", &class_regexodus_SearchEntry, offsetof(regexodus_SearchEntry, F_on), "Lregexodus/SearchEntry;", 0 },
	{ "mHead", &class_regexodus_SearchEntry$MState, offsetof(regexodus_SearchEntry, F_mHead), "Lregexodus/SearchEntry$MState;", 2 },
	{ "mCurrent", &class_regexodus_SearchEntry$MState, offsetof(regexodus_SearchEntry, F_mCurrent), "Lregexodus/SearchEntry$MState;", 2 },
	{ "cHead", &class_regexodus_SearchEntry$CState, offsetof(regexodus_SearchEntry, F_cHead), "Lregexodus/SearchEntry$CState;", 2 },
	{ "cCurrent", &class_regexodus_SearchEntry$CState, offsetof(regexodus_SearchEntry, F_cCurrent), "Lregexodus/SearchEntry$CState;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_regexodus_SearchEntry, 0, "()V", 0 },
	{ "saveMemregState", (intptr_t) SM_regexodus_SearchEntry_saveMemregState_regexodus_SearchEntry_int_regexodus_MemReg, 0, "(Lregexodus/SearchEntry;ILregexodus/MemReg;)V", 8 },
	{ "saveCntState", (intptr_t) SM_regexodus_SearchEntry_saveCntState_regexodus_SearchEntry_int_int, 0, "(Lregexodus/SearchEntry;II)V", 8 },
	{ "popState", (intptr_t) SM_regexodus_SearchEntry_popState_regexodus_SearchEntry_Array1_regexodus_MemReg_Array1_int, 0, "(Lregexodus/SearchEntry;[Lregexodus/MemReg;[I)V", 8 },
	{ "reset", (intptr_t) M_regexodus_SearchEntry_reset_int, VTABLE_regexodus_SearchEntry_reset_int, "(I)V", 16 },
	{ "equals", (intptr_t) M_regexodus_SearchEntry_equals_java_lang_Object_R_boolean, VTABLE_regexodus_SearchEntry_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_SearchEntry_hashCode_R_int, VTABLE_regexodus_SearchEntry_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_regexodus_SearchEntry_toString_R_java_lang_String, VTABLE_regexodus_SearchEntry_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_regexodus_SearchEntry{
		.nativeName = (intptr_t) "regexodus/SearchEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_SearchEntry),
		.classVtable = (intptr_t) vtable_regexodus_SearchEntry,
		.staticInitializer = (intptr_t) clinit_regexodus_SearchEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_SearchEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_SearchEntry = registerClass(&class_regexodus_SearchEntry);

}
