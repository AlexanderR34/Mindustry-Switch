#include "mindustry/graphics/g3d/SunMesh.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "mindustry/graphics/g3d/HexMesh.h"
#include "mindustry/graphics/g3d/SunMesh_1.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_graphics_g3d_SunMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_g3d_HexMesh(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_g3d_SunMesh *) object;
}

void clinit_mindustry_graphics_g3d_SunMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_HexMesh(ctx);
}

void init_mindustry_graphics_g3d_SunMesh_mindustry_type_Planet_int_double_double_double_double_double_float_Array1_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6, jfloat param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/SunMesh:<init>", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_SunMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	frame[9].d = param5;
	frame[11].d = param6;
	frame[13].f = param7;
	frame[14].o = param8;
	{
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_graphics_g3d_SunMesh$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_SunMesh$1);
	init_mindustry_graphics_g3d_SunMesh$1_double_double_double_double_double_Array1_arc_graphics_Color_float(ctx, sp[2].o, (frame[3].d), (frame[5].d), (frame[7].d), (frame[9].d), (frame[11].d), (frame[14].o), (frame[13].f));
	jint temp0 = frame[2].i;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Shaders_unlit;
	init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_mindustry_graphics_g3d_HexMesher_int_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_SunMesh[] {
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
	(void *) M_mindustry_graphics_g3d_PlanetMesh_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
	(void *) M_mindustry_graphics_g3d_HexMesh_preRender_mindustry_graphics_g3d_PlanetParams,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "render", "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V" },
	{ "preRender", "(Lmindustry/graphics/g3d/PlanetParams;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_SunMesh_mindustry_type_Planet_int_double_double_double_double_double_float_Array1_arc_graphics_Color, 0, "(Lmindustry/type/Planet;IDDDDDF[Larc/graphics/Color;)V", 129 },
};

Class class_mindustry_graphics_g3d_SunMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/SunMesh",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_HexMesh,
		.size = sizeof(mindustry_graphics_g3d_SunMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_SunMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_SunMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_SunMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_SunMesh = registerClass(&class_mindustry_graphics_g3d_SunMesh);

}
