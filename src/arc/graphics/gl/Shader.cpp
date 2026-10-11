#include "arc/graphics/gl/Shader.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "java/nio/IntBuffer.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Color.h"
#include "arc/Application.h"
#include "arc/math/geom/Vec3.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "java/nio/ByteOrder.h"
#include "arc/util/Buffers.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Mat.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Gl.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {

jobject SF_arc_graphics_gl_Shader_positionAttribute;
jobject SF_arc_graphics_gl_Shader_normalAttribute;
jobject SF_arc_graphics_gl_Shader_colorAttribute;
jobject SF_arc_graphics_gl_Shader_mixColorAttribute;
jobject SF_arc_graphics_gl_Shader_texcoordAttribute;
jbool SF_arc_graphics_gl_Shader_pedantic;
jobject SF_arc_graphics_gl_Shader_prependVertexCode;
jobject SF_arc_graphics_gl_Shader_prependFragmentCode;
jobject SF_arc_graphics_gl_Shader_val;

void mark_arc_graphics_gl_Shader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_Shader_positionAttribute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_positionAttribute)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_positionAttribute, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_normalAttribute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_normalAttribute)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_normalAttribute, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_colorAttribute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_colorAttribute)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_colorAttribute, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_mixColorAttribute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_mixColorAttribute)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_mixColorAttribute, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_texcoordAttribute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_texcoordAttribute)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_texcoordAttribute, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_prependVertexCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_prependVertexCode)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_prependVertexCode, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_prependFragmentCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_prependFragmentCode)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_prependFragmentCode, mark, depth + 1);
		if (SF_arc_graphics_gl_Shader_val)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_Shader_val)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_Shader_val, mark, depth + 1);
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
	auto self = (arc_graphics_gl_Shader *) object;
	if (self->F_uniforms)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniforms)->clazz)->markFunction)((jobject) self->F_uniforms, mark, depth + 1);
	if (self->F_uniformTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformTypes)->clazz)->markFunction)((jobject) self->F_uniformTypes, mark, depth + 1);
	if (self->F_uniformSizes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformSizes)->clazz)->markFunction)((jobject) self->F_uniformSizes, mark, depth + 1);
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_attributeTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeTypes)->clazz)->markFunction)((jobject) self->F_attributeTypes, mark, depth + 1);
	if (self->F_attributeSizes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeSizes)->clazz)->markFunction)((jobject) self->F_attributeSizes, mark, depth + 1);
	if (self->F_vertexShaderSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertexShaderSource)->clazz)->markFunction)((jobject) self->F_vertexShaderSource, mark, depth + 1);
	if (self->F_fragmentShaderSource)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fragmentShaderSource)->clazz)->markFunction)((jobject) self->F_fragmentShaderSource, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_log)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_log)->clazz)->markFunction)((jobject) self->F_log, mark, depth + 1);
	if (self->F_uniformNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformNames)->clazz)->markFunction)((jobject) self->F_uniformNames, mark, depth + 1);
	if (self->F_attributeNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeNames)->clazz)->markFunction)((jobject) self->F_attributeNames, mark, depth + 1);
}

void init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_Shader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(101);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_uniforms = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_uniformTypes = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_uniformSizes = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_attributeTypes = (jref) sp[1].o;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_attributeSizes = (jref) sp[1].o;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_params = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(81);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(102);
	if ((frame[1].o) != nullptr) goto label_11;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vertex shader must not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(103);
	if ((frame[2].o) != nullptr) goto label_12;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fragment shader must not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(105);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_prependVertexCode;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_prependVertexCode;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_13;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_Shader_prependVertexCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(106);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_prependFragmentCode;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_prependFragmentCode;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_14;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_Shader_prependFragmentCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(111);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_vertexShaderSource = (jref) (frame[1].o);
	LINE_NUMBER(112);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_fragmentShaderSource = (jref) (frame[2].o);
	LINE_NUMBER(114);
	M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(115);
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_isCompiled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_isCompiled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(116);
	M_arc_graphics_gl_Shader_fetchAttributes(ctx, (frame[0].o));
	LINE_NUMBER(117);
	M_arc_graphics_gl_Shader_fetchUniforms(ctx, (frame[0].o));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(119);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Failed to compile shader: "_j))));
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_23:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_Shader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[2].o));
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(127);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Shader "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":\n"_j))));
	sp[1].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_arc_util_Log_debug_java_lang_Object(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_apply(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:apply", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:preprocess", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#ifdef GL_ES"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(138);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Shader contains GL_ES specific code; this should be handled by the preprocessor. Code: \n```\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n```"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#version"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(143);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Shader contains explicit version requirement; this should be handled by the preprocessor. Code: \n```\n"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n```"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(147);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(148);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#ifdef GL_ES\nprecision "_j))));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#define HIGHP"_j))));
	sp += 1;
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"//#define HIGHP"_j))));
	if (temp0 != 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"highp"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"mediump"_j));
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" float;\nprecision mediump int;\n#else\n#define lowp  \n#define mediump \n#define highp \n#endif\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(159);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#ifndef GL_ES\n#define lowp  \n#define mediump \n#define highp \n#endif\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#version "_j))));
	if (temp0 == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_14;
label_13:;
	{
	LINE_NUMBER(176);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(3)), (jint(2)));
	if (temp0 == 0) goto label_16;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"150"_j));
	goto label_14;
label_16:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"130"_j));
	goto label_14;
label_15:;
	LINE_NUMBER(177);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"300 es"_j));
label_14:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(179);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#version "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(181);
	sp += 1;
	if ((frame[2].i) == 0) goto label_19;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"out"_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[1].o))(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" lowp"_j));
	goto label_21;
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_21:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" vec4 fragColor;\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_22;
	}
label_19:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_22:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"varying"_j));
	LINE_NUMBER(183);
	sp += 3;
	if ((frame[2].i) == 0) goto label_24;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"in"_j));
	goto label_25;
label_24:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"out"_j));
label_25:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"attribute"_j));
	LINE_NUMBER(184);
	sp += 2;
	if ((frame[2].i) == 0) goto label_27;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"???"_j));
	goto label_28;
label_27:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"in"_j));
label_28:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"texture2D("_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"texture("_j));
	LINE_NUMBER(185);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"textureCube("_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"texture("_j));
	LINE_NUMBER(186);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"gl_FragColor"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"fragColor"_j));
	LINE_NUMBER(187);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:compileShaders", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int(ctx, (frame[0].o), (jint(35633)), (frame[1].o));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_vertexShaderHandle = temp0;
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int(ctx, (frame[0].o), (jint(35632)), (frame[2].o));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_fragmentShaderHandle = temp1;
	LINE_NUMBER(199);
	if (((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle) == (jint(-1))) goto label_3;
	}
	{
	if (((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle) != (jint(-1))) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(200);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(0));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_createProgram_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_createProgram_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)M_arc_graphics_gl_Shader_linkProgram_int_R_int(ctx, sp[1].o, temp0);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_program = temp1;
	LINE_NUMBER(205);
	if (((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(206);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(0));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(210);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_isCompiled = (jint(1));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:loadShader", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)SM_arc_util_Buffers_newIntBuffer_int_R_java_nio_IntBuffer(ctx, (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(216);
	jint temp0 = (jint)SM_arc_graphics_Gl_createShader_int_R_int(ctx, (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(217);
	if ((frame[4].i) != 0) goto label_3;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(219);
	SM_arc_graphics_Gl_shaderSource_int_java_lang_String(ctx, (frame[4].i), (frame[2].o));
	LINE_NUMBER(220);
	SM_arc_graphics_Gl_compileShader_int(ctx, (frame[4].i));
	LINE_NUMBER(221);
	SM_arc_graphics_Gl_getShaderiv_int_int_java_nio_IntBuffer(ctx, (frame[4].i), (jint(35713)), (frame[3].o));
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_arc_graphics_Gl_getShaderInfoLog_int_R_java_lang_String(ctx, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(225);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK(sp[1].o))->F_log;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[2].o);
	jobject temp0 = sp[0].o;
	sp[0].o = sp[1].o;
	jobject temp1 = sp[1].o;
	sp[1].o = temp0;
	sp += 2;
	if ((frame[1].i) != (jint(35633))) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Vertex shader\n"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Fragment shader:\n"_j));
label_11:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(226);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK(sp[1].o))->F_log;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[1].o))->F_log = (jref) sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[3].o), (jint(0)));
	frame[6].i = temp0;
	LINE_NUMBER(230);
	if ((frame[6].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_14:;
	{
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_createProgram_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:createProgram", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)SM_arc_graphics_Gl_createProgram_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(239);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	INST_ICONST(-1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_linkProgram_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:linkProgram", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(243);
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(245);
	SM_arc_graphics_Gl_attachShader_int_int(ctx, (frame[1].i), ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle));
	LINE_NUMBER(246);
	SM_arc_graphics_Gl_attachShader_int_int(ctx, (frame[1].i), ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle));
	LINE_NUMBER(247);
	SM_arc_graphics_Gl_linkProgram_int(ctx, (frame[1].i));
	LINE_NUMBER(249);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (jint(4)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(250);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(253);
	SM_arc_graphics_Gl_getProgramiv_int_int_java_nio_IntBuffer(ctx, (frame[1].i), (jint(35714)), (frame[3].o));
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, (frame[3].o), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(255);
	if ((frame[4].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Gl_getProgramInfoLog_int_R_java_lang_String(ctx, (frame[1].i));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_getLog_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getLog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(268);
	if (((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_isCompiled) == 0) goto label_1;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Gl_getProgramInfoLog_int_R_java_lang_String(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_log = (jref) sp[1].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_log;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_Shader_isCompiled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:isCompiled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_isCompiled);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:fetchAttributeLocation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (-2));
	frame[2].i = temp0;
	if (temp0 != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)SM_arc_graphics_Gl_getAttribLocation_int_java_lang_String_R_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:fetchUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)((func_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (clinit_arc_graphics_gl_Shader(ctx), (jint)SF_arc_graphics_gl_Shader_pedantic));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:fetchUniformLocation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (-2));
	frame[3].i = temp0;
	if (temp0 != (-2)) goto label_2;
	}
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)SM_arc_graphics_Gl_getUniformLocation_int_java_lang_String_R_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(302);
	if ((frame[3].i) != (jint(-1))) goto label_5;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_5;
	{
	LINE_NUMBER(303);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"no uniform with name '"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"' in shader"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(316);
	SM_arc_graphics_Gl_uniform1i_int_int(ctx, (frame[3].i), (frame[2].i));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(320);
	SM_arc_graphics_Gl_uniform1i_int_int(ctx, (frame[1].i), (frame[2].i));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(330);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(331);
	SM_arc_graphics_Gl_uniform2i_int_int_int(ctx, (frame[4].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(335);
	SM_arc_graphics_Gl_uniform2i_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(347);
	SM_arc_graphics_Gl_uniform3i_int_int_int_int(ctx, (frame[5].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(351);
	SM_arc_graphics_Gl_uniform3i_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(364);
	SM_arc_graphics_Gl_uniform4i_int_int_int_int_int(ctx, (frame[6].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformi", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(368);
	SM_arc_graphics_Gl_uniform4i_int_int_int_int_int(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(377);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(378);
	SM_arc_graphics_Gl_uniform1f_int_float(ctx, (frame[3].i), (frame[2].f));
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_float(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(382);
	SM_arc_graphics_Gl_uniform1f_int_float(ctx, (frame[1].i), (frame[2].f));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(393);
	SM_arc_graphics_Gl_uniform2f_int_float_float(ctx, (frame[4].i), (frame[2].f), (frame[3].f));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(397);
	SM_arc_graphics_Gl_uniform2f_int_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(409);
	SM_arc_graphics_Gl_uniform3f_int_float_float_float(ctx, (frame[5].i), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(413);
	SM_arc_graphics_Gl_uniform3f_int_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(425);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(426);
	SM_arc_graphics_Gl_uniform4f_int_float_float_float_float(ctx, (frame[6].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(430);
	SM_arc_graphics_Gl_uniform4f_int_float_float_float_float(ctx, (frame[1].i), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform1fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(434);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(435);
	SM_arc_graphics_Gl_uniform1fv_int_int_Array1_float_int(ctx, (frame[5].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform1fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(439);
	SM_arc_graphics_Gl_uniform1fv_int_int_Array1_float_int(ctx, (frame[1].i), (frame[4].i), (frame[2].o), (frame[3].i));
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform2fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(443);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(444);
	SM_arc_graphics_Gl_uniform2fv_int_int_Array1_float_int(ctx, (frame[5].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform2fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(448);
	SM_arc_graphics_Gl_uniform2fv_int_int_Array1_float_int(ctx, (frame[1].i), ((frame[4].i) / (jint(2))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform3fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(452);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(453);
	SM_arc_graphics_Gl_uniform3fv_int_int_Array1_float_int(ctx, (frame[5].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform3fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(457);
	SM_arc_graphics_Gl_uniform3fv_int_int_Array1_float_int(ctx, (frame[1].i), ((frame[4].i) / (jint(3))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform4fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(462);
	SM_arc_graphics_Gl_uniform4fv_int_int_Array1_float_int(ctx, (frame[5].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniform4fv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(466);
	SM_arc_graphics_Gl_uniform4fv_int_int_Array1_float_int(ctx, (frame[1].i), ((frame[4].i) / (jint(4))), (frame[2].o), (frame[3].i));
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(475);
	((func_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	((func_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(489);
	((func_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (jint(0)));
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(493);
	jint temp0 = frame[1].i;
	jint temp1 = jint(1);
	jint temp2 = frame[3].i;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_Array1_float_int(ctx, temp0, temp1, temp2, sp[0].o, (jint(0)));
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(497);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int(ctx, temp0, (jint(1)), (jint(0)), (frame[2].o), (jint(0)));
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(501);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = jint(1);
	jint temp2 = jint(0);
	sp[0].o = (jobject)SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_R_Array1_float(ctx, (frame[2].o));
	SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int(ctx, temp0, temp1, temp2, sp[0].o, (jint(0)));
	LINE_NUMBER(502);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(505);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = jint(1);
	jint temp2 = jint(0);
	sp[0].o = (jobject)SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_float_float_R_Array1_float(ctx, (frame[2].o), (frame[3].f), (frame[4].f));
	SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int(ctx, temp0, temp1, temp2, sp[0].o, (jint(0)));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix3fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(516);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(517);
	SM_arc_graphics_Gl_uniformMatrix3fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[5].i), (frame[3].i), (frame[4].i), (frame[2].o));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(528);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(529);
	SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_java_nio_FloatBuffer(ctx, (frame[5].i), (frame[3].i), (frame[4].i), (frame[2].o));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(533);
	SM_arc_graphics_Gl_uniformMatrix4fv_int_int_boolean_Array1_float_int(ctx, (frame[1].i), ((frame[4].i) / (16)), (jint(0)), (frame[2].o), (frame[3].i));
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformMatrix4fv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	((func_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int])(ctx, sp[0].o, temp0, (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(546);
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(550);
	((func_arc_graphics_gl_Shader_setUniformf_int_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(559);
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(563);
	((func_arc_graphics_gl_Shader_setUniformf_int_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z));
	LINE_NUMBER(564);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(572);
	((func_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a));
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:setUniformf", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(576);
	((func_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float])(ctx, (frame[0].o), (frame[1].i), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a));
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:bind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(583);
	SM_arc_graphics_Gl_useProgram_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program));
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	if (((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(591);
	SM_arc_graphics_Gl_useProgram_int(ctx, (jint(0)));
	LINE_NUMBER(592);
	SM_arc_graphics_Gl_deleteShader_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_vertexShaderHandle));
	LINE_NUMBER(593);
	SM_arc_graphics_Gl_deleteShader_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_fragmentShaderHandle));
	LINE_NUMBER(594);
	SM_arc_graphics_Gl_deleteProgram_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program));
	LINE_NUMBER(595);
	((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_Shader_isDisposed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:isDisposed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_disposed);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:disableVertexAttribute", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(608);
	jint temp0 = (jint)M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(609);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(610);
	SM_arc_graphics_Gl_disableVertexAttribArray_int(ctx, (frame[2].i));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_fetchUniforms(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:fetchUniforms", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(615);
	jint temp0 = (jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = jint(35718);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	SM_arc_graphics_Gl_getProgramiv_int_int_java_nio_IntBuffer(ctx, temp0, temp1, sp[0].o);
	LINE_NUMBER(616);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp2 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp2;
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[1].i));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_uniformNames = (jref) sp[1].o;
	LINE_NUMBER(620);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(622);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer])(ctx, sp[0].o, (jint(0)), (jint(1)));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(624);
	jint temp0 = (jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[1].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_arc_graphics_Gl_getActiveUniform_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(ctx, temp0, temp1, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(625);
	jint temp2 = (jint)SM_arc_graphics_Gl_getUniformLocation_int_java_lang_String_R_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program), (frame[3].o));
	frame[4].i = temp2;
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformTypes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp3 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(628);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformSizes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp4 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp4);
	LINE_NUMBER(629);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformNames;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(620);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(631);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_Shader_fetchAttributes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:fetchAttributes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(635);
	jint temp0 = (jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = jint(35721);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	SM_arc_graphics_Gl_getProgramiv_int_int_java_nio_IntBuffer(ctx, temp0, temp1, sp[0].o);
	LINE_NUMBER(636);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp2 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[0].o, (jint(0)));
	frame[1].i = temp2;
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[1].i));
	((arc_graphics_gl_Shader *) NULL_CHECK(sp[0].o))->F_attributeNames = (jref) sp[1].o;
	LINE_NUMBER(640);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(642);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer])(ctx, sp[0].o, (jint(0)), (jint(1)));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_java_nio_IntBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer])(ctx, sp[0].o);
	LINE_NUMBER(644);
	jint temp0 = (jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program;
	jint temp1 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	sp[1].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_arc_graphics_Gl_getActiveAttrib_int_int_java_nio_IntBuffer_java_nio_IntBuffer_R_java_lang_String(ctx, temp0, temp1, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(645);
	jint temp2 = (jint)SM_arc_graphics_Gl_getAttribLocation_int_java_lang_String_R_int(ctx, ((jint)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_program), (frame[3].o));
	frame[4].i = temp2;
	LINE_NUMBER(646);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributes;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (frame[4].i));
	LINE_NUMBER(647);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeTypes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp3 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp3);
	LINE_NUMBER(648);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeSizes;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_params;
	jint temp4 = (jint)((func_java_nio_IntBuffer_get_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_IntBuffer_get_int_R_int])(ctx, sp[2].o, (jint(0)));
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, temp4);
	LINE_NUMBER(649);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeNames;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(640);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(651);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:hasAttribute", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getAttributeType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeTypes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getAttributeLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getAttributeSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeSizes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:hasUniform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getUniformType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformTypes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getUniformLocation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniforms;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(-1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getUniformSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformSizes;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getAttributes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_attributeNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getUniforms", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_uniformNames;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getVertexShaderSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_vertexShaderSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:getFragmentShaderSource", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((arc_graphics_gl_Shader *) NULL_CHECK((frame[0].o)))->F_fragmentShaderSource;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_R_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:copyTransform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_Shader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(742);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp0 = jint(4);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(743);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(745);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(746);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp3 = jint(5);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(747);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp4 = 10;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(748);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp5 = 12;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(749);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp6 = 13;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(750);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(751);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_float_float_R_Array1_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:copyTransform", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_Shader(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(755);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp0 = jint(4);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(756);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(758);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp2 = jint(0);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(759);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp3 = jint(5);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(760);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp4 = 10;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(761);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp5 = 12;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(762);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	jint temp6 = 13;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(763);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(765);
	frame[3].f = ((jfloat(-2.0f)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(766);
	frame[4].f = ((-((frame[2].f) + (frame[1].f))) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(768);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[3].f);
	LINE_NUMBER(769);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[4].f);
	LINE_NUMBER(770);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_Shader_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_gl_Shader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_gl_Shader_positionAttribute = ((jobject) createStringLiteral(ctx, u8"a_position"_j));
	SF_arc_graphics_gl_Shader_normalAttribute = ((jobject) createStringLiteral(ctx, u8"a_normal"_j));
	SF_arc_graphics_gl_Shader_colorAttribute = ((jobject) createStringLiteral(ctx, u8"a_color"_j));
	SF_arc_graphics_gl_Shader_mixColorAttribute = ((jobject) createStringLiteral(ctx, u8"a_mix_color"_j));
	SF_arc_graphics_gl_Shader_texcoordAttribute = ((jobject) createStringLiteral(ctx, u8"a_texCoord"_j));
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/Shader:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_Shader(ctx);
	{
	LINE_NUMBER(51);
	clinit_arc_graphics_gl_Shader(ctx);
	SF_arc_graphics_gl_Shader_pedantic = (jint(0));
	LINE_NUMBER(56);
	clinit_arc_graphics_gl_Shader(ctx);
	SF_arc_graphics_gl_Shader_prependVertexCode = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(61);
	clinit_arc_graphics_gl_Shader(ctx);
	SF_arc_graphics_gl_Shader_prependFragmentCode = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(737);
	sp[0].o = (jobject) createArray(ctx, &class_float, (16));
	clinit_arc_graphics_gl_Shader(ctx);
	SF_arc_graphics_gl_Shader_val = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_Shader[] {
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
	(void *) M_arc_graphics_gl_Shader_apply,
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

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "positionAttribute", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_positionAttribute, "Ljava/lang/String;", 25 },
	{ "normalAttribute", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_normalAttribute, "Ljava/lang/String;", 25 },
	{ "colorAttribute", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_colorAttribute, "Ljava/lang/String;", 25 },
	{ "mixColorAttribute", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_mixColorAttribute, "Ljava/lang/String;", 25 },
	{ "texcoordAttribute", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_texcoordAttribute, "Ljava/lang/String;", 25 },
	{ "pedantic", &class_boolean, (intptr_t) &SF_arc_graphics_gl_Shader_pedantic, "Z", 9 },
	{ "prependVertexCode", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_prependVertexCode, "Ljava/lang/String;", 9 },
	{ "prependFragmentCode", &class_java_lang_String, (intptr_t) &SF_arc_graphics_gl_Shader_prependFragmentCode, "Ljava/lang/String;", 9 },
	{ "uniforms", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_uniforms), "Larc/struct/ObjectIntMap;", 18 },
	{ "uniformTypes", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_uniformTypes), "Larc/struct/ObjectIntMap;", 18 },
	{ "uniformSizes", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_uniformSizes), "Larc/struct/ObjectIntMap;", 18 },
	{ "attributes", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_attributes), "Larc/struct/ObjectIntMap;", 18 },
	{ "attributeTypes", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_attributeTypes), "Larc/struct/ObjectIntMap;", 18 },
	{ "attributeSizes", &class_arc_struct_ObjectIntMap, offsetof(arc_graphics_gl_Shader, F_attributeSizes), "Larc/struct/ObjectIntMap;", 18 },
	{ "vertexShaderSource", &class_java_lang_String, offsetof(arc_graphics_gl_Shader, F_vertexShaderSource), "Ljava/lang/String;", 18 },
	{ "fragmentShaderSource", &class_java_lang_String, offsetof(arc_graphics_gl_Shader, F_fragmentShaderSource), "Ljava/lang/String;", 18 },
	{ "params", &class_java_nio_IntBuffer, offsetof(arc_graphics_gl_Shader, F_params), "Ljava/nio/IntBuffer;", 0 },
	{ "type", &class_java_nio_IntBuffer, offsetof(arc_graphics_gl_Shader, F_type), "Ljava/nio/IntBuffer;", 0 },
	{ "log", &class_java_lang_String, offsetof(arc_graphics_gl_Shader, F_log), "Ljava/lang/String;", 2 },
	{ "isCompiled", &class_boolean, offsetof(arc_graphics_gl_Shader, F_isCompiled), "Z", 2 },
	{ "uniformNames", getArrayClass(&class_java_lang_String, 1), offsetof(arc_graphics_gl_Shader, F_uniformNames), "[Ljava/lang/String;", 2 },
	{ "attributeNames", getArrayClass(&class_java_lang_String, 1), offsetof(arc_graphics_gl_Shader, F_attributeNames), "[Ljava/lang/String;", 2 },
	{ "program", &class_int, offsetof(arc_graphics_gl_Shader, F_program), "I", 2 },
	{ "vertexShaderHandle", &class_int, offsetof(arc_graphics_gl_Shader, F_vertexShaderHandle), "I", 2 },
	{ "fragmentShaderHandle", &class_int, offsetof(arc_graphics_gl_Shader, F_fragmentShaderHandle), "I", 2 },
	{ "disposed", &class_boolean, offsetof(arc_graphics_gl_Shader, F_disposed), "Z", 2 },
	{ "val", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_gl_Shader_val, "[F", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_Shader_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_Shader_arc_files_Fi_arc_files_Fi, 0, "(Larc/files/Fi;Larc/files/Fi;)V", 1 },
	{ "apply", (intptr_t) M_arc_graphics_gl_Shader_apply, VTABLE_arc_graphics_gl_Shader_apply, "()V", 1 },
	{ "preprocess", (intptr_t) M_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String, VTABLE_arc_graphics_gl_Shader_preprocess_java_lang_String_boolean_R_java_lang_String, "(Ljava/lang/String;Z)Ljava/lang/String;", 4 },
	{ "compileShaders", (intptr_t) M_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String, VTABLE_arc_graphics_gl_Shader_compileShaders_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "loadShader", (intptr_t) M_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_loadShader_int_java_lang_String_R_int, "(ILjava/lang/String;)I", 2 },
	{ "createProgram", (intptr_t) M_arc_graphics_gl_Shader_createProgram_R_int, VTABLE_arc_graphics_gl_Shader_createProgram_R_int, "()I", 4 },
	{ "linkProgram", (intptr_t) M_arc_graphics_gl_Shader_linkProgram_int_R_int, VTABLE_arc_graphics_gl_Shader_linkProgram_int_R_int, "(I)I", 2 },
	{ "getLog", (intptr_t) M_arc_graphics_gl_Shader_getLog_R_java_lang_String, VTABLE_arc_graphics_gl_Shader_getLog_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isCompiled", (intptr_t) M_arc_graphics_gl_Shader_isCompiled_R_boolean, VTABLE_arc_graphics_gl_Shader_isCompiled_R_boolean, "()Z", 1 },
	{ "fetchAttributeLocation", (intptr_t) M_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_fetchAttributeLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "fetchUniformLocation", (intptr_t) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 2 },
	{ "fetchUniformLocation", (intptr_t) M_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int, VTABLE_arc_graphics_gl_Shader_fetchUniformLocation_java_lang_String_boolean_R_int, "(Ljava/lang/String;Z)I", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int, VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_int_int, "(II)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_int_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int, "(III)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int, "(Ljava/lang/String;III)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int_int, "(IIII)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int_int_int_int, "(Ljava/lang/String;IIII)V", 1 },
	{ "setUniformi", (intptr_t) M_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int, VTABLE_arc_graphics_gl_Shader_setUniformi_int_int_int_int_int, "(IIIII)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float, "(Ljava/lang/String;F)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_float, VTABLE_arc_graphics_gl_Shader_setUniformf_int_float, "(IF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float, "(Ljava/lang/String;FF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float, "(IFF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float, "(Ljava/lang/String;FFF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float, "(IFFF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_float_float_float_float, "(Ljava/lang/String;FFFF)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float, VTABLE_arc_graphics_gl_Shader_setUniformf_int_float_float_float_float, "(IFFFF)V", 1 },
	{ "setUniform1fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform1fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform1fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform1fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform2fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform2fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform2fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform2fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform3fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform3fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform3fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform3fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniform4fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform4fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniform4fv", (intptr_t) M_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniform4fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat, VTABLE_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat, "(Ljava/lang/String;Larc/math/Mat;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean, VTABLE_arc_graphics_gl_Shader_setUniformMatrix_java_lang_String_arc_math_Mat_boolean, "(Ljava/lang/String;Larc/math/Mat;Z)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat, VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat, "(ILarc/math/Mat;)V", 1 },
	{ "setUniformMatrix", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean, VTABLE_arc_graphics_gl_Shader_setUniformMatrix_int_arc_math_Mat_boolean, "(ILarc/math/Mat;Z)V", 1 },
	{ "setUniformMatrix4", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float, "(Ljava/lang/String;[F)V", 1 },
	{ "setUniformMatrix4", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat, "(Ljava/lang/String;Larc/math/Mat;)V", 1 },
	{ "setUniformMatrix4", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_arc_math_Mat_float_float, "(Ljava/lang/String;Larc/math/Mat;FF)V", 1 },
	{ "setUniformMatrix3fv", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean, VTABLE_arc_graphics_gl_Shader_setUniformMatrix3fv_java_lang_String_java_nio_FloatBuffer_int_boolean, "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_java_nio_FloatBuffer_int_boolean, "(Ljava/lang/String;Ljava/nio/FloatBuffer;IZ)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_int_Array1_float_int_int, "(I[FII)V", 1 },
	{ "setUniformMatrix4fv", (intptr_t) M_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int, VTABLE_arc_graphics_gl_Shader_setUniformMatrix4fv_java_lang_String_Array1_float_int_int, "(Ljava/lang/String;[FII)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec2, "(Ljava/lang/String;Larc/math/geom/Vec2;)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2, VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec2, "(ILarc/math/geom/Vec2;)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_math_geom_Vec3, "(Ljava/lang/String;Larc/math/geom/Vec3;)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3, VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_math_geom_Vec3, "(ILarc/math/geom/Vec3;)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color, VTABLE_arc_graphics_gl_Shader_setUniformf_java_lang_String_arc_graphics_Color, "(Ljava/lang/String;Larc/graphics/Color;)V", 1 },
	{ "setUniformf", (intptr_t) M_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color, VTABLE_arc_graphics_gl_Shader_setUniformf_int_arc_graphics_Color, "(ILarc/graphics/Color;)V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_gl_Shader_bind, VTABLE_arc_graphics_gl_Shader_bind, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_gl_Shader_dispose, VTABLE_arc_graphics_gl_Shader_dispose, "()V", 1 },
	{ "isDisposed", (intptr_t) M_arc_graphics_gl_Shader_isDisposed_R_boolean, VTABLE_arc_graphics_gl_Shader_isDisposed_R_boolean, "()Z", 1 },
	{ "disableVertexAttribute", (intptr_t) M_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String, VTABLE_arc_graphics_gl_Shader_disableVertexAttribute_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "fetchUniforms", (intptr_t) M_arc_graphics_gl_Shader_fetchUniforms, VTABLE_arc_graphics_gl_Shader_fetchUniforms, "()V", 2 },
	{ "fetchAttributes", (intptr_t) M_arc_graphics_gl_Shader_fetchAttributes, VTABLE_arc_graphics_gl_Shader_fetchAttributes, "()V", 2 },
	{ "hasAttribute", (intptr_t) M_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean, VTABLE_arc_graphics_gl_Shader_hasAttribute_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getAttributeType", (intptr_t) M_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getAttributeType_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributeLocation", (intptr_t) M_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getAttributeLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributeSize", (intptr_t) M_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getAttributeSize_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "hasUniform", (intptr_t) M_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean, VTABLE_arc_graphics_gl_Shader_hasUniform_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getUniformType", (intptr_t) M_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getUniformType_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getUniformLocation", (intptr_t) M_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getUniformLocation_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getUniformSize", (intptr_t) M_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int, VTABLE_arc_graphics_gl_Shader_getUniformSize_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributes", (intptr_t) M_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String, VTABLE_arc_graphics_gl_Shader_getAttributes_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getUniforms", (intptr_t) M_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String, VTABLE_arc_graphics_gl_Shader_getUniforms_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getVertexShaderSource", (intptr_t) M_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String, VTABLE_arc_graphics_gl_Shader_getVertexShaderSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFragmentShaderSource", (intptr_t) M_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String, VTABLE_arc_graphics_gl_Shader_getFragmentShaderSource_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "copyTransform", (intptr_t) SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_R_Array1_float, 0, "(Larc/math/Mat;)[F", 9 },
	{ "copyTransform", (intptr_t) SM_arc_graphics_gl_Shader_copyTransform_arc_math_Mat_float_float_R_Array1_float, 0, "(Larc/math/Mat;FF)[F", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_gl_Shader, 0, "()V", 8 },
};

Class class_arc_graphics_gl_Shader{
		.nativeName = (intptr_t) "arc/graphics/gl/Shader",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_Shader),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_Shader,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_Shader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_Shader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 27,
		.nativeFields = (intptr_t) fields,
		.methodCount = 75,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 81,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_Shader = registerClass(&class_arc_graphics_gl_Shader);

}
