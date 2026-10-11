#include "mindustry/graphics/Shaders_BuildBeamShader.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/graphics/Shaders_BuildBeamShader.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/graphics/Camera.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_graphics_Shaders$BuildBeamShader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Shaders$BuildBeamShader *) object;
}

void clinit_mindustry_graphics_Shaders$BuildBeamShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
}

void init_mindustry_graphics_Shaders$BuildBeamShader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$BuildBeamShader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$BuildBeamShader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(288);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"buildbeam"_j))), (((jobject) createStringLiteral(ctx, u8"screenspace"_j))));
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$BuildBeamShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$BuildBeamShader:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_dp"_j));
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_time"_j));
	clinit_arc_util_Time(ctx);
	jfloat temp1 = (jfloat)SF_arc_util_Time_time;
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float])(ctx, sp[0].o, sp[1].o, (temp1 / temp2));
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_offset"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = temp3 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp4, (temp5 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height) / (jfloat(2)))));
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_texsize"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp6 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp6, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height));
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_invsize"_j));
	jfloat temp7 = jfloat(1);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp8 = temp7 / ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width);
	jfloat temp9 = jfloat(1);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BuildBeamShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp8, (temp9 / ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height)));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$BuildBeamShader[] {
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
	(void *) M_mindustry_graphics_Shaders$BuildBeamShader_apply,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$BuildBeamShader, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$BuildBeamShader_apply, VTABLE_mindustry_graphics_Shaders$BuildBeamShader_apply, "()V", 1 },
};

Class class_mindustry_graphics_Shaders$BuildBeamShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$BuildBeamShader",
		.parentClass = (intptr_t) &class_mindustry_graphics_Shaders$LoadShader,
		.size = sizeof(mindustry_graphics_Shaders$BuildBeamShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$BuildBeamShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$BuildBeamShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$BuildBeamShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 81,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$BuildBeamShader = registerClass(&class_mindustry_graphics_Shaders$BuildBeamShader);

}

