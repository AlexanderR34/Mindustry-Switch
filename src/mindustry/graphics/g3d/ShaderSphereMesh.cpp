#include "mindustry/graphics/g3d/ShaderSphereMesh.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/graphics/Mesh.h"

extern "C" {


void mark_mindustry_graphics_g3d_ShaderSphereMesh(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_ShaderSphereMesh *) object;
}

void clinit_mindustry_graphics_g3d_ShaderSphereMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_PlanetMesh(ctx);
}

void init_mindustry_graphics_g3d_ShaderSphereMesh_mindustry_type_Planet_arc_graphics_gl_Shader_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/ShaderSphereMesh:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_ShaderSphereMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildIcosphere_int_float_R_arc_graphics_Mesh(ctx, (frame[3].i), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_radius));
	init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_ShaderSphereMesh[] {
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
	(void *) M_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams,
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
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_ShaderSphereMesh_mindustry_type_Planet_arc_graphics_gl_Shader_int, 0, "(Lmindustry/type/Planet;Larc/graphics/gl/Shader;I)V", 1 },
};

Class class_mindustry_graphics_g3d_ShaderSphereMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/ShaderSphereMesh",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetMesh,
		.size = sizeof(mindustry_graphics_g3d_ShaderSphereMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_ShaderSphereMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_ShaderSphereMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_ShaderSphereMesh,
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
static bool registered_mindustry_graphics_g3d_ShaderSphereMesh = registerClass(&class_mindustry_graphics_g3d_ShaderSphereMesh);

}
