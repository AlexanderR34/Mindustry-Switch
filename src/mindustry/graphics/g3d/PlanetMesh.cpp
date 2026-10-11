#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "mindustry/type/Planet.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetMesh(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_PlanetMesh *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_PlanetMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetMesh:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet = (jref) (frame[1].o);
	LINE_NUMBER(16);
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[2].o);
	LINE_NUMBER(17);
	((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[3].o);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_g3d_PlanetMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetMesh:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetMesh(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetMesh:preRender", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetMesh:render", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	jint temp0 = (jint)((func_arc_graphics_Mesh_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(31);
	((func_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_trans"_j));
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[3].o)))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, sp[0].o);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(4)));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_PlanetMesh_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetMesh:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetMesh[] {
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

static jclass interfaces[] { &class_mindustry_graphics_g3d_GenericMesh, };

static FieldMetadata fields[] {
	{ "mesh", &class_arc_graphics_Mesh, offsetof(mindustry_graphics_g3d_PlanetMesh, F_mesh), "Larc/graphics/Mesh;", 4 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_graphics_g3d_PlanetMesh, F_planet), "Lmindustry/type/Planet;", 4 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(mindustry_graphics_g3d_PlanetMesh, F_shader), "Larc/graphics/gl/Shader;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader, 0, "(Lmindustry/type/Planet;Larc/graphics/Mesh;Larc/graphics/gl/Shader;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetMesh, 0, "()V", 1 },
	{ "preRender", (intptr_t) M_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_PlanetMesh_preRender_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "render", (intptr_t) M_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_graphics_g3d_PlanetMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_g3d_PlanetMesh_dispose, VTABLE_mindustry_graphics_g3d_PlanetMesh_dispose, "()V", 1 },
};

Class class_mindustry_graphics_g3d_PlanetMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetMesh",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetMesh = registerClass(&class_mindustry_graphics_g3d_PlanetMesh);

}
