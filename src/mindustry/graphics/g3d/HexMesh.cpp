#include "mindustry/graphics/g3d/HexMesh.h"
#include "arc/util/Disposable.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/graphics/Shaders_PlanetShader.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesh.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_graphics_g3d_HexMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_g3d_PlanetMesh(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_g3d_HexMesh *) object;
}

void clinit_mindustry_graphics_g3d_HexMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_PlanetMesh(ctx);
}

void init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesh:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_generator;
	sp[2].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, sp[2].o, (frame[2].i), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_radius), (jfloat(0.2f)));
	clinit_mindustry_graphics_Shaders(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_mindustry_graphics_g3d_HexMesher_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesh:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, (frame[2].o), (frame[3].i), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_radius), (jfloat(0.2f)));
	init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_g3d_HexMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesh:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexMesh(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_graphics_g3d_PlanetMesh(ctx, (frame[0].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_HexMesh_preRender_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesh:preRender", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(24);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_generator;
	sp += 1;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	jint temp0 = (jint)((func_mindustry_maps_generators_PlanetGenerator_isEmissive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_isEmissive_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_emissive = sp[1].i;
	LINE_NUMBER(25);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_lightDir;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(26);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planet;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_ambientColor;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_lightColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_HexMesh[] {
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
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_int, 0, "(Lmindustry/type/Planet;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_mindustry_graphics_g3d_HexMesher_int_arc_graphics_gl_Shader, 0, "(Lmindustry/type/Planet;Lmindustry/graphics/g3d/HexMesher;ILarc/graphics/gl/Shader;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_HexMesh, 0, "()V", 1 },
	{ "preRender", (intptr_t) M_mindustry_graphics_g3d_HexMesh_preRender_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_HexMesh_preRender_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
};

Class class_mindustry_graphics_g3d_HexMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/HexMesh",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetMesh,
		.size = sizeof(mindustry_graphics_g3d_HexMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_HexMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_HexMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_HexMesh,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_HexMesh = registerClass(&class_mindustry_graphics_g3d_HexMesh);

}
