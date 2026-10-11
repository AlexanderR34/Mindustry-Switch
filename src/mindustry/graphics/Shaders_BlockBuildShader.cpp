#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/graphics/Shaders_LoadShader.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/Shaders_BlockBuildShader.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_mindustry_graphics_Shaders$BlockBuildShader(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Shaders$BlockBuildShader *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_mindustry_graphics_Shaders$BlockBuildShader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_Shaders$LoadShader(ctx);
}

void init_mindustry_graphics_Shaders$BlockBuildShader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$BlockBuildShader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Shaders$BlockBuildShader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(246);
	init_mindustry_graphics_Shaders$LoadShader_java_lang_String_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"blockbuild"_j))), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	LINE_NUMBER(241);
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_alpha = (jfloat(1));
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[1].o);
	((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Shaders$BlockBuildShader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Shaders$BlockBuildShader:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_progress"_j))), ((jfloat)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_progress));
	LINE_NUMBER(252);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_time"_j))), ((jfloat)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(253);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_alpha"_j))), ((jfloat)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_alpha));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(256);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_uv"_j))), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(257);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_uv2"_j))), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(258);
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"u_texsize"_j))), (jfloat(1)), (jfloat(1)));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_uv"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_u;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_v));
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_uv2"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp1 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_u2;
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp1, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_v2));
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_texsize"_j));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_texture;
	jfloat temp2 = jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[2].o))->F_width));
	sp[2].o = (jobject)((mindustry_graphics_Shaders$BlockBuildShader *) NULL_CHECK((frame[0].o)))->F_region;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[2].o))->F_texture;
	((func_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$BlockBuildShader_setUniformf_java_lang_String_float_float])(ctx, sp[0].o, sp[1].o, temp2, (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[2].o))->F_height))));
	}
label_8:;
	LINE_NUMBER(264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Shaders$BlockBuildShader[] {
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
	(void *) M_mindustry_graphics_Shaders$BlockBuildShader_apply,
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
	{ "progress", &class_float, offsetof(mindustry_graphics_Shaders$BlockBuildShader, F_progress), "F", 1 },
	{ "alpha", &class_float, offsetof(mindustry_graphics_Shaders$BlockBuildShader, F_alpha), "F", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_graphics_Shaders$BlockBuildShader, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "time", &class_float, offsetof(mindustry_graphics_Shaders$BlockBuildShader, F_time), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Shaders$BlockBuildShader, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_graphics_Shaders$BlockBuildShader_apply, VTABLE_mindustry_graphics_Shaders$BlockBuildShader_apply, "()V", 1 },
};

Class class_mindustry_graphics_Shaders$BlockBuildShader{
		.nativeName = (intptr_t) "mindustry/graphics/Shaders$BlockBuildShader",
		.parentClass = (intptr_t) &class_mindustry_graphics_Shaders$LoadShader,
		.size = sizeof(mindustry_graphics_Shaders$BlockBuildShader),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Shaders$BlockBuildShader,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Shaders$BlockBuildShader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Shaders$BlockBuildShader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Shaders,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 81,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Shaders$BlockBuildShader = registerClass(&class_mindustry_graphics_Shaders$BlockBuildShader);

}

