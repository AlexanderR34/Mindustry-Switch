#include "mindustry/graphics/g3d/SunMesh_1.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/SunMesh_1.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_SunMesh$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_SunMesh$1 *) object;
	if (self->F_val$colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$colors)->clazz)->markFunction)((jobject) self->F_val$colors, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_SunMesh$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_SunMesh$1_double_double_double_double_double_Array1_arc_graphics_Color_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jobject param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/SunMesh$1:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_SunMesh$1(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].d = param2;
	frame[7].d = param3;
	frame[9].d = param4;
	frame[11].o = param5;
	frame[12].f = param6;
	{
	LINE_NUMBER(13);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$octaves = (frame[1].d);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$persistence = (frame[3].d);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$scl = (frame[5].d);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$pow = (frame[7].d);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$mag = (frame[9].d);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colors = (jref) (frame[11].o);
	((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colorScale = (frame[12].f);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_g3d_SunMesh$1_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/SunMesh$1:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_SunMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/SunMesh$1:getColor", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, (jint(0)), ((jdouble)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$octaves), ((jdouble)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$persistence), ((jdouble)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$scl), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(temp0)), ((jdouble)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$pow));
	frame[3].d = (temp1 * ((jdouble)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$mag));
	LINE_NUMBER(23);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colors;
	jdouble temp2 = frame[3].d;
	sp[2].o = (jobject)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colors;
	jint temp3 = jint((temp2 * (jdouble((((jarray) nullCheck(ctx, sp[2].o))->length)))));
	jint temp4 = jint(0);
	sp[2].o = (jobject)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colors;
	jint temp5 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp3, temp4, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (jint(1))));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp5)));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat)((mindustry_graphics_g3d_SunMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$colorScale));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_SunMesh$1[] {
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
	(void *) M_mindustry_graphics_g3d_SunMesh$1_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_SunMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean,
	(void *) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean,
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
	{ "getHeight", "(Larc/math/geom/Vec3;)F" },
	{ "getColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "getEmissiveColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "isEmissive", "()Z" },
	{ "skip", "(Larc/math/geom/Vec3;)Z" },
};

static jclass interfaces[] { &class_mindustry_graphics_g3d_HexMesher, };

static FieldMetadata fields[] {
	{ "val$octaves", &class_double, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$octaves), "D", 4112 },
	{ "val$persistence", &class_double, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$persistence), "D", 4112 },
	{ "val$scl", &class_double, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$scl), "D", 4112 },
	{ "val$pow", &class_double, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$pow), "D", 4112 },
	{ "val$mag", &class_double, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$mag), "D", 4112 },
	{ "val$colors", getArrayClass(&class_arc_graphics_Color, 1), offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$colors), "[Larc/graphics/Color;", 4112 },
	{ "val$colorScale", &class_float, offsetof(mindustry_graphics_g3d_SunMesh$1, F_val$colorScale), "F", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_SunMesh$1_double_double_double_double_double_Array1_arc_graphics_Color_float, 0, "(DDDDD[Larc/graphics/Color;F)V", 0 },
	{ "getHeight", (intptr_t) M_mindustry_graphics_g3d_SunMesh$1_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_graphics_g3d_SunMesh$1_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_graphics_g3d_SunMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_graphics_g3d_SunMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
};

Class class_mindustry_graphics_g3d_SunMesh$1{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/SunMesh$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_SunMesh$1),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_SunMesh$1,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_SunMesh$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_SunMesh$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_SunMesh$1 = registerClass(&class_mindustry_graphics_g3d_SunMesh$1);

}

