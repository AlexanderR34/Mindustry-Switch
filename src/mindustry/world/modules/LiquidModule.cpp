#include "mindustry/world/modules/LiquidModule.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/WindowedMean.h"
#include "arc/struct/Bits.h"
#include "mindustry/type/Liquid.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/modules/LiquidModule_LiquidCalculator.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/LiquidModule_LiquidConsumer.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/Vars.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "arc/util/io/Writes.h"

extern "C" {

jint SF_mindustry_world_modules_LiquidModule_flowWindowSize;
jfloat SF_mindustry_world_modules_LiquidModule_flowPollInterval;
jfloat SF_mindustry_world_modules_LiquidModule_flowVisualRefreshInterval;
jobject SF_mindustry_world_modules_LiquidModule_flowTimer;
jobject SF_mindustry_world_modules_LiquidModule_cacheFlow;
jobject SF_mindustry_world_modules_LiquidModule_cacheSums;
jobject SF_mindustry_world_modules_LiquidModule_displayFlow;
jobject SF_mindustry_world_modules_LiquidModule_cacheBits;

void mark_mindustry_world_modules_LiquidModule(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_modules_LiquidModule_flowTimer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_LiquidModule_flowTimer)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_LiquidModule_flowTimer, mark, depth + 1);
		if (SF_mindustry_world_modules_LiquidModule_cacheFlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_LiquidModule_cacheFlow)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_LiquidModule_cacheFlow, mark, depth + 1);
		if (SF_mindustry_world_modules_LiquidModule_cacheSums)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_LiquidModule_cacheSums)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_LiquidModule_cacheSums, mark, depth + 1);
		if (SF_mindustry_world_modules_LiquidModule_displayFlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_LiquidModule_displayFlow)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_LiquidModule_displayFlow, mark, depth + 1);
		if (SF_mindustry_world_modules_LiquidModule_cacheBits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_LiquidModule_cacheBits)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_LiquidModule_cacheBits, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_modules_BlockModule(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_modules_LiquidModule *) object;
	if (self->F_liquids)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquids)->clazz)->markFunction)((jobject) self->F_liquids, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_flow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flow)->clazz)->markFunction)((jobject) self->F_flow, mark, depth + 1);
}

void init_mindustry_world_modules_LiquidModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_LiquidModule(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_world_modules_BlockModule(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_float, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_modules_LiquidModule *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[1].o, (jint(0)));
	((mindustry_world_modules_LiquidModule *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_updateFlow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:updateFlow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_flowTimer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (clinit_mindustry_world_modules_LiquidModule(ctx), (jfloat)SF_mindustry_world_modules_LiquidModule_flowPollInterval));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_modules_LiquidModule *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[1].i)) goto label_5;
	}
	clinit_mindustry_world_modules_LiquidModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_LiquidModule_cacheSums;
	if ((--sp)->o == nullptr) goto label_5;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_LiquidModule_cacheFlow;
	if ((--sp)->o != nullptr) goto label_6;
label_5:;
	{
	LINE_NUMBER(39);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheFlow;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheFlow;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_WindowedMean, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_cacheFlow = sp[0].o;
	LINE_NUMBER(41);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(42);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheFlow;
	jint temp0 = frame[2].i;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (clinit_mindustry_world_modules_LiquidModule(ctx), (jint)SF_mindustry_world_modules_LiquidModule_flowWindowSize));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(41);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_cacheSums = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_displayFlow = sp[0].o;
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(47);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(48);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheFlow;
	((func_arc_math_WindowedMean_reset) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_arc_math_WindowedMean_reset])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	LINE_NUMBER(47);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(50);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(51);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheBits;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(54);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_displayFlow;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheFlow;
	((mindustry_world_modules_LiquidModule *) NULL_CHECK(sp[0].o))->F_flow = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(59);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_flowTimer;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (clinit_mindustry_world_modules_LiquidModule(ctx), (jfloat)SF_mindustry_world_modules_LiquidModule_flowVisualRefreshInterval));
	frame[2].i = temp0;
	LINE_NUMBER(61);
	frame[3].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))));
	LINE_NUMBER(63);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(0)), -1)) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(64);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheBits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, (frame[3].i));
	}
label_26:;
	{
	LINE_NUMBER(66);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (jfloat(0));
	LINE_NUMBER(68);
	if ((frame[2].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(69);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_displayFlow;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	jint temp1 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))))->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))));
	jfloat temp1 = temp0 / (clinit_mindustry_world_modules_LiquidModule(ctx), (jfloat)SF_mindustry_world_modules_LiquidModule_flowPollInterval);
	sp[0].f = temp1;
	sp += 1;
	goto label_32;
	}
label_31:;
	(sp++)->f = jfloat(-1.0f);
label_32:;
	INST_FASTORE();
label_29:;
	{
	LINE_NUMBER(61);
	INST_IINC(3, 1);
	goto label_23;
	}
label_1:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_stopFlow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:stopFlow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow = (jref) (jobject(nullptr));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:getFlowRate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_2;
label_1:;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_LiquidModule_displayFlow;
	if ((--sp)->o == nullptr) goto label_3;
	{
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_displayFlow;
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))) * (jfloat(60.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	(sp++)->f = jfloat(-1.0f);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:hasFlowLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheBits;
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	if (temp0 == 0) goto label_1;
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

jobject M_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:current", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_reset_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) = (frame[2].f);
	LINE_NUMBER(96);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(100);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id))), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(101);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) = (frame[2].f);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_LiquidModule_currentAmount_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:currentAmount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[2].f));
	LINE_NUMBER(120);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[1].o);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[2].f), (jfloat(0)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + temp4);
	}
label_3:;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_handleFlow_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:handleFlow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(129);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_LiquidModule_cacheSums;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[2].f), (jfloat(0)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp3 + temp4);
	}
label_1:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = -(frame[2].f);
	sp[2].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (-((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)))));
	((func_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, temp1);
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[2].i))), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule$LiquidConsumer_accept_mindustry_type_Liquid_float) resolveInterfaceMethod(ctx, &class_mindustry_world_modules_LiquidModule$LiquidConsumer, INDEX_mindustry_world_modules_LiquidModule$LiquidConsumer_accept_mindustry_type_Liquid_float, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[2].i))));
	}
label_4:;
	{
	LINE_NUMBER(139);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:sum", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(148);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(150);
	jfloat temp0 = frame[2].f;
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[1].o, (frame[3].i));
	sp[2].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_LiquidModule$LiquidCalculator_get_mindustry_type_Liquid_float_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_modules_LiquidModule$LiquidCalculator, INDEX_mindustry_world_modules_LiquidModule$LiquidCalculator_get_mindustry_type_Liquid_float_R_float, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, (frame[3].i))));
	frame[2].f = (temp0 + temp1);
	}
label_5:;
	{
	LINE_NUMBER(148);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_checkArrayCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:checkArrayCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_modules_LiquidModule *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(158);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_cacheFlow = (jobject(nullptr));
	LINE_NUMBER(159);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_cacheSums = (jobject(nullptr));
	LINE_NUMBER(160);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_displayFlow = (jobject(nullptr));
	LINE_NUMBER(161);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_flow = (jref) (jobject(nullptr));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	frame[2].i = (jint(0));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(168);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_5;
	}
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(167);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(171);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(173);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(175);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(176);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))));
	}
label_10:;
	{
	LINE_NUMBER(173);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(184);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, sp[0].o);
	sp++;
label_3:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(186);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(187);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp += 1;
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, sp[0].o);
	sp++;
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[0].o, sp[1].i);
	frame[5].o = sp[0].o;
	LINE_NUMBER(188);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	frame[6].f = temp0;
	LINE_NUMBER(189);
	if ((frame[5].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(190);
	frame[7].i = ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[5].o)))->F_id);
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[7].i)) = (frame[6].f);
	LINE_NUMBER(192);
	jfloat temp0 = frame[6].f;
	sp[0].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current;
	if ((floatCompare(temp0, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id))), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(193);
	((mindustry_world_modules_LiquidModule *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[5].o);
	}
label_12:;
	{
	LINE_NUMBER(186);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_modules_LiquidModule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_modules_BlockModule(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/LiquidModule:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_LiquidModule(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_flowWindowSize = (6);
	LINE_NUMBER(18);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_flowPollInterval = (jfloat(10.0f));
	LINE_NUMBER(20);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_flowVisualRefreshInterval = (jfloat(15.0f));
	LINE_NUMBER(22);
	clinit_arc_util_Interval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[0].o, (jint(2)));
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_flowTimer = sp[0].o;
	LINE_NUMBER(26);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	clinit_mindustry_world_modules_LiquidModule(ctx);
	SF_mindustry_world_modules_LiquidModule_cacheBits = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_modules_LiquidModule;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field cacheFlow
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field cacheSums
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field displayFlow
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field flow
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_modules_LiquidModule[] {
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
	(void *) M_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes,
	(void *) M_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean,
	(void *) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads,
	(void *) M_mindustry_world_modules_LiquidModule_updateFlow,
	(void *) M_mindustry_world_modules_LiquidModule_stopFlow,
	(void *) M_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid,
	(void *) M_mindustry_world_modules_LiquidModule_reset_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_modules_LiquidModule_currentAmount_R_float,
	(void *) M_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_modules_LiquidModule_clear,
	(void *) M_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_modules_LiquidModule_handleFlow_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float,
	(void *) M_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer,
	(void *) M_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float,
	(void *) M_mindustry_world_modules_LiquidModule_checkArrayCapacity_int,
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
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;Z)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "updateFlow", "()V" },
	{ "stopFlow", "()V" },
	{ "getFlowRate", "(Lmindustry/type/Liquid;)F" },
	{ "hasFlowLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "current", "()Lmindustry/type/Liquid;" },
	{ "reset", "(Lmindustry/type/Liquid;F)V" },
	{ "set", "(Lmindustry/type/Liquid;F)V" },
	{ "currentAmount", "()F" },
	{ "get", "(Lmindustry/type/Liquid;)F" },
	{ "clear", "()V" },
	{ "add", "(Lmindustry/type/Liquid;F)V" },
	{ "handleFlow", "(Lmindustry/type/Liquid;F)V" },
	{ "remove", "(Lmindustry/type/Liquid;F)V" },
	{ "each", "(Lmindustry/world/modules/LiquidModule$LiquidConsumer;)V" },
	{ "sum", "(Lmindustry/world/modules/LiquidModule$LiquidCalculator;)F" },
	{ "checkArrayCapacity", "(I)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_modules_LiquidModule$LiquidConsumer,
	&class_mindustry_world_modules_LiquidModule$LiquidCalculator,
};

static FieldMetadata fields[] {
	{ "flowWindowSize", &class_int, (intptr_t) &SF_mindustry_world_modules_LiquidModule_flowWindowSize, "I", 9 },
	{ "flowPollInterval", &class_float, (intptr_t) &SF_mindustry_world_modules_LiquidModule_flowPollInterval, "F", 9 },
	{ "flowVisualRefreshInterval", &class_float, (intptr_t) &SF_mindustry_world_modules_LiquidModule_flowVisualRefreshInterval, "F", 9 },
	{ "flowTimer", &class_arc_util_Interval, (intptr_t) &SF_mindustry_world_modules_LiquidModule_flowTimer, "Larc/util/Interval;", 26 },
	{ "cacheFlow", getArrayClass(&class_arc_math_WindowedMean, 1), (intptr_t) &SF_mindustry_world_modules_LiquidModule_cacheFlow, "[Larc/math/WindowedMean;", 10 },
	{ "cacheSums", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_modules_LiquidModule_cacheSums, "[F", 10 },
	{ "displayFlow", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_modules_LiquidModule_displayFlow, "[F", 10 },
	{ "cacheBits", &class_arc_struct_Bits, (intptr_t) &SF_mindustry_world_modules_LiquidModule_cacheBits, "Larc/struct/Bits;", 26 },
	{ "liquids", getArrayClass(&class_float, 1), offsetof(mindustry_world_modules_LiquidModule, F_liquids), "[F", 2 },
	{ "current", &class_mindustry_type_Liquid, offsetof(mindustry_world_modules_LiquidModule, F_current), "Lmindustry/type/Liquid;", 2 },
	{ "flow", getArrayClass(&class_arc_math_WindowedMean, 1), offsetof(mindustry_world_modules_LiquidModule, F_flow), "[Larc/math/WindowedMean;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_modules_LiquidModule, 0, "()V", 1 },
	{ "updateFlow", (intptr_t) M_mindustry_world_modules_LiquidModule_updateFlow, VTABLE_mindustry_world_modules_LiquidModule_updateFlow, "()V", 1 },
	{ "stopFlow", (intptr_t) M_mindustry_world_modules_LiquidModule_stopFlow, VTABLE_mindustry_world_modules_LiquidModule_stopFlow, "()V", 1 },
	{ "getFlowRate", (intptr_t) M_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float, VTABLE_mindustry_world_modules_LiquidModule_getFlowRate_mindustry_type_Liquid_R_float, "(Lmindustry/type/Liquid;)F", 1 },
	{ "hasFlowLiquid", (intptr_t) M_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_modules_LiquidModule_hasFlowLiquid_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 1 },
	{ "current", (intptr_t) M_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid, VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid, "()Lmindustry/type/Liquid;", 1 },
	{ "reset", (intptr_t) M_mindustry_world_modules_LiquidModule_reset_mindustry_type_Liquid_float, VTABLE_mindustry_world_modules_LiquidModule_reset_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "set", (intptr_t) M_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float, VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "currentAmount", (intptr_t) M_mindustry_world_modules_LiquidModule_currentAmount_R_float, VTABLE_mindustry_world_modules_LiquidModule_currentAmount_R_float, "()F", 1 },
	{ "get", (intptr_t) M_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float, VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float, "(Lmindustry/type/Liquid;)F", 1 },
	{ "clear", (intptr_t) M_mindustry_world_modules_LiquidModule_clear, VTABLE_mindustry_world_modules_LiquidModule_clear, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float, VTABLE_mindustry_world_modules_LiquidModule_add_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "handleFlow", (intptr_t) M_mindustry_world_modules_LiquidModule_handleFlow_mindustry_type_Liquid_float, VTABLE_mindustry_world_modules_LiquidModule_handleFlow_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float, VTABLE_mindustry_world_modules_LiquidModule_remove_mindustry_type_Liquid_float, "(Lmindustry/type/Liquid;F)V", 1 },
	{ "each", (intptr_t) M_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer, VTABLE_mindustry_world_modules_LiquidModule_each_mindustry_world_modules_LiquidModule$LiquidConsumer, "(Lmindustry/world/modules/LiquidModule$LiquidConsumer;)V", 1 },
	{ "sum", (intptr_t) M_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float, VTABLE_mindustry_world_modules_LiquidModule_sum_mindustry_world_modules_LiquidModule$LiquidCalculator_R_float, "(Lmindustry/world/modules/LiquidModule$LiquidCalculator;)F", 1 },
	{ "checkArrayCapacity", (intptr_t) M_mindustry_world_modules_LiquidModule_checkArrayCapacity_int, VTABLE_mindustry_world_modules_LiquidModule_checkArrayCapacity_int, "(I)V", 1 },
	{ "write", (intptr_t) M_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes, VTABLE_mindustry_world_modules_LiquidModule_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean, VTABLE_mindustry_world_modules_LiquidModule_read_arc_util_io_Reads_boolean, "(Larc/util/io/Reads;Z)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_modules_LiquidModule, 0, "()V", 8 },
};

Class class_mindustry_world_modules_LiquidModule{
		.nativeName = (intptr_t) "mindustry/world/modules/LiquidModule",
		.parentClass = (intptr_t) &class_mindustry_world_modules_BlockModule,
		.size = sizeof(mindustry_world_modules_LiquidModule),
		.classVtable = (intptr_t) vtable_mindustry_world_modules_LiquidModule,
		.staticInitializer = (intptr_t) clinit_mindustry_world_modules_LiquidModule,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_modules_LiquidModule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_modules_LiquidModule = registerClass(&class_mindustry_world_modules_LiquidModule);

}
