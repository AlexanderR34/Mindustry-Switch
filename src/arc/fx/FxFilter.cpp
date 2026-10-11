#include "arc/fx/FxFilter.h"
#include "arc/graphics/GLTexture.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Files.h"
#include "arc/util/Time.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/fx/FxFilter.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/String.h"

extern "C" {

jint SF_arc_fx_FxFilter_u_texture0;
jint SF_arc_fx_FxFilter_u_texture1;
jint SF_arc_fx_FxFilter_u_texture2;
jint SF_arc_fx_FxFilter_u_texture3;

void mark_arc_fx_FxFilter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_FxFilter *) object;
	if (self->F_shader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shader)->clazz)->markFunction)((jobject) self->F_shader, mark, depth + 1);
	if (self->F_inputTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputTexture)->clazz)->markFunction)((jobject) self->F_inputTexture, mark, depth + 1);
	if (self->F_outputBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outputBuffer)->clazz)->markFunction)((jobject) self->F_outputBuffer, mark, depth + 1);
}

void clinit_arc_fx_FxFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_fx_FxFilter_u_texture0 = jint(0);
	SF_arc_fx_FxFilter_u_texture1 = jint(1);
	SF_arc_fx_FxFilter_u_texture2 = jint(2);
	SF_arc_fx_FxFilter_u_texture3 = jint(3);
}

void init_arc_fx_FxFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(28);
	init_arc_fx_FxFilter_arc_graphics_gl_Shader(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_FxFilter_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"vfxshaders/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".vert"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_Files_classpath_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"vfxshaders/"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[2].o));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8".frag"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_Files_classpath_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_R_arc_graphics_gl_Shader(ctx, sp[1].o, sp[2].o);
	init_arc_fx_FxFilter_arc_graphics_gl_Shader(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_FxFilter_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture = (jref) (jobject(nullptr));
	LINE_NUMBER(22);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer = (jref) (jobject(nullptr));
	LINE_NUMBER(23);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_disabled = (jint(0));
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_autobind = (jint(0));
	LINE_NUMBER(25);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(36);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader = (jref) (frame[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_R_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:compileShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_java_lang_String_R_arc_graphics_gl_Shader(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_java_lang_String_R_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:compileShader", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(44);
	clinit_arc_graphics_gl_Shader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_Shader);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[2].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	sp[3].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_arc_graphics_gl_Shader_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:setInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:setInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:setOutput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer = (jref) (frame[1].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_dispose])(ctx, sp[0].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:resize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_rebind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:rebind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(78);
	((func_arc_fx_FxFilter_setParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_setParams])(ctx, (frame[0].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:setParams", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_setUniformi_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformi_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"u_texture0"_j))), (jint(0)));
	}
label_1:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:render", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer;
	jint temp0 = (jint)((func_arc_graphics_gl_FrameBuffer_isBound_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_isBound_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(97);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(102);
	((func_arc_fx_FxFilter_onBeforeRender) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_onBeforeRender])(ctx, (frame[0].o));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, sp[0].o);
	LINE_NUMBER(105);
	if (((jint)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_autobind) == 0) goto label_8;
	}
	{
	LINE_NUMBER(106);
	((func_arc_fx_FxFilter_setParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_setParams])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_shader;
	SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(110);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_outputBuffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_11:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_onBeforeRender(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:onBeforeRender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_inputTexture;
	((func_arc_graphics_Texture_bind_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:render", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter])(ctx, sp[0].o, (frame[2].o));
	((func_arc_fx_FxFilter_render) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render])(ctx, sp[0].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxFilter_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(132);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxFilter_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxFilter:update", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	((arc_fx_FxFilter *) NULL_CHECK((frame[0].o)))->F_time = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_FxFilter[] {
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
	(void *) M_arc_fx_FxFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter,
	(void *) M_arc_fx_FxFilter_resize_int_int,
	(void *) M_arc_fx_FxFilter_rebind,
	(void *) M_arc_fx_FxFilter_setParams,
	(void *) M_arc_fx_FxFilter_render,
	(void *) M_arc_fx_FxFilter_onBeforeRender,
	(void *) M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxFilter_isDisabled_R_boolean,
	(void *) M_arc_fx_FxFilter_setDisabled_boolean,
	(void *) M_arc_fx_FxFilter_update,
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
	{ "setInput", "(Larc/graphics/Texture;)Larc/fx/FxFilter;" },
	{ "setInput", "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;" },
	{ "setOutput", "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;" },
	{ "resize", "(II)V" },
	{ "rebind", "()V" },
	{ "setParams", "()V" },
	{ "render", "()V" },
	{ "onBeforeRender", "()V" },
	{ "render", "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "u_texture0", &class_int, (intptr_t) &SF_arc_fx_FxFilter_u_texture0, "I", 28 },
	{ "u_texture1", &class_int, (intptr_t) &SF_arc_fx_FxFilter_u_texture1, "I", 28 },
	{ "u_texture2", &class_int, (intptr_t) &SF_arc_fx_FxFilter_u_texture2, "I", 28 },
	{ "u_texture3", &class_int, (intptr_t) &SF_arc_fx_FxFilter_u_texture3, "I", 28 },
	{ "shader", &class_arc_graphics_gl_Shader, offsetof(arc_fx_FxFilter, F_shader), "Larc/graphics/gl/Shader;", 20 },
	{ "inputTexture", &class_arc_graphics_Texture, offsetof(arc_fx_FxFilter, F_inputTexture), "Larc/graphics/Texture;", 4 },
	{ "outputBuffer", &class_arc_graphics_gl_FrameBuffer, offsetof(arc_fx_FxFilter, F_outputBuffer), "Larc/graphics/gl/FrameBuffer;", 4 },
	{ "disabled", &class_boolean, offsetof(arc_fx_FxFilter, F_disabled), "Z", 4 },
	{ "autobind", &class_boolean, offsetof(arc_fx_FxFilter, F_autobind), "Z", 4 },
	{ "time", &class_float, offsetof(arc_fx_FxFilter, F_time), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_FxFilter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_FxFilter_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_FxFilter_arc_graphics_gl_Shader, 0, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "compileShader", (intptr_t) SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_R_arc_graphics_gl_Shader, 0, "(Larc/files/Fi;Larc/files/Fi;)Larc/graphics/gl/Shader;", 9 },
	{ "compileShader", (intptr_t) SM_arc_fx_FxFilter_compileShader_arc_files_Fi_arc_files_Fi_java_lang_String_R_arc_graphics_gl_Shader, 0, "(Larc/files/Fi;Larc/files/Fi;Ljava/lang/String;)Larc/graphics/gl/Shader;", 9 },
	{ "setInput", (intptr_t) M_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter, VTABLE_arc_fx_FxFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter, "(Larc/graphics/Texture;)Larc/fx/FxFilter;", 1 },
	{ "setInput", (intptr_t) M_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter, VTABLE_arc_fx_FxFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter, "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;", 1 },
	{ "setOutput", (intptr_t) M_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter, VTABLE_arc_fx_FxFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter, "(Larc/graphics/gl/FrameBuffer;)Larc/fx/FxFilter;", 1 },
	{ "dispose", (intptr_t) M_arc_fx_FxFilter_dispose, VTABLE_arc_fx_FxFilter_dispose, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_FxFilter_resize_int_int, VTABLE_arc_fx_FxFilter_resize_int_int, "(II)V", 1 },
	{ "rebind", (intptr_t) M_arc_fx_FxFilter_rebind, VTABLE_arc_fx_FxFilter_rebind, "()V", 1 },
	{ "setParams", (intptr_t) M_arc_fx_FxFilter_setParams, VTABLE_arc_fx_FxFilter_setParams, "()V", 4 },
	{ "render", (intptr_t) M_arc_fx_FxFilter_render, VTABLE_arc_fx_FxFilter_render, "()V", 1 },
	{ "onBeforeRender", (intptr_t) M_arc_fx_FxFilter_onBeforeRender, VTABLE_arc_fx_FxFilter_onBeforeRender, "()V", 4 },
	{ "render", (intptr_t) M_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer, "(Larc/graphics/gl/FrameBuffer;Larc/graphics/gl/FrameBuffer;)V", 1 },
	{ "isDisabled", (intptr_t) M_arc_fx_FxFilter_isDisabled_R_boolean, VTABLE_arc_fx_FxFilter_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_fx_FxFilter_setDisabled_boolean, VTABLE_arc_fx_FxFilter_setDisabled_boolean, "(Z)V", 1 },
	{ "update", (intptr_t) M_arc_fx_FxFilter_update, VTABLE_arc_fx_FxFilter_update, "()V", 1 },
};

Class class_arc_fx_FxFilter{
		.nativeName = (intptr_t) "arc/fx/FxFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_fx_FxFilter),
		.classVtable = (intptr_t) vtable_arc_fx_FxFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_FxFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_FxFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_FxFilter = registerClass(&class_arc_fx_FxFilter);

}
