#include "mindustry/graphics/Shaders_PlanetShader.h"
#include "mindustry/graphics/Shaders_PlanetShader.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/type/Planet.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_graphics_Shaders$PlanetShader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_Shaders$LoadShader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_Shaders$PlanetShader *) object;
	if (self->F_lightDir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightDir)->clazz)->markFunction)((jobject) self->F_lightDir, mark, depth + 1);
	if (self->F_ambientColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientColor)->clazz)->markFunction)((jobject) self->F_ambientColor, mark, depth + 1);
	if (self->F_camDir)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camDir)->clazz)->markFunction)((jobject) self->F_camDir, mark, depth + 1);
	if (self->F_camPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camPos)->clazz)->markFunction)((jobject) self->F_camPos, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
}

void clinit_mindustry_graphics_Shaders$PlanetShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
}

void init_mindustry_graphics_Shaders$PlanetShader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$PlanetShader:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$PlanetShader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(117);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[1].o);
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_lightDir = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_ambientColor = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_camDir = (jref) sp[1].o;
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK(sp[0].o))->F_camPos = (jref) sp[1].o;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$PlanetShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$PlanetShader:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_camDir;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	sp[1].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_planets;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[1].o))->F_cam;
	sp[1].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[1].o))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_lightdir"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_lightDir;
	((func_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_ambientColor"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_ambientColor;
	jfloat temp1 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_r;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_ambientColor;
	jfloat temp2 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_g;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_ambientColor;
	((func_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_float_float_float])(ctx, sp[0].o, sp[1].o, temp1, temp2, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_b));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_camdir"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_camDir;
	((func_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_campos"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_renderer;
	sp[2].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[2].o))->F_planets;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetRenderer *) NULL_CHECK(sp[2].o))->F_cam;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_position;
	((func_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_emissive"_j));
	sp += 2;
	if (((jint)((mindustry_graphics_Shaders$PlanetShader *) NULL_CHECK((frame[0].o)))->F_emissive) == 0) goto label_6;
	}
	INST_FCONST(1);
	goto label_7;
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 3;
	((func_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$PlanetShader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, sp[2].f);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$PlanetShader[] {
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
	(void *) M_arc_graphics_gl_Shader_dispose,
	(void *) M_arc_graphics_gl_Shader_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_Shaders$PlanetShader_apply,
	(void *) M_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_createProgram_R_int,
	(void *) M_arc_graphics_gl_Shader_linkProgram_int_R_int,
	(void *) M_arc_graphics_gl_Shader_getLog_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_isCompiled_R_boolean,
	(void *) M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3,
	(void *) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color,
	(void *) M_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color,
	(void *) M_arc_graphics_gl_Shader_bind,
	(void *) M_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_fetchUniforms,
	(void *) M_arc_graphics_gl_Shader_fetchAttributes,
	(void *) M_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean,
	(void *) M_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean,
	(void *) M_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int,
	(void *) M_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String,
	(void *) M_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String,
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
	{ "apply", "()V" },
	{ "preprocess", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "compileShaders", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "loadShader", "(ILjava/lang/String;)I" },
	{ "createProgram", "()I" },
	{ "linkProgram", "(I)I" },
	{ "getLog", "()Ljava/lang/String;" },
	{ "isCompiled", "()Z" },
	{ "fetchAttributeLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;)I" },
	{ "fetchUniformLocation", "(Ljava/lang/String;Z)I" },
	{ "setUniformi", "(Ljava/lang/String;I)V" },
	{ "setUniformi", "(II)V" },
	{ "setUniformi", "(Ljava/lang/String;II)V" },
	{ "setUniformi", "(III)V" },
	{ "setUniformi", "(Ljava/lang/String;III)V" },
	{ "setUniformi", "(IIII)V" },
	{ "setUniformi", "(Ljava/lang/String;IIII)V" },
	{ "setUniformi", "(IIIII)V" },
	{ "setUniformf", "(Ljava/lang/String;F)V" },
	{ "setUniformf", "(IF)V" },
	{ "setUniformf", "(Ljava/lang/String;FF)V" },
	{ "setUniformf", "(IFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFF)V" },
	{ "setUniformf", "(IFFF)V" },
	{ "setUniformf", "(Ljava/lang/String;FFFF)V" },
	{ "setUniformf", "(IFFFF)V" },
	{ "setUniform1fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform1fv", "(I[FII)V" },
	{ "setUniform2fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform2fv", "(I[FII)V" },
	{ "setUniform3fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform3fv", "(I[FII)V" },
	{ "setUniform4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniform4fv", "(I[FII)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Larc/math/Mat;)V" },
	{ "setUniformMatrix", "(Ljava/lang/String;Larc/math/Mat;Z)V" },
	{ "setUniformMatrix", "(ILarc/math/Mat;)V" },
	{ "setUniformMatrix", "(ILarc/math/Mat;Z)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;[F)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;Larc/math/Mat;)V" },
	{ "setUniformMatrix4", "(Ljava/lang/String;Larc/math/Mat;FF)V" },
	{ "setUniformMatrix3fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V" },
	{ "setUniformMatrix4fv", "(I[FII)V" },
	{ "setUniformMatrix4fv", "(Ljava/lang/String;[FII)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/math/geom/Vec2;)V" },
	{ "setUniformf", "(ILarc/math/geom/Vec2;)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/math/geom/Vec3;)V" },
	{ "setUniformf", "(ILarc/math/geom/Vec3;)V" },
	{ "setUniformf", "(Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "setUniformf", "(ILarc/graphics/Color;)V" },
	{ "bind", "()V" },
	{ "disableVertexAttribute", "(Ljava/lang/String;)V" },
	{ "fetchUniforms", "()V" },
	{ "fetchAttributes", "()V" },
	{ "hasAttribute", "(Ljava/lang/String;)Z" },
	{ "getAttributeType", "(Ljava/lang/String;)I" },
	{ "getAttributeLocation", "(Ljava/lang/String;)I" },
	{ "getAttributeSize", "(Ljava/lang/String;)I" },
	{ "hasUniform", "(Ljava/lang/String;)Z" },
	{ "getUniformType", "(Ljava/lang/String;)I" },
	{ "getUniformLocation", "(Ljava/lang/String;)I" },
	{ "getUniformSize", "(Ljava/lang/String;)I" },
	{ "getAttributes", "()[Ljava/lang/String;" },
	{ "getUniforms", "()[Ljava/lang/String;" },
	{ "getVertexShaderSource", "()Ljava/lang/String;" },
	{ "getFragmentShaderSource", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "lightDir", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_Shaders$PlanetShader, F_lightDir), "Larc/math/geom/Vec3;", 1 },
	{ "ambientColor", &class_arc_graphics_Color, offsetof(mindustry_graphics_Shaders$PlanetShader, F_ambientColor), "Larc/graphics/Color;", 1 },
	{ "camDir", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_Shaders$PlanetShader, F_camDir), "Larc/math/geom/Vec3;", 1 },
	{ "camPos", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_Shaders$PlanetShader, F_camPos), "Larc/math/geom/Vec3;", 1 },
	{ "emissive", &class_boolean, offsetof(mindustry_graphics_Shaders$PlanetShader, F_emissive), "Z", 1 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_graphics_Shaders$PlanetShader, F_planet), "Lmindustry/type/Planet;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$PlanetShader, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$PlanetShader_apply, VTABLE_mindustry_graphics_Shaders$PlanetShader_apply, "()V", 1 },
};

Class class_mindustry_graphics_Shaders$PlanetShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$PlanetShader",
		.parentClass = (intptr_t) &class_mindustry_graphics_Shaders$LoadShader,
		.size = sizeof(mindustry_graphics_Shaders$PlanetShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$PlanetShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$PlanetShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$PlanetShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 81,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$PlanetShader = registerClass(&class_mindustry_graphics_Shaders$PlanetShader);

}

