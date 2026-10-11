#include "arc/graphics/gl/FrameBufferCubemap.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/GLTexture.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/Cubemap_CubemapSide.h"
#include "arc/graphics/gl/GLOnlyTextureData.h"
#include "arc/graphics/gl/GLFrameBuffer_GLFrameBufferBuilder.h"
#include "arc/graphics/gl/FrameBufferCubemap.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/func/Cons.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferTextureAttachmentSpec.h"
#include "arc/graphics/gl/GLFrameBuffer_FrameBufferCubemapBuilder.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_graphics_gl_FrameBufferCubemap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_gl_GLFrameBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_gl_FrameBufferCubemap *) object;
}

void clinit_arc_graphics_gl_FrameBufferCubemap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_gl_GLFrameBuffer(ctx);
}

void init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBufferCubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	init_arc_graphics_gl_GLFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_Pixmap$Format_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBufferCubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(55);
	init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FrameBufferCubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(68);
	init_arc_graphics_gl_GLFrameBuffer(ctx, (frame[0].o));
	LINE_NUMBER(69);
	clinit_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder);
	init_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_int_int(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicColorTextureAttachment_arc_graphics_Pixmap$Format_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o), (frame[1].o));
	LINE_NUMBER(71);
	if ((frame[4].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicDepthRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o));
	}
label_4:;
	{
	LINE_NUMBER(72);
	if ((frame[5].i) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_GLFrameBuffer$FrameBufferCubemapBuilder_addBasicStencilRenderBuffer_R_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder])(ctx, (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(73);
	((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder = (jref) (frame[6].o);
	LINE_NUMBER(75);
	((func_arc_graphics_gl_FrameBufferCubemap_build) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBufferCubemap_build])(ctx, (frame[0].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:createTexture", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	clinit_arc_graphics_gl_GLOnlyTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLOnlyTextureData);
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	jint temp0 = (jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_graphics_gl_GLFrameBuffer *) NULL_CHECK((frame[0].o)))->F_bufferBuilder;
	init_arc_graphics_gl_GLOnlyTextureData_int_int_int_int_int_int(ctx, sp[0].o, temp0, ((jint)((arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder *) NULL_CHECK(sp[1].o))->F_height), (jint(0)), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_internalFormat), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_format), ((jint)((arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec *) NULL_CHECK((frame[1].o)))->F_type));
	frame[2].o = sp[0].o;
	LINE_NUMBER(82);
	clinit_arc_graphics_Cubemap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Cubemap);
	init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, (frame[2].o), (frame[2].o), (frame[2].o), (frame[2].o), (frame[2].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((func_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:disposeTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	((func_arc_graphics_Cubemap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Cubemap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:attachTexture", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_arc_graphics_Cubemap_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Cubemap_getTextureObjectHandle_R_int])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(96);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_all;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_3;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(97);
	SM_arc_graphics_Gl_framebufferTexture2D_int_int_int_int_int(ctx, (jint(36160)), (frame[1].i), ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[7].o)))->F_glEnum), (frame[3].i), (jint(0)));
	LINE_NUMBER(96);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_eachSide_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:eachSide", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(104);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[5].o));
	LINE_NUMBER(103);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_bindSide_arc_graphics_Cubemap$CubemapSide(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:bindSide", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	jint temp0 = jint(36160);
	jint temp1 = jint(36064);
	jint temp2 = (jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_glEnum;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBufferCubemap_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBufferCubemap_getTexture_R_arc_graphics_GLTexture])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_arc_graphics_Cubemap_getTextureObjectHandle_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Cubemap, sp[0].o)))->vtable)[VTABLE_arc_graphics_Cubemap_getTextureObjectHandle_R_int])(ctx, (checkCast(ctx, &class_arc_graphics_Cubemap, sp[0].o)));
	SM_arc_graphics_Gl_framebufferTexture2D_int_int_int_int_int(ctx, temp0, temp1, temp2, temp3, (jint(0)));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_GLTexture(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:attachTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	((func_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap])(ctx, (frame[0].o), (frame[1].i), (checkCast(ctx, &class_arc_graphics_Cubemap, (frame[2].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:disposeTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	((func_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_graphics_Cubemap, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FrameBufferCubemap:createTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FrameBufferCubemap[] {
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
	(void *) M_arc_graphics_gl_GLFrameBuffer_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_GLTexture,
	(void *) M_arc_graphics_gl_GLFrameBuffer_build,
	(void *) M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder,
	(void *) M_arc_graphics_gl_GLFrameBuffer_bind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean,
	(void *) M_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color,
	(void *) M_arc_graphics_gl_GLFrameBuffer_begin,
	(void *) M_arc_graphics_gl_GLFrameBuffer_beginBind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport,
	(void *) M_arc_graphics_gl_GLFrameBuffer_end,
	(void *) M_arc_graphics_gl_GLFrameBuffer_endBind,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getHeight_R_int,
	(void *) M_arc_graphics_gl_GLFrameBuffer_getWidth_R_int,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_eachSide_arc_func_Cons,
	(void *) M_arc_graphics_gl_FrameBufferCubemap_bindSide_arc_graphics_Cubemap$CubemapSide,
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
	{ "getTexture", "()Larc/graphics/GLTexture;" },
	{ "getTextureAttachments", "()Larc/struct/Seq;" },
	{ "createTexture", "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;" },
	{ "disposeTexture", "(Larc/graphics/GLTexture;)V" },
	{ "attachTexture", "(ILarc/graphics/GLTexture;)V" },
	{ "build", "()V" },
	{ "checkValidBuilder", "()V" },
	{ "bind", "()V" },
	{ "isBound", "()Z" },
	{ "begin", "(Larc/graphics/Color;)V" },
	{ "begin", "()V" },
	{ "beginBind", "()V" },
	{ "setFrameBufferViewport", "()V" },
	{ "end", "()V" },
	{ "endBind", "()V" },
	{ "getFramebufferHandle", "()I" },
	{ "getDepthBufferHandle", "()I" },
	{ "getStencilBufferHandle", "()I" },
	{ "getDepthStencilPackedBuffer", "()I" },
	{ "getHeight", "()I" },
	{ "getWidth", "()I" },
	{ "createTexture", "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/Cubemap;" },
	{ "disposeTexture", "(Larc/graphics/Cubemap;)V" },
	{ "attachTexture", "(ILarc/graphics/Cubemap;)V" },
	{ "eachSide", "(Larc/func/Cons;)V" },
	{ "bindSide", "(Larc/graphics/Cubemap$CubemapSide;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder, 0, "(Larc/graphics/gl/GLFrameBuffer$GLFrameBufferBuilder;)V", 4 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_Pixmap$Format_int_int_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FrameBufferCubemap_arc_graphics_Pixmap$Format_int_int_boolean_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZZ)V", 1 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap, VTABLE_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Cubemap, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/Cubemap;", 4 },
	{ "disposeTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap, VTABLE_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_Cubemap, "(Larc/graphics/Cubemap;)V", 4 },
	{ "attachTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap, VTABLE_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_Cubemap, "(ILarc/graphics/Cubemap;)V", 4 },
	{ "eachSide", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_eachSide_arc_func_Cons, VTABLE_arc_graphics_gl_FrameBufferCubemap_eachSide_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "bindSide", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_bindSide_arc_graphics_Cubemap$CubemapSide, VTABLE_arc_graphics_gl_FrameBufferCubemap_bindSide_arc_graphics_Cubemap$CubemapSide, "(Larc/graphics/Cubemap$CubemapSide;)V", 1 },
	{ "attachTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBufferCubemap_attachTexture_int_arc_graphics_GLTexture, "(ILarc/graphics/GLTexture;)V", 4164 },
	{ "disposeTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBufferCubemap_disposeTexture_arc_graphics_GLTexture, "(Larc/graphics/GLTexture;)V", 4164 },
	{ "createTexture", (intptr_t) M_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, VTABLE_arc_graphics_gl_FrameBufferCubemap_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture, "(Larc/graphics/gl/GLFrameBuffer$FrameBufferTextureAttachmentSpec;)Larc/graphics/GLTexture;", 4164 },
};

Class class_arc_graphics_gl_FrameBufferCubemap{
		.nativeName = (intptr_t) "arc/graphics/gl/FrameBufferCubemap",
		.parentClass = (intptr_t) &class_arc_graphics_gl_GLFrameBuffer,
		.size = sizeof(arc_graphics_gl_FrameBufferCubemap),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FrameBufferCubemap,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FrameBufferCubemap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FrameBufferCubemap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 39,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FrameBufferCubemap = registerClass(&class_arc_graphics_gl_FrameBufferCubemap);

}
