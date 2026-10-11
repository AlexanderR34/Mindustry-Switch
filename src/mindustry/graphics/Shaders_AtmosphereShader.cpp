#include "mindustry/graphics/Shaders_AtmosphereShader.h"
#include "arc/Core.h"
#include "mindustry/graphics/Shaders_AtmosphereShader.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/util/Time.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"
#include "arc/Graphics.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/type/Planet.h"
#include "arc/util/Tmp.h"

extern "C" {


void mark_mindustry_graphics_Shaders$AtmosphereShader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Shaders$AtmosphereShader *) object;
	if (self->F_camera)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_camera)->clazz)->markFunction)((jobject) self->F_camera, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
	if (self->F_mat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mat)->clazz)->markFunction)((jobject) self->F_mat, mark, depth + 1);
}

void clinit_mindustry_graphics_Shaders$AtmosphereShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
}

void init_mindustry_graphics_Shaders$AtmosphereShader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$AtmosphereShader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$AtmosphereShader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(87);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"atmosphere"_j))), (((jobject) createStringLiteral(ctx, u8"atmosphere"_j))));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[1].o);
	((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK(sp[0].o))->F_mat = (jref) sp[1].o;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$AtmosphereShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$AtmosphereShader:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_resolution"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[2].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[2].o);
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp1, (jfloat(temp2)));
	LINE_NUMBER(94);
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_time"_j))), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / (jfloat(10.0f))));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_campos"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_position;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_rcampos"_j));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v31;
	sp[3].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[3].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[3].o))->F_position;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[3].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[3].o))->F_position;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_light"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[2].o = (jobject)((func_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3])(ctx, sp[2].o);
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_color"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_atmosphereColor;
	jfloat temp3 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_r;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_atmosphereColor;
	jfloat temp4 = (jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_g;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_atmosphereColor;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float_float_float])(ctx, sp[0].o, sp[1].o, temp3, temp4, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_b));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_innerRadius"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp5 = (jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_radius;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (temp5 + ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_atmosphereRadIn)));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_outerRadius"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	jfloat temp6 = (jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_radius;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (temp6 + ((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[2].o))->F_atmosphereRadOut)));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_model"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[3].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_mat;
	sp[2].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_projection"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_combined;
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_invproj"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK((frame[0].o)))->F_camera;
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK(sp[2].o))->F_invProjectionView;
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$AtmosphereShader[] {
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
	(void *) M_mindustry_graphics_Shaders$AtmosphereShader_apply,
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
	{ "camera", &class_arc_graphics_g3d_Camera3D, offsetof(mindustry_graphics_Shaders$AtmosphereShader, F_camera), "Larc/graphics/g3d/Camera3D;", 1 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_graphics_Shaders$AtmosphereShader, F_planet), "Lmindustry/type/Planet;", 1 },
	{ "mat", &class_arc_math_geom_Mat3D, offsetof(mindustry_graphics_Shaders$AtmosphereShader, F_mat), "Larc/math/geom/Mat3D;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$AtmosphereShader, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$AtmosphereShader_apply, VTABLE_mindustry_graphics_Shaders$AtmosphereShader_apply, "()V", 1 },
};

Class class_mindustry_graphics_Shaders$AtmosphereShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$AtmosphereShader",
		.parentClass = (intptr_t) &class_mindustry_graphics_Shaders$LoadShader,
		.size = sizeof(mindustry_graphics_Shaders$AtmosphereShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$AtmosphereShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$AtmosphereShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$AtmosphereShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 81,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$AtmosphereShader = registerClass(&class_mindustry_graphics_Shaders$AtmosphereShader);

}

