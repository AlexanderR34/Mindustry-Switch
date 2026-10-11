#include "mindustry/core/PerfCounter.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/math/WindowedMean.h"
#include "mindustry/core/PerfCounter.h"
#include "arc/util/Time.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_core_PerfCounter_frame;
jobject SF_mindustry_core_PerfCounter_update;
jobject SF_mindustry_core_PerfCounter_other;
jobject SF_mindustry_core_PerfCounter_stateUpdate;
jobject SF_mindustry_core_PerfCounter_entityMisc;
jobject SF_mindustry_core_PerfCounter_entityUpdate;
jobject SF_mindustry_core_PerfCounter_buildingUpdate;
jobject SF_mindustry_core_PerfCounter_powerUpdate;
jobject SF_mindustry_core_PerfCounter_unitUpdate;
jobject SF_mindustry_core_PerfCounter_unitPhysicsAsync;
jobject SF_mindustry_core_PerfCounter_unitPhysicsWait;
jobject SF_mindustry_core_PerfCounter_bulletUpdate;
jobject SF_mindustry_core_PerfCounter_ui;
jobject SF_mindustry_core_PerfCounter_render;
jobject SF_mindustry_core_PerfCounter_all;
jobject SF_mindustry_core_PerfCounter_displayedCounters;
jint SF_mindustry_core_PerfCounter_meanWindow;
jint SF_mindustry_core_PerfCounter_refreshTimeMillis;
jobject SF_mindustry_core_PerfCounter_$VALUES;

void mark_mindustry_core_PerfCounter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_core_PerfCounter_frame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_frame)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_frame, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_update)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_update)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_update, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_other)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_other)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_other, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_stateUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_stateUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_stateUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_entityMisc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_entityMisc)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_entityMisc, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_entityUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_entityUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_entityUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_buildingUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_buildingUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_buildingUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_powerUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_powerUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_powerUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_unitUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_unitUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_unitUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_unitPhysicsAsync)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_unitPhysicsAsync)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_unitPhysicsAsync, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_unitPhysicsWait)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_unitPhysicsWait)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_unitPhysicsWait, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_bulletUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_bulletUpdate)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_bulletUpdate, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_ui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_ui)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_ui, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_render)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_render)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_render, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_all)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_all, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_displayedCounters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_displayedCounters)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_displayedCounters, mark, depth + 1);
		if (SF_mindustry_core_PerfCounter_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_core_PerfCounter_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_core_PerfCounter_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_PerfCounter *) object;
	if (self->F_mean)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mean)->clazz)->markFunction)((jobject) self->F_mean, mark, depth + 1);
}

jobject SM_mindustry_core_PerfCounter_values_R_Array1_mindustry_core_PerfCounter(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_PerfCounter(ctx);
	{
	LINE_NUMBER(8);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_core_PerfCounter, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_PerfCounter_valueOf_java_lang_String_R_mindustry_core_PerfCounter(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_PerfCounter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_core_PerfCounter)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_core_PerfCounter, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_core_PerfCounter_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_PerfCounter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(8);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(41);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_lastUpdateFrame = (jlong(-1ll));
	LINE_NUMBER(47);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (120));
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_mean = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_add_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (jfloat((frame[1].l))));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_lastUpdateFrame = temp0;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_lastUpdateFrame = temp0;
	LINE_NUMBER(57);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began = (jint(1));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_beginTime = temp1;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:end", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	((func_mindustry_core_PerfCounter_end_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_end_long])(ctx, (frame[0].o), (jlong(0)));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_end_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:end", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(66);
	if (((jint)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_lastUpdateFrame = temp0;
	LINE_NUMBER(68);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, ((jlong)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_beginTime));
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (jfloat((temp1 - (frame[1].l)))));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_checkUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:checkUpdate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	jlong temp0 = (jlong)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_lastUpdateFrame;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp1 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (jfloat(0)));
	}
label_1:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_beginPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:beginPart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began = (jint(1));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_nanos_R_long(ctx);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_beginTime = temp0;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_endPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:endPart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	if (((jint)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(85);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_began = (jint(0));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_partValue;
	jlong temp1 = (jlong)SM_arc_util_Time_timeSinceNanos_long_R_long(ctx, ((jlong)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_beginTime));
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_partValue = (temp0 + temp1);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_PerfCounter_finishParts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:finishParts", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp0 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_lastUpdateFrame = temp0;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, (jfloat(((jlong)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_partValue))));
	LINE_NUMBER(92);
	((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_partValue = (jlong(0));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_PerfCounter_valueMs_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:valueMs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_valueRefreshTime));
	if ((longCompare(temp0, (jlong(100ll)))) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_core_PerfCounter_rawValueMs_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_PerfCounter_rawValueMs_R_float])(ctx, (frame[0].o));
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_refreshValue = temp0;
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_core_PerfCounter *) NULL_CHECK(sp[0].o))->F_valueRefreshTime = temp1;
	}
label_1:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_refreshValue);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_core_PerfCounter_latestValueNs_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:latestValueNs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_latest_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_latest_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_core_PerfCounter_rawValueMs_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:rawValueMs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_rawMean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_rawMean_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 / (jfloat(1000000.0f)));
	}

	popStackFrame(ctx);
}

jlong M_mindustry_core_PerfCounter_rawValueNs_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:rawValueNs", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_core_PerfCounter *) NULL_CHECK((frame[0].o)))->F_mean;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_rawMean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_rawMean_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_core_PerfCounter_$values_R_Array1_mindustry_core_PerfCounter(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_PerfCounter(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_core_PerfCounter, (14));
	jint temp0 = jint(0);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_frame;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_update;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_other;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_stateUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_entityMisc;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_entityUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_buildingUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_powerUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_unitUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_unitPhysicsAsync;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_unitPhysicsWait;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_bulletUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_ui;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_render;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_core_PerfCounter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	SF_mindustry_core_PerfCounter_meanWindow = jint(120);
	SF_mindustry_core_PerfCounter_refreshTimeMillis = jint(100);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/PerfCounter:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_PerfCounter(ctx);
	{
	LINE_NUMBER(9);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"frame"_j))), (jint(0)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_frame = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"update"_j))), (jint(1)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_update = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"other"_j))), (jint(2)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_other = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stateUpdate"_j))), (jint(3)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_stateUpdate = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"entityMisc"_j))), (jint(4)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_entityMisc = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"entityUpdate"_j))), (jint(5)));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_entityUpdate = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildingUpdate"_j))), (6));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_buildingUpdate = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"powerUpdate"_j))), (7));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_powerUpdate = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitUpdate"_j))), (8));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_unitUpdate = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitPhysicsAsync"_j))), (9));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_unitPhysicsAsync = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unitPhysicsWait"_j))), (10));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_unitPhysicsWait = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bulletUpdate"_j))), (11));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_bulletUpdate = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ui"_j))), (12));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_ui = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_PerfCounter);
	init_mindustry_core_PerfCounter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"render"_j))), (13));
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_render = sp[0].o;
	LINE_NUMBER(8);
	sp[0].o = (jobject)SM_mindustry_core_PerfCounter_$values_R_Array1_mindustry_core_PerfCounter(ctx);
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_$VALUES = sp[0].o;
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_mindustry_core_PerfCounter_values_R_Array1_mindustry_core_PerfCounter(ctx);
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_all = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_core_PerfCounter, (9));
	jint temp0 = jint(0);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_powerUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_buildingUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_entityMisc;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_bulletUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_unitUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_render;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_ui;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_stateUpdate;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[1].o = (jobject)SF_mindustry_core_PerfCounter_other;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_mindustry_core_PerfCounter(ctx);
	SF_mindustry_core_PerfCounter_displayedCounters = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_core_PerfCounter[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_core_PerfCounter_add_long,
	(void *) M_mindustry_core_PerfCounter_begin,
	(void *) M_mindustry_core_PerfCounter_end,
	(void *) M_mindustry_core_PerfCounter_end_long,
	(void *) M_mindustry_core_PerfCounter_checkUpdate,
	(void *) M_mindustry_core_PerfCounter_beginPart,
	(void *) M_mindustry_core_PerfCounter_endPart,
	(void *) M_mindustry_core_PerfCounter_finishParts,
	(void *) M_mindustry_core_PerfCounter_valueMs_R_float,
	(void *) M_mindustry_core_PerfCounter_latestValueNs_R_long,
	(void *) M_mindustry_core_PerfCounter_rawValueMs_R_float,
	(void *) M_mindustry_core_PerfCounter_rawValueNs_R_long,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "add", "(J)V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "end", "(J)V" },
	{ "checkUpdate", "()V" },
	{ "beginPart", "()V" },
	{ "endPart", "()V" },
	{ "finishParts", "()V" },
	{ "valueMs", "()F" },
	{ "latestValueNs", "()J" },
	{ "rawValueMs", "()F" },
	{ "rawValueNs", "()J" },
};

static FieldMetadata fields[] {
	{ "frame", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_frame, "Lmindustry/core/PerfCounter;", 16409 },
	{ "update", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_update, "Lmindustry/core/PerfCounter;", 16409 },
	{ "other", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_other, "Lmindustry/core/PerfCounter;", 16409 },
	{ "stateUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_stateUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "entityMisc", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_entityMisc, "Lmindustry/core/PerfCounter;", 16409 },
	{ "entityUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_entityUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "buildingUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_buildingUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "powerUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_powerUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "unitUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_unitUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "unitPhysicsAsync", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_unitPhysicsAsync, "Lmindustry/core/PerfCounter;", 16409 },
	{ "unitPhysicsWait", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_unitPhysicsWait, "Lmindustry/core/PerfCounter;", 16409 },
	{ "bulletUpdate", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_bulletUpdate, "Lmindustry/core/PerfCounter;", 16409 },
	{ "ui", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_ui, "Lmindustry/core/PerfCounter;", 16409 },
	{ "render", &class_mindustry_core_PerfCounter, (intptr_t) &SF_mindustry_core_PerfCounter_render, "Lmindustry/core/PerfCounter;", 16409 },
	{ "all", getArrayClass(&class_mindustry_core_PerfCounter, 1), (intptr_t) &SF_mindustry_core_PerfCounter_all, "[Lmindustry/core/PerfCounter;", 25 },
	{ "displayedCounters", getArrayClass(&class_mindustry_core_PerfCounter, 1), (intptr_t) &SF_mindustry_core_PerfCounter_displayedCounters, "[Lmindustry/core/PerfCounter;", 25 },
	{ "meanWindow", &class_int, (intptr_t) &SF_mindustry_core_PerfCounter_meanWindow, "I", 24 },
	{ "refreshTimeMillis", &class_int, (intptr_t) &SF_mindustry_core_PerfCounter_refreshTimeMillis, "I", 24 },
	{ "lastUpdateFrame", &class_long, offsetof(mindustry_core_PerfCounter, F_lastUpdateFrame), "J", 2 },
	{ "valueRefreshTime", &class_long, offsetof(mindustry_core_PerfCounter, F_valueRefreshTime), "J", 2 },
	{ "refreshValue", &class_float, offsetof(mindustry_core_PerfCounter, F_refreshValue), "F", 2 },
	{ "beginTime", &class_long, offsetof(mindustry_core_PerfCounter, F_beginTime), "J", 2 },
	{ "partValue", &class_long, offsetof(mindustry_core_PerfCounter, F_partValue), "J", 2 },
	{ "began", &class_boolean, offsetof(mindustry_core_PerfCounter, F_began), "Z", 2 },
	{ "mean", &class_arc_math_WindowedMean, offsetof(mindustry_core_PerfCounter, F_mean), "Larc/math/WindowedMean;", 2 },
	{ "$VALUES", getArrayClass(&class_mindustry_core_PerfCounter, 1), (intptr_t) &SF_mindustry_core_PerfCounter_$VALUES, "[Lmindustry/core/PerfCounter;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_core_PerfCounter_values_R_Array1_mindustry_core_PerfCounter, 0, "()[Lmindustry/core/PerfCounter;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_core_PerfCounter_valueOf_java_lang_String_R_mindustry_core_PerfCounter, 0, "(Ljava/lang/String;)Lmindustry/core/PerfCounter;", 9 },
	{ "<init>", (intptr_t) init_mindustry_core_PerfCounter_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "add", (intptr_t) M_mindustry_core_PerfCounter_add_long, VTABLE_mindustry_core_PerfCounter_add_long, "(J)V", 1 },
	{ "begin", (intptr_t) M_mindustry_core_PerfCounter_begin, VTABLE_mindustry_core_PerfCounter_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_core_PerfCounter_end, VTABLE_mindustry_core_PerfCounter_end, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_core_PerfCounter_end_long, VTABLE_mindustry_core_PerfCounter_end_long, "(J)V", 1 },
	{ "checkUpdate", (intptr_t) M_mindustry_core_PerfCounter_checkUpdate, VTABLE_mindustry_core_PerfCounter_checkUpdate, "()V", 1 },
	{ "beginPart", (intptr_t) M_mindustry_core_PerfCounter_beginPart, VTABLE_mindustry_core_PerfCounter_beginPart, "()V", 1 },
	{ "endPart", (intptr_t) M_mindustry_core_PerfCounter_endPart, VTABLE_mindustry_core_PerfCounter_endPart, "()V", 1 },
	{ "finishParts", (intptr_t) M_mindustry_core_PerfCounter_finishParts, VTABLE_mindustry_core_PerfCounter_finishParts, "()V", 1 },
	{ "valueMs", (intptr_t) M_mindustry_core_PerfCounter_valueMs_R_float, VTABLE_mindustry_core_PerfCounter_valueMs_R_float, "()F", 1 },
	{ "latestValueNs", (intptr_t) M_mindustry_core_PerfCounter_latestValueNs_R_long, VTABLE_mindustry_core_PerfCounter_latestValueNs_R_long, "()J", 1 },
	{ "rawValueMs", (intptr_t) M_mindustry_core_PerfCounter_rawValueMs_R_float, VTABLE_mindustry_core_PerfCounter_rawValueMs_R_float, "()F", 1 },
	{ "rawValueNs", (intptr_t) M_mindustry_core_PerfCounter_rawValueNs_R_long, VTABLE_mindustry_core_PerfCounter_rawValueNs_R_long, "()J", 1 },
	{ "$values", (intptr_t) SM_mindustry_core_PerfCounter_$values_R_Array1_mindustry_core_PerfCounter, 0, "()[Lmindustry/core/PerfCounter;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_core_PerfCounter, 0, "()V", 8 },
};

Class class_mindustry_core_PerfCounter{
		.nativeName = (intptr_t) "mindustry/core/PerfCounter",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_core_PerfCounter),
		.classVtable = (intptr_t) vtable_mindustry_core_PerfCounter,
		.staticInitializer = (intptr_t) clinit_mindustry_core_PerfCounter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_core_PerfCounter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_PerfCounter = registerClass(&class_mindustry_core_PerfCounter);

}
