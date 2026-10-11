#include "arc/graphics/Texture.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/TextureData.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/gl/FileTextureData.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/PixmapTextureData.h"

extern "C" {


void mark_arc_graphics_Texture(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_GLTexture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_Texture *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_graphics_Texture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_GLTexture(ctx);
}

void init_arc_graphics_Texture_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, (frame[1].o));
	init_arc_graphics_Texture_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	init_arc_graphics_Texture_arc_files_Fi_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[1].o), (frame[2].i));
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[1].o, (frame[1].o), (jint(0)), (jint(0)));
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i), (jint(0)));
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[2].o, (frame[1].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	init_arc_graphics_Texture_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	jint temp0 = 3553;
	jint temp1 = (jint)SM_arc_graphics_Gl_genTexture_R_int(ctx);
	init_arc_graphics_Texture_int_int_arc_graphics_TextureData(ctx, sp[0].o, temp0, temp1, (frame[1].o));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(55);
	init_arc_graphics_GLTexture_int_int(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture_int_int_arc_graphics_TextureData(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(59);
	init_arc_graphics_GLTexture_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(60);
	((func_arc_graphics_Texture_load_arc_graphics_TextureData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Texture_load_arc_graphics_TextureData])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Texture_createEmpty_arc_graphics_TextureData_R_arc_graphics_Texture(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:createEmpty", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(64);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(65);
	((arc_graphics_Texture *) NULL_CHECK((frame[1].o)))->F_data = (jref) (frame[0].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Texture_load_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	((arc_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(74);
	jint temp2 = (jint)((func_arc_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp2 != 0) goto label_4;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(76);
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(77);
	SM_arc_graphics_GLTexture_uploadImageData_int_arc_graphics_TextureData(ctx, (3553), (frame[1].o));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_arc_graphics_Texture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_arc_graphics_Texture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(81);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Texture_draw_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:draw", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(96);
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, (frame[0].o));
	LINE_NUMBER(97);
	jint temp0 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget;
	jint temp1 = jint(0);
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	jint temp4 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width;
	jint temp5 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height;
	jint temp6 = (jint)((func_arc_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[1].o));
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	SM_arc_graphics_Gl_texSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Texture_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:getTextureData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Texture_isDisposed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:isDisposed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	if (((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_Texture_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	if ((isInstance(ctx, sp[0].o, &class_arc_graphics_gl_FileTextureData)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_Texture *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Texture[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_Texture_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_GLTexture_dispose,
	(void *) M_arc_graphics_Texture_isDisposed_R_boolean,
	(void *) M_arc_graphics_Texture_getDepth_R_int,
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
	(void *) M_arc_graphics_Texture_load_arc_graphics_TextureData,
	(void *) M_arc_graphics_Texture_draw_arc_graphics_Pixmap,
	(void *) M_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int,
	(void *) M_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData,
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
	{ "load", "(Larc/graphics/TextureData;)V" },
	{ "draw", "(Larc/graphics/Pixmap;)V" },
	{ "draw", "(Larc/graphics/Pixmap;II)V" },
	{ "getTextureData", "()Larc/graphics/TextureData;" },
};

static jclass innerClasses[] {
	&class_arc_graphics_Texture$TextureFilter,
	&class_arc_graphics_Texture$TextureWrap,
};

static FieldMetadata fields[] {
	{ "data", &class_arc_graphics_TextureData, offsetof(arc_graphics_Texture, F_data), "Larc/graphics/TextureData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Texture_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_arc_graphics_Pixmap_boolean, 0, "(Larc/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_arc_graphics_TextureData, 0, "(Larc/graphics/TextureData;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture_int_int_arc_graphics_TextureData, 0, "(IILarc/graphics/TextureData;)V", 4 },
	{ "createEmpty", (intptr_t) SM_arc_graphics_Texture_createEmpty_arc_graphics_TextureData_R_arc_graphics_Texture, 0, "(Larc/graphics/TextureData;)Larc/graphics/Texture;", 9 },
	{ "load", (intptr_t) M_arc_graphics_Texture_load_arc_graphics_TextureData, VTABLE_arc_graphics_Texture_load_arc_graphics_TextureData, "(Larc/graphics/TextureData;)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Texture_draw_arc_graphics_Pixmap, VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap, "(Larc/graphics/Pixmap;)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int, VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int, "(Larc/graphics/Pixmap;II)V", 1 },
	{ "getDepth", (intptr_t) M_arc_graphics_Texture_getDepth_R_int, VTABLE_arc_graphics_Texture_getDepth_R_int, "()I", 1 },
	{ "getTextureData", (intptr_t) M_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData, VTABLE_arc_graphics_Texture_getTextureData_R_arc_graphics_TextureData, "()Larc/graphics/TextureData;", 1 },
	{ "isDisposed", (intptr_t) M_arc_graphics_Texture_isDisposed_R_boolean, VTABLE_arc_graphics_Texture_isDisposed_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_arc_graphics_Texture_toString_R_java_lang_String, VTABLE_arc_graphics_Texture_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_Texture{
		.nativeName = (intptr_t) "arc/graphics/Texture",
		.parentClass = (intptr_t) &class_arc_graphics_GLTexture,
		.size = sizeof(arc_graphics_Texture),
		.classVtable = (intptr_t) vtable_arc_graphics_Texture,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Texture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Texture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Texture = registerClass(&class_arc_graphics_Texture);

}
