#include "mindustry/graphics/g3d/HexSkyMesh.h"
#include "arc/math/Mathf.h"
#include "arc/util/Disposable.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/HexSkyMesh_1.h"
#include "arc/util/Time.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/Shaders_CloudShader.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/g3d/PlanetMesh.h"
#include "mindustry/graphics/g3d/HexSkyMesh.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {

jobject SF_mindustry_graphics_g3d_HexSkyMesh_mat;

void mark_mindustry_graphics_g3d_HexSkyMesh(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_HexSkyMesh_mat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_HexSkyMesh_mat)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_HexSkyMesh_mat, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_HexSkyMesh *) object;
}

void init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jint param4, jobject param5, jint param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:<init>", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_graphics_g3d_HexSkyMesh$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_HexSkyMesh$1);
	init_mindustry_graphics_g3d_HexSkyMesh$1_arc_graphics_Color_int_int_float_float_float(ctx, sp[2].o, (frame[6].o), (frame[2].i), (frame[7].i), (frame[8].f), (frame[9].f), (frame[10].f));
	sp[2].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, sp[2].o, (frame[5].i), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_radius), (frame[4].f));
	clinit_mindustry_graphics_Shaders(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Shaders_clouds;
	init_mindustry_graphics_g3d_PlanetMesh_mindustry_type_Planet_arc_graphics_Mesh_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(14);
	((mindustry_graphics_g3d_HexSkyMesh *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(34);
	((mindustry_graphics_g3d_HexSkyMesh *) NULL_CHECK((frame[0].o)))->F_speed = (frame[3].f);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_g3d_HexSkyMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_mindustry_graphics_g3d_PlanetMesh(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_graphics_g3d_HexSkyMesh *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:relRot", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) * ((jfloat)((mindustry_graphics_g3d_HexSkyMesh *) NULL_CHECK((frame[0].o)))->F_speed)) / (jfloat(40.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:render", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat(1)) - ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_uiAlpha)), (jfloat(1,000000e-02f)));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(49);
	((func_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_trans"_j));
	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_HexSkyMesh_mat;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[3].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[3].o))->F_position;
	sp[2].o = (jobject)((func_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[2].o, sp[3].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, sp[4].o);
	jfloat temp1 = (jfloat)((func_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D])(ctx, sp[2].o, sp[3].o, (temp0 + temp1));
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, sp[0].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(4)));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:preRender", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_clouds;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	((mindustry_graphics_Shaders$CloudShader *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(60);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_clouds;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$CloudShader *) NULL_CHECK(sp[0].o))->F_lightDir;
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
	jfloat temp1 = (jfloat)((func_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (temp0 + temp1));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(61);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_clouds;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$CloudShader *) NULL_CHECK(sp[0].o))->F_ambientColor;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_lightColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_clouds;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetMesh *) NULL_CHECK((frame[0].o)))->F_planet;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	jfloat temp0 = (jfloat(1)) - ((jfloat)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[1].o)))->F_uiAlpha);
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(1);
label_5:;
	{
	sp -= 2;
	((mindustry_graphics_Shaders$CloudShader *) NULL_CHECK(sp[0].o))->F_alpha = sp[1].f;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_HexSkyMesh(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_PlanetMesh(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexSkyMesh:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	SF_mindustry_graphics_g3d_HexSkyMesh_mat = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_HexSkyMesh[] {
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
	(void *) M_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
	(void *) M_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float,
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
	{ "relRot", "()F" },
};

static FieldMetadata fields[] {
	{ "mat", &class_arc_math_geom_Mat3D, (intptr_t) &SF_mindustry_graphics_g3d_HexSkyMesh_mat, "Larc/math/geom/Mat3D;", 8 },
	{ "speed", &class_float, offsetof(mindustry_graphics_g3d_HexSkyMesh, F_speed), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float, 0, "(Lmindustry/type/Planet;IFFILarc/graphics/Color;IFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_HexSkyMesh, 0, "()V", 1 },
	{ "relRot", (intptr_t) M_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float, VTABLE_mindustry_graphics_g3d_HexSkyMesh_relRot_R_float, "()F", 1 },
	{ "render", (intptr_t) M_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_graphics_g3d_HexSkyMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "preRender", (intptr_t) M_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_graphics_g3d_HexSkyMesh_preRender_mindustry_graphics_g3d_PlanetParams, "(Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_HexSkyMesh, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_HexSkyMesh{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/HexSkyMesh",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetMesh,
		.size = sizeof(mindustry_graphics_g3d_HexSkyMesh),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_HexSkyMesh,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_HexSkyMesh,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_HexSkyMesh,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_HexSkyMesh = registerClass(&class_mindustry_graphics_g3d_HexSkyMesh);

}
