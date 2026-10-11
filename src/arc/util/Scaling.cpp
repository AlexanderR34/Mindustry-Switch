#include "arc/util/Scaling.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Scaling.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_Scaling_fit;
jobject SF_arc_util_Scaling_bounded;
jobject SF_arc_util_Scaling_fill;
jobject SF_arc_util_Scaling_fillX;
jobject SF_arc_util_Scaling_fillY;
jobject SF_arc_util_Scaling_stretch;
jobject SF_arc_util_Scaling_stretchX;
jobject SF_arc_util_Scaling_stretchY;
jobject SF_arc_util_Scaling_none;
jobject SF_arc_util_Scaling_temp;
jobject SF_arc_util_Scaling_$VALUES;

void mark_arc_util_Scaling(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Scaling_fit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_fit)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_fit, mark, depth + 1);
		if (SF_arc_util_Scaling_bounded)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_bounded)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_bounded, mark, depth + 1);
		if (SF_arc_util_Scaling_fill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_fill)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_fill, mark, depth + 1);
		if (SF_arc_util_Scaling_fillX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_fillX)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_fillX, mark, depth + 1);
		if (SF_arc_util_Scaling_fillY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_fillY)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_fillY, mark, depth + 1);
		if (SF_arc_util_Scaling_stretch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_stretch)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_stretch, mark, depth + 1);
		if (SF_arc_util_Scaling_stretchX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_stretchX)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_stretchX, mark, depth + 1);
		if (SF_arc_util_Scaling_stretchY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_stretchY)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_stretchY, mark, depth + 1);
		if (SF_arc_util_Scaling_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_none)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_none, mark, depth + 1);
		if (SF_arc_util_Scaling_temp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_temp)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_temp, mark, depth + 1);
		if (SF_arc_util_Scaling_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Scaling_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_Scaling_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_Scaling *) object;
}

jobject SM_arc_util_Scaling_values_R_Array1_arc_util_Scaling(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Scaling(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_Scaling, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Scaling_valueOf_java_lang_String_R_arc_util_Scaling(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Scaling(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_Scaling)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_Scaling, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_Scaling_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Scaling(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(9);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:apply", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)((func_arc_util_Scaling_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Scaling_ordinal_R_int])(ctx, (frame[0].o));
	switch(temp0) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		case 8: goto label_9;
		default: goto label_10;
	}
	}
label_1:;
	{
	LINE_NUMBER(58);
	frame[5].f = ((frame[4].f) / (frame[3].f));
	LINE_NUMBER(59);
	frame[6].f = ((frame[2].f) / (frame[1].f));
	LINE_NUMBER(60);
	if ((floatCompare((frame[5].f), (frame[6].f), -1)) <= 0) goto label_13;
	}
	{
	jfloat temp0 = (frame[3].f) / (frame[1].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	jfloat temp0 = (frame[4].f) / (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(61);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((frame[1].f) * (frame[7].f));
	LINE_NUMBER(62);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(63);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(66);
	frame[5].f = ((frame[4].f) / (frame[3].f));
	LINE_NUMBER(67);
	frame[6].f = ((frame[2].f) / (frame[1].f));
	LINE_NUMBER(68);
	if ((floatCompare((frame[5].f), (frame[6].f), 1)) >= 0) goto label_20;
	}
	{
	jfloat temp0 = (frame[3].f) / (frame[1].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	jfloat temp0 = (frame[4].f) / (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_21:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(69);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((frame[1].f) * (frame[7].f));
	LINE_NUMBER(70);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(71);
	goto label_10;
	}
label_4:;
	{
	LINE_NUMBER(74);
	frame[5].f = ((frame[3].f) / (frame[1].f));
	LINE_NUMBER(75);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((frame[1].f) * (frame[5].f));
	LINE_NUMBER(76);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(77);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(80);
	frame[5].f = ((frame[4].f) / (frame[2].f));
	LINE_NUMBER(81);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((frame[1].f) * (frame[5].f));
	LINE_NUMBER(82);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(83);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(86);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[3].f);
	LINE_NUMBER(87);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[4].f);
	LINE_NUMBER(88);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(90);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[3].f);
	LINE_NUMBER(91);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[2].f);
	LINE_NUMBER(92);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(94);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[1].f);
	LINE_NUMBER(95);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[4].f);
	LINE_NUMBER(96);
	goto label_10;
	}
label_2:;
	{
	LINE_NUMBER(98);
	if ((floatCompare((frame[2].f), (frame[4].f), -1)) > 0) goto label_37;
	}
	{
	if ((floatCompare((frame[1].f), (frame[3].f), -1)) <= 0) goto label_38;
	}
label_37:;
	{
	LINE_NUMBER(99);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_38:;
	{
	LINE_NUMBER(101);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_none;
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(104);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[1].f);
	LINE_NUMBER(105);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[2].f);
	}
label_10:;
	{
	LINE_NUMBER(108);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_temp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Scaling_$values_R_Array1_arc_util_Scaling(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Scaling(ctx);
	{
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_Scaling, (9));
	jint temp0 = jint(0);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_bounded;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fill;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fillX;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fillY;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_stretch;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_stretchX;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_stretchY;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Scaling(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Scaling:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Scaling(ctx);
	{
	LINE_NUMBER(14);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fit"_j))), (jint(0)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_fit = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bounded"_j))), (jint(1)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_bounded = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fill"_j))), (jint(2)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_fill = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fillX"_j))), (jint(3)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_fillX = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fillY"_j))), (jint(4)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_fillY = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stretch"_j))), (jint(5)));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_stretch = sp[0].o;
	LINE_NUMBER(40);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stretchX"_j))), (6));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_stretchX = sp[0].o;
	LINE_NUMBER(45);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stretchY"_j))), (7));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_stretchY = sp[0].o;
	LINE_NUMBER(47);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Scaling);
	init_arc_util_Scaling_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))), (8));
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_none = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_arc_util_Scaling_$values_R_Array1_arc_util_Scaling(ctx);
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_$VALUES = sp[0].o;
	LINE_NUMBER(49);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_util_Scaling(ctx);
	SF_arc_util_Scaling_temp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Scaling[] {
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
	(void *) M_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2,
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
	{ "apply", "(FFFF)Larc/math/geom/Vec2;" },
};

static FieldMetadata fields[] {
	{ "fit", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_fit, "Larc/util/Scaling;", 16409 },
	{ "bounded", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_bounded, "Larc/util/Scaling;", 16409 },
	{ "fill", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_fill, "Larc/util/Scaling;", 16409 },
	{ "fillX", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_fillX, "Larc/util/Scaling;", 16409 },
	{ "fillY", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_fillY, "Larc/util/Scaling;", 16409 },
	{ "stretch", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_stretch, "Larc/util/Scaling;", 16409 },
	{ "stretchX", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_stretchX, "Larc/util/Scaling;", 16409 },
	{ "stretchY", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_stretchY, "Larc/util/Scaling;", 16409 },
	{ "none", &class_arc_util_Scaling, (intptr_t) &SF_arc_util_Scaling_none, "Larc/util/Scaling;", 16409 },
	{ "temp", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_util_Scaling_temp, "Larc/math/geom/Vec2;", 26 },
	{ "$VALUES", getArrayClass(&class_arc_util_Scaling, 1), (intptr_t) &SF_arc_util_Scaling_$VALUES, "[Larc/util/Scaling;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_Scaling_values_R_Array1_arc_util_Scaling, 0, "()[Larc/util/Scaling;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_Scaling_valueOf_java_lang_String_R_arc_util_Scaling, 0, "(Ljava/lang/String;)Larc/util/Scaling;", 9 },
	{ "<init>", (intptr_t) init_arc_util_Scaling_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "apply", (intptr_t) M_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2, "(FFFF)Larc/math/geom/Vec2;", 1 },
	{ "$values", (intptr_t) SM_arc_util_Scaling_$values_R_Array1_arc_util_Scaling, 0, "()[Larc/util/Scaling;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Scaling, 0, "()V", 8 },
};

Class class_arc_util_Scaling{
		.nativeName = (intptr_t) "arc/util/Scaling",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_Scaling),
		.classVtable = (intptr_t) vtable_arc_util_Scaling,
		.staticInitializer = (intptr_t) clinit_arc_util_Scaling,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Scaling,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Scaling = registerClass(&class_arc_util_Scaling);

}
