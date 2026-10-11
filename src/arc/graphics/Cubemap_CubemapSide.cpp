#include "arc/graphics/Cubemap_CubemapSide.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Cubemap_CubemapSide.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/Cubemap.h"

extern "C" {

jobject SF_arc_graphics_Cubemap$CubemapSide_positiveX;
jobject SF_arc_graphics_Cubemap$CubemapSide_negativeX;
jobject SF_arc_graphics_Cubemap$CubemapSide_positiveY;
jobject SF_arc_graphics_Cubemap$CubemapSide_negativeY;
jobject SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
jobject SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
jobject SF_arc_graphics_Cubemap$CubemapSide_all;
jobject SF_arc_graphics_Cubemap$CubemapSide_$VALUES;

void mark_arc_graphics_Cubemap$CubemapSide(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Cubemap$CubemapSide_positiveX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveX)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveX, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_negativeX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeX)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeX, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_positiveY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveY)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveY, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_negativeY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeY)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeY, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_positiveZ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveZ)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_positiveZ, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_negativeZ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeZ)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_negativeZ, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_all)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_all, mark, depth + 1);
		if (SF_arc_graphics_Cubemap$CubemapSide_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Cubemap$CubemapSide_$VALUES)->clazz)->markFunction)((jobject) SF_arc_graphics_Cubemap$CubemapSide_$VALUES, mark, depth + 1);
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
	auto self = (arc_graphics_Cubemap$CubemapSide *) object;
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
}

jobject SM_arc_graphics_Cubemap$CubemapSide_values_R_Array1_arc_graphics_Cubemap$CubemapSide(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(108);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_Cubemap$CubemapSide, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Cubemap$CubemapSide_valueOf_java_lang_String_R_arc_graphics_Cubemap$CubemapSide(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_graphics_Cubemap$CubemapSide)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Cubemap$CubemapSide, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(134);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(135);
	((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_index = (frame[3].i);
	LINE_NUMBER(136);
	((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_glEnum = (frame[4].i);
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (frame[5].f), (frame[6].f), (frame[7].f));
	((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (frame[8].f), (frame[9].f), (frame[10].f));
	((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:getGLEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_glEnum);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:getUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:getDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Cubemap$CubemapSide_$values_R_Array1_arc_graphics_Cubemap$CubemapSide(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Cubemap$CubemapSide, (6));
	jint temp0 = jint(0);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveX;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeX;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveY;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeY;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Cubemap$CubemapSide(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[12];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap$CubemapSide:<clinit>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	{
	LINE_NUMBER(110);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"positiveX"_j))), (jint(0)), (jint(0)), (jint(34069)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(0)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_positiveX = sp[0].o;
	LINE_NUMBER(112);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"negativeX"_j))), (jint(1)), (jint(1)), (jint(34070)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_negativeX = sp[0].o;
	LINE_NUMBER(114);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"positiveY"_j))), (jint(2)), (jint(2)), (jint(34071)), (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(1)), (jfloat(0)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_positiveY = sp[0].o;
	LINE_NUMBER(116);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"negativeY"_j))), (jint(3)), (jint(3)), (jint(34072)), (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_negativeY = sp[0].o;
	LINE_NUMBER(118);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"positiveZ"_j))), (jint(4)), (jint(4)), (jint(34073)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_positiveZ = sp[0].o;
	LINE_NUMBER(120);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap$CubemapSide);
	init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"negativeZ"_j))), (jint(5)), (jint(5)), (jint(34074)), (jfloat(0)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(-1.0f)));
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_negativeZ = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)SM_arc_graphics_Cubemap$CubemapSide_$values_R_Array1_arc_graphics_Cubemap$CubemapSide(ctx);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_$VALUES = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_arc_graphics_Cubemap$CubemapSide_values_R_Array1_arc_graphics_Cubemap$CubemapSide(ctx);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	SF_arc_graphics_Cubemap$CubemapSide_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Cubemap$CubemapSide[] {
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
	(void *) M_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int,
	(void *) M_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
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
	{ "getGLEnum", "()I" },
	{ "getUp", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getDirection", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
};

static FieldMetadata fields[] {
	{ "positiveX", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_positiveX, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "negativeX", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_negativeX, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "positiveY", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_positiveY, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "negativeY", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_negativeY, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "positiveZ", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_positiveZ, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "negativeZ", &class_arc_graphics_Cubemap$CubemapSide, (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_negativeZ, "Larc/graphics/Cubemap$CubemapSide;", 16409 },
	{ "all", getArrayClass(&class_arc_graphics_Cubemap$CubemapSide, 1), (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_all, "[Larc/graphics/Cubemap$CubemapSide;", 25 },
	{ "index", &class_int, offsetof(arc_graphics_Cubemap$CubemapSide, F_index), "I", 17 },
	{ "glEnum", &class_int, offsetof(arc_graphics_Cubemap$CubemapSide, F_glEnum), "I", 17 },
	{ "up", &class_arc_math_geom_Vec3, offsetof(arc_graphics_Cubemap$CubemapSide, F_up), "Larc/math/geom/Vec3;", 17 },
	{ "direction", &class_arc_math_geom_Vec3, offsetof(arc_graphics_Cubemap$CubemapSide, F_direction), "Larc/math/geom/Vec3;", 17 },
	{ "$VALUES", getArrayClass(&class_arc_graphics_Cubemap$CubemapSide, 1), (intptr_t) &SF_arc_graphics_Cubemap$CubemapSide_$VALUES, "[Larc/graphics/Cubemap$CubemapSide;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_graphics_Cubemap$CubemapSide_values_R_Array1_arc_graphics_Cubemap$CubemapSide, 0, "()[Larc/graphics/Cubemap$CubemapSide;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Cubemap$CubemapSide_valueOf_java_lang_String_R_arc_graphics_Cubemap$CubemapSide, 0, "(Ljava/lang/String;)Larc/graphics/Cubemap$CubemapSide;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float, 0, "(Ljava/lang/String;IIIFFFFFF)V", 2 },
	{ "getGLEnum", (intptr_t) M_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int, VTABLE_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int, "()I", 1 },
	{ "getUp", (intptr_t) M_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getDirection", (intptr_t) M_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "$values", (intptr_t) SM_arc_graphics_Cubemap$CubemapSide_$values_R_Array1_arc_graphics_Cubemap$CubemapSide, 0, "()[Larc/graphics/Cubemap$CubemapSide;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Cubemap$CubemapSide, 0, "()V", 8 },
};

Class class_arc_graphics_Cubemap$CubemapSide{
		.nativeName = (intptr_t) "arc/graphics/Cubemap$CubemapSide",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_graphics_Cubemap$CubemapSide),
		.classVtable = (intptr_t) vtable_arc_graphics_Cubemap$CubemapSide,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Cubemap$CubemapSide,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Cubemap$CubemapSide,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_Cubemap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Cubemap$CubemapSide = registerClass(&class_arc_graphics_Cubemap$CubemapSide);

}

