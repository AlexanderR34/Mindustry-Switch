#include "mindustry/graphics/g3d/NoiseMesh_2.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/NoiseMesh_2.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_NoiseMesh$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_NoiseMesh$2 *) object;
	if (self->F_val$color2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$color2)->clazz)->markFunction)((jobject) self->F_val$color2, mark, depth + 1);
	if (self->F_val$color1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$color1)->clazz)->markFunction)((jobject) self->F_val$color1, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_NoiseMesh$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_NoiseMesh$2_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6, jfloat param7, jfloat param8, jfloat param9, jobject param10, jobject param11) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$2:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_NoiseMesh$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	{
	LINE_NUMBER(31);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$seed = (frame[2].i);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$octaves = (frame[3].i);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$persistence = (frame[4].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$scale = (frame[5].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$mag = (frame[6].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$coct = (frame[7].i);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cper = (frame[8].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cscl = (frame[9].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cthresh = (frame[10].f);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$color2 = (jref) (frame[11].o);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$color1 = (jref) (frame[12].o);
	((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$2:getHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((7) + ((jint)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$seed)), (jdouble(((jint)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$octaves))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$persistence))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$scale))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)))));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$mag));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$2:getColor", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((8) + ((jint)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$seed)), (jdouble(((jint)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$coct))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cper))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cscl))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)))));
	sp += 1;
	if ((floatCompare(temp0, ((jfloat)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$cthresh), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK((frame[0].o)))->F_val$color2;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_graphics_g3d_NoiseMesh$2 *) NULL_CHECK(sp[-1].o))->F_val$color1;
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_NoiseMesh$2[] {
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
	(void *) M_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color,
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
	{ "val$seed", &class_int, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$seed), "I", 4112 },
	{ "val$octaves", &class_int, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$octaves), "I", 4112 },
	{ "val$persistence", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$persistence), "F", 4112 },
	{ "val$scale", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$scale), "F", 4112 },
	{ "val$mag", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$mag), "F", 4112 },
	{ "val$coct", &class_int, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$coct), "I", 4112 },
	{ "val$cper", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$cper), "F", 4112 },
	{ "val$cscl", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$cscl), "F", 4112 },
	{ "val$cthresh", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$cthresh), "F", 4112 },
	{ "val$color2", &class_arc_graphics_Color, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$color2), "Larc/graphics/Color;", 4112 },
	{ "val$color1", &class_arc_graphics_Color, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_val$color1), "Larc/graphics/Color;", 4112 },
	{ "this$0", &class_mindustry_graphics_g3d_NoiseMesh, offsetof(mindustry_graphics_g3d_NoiseMesh$2, F_this$0), "Lmindustry/graphics/g3d/NoiseMesh;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_NoiseMesh$2_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color, 0, "(Lmindustry/graphics/g3d/NoiseMesh;IIFFFIFFFLarc/graphics/Color;Larc/graphics/Color;)V", 0 },
	{ "getHeight", (intptr_t) M_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_graphics_g3d_NoiseMesh$2_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
};

Class class_mindustry_graphics_g3d_NoiseMesh$2{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/NoiseMesh$2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_NoiseMesh$2),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_NoiseMesh$2,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_NoiseMesh$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_NoiseMesh$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_NoiseMesh$2 = registerClass(&class_mindustry_graphics_g3d_NoiseMesh$2);

}

