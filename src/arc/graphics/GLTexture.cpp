#include "arc/graphics/GLTexture.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/TextureData.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/Pixmap.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Texture_TextureWrap.h"

extern "C" {


void mark_arc_graphics_GLTexture(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_GLTexture *) object;
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
}

void clinit_arc_graphics_GLTexture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_GLTexture_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_GLTexture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_arc_graphics_Gl_genTexture_R_int(ctx);
	init_arc_graphics_GLTexture_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_GLTexture_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_GLTexture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	LINE_NUMBER(29);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget = (frame[1].i);
	LINE_NUMBER(30);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle = (frame[2].i);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData(jcontext ctx, jint param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:uploadImageData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_GLTexture(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(34);
	SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData_int(ctx, (frame[0].i), (frame[1].o), (jint(0)));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:uploadImageData", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_GLTexture(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(38);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_arc_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_arc_graphics_TextureData_isCustom_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isCustom_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(45);
	((func_arc_graphics_TextureData_consumeCustomData_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumeCustomData_int, (frame[1].o)))(ctx, (frame[1].o), (frame[0].i));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_arc_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_disposePixmap_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(54);
	jint temp1 = (jint)((func_arc_graphics_TextureData_useMipMaps_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_useMipMaps_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp1 == 0) goto label_9;
	}
	{
	LINE_NUMBER(55);
	jint temp0 = frame[0].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width;
	jint temp4 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height;
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_arc_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[3].o));
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_pixels;
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	LINE_NUMBER(56);
	SM_arc_graphics_Gl_generateMipmap_int(ctx, (frame[0].i));
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(58);
	jint temp0 = frame[0].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width;
	jint temp4 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height;
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_arc_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[3].o));
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_pixels;
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	}
label_12:;
	{
	LINE_NUMBER(60);
	if ((frame[4].i) == 0) goto label_13;
	}
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_13:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_bind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:bind", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_bind_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:bind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	SM_arc_graphics_Gl_activeTexture_int(ctx, ((jint(33984)) + (frame[1].i)));
	LINE_NUMBER(80);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:getMinFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:getMagFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:getUWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:getVWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_GLTexture_getTextureObjectHandle_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:getTextureObjectHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:unsafeSetWrap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	((func_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:unsafeSetWrap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(124);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_2;
	{
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10242;
	jint temp2 = (jint)((func_arc_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[1].o));
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, temp0, temp1, temp2);
	LINE_NUMBER(126);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(128);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_5;
	{
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10243;
	jint temp2 = (jint)((func_arc_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[2].o));
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, temp0, temp1, temp2);
	LINE_NUMBER(130);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[2].o);
	}
label_4:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:setWrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	((func_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:setWrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(144);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap = (jref) (frame[1].o);
	LINE_NUMBER(145);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap = (jref) (frame[2].o);
	LINE_NUMBER(146);
	((func_arc_graphics_GLTexture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(147);
	jint temp0 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = 10242;
	jint temp2 = (jint)((func_arc_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[1].o));
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, temp0, temp1, temp2);
	LINE_NUMBER(148);
	jint temp3 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp4 = 10243;
	jint temp5 = (jint)((func_arc_graphics_Texture$TextureWrap_getGLEnum_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int])(ctx, (frame[2].o));
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, temp3, temp4, temp5);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:unsafeSetFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	((func_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:unsafeSetFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(167);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_2;
	{
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(168);
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (10241), ((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[1].o)))->F_glEnum));
	LINE_NUMBER(169);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(171);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_5;
	{
	sp[0].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	if (sp[0].o == (frame[2].o)) goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(172);
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (10240), ((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[2].o)))->F_glEnum));
	LINE_NUMBER(173);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[2].o);
	}
label_4:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:setFilter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	((func_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, (frame[0].o), (frame[1].o), (frame[1].o));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:setFilter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(187);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter = (jref) (frame[1].o);
	LINE_NUMBER(188);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter = (jref) (frame[2].o);
	LINE_NUMBER(189);
	((func_arc_graphics_GLTexture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_GLTexture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(190);
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (10241), ((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[1].o)))->F_glEnum));
	LINE_NUMBER(191);
	SM_arc_graphics_Gl_texParameteri_int_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (10240), ((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[2].o)))->F_glEnum));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_GLTexture_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/GLTexture:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	if (((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle) == 0) goto label_1;
	}
	{
	LINE_NUMBER(197);
	SM_arc_graphics_Gl_deleteTexture_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle));
	LINE_NUMBER(198);
	((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle = (jint(0));
	}
label_1:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_GLTexture[] {
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
	(void *) M_arc_graphics_GLTexture_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) nullptr,
	(void *) M_arc_graphics_GLTexture_bind,
	(void *) M_arc_graphics_GLTexture_bind_int,
	(void *) M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
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
	{ "getDepth", "()I" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Larc/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Larc/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;)V" },
	{ "setWrap", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;)V" },
	{ "setFilter", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "glTarget", &class_int, offsetof(arc_graphics_GLTexture, F_glTarget), "I", 17 },
	{ "width", &class_int, offsetof(arc_graphics_GLTexture, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_GLTexture, F_height), "I", 1 },
	{ "glHandle", &class_int, offsetof(arc_graphics_GLTexture, F_glHandle), "I", 4 },
	{ "minFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_graphics_GLTexture, F_minFilter), "Larc/graphics/Texture$TextureFilter;", 4 },
	{ "magFilter", &class_arc_graphics_Texture$TextureFilter, offsetof(arc_graphics_GLTexture, F_magFilter), "Larc/graphics/Texture$TextureFilter;", 4 },
	{ "uWrap", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_graphics_GLTexture, F_uWrap), "Larc/graphics/Texture$TextureWrap;", 4 },
	{ "vWrap", &class_arc_graphics_Texture$TextureWrap, offsetof(arc_graphics_GLTexture, F_vWrap), "Larc/graphics/Texture$TextureWrap;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_GLTexture_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_GLTexture_int_int, 0, "(II)V", 1 },
	{ "uploadImageData", (intptr_t) SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData, 0, "(ILarc/graphics/TextureData;)V", 12 },
	{ "uploadImageData", (intptr_t) SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData_int, 0, "(ILarc/graphics/TextureData;I)V", 9 },
	{ "getDepth", 0, VTABLE_arc_graphics_GLTexture_getDepth_R_int, "()I", 1025 },
	{ "bind", (intptr_t) M_arc_graphics_GLTexture_bind, VTABLE_arc_graphics_GLTexture_bind, "()V", 1 },
	{ "bind", (intptr_t) M_arc_graphics_GLTexture_bind_int, VTABLE_arc_graphics_GLTexture_bind_int, "(I)V", 1 },
	{ "getMinFilter", (intptr_t) M_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter, VTABLE_arc_graphics_GLTexture_getMinFilter_R_arc_graphics_Texture$TextureFilter, "()Larc/graphics/Texture$TextureFilter;", 1 },
	{ "getMagFilter", (intptr_t) M_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter, VTABLE_arc_graphics_GLTexture_getMagFilter_R_arc_graphics_Texture$TextureFilter, "()Larc/graphics/Texture$TextureFilter;", 1 },
	{ "getUWrap", (intptr_t) M_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap, VTABLE_arc_graphics_GLTexture_getUWrap_R_arc_graphics_Texture$TextureWrap, "()Larc/graphics/Texture$TextureWrap;", 1 },
	{ "getVWrap", (intptr_t) M_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap, VTABLE_arc_graphics_GLTexture_getVWrap_R_arc_graphics_Texture$TextureWrap, "()Larc/graphics/Texture$TextureWrap;", 1 },
	{ "getTextureObjectHandle", (intptr_t) M_arc_graphics_GLTexture_getTextureObjectHandle_R_int, VTABLE_arc_graphics_GLTexture_getTextureObjectHandle_R_int, "()I", 1 },
	{ "unsafeSetWrap", (intptr_t) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap, VTABLE_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap, "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V", 1 },
	{ "unsafeSetWrap", (intptr_t) M_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean, VTABLE_arc_graphics_GLTexture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean, "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Z)V", 1 },
	{ "setWrap", (intptr_t) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap, VTABLE_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap, "(Larc/graphics/Texture$TextureWrap;)V", 1 },
	{ "setWrap", (intptr_t) M_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap, VTABLE_arc_graphics_GLTexture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap, "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;)V", 1 },
	{ "unsafeSetFilter", (intptr_t) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "unsafeSetFilter", (intptr_t) M_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, VTABLE_arc_graphics_GLTexture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V", 1 },
	{ "setFilter", (intptr_t) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "setFilter", (intptr_t) M_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_graphics_GLTexture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_GLTexture_dispose, VTABLE_arc_graphics_GLTexture_dispose, "()V", 1 },
};

Class class_arc_graphics_GLTexture{
		.nativeName = (intptr_t) "arc/graphics/GLTexture",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_GLTexture),
		.classVtable = (intptr_t) vtable_arc_graphics_GLTexture,
		.staticInitializer = (intptr_t) clinit_arc_graphics_GLTexture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_GLTexture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_GLTexture = registerClass(&class_arc_graphics_GLTexture);

}
