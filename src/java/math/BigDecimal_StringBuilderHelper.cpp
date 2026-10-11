#include "java/math/BigDecimal_StringBuilderHelper.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/AssertionError.h"
#include "java/math/BigDecimal.h"
#include "java/lang/Class.h"
#include "java/math/BigDecimal_StringBuilderHelper.h"

extern "C" {

jobject SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
jobject SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
jbool SF_java_math_BigDecimal$StringBuilderHelper_$assertionsDisabled;

void mark_java_math_BigDecimal$StringBuilderHelper(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS, mark, depth + 1);
		if (SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES)->clazz)->markFunction)((jobject) SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES, mark, depth + 1);
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
	auto self = (java_math_BigDecimal$StringBuilderHelper *) object;
	if (self->F_sb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sb)->clazz)->markFunction)((jobject) self->F_sb, mark, depth + 1);
	if (self->F_cmpCharArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmpCharArray)->clazz)->markFunction)((jobject) self->F_cmpCharArray, mark, depth + 1);
}

void init_java_math_BigDecimal$StringBuilderHelper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$StringBuilderHelper:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3360);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(3361);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK(sp[0].o))->F_sb = (jref) sp[1].o;
	LINE_NUMBER(3363);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (19));
	((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK(sp[0].o))->F_cmpCharArray = (jref) sp[1].o;
	LINE_NUMBER(3364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$StringBuilderHelper:getStringBuilder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3368);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_sb;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(3369);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_sb;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$StringBuilderHelper:getCompactCharArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3373);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$StringBuilderHelper:putIntCompact", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(3386);
	if ((clinit_java_math_BigDecimal$StringBuilderHelper(ctx), (jint)SF_java_math_BigDecimal$StringBuilderHelper_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3392);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	frame[6].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	LINE_NUMBER(3395);
	if ((longCompare((frame[1].l), (jlong(2147483647ll)))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(3396);
	frame[3].l = ((frame[1].l) / (jlong(100ll)));
	LINE_NUMBER(3397);
	frame[5].i = (jint(((frame[1].l) - ((frame[3].l) * (jlong(100ll))))));
	LINE_NUMBER(3398);
	frame[1].l = (frame[3].l);
	LINE_NUMBER(3399);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp0 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i)));
	LINE_NUMBER(3400);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp1 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3405);
	frame[8].i = (jint((frame[1].l)));
	}
label_9:;
	{
	LINE_NUMBER(3406);
	if ((frame[8].i) < (100)) goto label_10;
	}
	{
	LINE_NUMBER(3407);
	frame[7].i = ((frame[8].i) / (100));
	LINE_NUMBER(3408);
	frame[5].i = ((frame[8].i) - ((frame[7].i) * (100)));
	LINE_NUMBER(3409);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(3410);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp0 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i)));
	LINE_NUMBER(3411);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp1 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[5].i)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3414);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp0 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[8].i)));
	LINE_NUMBER(3415);
	if ((frame[8].i) < (10)) goto label_17;
	}
	{
	LINE_NUMBER(3416);
	sp[0].o = (jobject)((java_math_BigDecimal$StringBuilderHelper *) NULL_CHECK((frame[0].o)))->F_cmpCharArray;
	INST_IINC(6, -1);
	jint temp0 = frame[6].i;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	sp[1].o = (jobject)SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, sp[1].o, (frame[8].i)));
	}
label_17:;
	{
	LINE_NUMBER(3418);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

void clinit_java_math_BigDecimal$StringBuilderHelper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BigDecimal$StringBuilderHelper:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	{
	LINE_NUMBER(3356);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_math_BigDecimal)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_math_BigDecimal)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	SF_java_math_BigDecimal$StringBuilderHelper_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(3421);
	sp[0].o = (jobject) createArray(ctx, &class_char, (100));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (73)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (74)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (75)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (76)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (77)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (78)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (79)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (80)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (81)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (82)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (83)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (84)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (85)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (86)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (87)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (88)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (89)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (90)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (91)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (92)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (93)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (94)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (95)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (96)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (97)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (98)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (99)) = (57);
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS = sp[0].o;
	LINE_NUMBER(3434);
	sp[0].o = (jobject) createArray(ctx, &class_char, (100));
	ARRAY_ACCESS(jchar, sp[0].o, (jint(0))) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(1))) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(2))) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(3))) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(4))) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (jint(5))) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (6)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (7)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (8)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (9)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (10)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (11)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (12)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (13)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (14)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (15)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (16)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (17)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (18)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (19)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (20)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (21)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (22)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (23)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (24)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (25)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (26)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (27)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (28)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (29)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (30)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (31)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (32)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (33)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (34)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (35)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (36)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (37)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (38)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (39)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (40)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (41)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (42)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (43)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (44)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (45)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (46)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (47)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (48)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (49)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (50)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (51)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (52)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (53)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (54)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (55)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (56)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (57)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (58)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (59)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (60)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (61)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (62)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (63)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (64)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (65)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (66)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (67)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (68)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (69)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (70)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (71)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (72)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (73)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (74)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (75)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (76)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (77)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (78)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (79)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (80)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (81)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (82)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (83)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (84)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (85)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (86)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (87)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (88)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (89)) = (57);
	ARRAY_ACCESS(jchar, sp[0].o, (90)) = (48);
	ARRAY_ACCESS(jchar, sp[0].o, (91)) = (49);
	ARRAY_ACCESS(jchar, sp[0].o, (92)) = (50);
	ARRAY_ACCESS(jchar, sp[0].o, (93)) = (51);
	ARRAY_ACCESS(jchar, sp[0].o, (94)) = (52);
	ARRAY_ACCESS(jchar, sp[0].o, (95)) = (53);
	ARRAY_ACCESS(jchar, sp[0].o, (96)) = (54);
	ARRAY_ACCESS(jchar, sp[0].o, (97)) = (55);
	ARRAY_ACCESS(jchar, sp[0].o, (98)) = (56);
	ARRAY_ACCESS(jchar, sp[0].o, (99)) = (57);
	clinit_java_math_BigDecimal$StringBuilderHelper(ctx);
	SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_BigDecimal$StringBuilderHelper[] {
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
	(void *) M_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder,
	(void *) M_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char,
	(void *) M_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int,
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
	{ "getStringBuilder", "()Ljava/lang/StringBuilder;" },
	{ "getCompactCharArray", "()[C" },
	{ "putIntCompact", "(J)I" },
};

static FieldMetadata fields[] {
	{ "sb", &class_java_lang_StringBuilder, offsetof(java_math_BigDecimal$StringBuilderHelper, F_sb), "Ljava/lang/StringBuilder;", 16 },
	{ "cmpCharArray", getArrayClass(&class_char, 1), offsetof(java_math_BigDecimal$StringBuilderHelper, F_cmpCharArray), "[C", 16 },
	{ "DIGIT_TENS", getArrayClass(&class_char, 1), (intptr_t) &SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS, "[C", 24 },
	{ "DIGIT_ONES", getArrayClass(&class_char, 1), (intptr_t) &SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES, "[C", 24 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_math_BigDecimal$StringBuilderHelper_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BigDecimal$StringBuilderHelper, 0, "()V", 0 },
	{ "getStringBuilder", (intptr_t) M_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder, VTABLE_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder, "()Ljava/lang/StringBuilder;", 0 },
	{ "getCompactCharArray", (intptr_t) M_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char, VTABLE_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char, "()[C", 0 },
	{ "putIntCompact", (intptr_t) M_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int, VTABLE_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int, "(J)I", 0 },
	{ "<clinit>", (intptr_t) clinit_java_math_BigDecimal$StringBuilderHelper, 0, "()V", 8 },
};

Class class_java_math_BigDecimal$StringBuilderHelper{
		.nativeName = (intptr_t) "java/math/BigDecimal$StringBuilderHelper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_math_BigDecimal$StringBuilderHelper),
		.classVtable = (intptr_t) vtable_java_math_BigDecimal$StringBuilderHelper,
		.staticInitializer = (intptr_t) clinit_java_math_BigDecimal$StringBuilderHelper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_BigDecimal$StringBuilderHelper,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_math_BigDecimal,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_BigDecimal$StringBuilderHelper = registerClass(&class_java_math_BigDecimal$StringBuilderHelper);

}

