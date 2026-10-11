#include "mindustry/graphics/Shaders_SurfaceShader.h"
#include "mindustry/graphics/Shaders_SurfaceShader.h"
#include "arc/assets/AssetDescriptor.h"
#include "mindustry/graphics/Shaders_SurfaceShader_invoke_arc_func_Cons_1.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/GLTexture.h"
#include "arc/Core.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "arc/func/Cons.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "java/lang/Class.h"
#include "arc/graphics/Camera.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_graphics_Shaders$SurfaceShader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_Shader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_graphics_Shaders$SurfaceShader *) object;
	if (self->F_noiseTex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_noiseTex)->clazz)->markFunction)((jobject) self->F_noiseTex, mark, depth + 1);
}

void clinit_mindustry_graphics_Shaders$SurfaceShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_Shader(ctx);
}

void init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_graphics_Shaders_getShaderFi_java_lang_String_R_arc_files_Fi(ctx, (((jobject) createStringLiteral(ctx, u8"screenspace.vert"_j))));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.frag"_j.string, 1, (frame[1].o));
	sp[2].o = (jobject)SM_mindustry_graphics_Shaders_getShaderFi_java_lang_String_R_arc_files_Fi(ctx, sp[2].o);
	init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(337);
	((func_mindustry_graphics_Shaders$SurfaceShader_loadNoise) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_loadNoise])(ctx, (frame[0].o));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(341);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(342);
	((func_mindustry_graphics_Shaders$SurfaceShader_loadNoise) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_loadNoise])(ctx, (frame[0].o));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:textureName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"noise"_j)));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$SurfaceShader_loadNoise(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:loadNoise", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"sprites/\u0001.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_graphics_Texture)));
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Shaders$SurfaceShader_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_graphics_Shaders$SurfaceShader_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_graphics_Shaders$SurfaceShader_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$SurfaceShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:apply", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_campos"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp1 = temp0 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width) / (jfloat(2)));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	sp[2].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_position;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp1, (temp2 - (((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height) / (jfloat(2)))));
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_resolution"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	jfloat temp3 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_camera;
	((func_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp3, ((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[2].o))->F_height));
	LINE_NUMBER(360);
	((func_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_setUniformf_java_lang_String_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_time"_j))), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time));
	LINE_NUMBER(362);
	jint temp4 = (jint)((func_mindustry_graphics_Shaders$SurfaceShader_hasUniform_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_hasUniform_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_noise"_j))));
	if (temp4 == 0) goto label_4;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$SurfaceShader *) NULL_CHECK((frame[0].o)))->F_noiseTex;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_assets;
	sp[2].o = (jobject)((func_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"sprites/\u0001.png"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, (((jobject) &class_arc_graphics_Texture)));
	((mindustry_graphics_Shaders$SurfaceShader *) NULL_CHECK(sp[0].o))->F_noiseTex = (jref) (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o));
	}
label_6:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$SurfaceShader *) NULL_CHECK((frame[0].o)))->F_noiseTex;
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(368);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_effectBuffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)), (jint(0)));
	LINE_NUMBER(370);
	((func_mindustry_graphics_Shaders$SurfaceShader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$SurfaceShader_setUniformi_java_lang_String_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_noise"_j))), (jint(1)));
	}
label_4:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_Shaders$SurfaceShader_lambda$loadNoise$0_arc_graphics_Texture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$SurfaceShader:lambda$loadNoise$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$SurfaceShader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$SurfaceShader[] {
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
	(void *) M_mindustry_graphics_Shaders$SurfaceShader_apply,
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
	(void *) M_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String,
	(void *) M_mindustry_graphics_Shaders$SurfaceShader_loadNoise,
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
	{ "textureName", "()Ljava/lang/String;" },
	{ "loadNoise", "()V" },
};

static FieldMetadata fields[] {
	{ "noiseTex", &class_arc_graphics_Texture, offsetof(mindustry_graphics_Shaders$SurfaceShader, F_noiseTex), "Larc/graphics/Texture;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$SurfaceShader_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "textureName", (intptr_t) M_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String, VTABLE_mindustry_graphics_Shaders$SurfaceShader_textureName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "loadNoise", (intptr_t) M_mindustry_graphics_Shaders$SurfaceShader_loadNoise, VTABLE_mindustry_graphics_Shaders$SurfaceShader_loadNoise, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$SurfaceShader_apply, VTABLE_mindustry_graphics_Shaders$SurfaceShader_apply, "()V", 1 },
	{ "lambda$loadNoise$0", (intptr_t) SM_mindustry_graphics_Shaders$SurfaceShader_lambda$loadNoise$0_arc_graphics_Texture, 0, "(Larc/graphics/Texture;)V", 4106 },
};

Class class_mindustry_graphics_Shaders$SurfaceShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$SurfaceShader",
		.parentClass = (intptr_t) &class_arc_graphics_gl_Shader,
		.size = sizeof(mindustry_graphics_Shaders$SurfaceShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$SurfaceShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$SurfaceShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$SurfaceShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$SurfaceShader = registerClass(&class_mindustry_graphics_Shaders$SurfaceShader);

}

