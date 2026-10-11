#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "arc/util/Disposable.h"
#include "mindustry/graphics/Shaders_PlanetShader.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/NoiseMesh_2.h"
#include "mindustry/graphics/g3d/NoiseMesh_1.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesh.h"
#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_mindustry_graphics_g3d_NoiseMesh(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_NoiseMesh *) object;
}

void clinit_mindustry_graphics_g3d_NoiseMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_HexMesh(ctx);
}

void init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_arc_graphics_Color_float_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jfloat param4, jint param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_NoiseMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(11);
	init_mindustry_graphics_g3d_HexMesh(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_g3d_NoiseMesh$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_NoiseMesh$1);
	init_mindustry_graphics_g3d_NoiseMesh$1_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_arc_graphics_Color(ctx, sp[1].o, (frame[0].o), (frame[2].i), (frame[6].i), (frame[7].f), (frame[8].f), (frame[9].f), (frame[4].o));
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, sp[1].o, (frame[3].i), (frame[5].f), (jfloat(0.2f)));
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jint param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jint param10, jfloat param11, jfloat param12, jfloat param13) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/NoiseMesh:<init>", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_NoiseMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	frame[11].i = param10;
	frame[12].f = param11;
	frame[13].f = param12;
	frame[14].f = param13;
	{
	LINE_NUMBER(28);
	init_mindustry_graphics_g3d_HexMesh(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK(sp[0].o))->F_shader = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_g3d_NoiseMesh$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_NoiseMesh$2);
	init_mindustry_graphics_g3d_NoiseMesh$2_mindustry_graphics_g3d_NoiseMesh_int_int_float_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, (frame[0].o), (frame[2].i), (frame[5].i), (frame[6].f), (frame[7].f), (frame[8].f), (frame[11].i), (frame[12].f), (frame[13].f), (frame[14].f), (frame[10].o), (frame[9].o));
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, sp[1].o, (frame[3].i), (frame[4].f), (jfloat(0.2f)));
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_NoiseMesh[] {
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
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_arc_graphics_Color_float_int_float_float_float, 0, "(Lmindustry/type/Planet;IILarc/graphics/Color;FIFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float, 0, "(Lmindustry/type/Planet;IIFIFFFLarc/graphics/Color;Larc/graphics/Color;IFFF)V", 1 },
};

Class class_mindustry_graphics_g3d_NoiseMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/NoiseMesh",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_HexMesh,
		.size = sizeof(mindustry_graphics_g3d_NoiseMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_NoiseMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_NoiseMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_NoiseMesh,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_NoiseMesh = registerClass(&class_mindustry_graphics_g3d_NoiseMesh);

}
