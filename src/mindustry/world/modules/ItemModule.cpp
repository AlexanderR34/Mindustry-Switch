#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/type/ItemSeq.h"
#include "java/lang/StringBuilder.h"
#include "arc/math/WindowedMean.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/modules/BlockModule.h"
#include "mindustry/world/modules/ItemModule_ItemCalculator.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/struct/Bits.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/modules/ItemModule_invoke_mindustry_world_modules_ItemModule_ItemConsumer_2.h"
#include "mindustry/world/modules/ItemModule_invoke_mindustry_world_modules_ItemModule_ItemConsumer_3.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/Vars.h"
#include "java/lang/System.h"
#include "arc/util/io/Writes.h"

extern "C" {

jobject SF_mindustry_world_modules_ItemModule_empty;
jint SF_mindustry_world_modules_ItemModule_flowWindowSize;
jfloat SF_mindustry_world_modules_ItemModule_flowPollInterval;
jfloat SF_mindustry_world_modules_ItemModule_flowVisualRefreshInterval;
jobject SF_mindustry_world_modules_ItemModule_cacheFlow;
jobject SF_mindustry_world_modules_ItemModule_cacheSums;
jobject SF_mindustry_world_modules_ItemModule_displayFlow;
jobject SF_mindustry_world_modules_ItemModule_cacheBits;
jobject SF_mindustry_world_modules_ItemModule_flowTimer;

void mark_mindustry_world_modules_ItemModule(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_modules_ItemModule_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_empty)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_empty, mark, depth + 1);
		if (SF_mindustry_world_modules_ItemModule_cacheFlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_cacheFlow)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_cacheFlow, mark, depth + 1);
		if (SF_mindustry_world_modules_ItemModule_cacheSums)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_cacheSums)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_cacheSums, mark, depth + 1);
		if (SF_mindustry_world_modules_ItemModule_displayFlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_displayFlow)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_displayFlow, mark, depth + 1);
		if (SF_mindustry_world_modules_ItemModule_cacheBits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_cacheBits)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_cacheBits, mark, depth + 1);
		if (SF_mindustry_world_modules_ItemModule_flowTimer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_modules_ItemModule_flowTimer)->clazz)->markFunction)((jobject) SF_mindustry_world_modules_ItemModule_flowTimer, mark, depth + 1);
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
	auto self = (mindustry_world_modules_ItemModule *) object;
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_flow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flow)->clazz)->markFunction)((jobject) self->F_flow, mark, depth + 1);
}

void init_mindustry_world_modules_ItemModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_ItemModule(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_mindustry_world_modules_BlockModule(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(37);
	((func_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total = ((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[1].o)))->F_total);
	LINE_NUMBER(43);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_takeRotation = ((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[1].o)))->F_takeRotation);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_updateFlow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:updateFlow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_flowTimer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (clinit_mindustry_world_modules_ItemModule(ctx), (jfloat)SF_mindustry_world_modules_ItemModule_flowPollInterval));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(50);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[1].i)) goto label_5;
	}
	clinit_mindustry_world_modules_ItemModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_ItemModule_cacheSums;
	if ((--sp)->o == nullptr) goto label_5;
	clinit_mindustry_world_modules_ItemModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_ItemModule_cacheFlow;
	if ((--sp)->o != nullptr) goto label_6;
label_5:;
	{
	LINE_NUMBER(54);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheFlow;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheFlow;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_WindowedMean, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_cacheFlow = sp[0].o;
	LINE_NUMBER(56);
	frame[2].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(57);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheFlow;
	jint temp0 = frame[2].i;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (clinit_mindustry_world_modules_ItemModule(ctx), (jint)SF_mindustry_world_modules_ItemModule_flowWindowSize));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(56);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_cacheSums = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_displayFlow = sp[0].o;
	goto label_15;
	}
label_8:;
	{
	LINE_NUMBER(62);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_17;
	}
	{
	LINE_NUMBER(63);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheFlow;
	((func_arc_math_WindowedMean_reset) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_arc_math_WindowedMean_reset])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	LINE_NUMBER(62);
	INST_IINC(2, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(65);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(66);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheBits;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(69);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_displayFlow;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheFlow;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_flow = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(74);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_flowTimer;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (clinit_mindustry_world_modules_ItemModule(ctx), (jfloat)SF_mindustry_world_modules_ItemModule_flowVisualRefreshInterval));
	frame[2].i = temp0;
	LINE_NUMBER(76);
	frame[3].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i));
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	((func_arc_math_WindowedMean_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_WindowedMean_add_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))));
	LINE_NUMBER(78);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i))), (jfloat(0)), -1)) <= 0) goto label_26;
	}
	{
	LINE_NUMBER(79);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheBits;
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, sp[0].o, (frame[3].i));
	}
label_26:;
	{
	LINE_NUMBER(81);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	ARRAY_ACCESS(jfloat, sp[0].o, (frame[3].i)) = (jfloat(0));
	LINE_NUMBER(83);
	if ((frame[2].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(84);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_displayFlow;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	jint temp1 = (jint)((func_arc_math_WindowedMean_hasEnoughData_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))))->vtable)[VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i))));
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	jfloat temp0 = (jfloat)((func_arc_math_WindowedMean_mean_R_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))))->vtable)[VTABLE_arc_math_WindowedMean_mean_R_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))));
	jfloat temp1 = temp0 / (clinit_mindustry_world_modules_ItemModule(ctx), (jfloat)SF_mindustry_world_modules_ItemModule_flowPollInterval);
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
	LINE_NUMBER(76);
	INST_IINC(3, 1);
	goto label_23;
	}
label_1:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_stopFlow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:stopFlow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow = (jref) (jobject(nullptr));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_modules_ItemModule_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:getFlowRate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->f = jfloat(-1.0f);
	goto label_2;
label_1:;
	clinit_mindustry_world_modules_ItemModule(ctx);
	(sp++)->o = SF_mindustry_world_modules_ItemModule_displayFlow;
	if ((--sp)->o == nullptr) goto label_3;
	{
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_displayFlow;
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

jbool M_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:hasFlowItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheBits;
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

void M_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[2].i));
	sp[2].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int) resolveInterfaceMethod(ctx, &class_mindustry_world_modules_ItemModule$ItemConsumer, INDEX_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))));
	}
label_4:;
	{
	LINE_NUMBER(108);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:sum", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(117);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(119);
	jfloat temp0 = frame[2].f;
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[1].o, (frame[3].i));
	sp[2].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jfloat temp1 = (jfloat)((func_mindustry_world_modules_ItemModule$ItemCalculator_get_mindustry_type_Item_int_R_float) resolveInterfaceMethod(ctx, &class_mindustry_world_modules_ItemModule$ItemCalculator, INDEX_mindustry_world_modules_ItemModule$ItemCalculator_get_mindustry_type_Item_int_R_float, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[3].i))));
	frame[2].f = (temp0 + temp1);
	}
label_5:;
	{
	LINE_NUMBER(117);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_has_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) <= 0) goto label_1;
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

jbool M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 <= 0) goto label_1;
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

jbool M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < (frame[2].i)) goto label_1;
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

jbool M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(138);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_has_mindustry_type_ItemSeq_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(145);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, (frame[1].o), (frame[3].o));
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_4;
	}
	{
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	LINE_NUMBER(149);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_has_java_lang_Iterable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_amount));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	LINE_NUMBER(156);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:has", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(161);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount))) * (frame[2].f)));
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(161);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_hasOne_Array1_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:hasOne", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(171);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_empty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:empty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	if (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total) != 0) goto label_1;
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

jint M_mindustry_world_modules_ItemModule_total_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:total", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_modules_ItemModule_any_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:any", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	if (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total) <= 0) goto label_1;
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

jobject M_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:first", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(190);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:take", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(200);
	frame[2].i = ((frame[1].i) + ((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_takeRotation));
	LINE_NUMBER(201);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	frame[2].i = (temp0 - (((jarray) nullCheck(ctx, sp[0].o))->length));
	}
label_5:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[2].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (jint(1)));
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total) - (jint(1)));
	LINE_NUMBER(205);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_takeRotation = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(206);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(199);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_modules_ItemModule_get_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total = (temp0 + (temp1 - ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)))));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) = (frame[2].i);
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_add_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_item;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_amount));
	LINE_NUMBER(228);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2(ctx);
		auto proxy = (mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2 *) gcAlloc(ctx, &class_mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[1].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[1].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_int_int])(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[2].i))));
	LINE_NUMBER(236);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(242);
	((func_mindustry_world_modules_ItemModule_add_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_int_int])(ctx, (frame[0].o), ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id), (frame[2].i));
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (frame[2].i));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total) + (frame[2].i));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(249);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	jint temp0 = frame[1].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (jfloat((frame[2].i))));
	}
label_3:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_handleFlow_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:handleFlow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(255);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (jfloat((frame[2].i))));
	}
label_1:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:undoFlow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(261);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = (jobject)SF_mindustry_world_modules_ItemModule_cacheSums;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) - (jfloat(1)));
	}
label_1:;
	LINE_NUMBER(263);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(266);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))));
	frame[2].i = temp1;
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp2 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp2)) - (frame[2].i));
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total) - (frame[2].i));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:remove", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(273);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(274);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3(ctx);
		auto proxy = (mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3 *) gcAlloc(ctx, &class_mindustry_world_modules_ItemModule_invoke_mindustry_world_modules_ItemModule$ItemConsumer_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_remove_java_lang_Iterable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_lang_Iterable_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_lang_Iterable, INDEX_java_lang_Iterable_iterator_R_java_util_Iterator, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_item;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[3].o)))->F_amount));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	((func_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(290);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_checkArrayCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:checkArrayCapacity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(295);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_cacheFlow = (jobject(nullptr));
	LINE_NUMBER(296);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_cacheSums = (jobject(nullptr));
	LINE_NUMBER(297);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_displayFlow = (jobject(nullptr));
	LINE_NUMBER(298);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_flow = (jref) (jobject(nullptr));
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(303);
	frame[2].i = (jint(0));
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(305);
	if ((frame[6].i) <= 0) goto label_5;
	}
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(304);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(308);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(310);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(312);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(313);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	}
label_10:;
	{
	LINE_NUMBER(310);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(322);
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
	LINE_NUMBER(323);
	((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(325);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(326);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_util_io_Reads_ub_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_ub_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, sp[0].o);
	sp++;
label_10:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(328);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(329);
	if ((frame[7].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[7].o)))->F_id)) = (frame[6].i);
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total = (((jint)((mindustry_world_modules_ItemModule *) NULL_CHECK(sp[0].o))->F_total) + (frame[6].i));
	}
label_14:;
	{
	LINE_NUMBER(325);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_modules_ItemModule_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"ItemModule{"_j))));
	LINE_NUMBER(348);
	frame[2].i = (jint(0));
	LINE_NUMBER(349);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Item, sp[1].o))))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((mindustry_world_modules_ItemModule *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	LINE_NUMBER(352);
	frame[2].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(349);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(355);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	}
label_10:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_modules_ItemModule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_modules_BlockModule(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/ItemModule:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_ItemModule(ctx);
	{
	LINE_NUMBER(14);
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[0].o);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_empty = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_flowWindowSize = (12);
	LINE_NUMBER(19);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_flowPollInterval = (jfloat(10.0f));
	LINE_NUMBER(21);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_flowVisualRefreshInterval = (jfloat(15.0f));
	LINE_NUMBER(26);
	clinit_arc_struct_Bits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits(ctx, sp[0].o);
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_cacheBits = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_util_Interval(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[0].o, (jint(2)));
	clinit_mindustry_world_modules_ItemModule(ctx);
	SF_mindustry_world_modules_ItemModule_flowTimer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_modules_ItemModule;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field flow
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
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

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method first
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[20]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method take
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_modules_ItemModule[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_modules_ItemModule_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_modules_ItemModule_write_arc_util_io_Writes,
	(void *) M_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean,
	(void *) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads,
	(void *) M_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_world_modules_ItemModule_updateFlow,
	(void *) M_mindustry_world_modules_ItemModule_stopFlow,
	(void *) M_mindustry_world_modules_ItemModule_length_R_int,
	(void *) M_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer,
	(void *) M_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float,
	(void *) M_mindustry_world_modules_ItemModule_has_int_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_mindustry_type_ItemSeq_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_java_lang_Iterable_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_hasOne_Array1_mindustry_type_ItemStack_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_empty_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_total_R_int,
	(void *) M_mindustry_world_modules_ItemModule_any_R_boolean,
	(void *) M_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item,
	(void *) M_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item,
	(void *) M_mindustry_world_modules_ItemModule_get_int_R_int,
	(void *) M_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int,
	(void *) M_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int,
	(void *) M_mindustry_world_modules_ItemModule_add_java_lang_Iterable,
	(void *) M_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq,
	(void *) M_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int,
	(void *) M_mindustry_world_modules_ItemModule_add_int_int,
	(void *) M_mindustry_world_modules_ItemModule_handleFlow_mindustry_type_Item_int,
	(void *) M_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item,
	(void *) M_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int,
	(void *) M_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemSeq,
	(void *) M_mindustry_world_modules_ItemModule_remove_java_lang_Iterable,
	(void *) M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemStack,
	(void *) M_mindustry_world_modules_ItemModule_clear,
	(void *) M_mindustry_world_modules_ItemModule_checkArrayCapacity_int,
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
	{ "copy", "()Lmindustry/world/modules/ItemModule;" },
	{ "set", "(Lmindustry/world/modules/ItemModule;)V" },
	{ "updateFlow", "()V" },
	{ "stopFlow", "()V" },
	{ "length", "()I" },
	{ "getFlowRate", "(Lmindustry/type/Item;)F" },
	{ "hasFlowItem", "(Lmindustry/type/Item;)Z" },
	{ "each", "(Lmindustry/world/modules/ItemModule$ItemConsumer;)V" },
	{ "sum", "(Lmindustry/world/modules/ItemModule$ItemCalculator;)F" },
	{ "has", "(I)Z" },
	{ "has", "(Lmindustry/type/Item;)Z" },
	{ "has", "(Lmindustry/type/Item;I)Z" },
	{ "has", "([Lmindustry/type/ItemStack;)Z" },
	{ "has", "(Lmindustry/type/ItemSeq;)Z" },
	{ "has", "(Ljava/lang/Iterable;)Z" },
	{ "has", "([Lmindustry/type/ItemStack;F)Z" },
	{ "hasOne", "([Lmindustry/type/ItemStack;)Z" },
	{ "empty", "()Z" },
	{ "total", "()I" },
	{ "any", "()Z" },
	{ "first", "()Lmindustry/type/Item;" },
	{ "take", "()Lmindustry/type/Item;" },
	{ "get", "(I)I" },
	{ "get", "(Lmindustry/type/Item;)I" },
	{ "set", "(Lmindustry/type/Item;I)V" },
	{ "add", "(Ljava/lang/Iterable;)V" },
	{ "add", "(Lmindustry/type/ItemSeq;)V" },
	{ "add", "(Lmindustry/world/modules/ItemModule;)V" },
	{ "add", "(Lmindustry/type/Item;I)V" },
	{ "add", "(II)V" },
	{ "handleFlow", "(Lmindustry/type/Item;I)V" },
	{ "undoFlow", "(Lmindustry/type/Item;)V" },
	{ "remove", "(Lmindustry/type/Item;I)V" },
	{ "remove", "([Lmindustry/type/ItemStack;)V" },
	{ "remove", "(Lmindustry/type/ItemSeq;)V" },
	{ "remove", "(Ljava/lang/Iterable;)V" },
	{ "remove", "(Lmindustry/type/ItemStack;)V" },
	{ "clear", "()V" },
	{ "checkArrayCapacity", "(I)V" },
};

static jclass innerClasses[] {
	&class_mindustry_world_modules_ItemModule$ItemConsumer,
	&class_mindustry_world_modules_ItemModule$ItemCalculator,
};

static FieldMetadata fields[] {
	{ "empty", &class_mindustry_world_modules_ItemModule, (intptr_t) &SF_mindustry_world_modules_ItemModule_empty, "Lmindustry/world/modules/ItemModule;", 25 },
	{ "flowWindowSize", &class_int, (intptr_t) &SF_mindustry_world_modules_ItemModule_flowWindowSize, "I", 9 },
	{ "flowPollInterval", &class_float, (intptr_t) &SF_mindustry_world_modules_ItemModule_flowPollInterval, "F", 9 },
	{ "flowVisualRefreshInterval", &class_float, (intptr_t) &SF_mindustry_world_modules_ItemModule_flowVisualRefreshInterval, "F", 9 },
	{ "cacheFlow", getArrayClass(&class_arc_math_WindowedMean, 1), (intptr_t) &SF_mindustry_world_modules_ItemModule_cacheFlow, "[Larc/math/WindowedMean;", 10 },
	{ "cacheSums", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_modules_ItemModule_cacheSums, "[F", 10 },
	{ "displayFlow", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_world_modules_ItemModule_displayFlow, "[F", 10 },
	{ "cacheBits", &class_arc_struct_Bits, (intptr_t) &SF_mindustry_world_modules_ItemModule_cacheBits, "Larc/struct/Bits;", 26 },
	{ "flowTimer", &class_arc_util_Interval, (intptr_t) &SF_mindustry_world_modules_ItemModule_flowTimer, "Larc/util/Interval;", 26 },
	{ "items", getArrayClass(&class_int, 1), offsetof(mindustry_world_modules_ItemModule, F_items), "[I", 4 },
	{ "total", &class_int, offsetof(mindustry_world_modules_ItemModule, F_total), "I", 4 },
	{ "takeRotation", &class_int, offsetof(mindustry_world_modules_ItemModule, F_takeRotation), "I", 4 },
	{ "flow", getArrayClass(&class_arc_math_WindowedMean, 1), offsetof(mindustry_world_modules_ItemModule, F_flow), "[Larc/math/WindowedMean;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_modules_ItemModule, 0, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule, VTABLE_mindustry_world_modules_ItemModule_copy_R_mindustry_world_modules_ItemModule, "()Lmindustry/world/modules/ItemModule;", 1 },
	{ "set", (intptr_t) M_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule, VTABLE_mindustry_world_modules_ItemModule_set_mindustry_world_modules_ItemModule, "(Lmindustry/world/modules/ItemModule;)V", 1 },
	{ "updateFlow", (intptr_t) M_mindustry_world_modules_ItemModule_updateFlow, VTABLE_mindustry_world_modules_ItemModule_updateFlow, "()V", 1 },
	{ "stopFlow", (intptr_t) M_mindustry_world_modules_ItemModule_stopFlow, VTABLE_mindustry_world_modules_ItemModule_stopFlow, "()V", 1 },
	{ "length", (intptr_t) M_mindustry_world_modules_ItemModule_length_R_int, VTABLE_mindustry_world_modules_ItemModule_length_R_int, "()I", 1 },
	{ "getFlowRate", (intptr_t) M_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float, VTABLE_mindustry_world_modules_ItemModule_getFlowRate_mindustry_type_Item_R_float, "(Lmindustry/type/Item;)F", 1 },
	{ "hasFlowItem", (intptr_t) M_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_modules_ItemModule_hasFlowItem_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "each", (intptr_t) M_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer, VTABLE_mindustry_world_modules_ItemModule_each_mindustry_world_modules_ItemModule$ItemConsumer, "(Lmindustry/world/modules/ItemModule$ItemConsumer;)V", 1 },
	{ "sum", (intptr_t) M_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float, VTABLE_mindustry_world_modules_ItemModule_sum_mindustry_world_modules_ItemModule$ItemCalculator_R_float, "(Lmindustry/world/modules/ItemModule$ItemCalculator;)F", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_int_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_int_R_boolean, "(I)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean, "(Lmindustry/type/Item;I)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean, "([Lmindustry/type/ItemStack;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_mindustry_type_ItemSeq_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_ItemSeq_R_boolean, "(Lmindustry/type/ItemSeq;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_java_lang_Iterable_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_java_lang_Iterable_R_boolean, "(Ljava/lang/Iterable;)Z", 1 },
	{ "has", (intptr_t) M_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean, VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean, "([Lmindustry/type/ItemStack;F)Z", 1 },
	{ "hasOne", (intptr_t) M_mindustry_world_modules_ItemModule_hasOne_Array1_mindustry_type_ItemStack_R_boolean, VTABLE_mindustry_world_modules_ItemModule_hasOne_Array1_mindustry_type_ItemStack_R_boolean, "([Lmindustry/type/ItemStack;)Z", 1 },
	{ "empty", (intptr_t) M_mindustry_world_modules_ItemModule_empty_R_boolean, VTABLE_mindustry_world_modules_ItemModule_empty_R_boolean, "()Z", 1 },
	{ "total", (intptr_t) M_mindustry_world_modules_ItemModule_total_R_int, VTABLE_mindustry_world_modules_ItemModule_total_R_int, "()I", 1 },
	{ "any", (intptr_t) M_mindustry_world_modules_ItemModule_any_R_boolean, VTABLE_mindustry_world_modules_ItemModule_any_R_boolean, "()Z", 1 },
	{ "first", (intptr_t) M_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item, VTABLE_mindustry_world_modules_ItemModule_first_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "take", (intptr_t) M_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item, VTABLE_mindustry_world_modules_ItemModule_take_R_mindustry_type_Item, "()Lmindustry/type/Item;", 1 },
	{ "get", (intptr_t) M_mindustry_world_modules_ItemModule_get_int_R_int, VTABLE_mindustry_world_modules_ItemModule_get_int_R_int, "(I)I", 1 },
	{ "get", (intptr_t) M_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int, VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int, "(Lmindustry/type/Item;)I", 1 },
	{ "set", (intptr_t) M_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int, VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_ItemModule_add_java_lang_Iterable, VTABLE_mindustry_world_modules_ItemModule_add_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq, VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule, VTABLE_mindustry_world_modules_ItemModule_add_mindustry_world_modules_ItemModule, "(Lmindustry/world/modules/ItemModule;)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int, VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_modules_ItemModule_add_int_int, VTABLE_mindustry_world_modules_ItemModule_add_int_int, "(II)V", 2 },
	{ "handleFlow", (intptr_t) M_mindustry_world_modules_ItemModule_handleFlow_mindustry_type_Item_int, VTABLE_mindustry_world_modules_ItemModule_handleFlow_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "undoFlow", (intptr_t) M_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item, VTABLE_mindustry_world_modules_ItemModule_undoFlow_mindustry_type_Item, "(Lmindustry/type/Item;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int, VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_modules_ItemModule_remove_Array1_mindustry_type_ItemStack, "([Lmindustry/type/ItemStack;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemSeq, VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemSeq, "(Lmindustry/type/ItemSeq;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_ItemModule_remove_java_lang_Iterable, VTABLE_mindustry_world_modules_ItemModule_remove_java_lang_Iterable, "(Ljava/lang/Iterable;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemStack, VTABLE_mindustry_world_modules_ItemModule_remove_mindustry_type_ItemStack, "(Lmindustry/type/ItemStack;)V", 1 },
	{ "clear", (intptr_t) M_mindustry_world_modules_ItemModule_clear, VTABLE_mindustry_world_modules_ItemModule_clear, "()V", 1 },
	{ "checkArrayCapacity", (intptr_t) M_mindustry_world_modules_ItemModule_checkArrayCapacity_int, VTABLE_mindustry_world_modules_ItemModule_checkArrayCapacity_int, "(I)V", 1 },
	{ "write", (intptr_t) M_mindustry_world_modules_ItemModule_write_arc_util_io_Writes, VTABLE_mindustry_world_modules_ItemModule_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean, VTABLE_mindustry_world_modules_ItemModule_read_arc_util_io_Reads_boolean, "(Larc/util/io/Reads;Z)V", 1 },
	{ "toString", (intptr_t) M_mindustry_world_modules_ItemModule_toString_R_java_lang_String, VTABLE_mindustry_world_modules_ItemModule_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_modules_ItemModule, 0, "()V", 8 },
};

Class class_mindustry_world_modules_ItemModule{
		.nativeName = (intptr_t) "mindustry/world/modules/ItemModule",
		.parentClass = (intptr_t) &class_mindustry_world_modules_BlockModule,
		.size = sizeof(mindustry_world_modules_ItemModule),
		.classVtable = (intptr_t) vtable_mindustry_world_modules_ItemModule,
		.staticInitializer = (intptr_t) clinit_mindustry_world_modules_ItemModule,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_modules_ItemModule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_modules_ItemModule = registerClass(&class_mindustry_world_modules_ItemModule);

}
