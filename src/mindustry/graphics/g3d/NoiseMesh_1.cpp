#include "mindustry/graphics/g3d/NoiseMesh_1.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/NoiseMesh_1.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_NoiseMesh$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_NoiseMesh$1 *) object;
	if (self->F_val$color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$color)->clazz)->markFunction)((jobject) self->F_val$color, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_NoiseMesh$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_NoiseMesh$1_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$1:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_NoiseMesh$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(14);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$seed = (frame[2].i);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$octaves = (frame[3].i);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$persistence = (frame[4].f);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$scale = (frame[5].f);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$mag = (frame[6].f);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$color = (jref) (frame[7].o);
	((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_g3d_NoiseMesh$1_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$1:getHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((7) + ((jint)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$seed)), (jdouble(((jint)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$octaves))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$persistence))), (jdouble(((jfloat)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$scale))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble(((jfloat(5.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)))));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$mag));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_NoiseMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh$1:getColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_NoiseMesh$1 *) NULL_CHECK((frame[0].o)))->F_val$color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_NoiseMesh$1[] {
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
	(void *) M_mindustry_graphics_g3d_NoiseMesh$1_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_NoiseMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color,
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
	{ "val$seed", &class_int, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$seed), "I", 4112 },
	{ "val$octaves", &class_int, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$octaves), "I", 4112 },
	{ "val$persistence", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$persistence), "F", 4112 },
	{ "val$scale", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$scale), "F", 4112 },
	{ "val$mag", &class_float, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$mag), "F", 4112 },
	{ "val$color", &class_arc_graphics_Color, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_val$color), "Larc/graphics/Color;", 4112 },
	{ "this$0", &class_mindustry_graphics_g3d_NoiseMesh, offsetof(mindustry_graphics_g3d_NoiseMesh$1, F_this$0), "Lmindustry/graphics/g3d/NoiseMesh;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_NoiseMesh$1_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_arc_graphics_Color, 0, "(Lmindustry/graphics/g3d/NoiseMesh;IIFFFLarc/graphics/Color;)V", 0 },
	{ "getHeight", (intptr_t) M_mindustry_graphics_g3d_NoiseMesh$1_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_graphics_g3d_NoiseMesh$1_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_graphics_g3d_NoiseMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_graphics_g3d_NoiseMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
};

Class class_mindustry_graphics_g3d_NoiseMesh$1{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/NoiseMesh$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_NoiseMesh$1),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_NoiseMesh$1,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_NoiseMesh$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_NoiseMesh$1,
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
static bool registered_mindustry_graphics_g3d_NoiseMesh$1 = registerClass(&class_mindustry_graphics_g3d_NoiseMesh$1);

}

