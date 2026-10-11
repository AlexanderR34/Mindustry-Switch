#include "arc/graphics/Cubemap.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/TextureData.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/Cubemap_CubemapSide.h"
#include "arc/Files.h"
#include "arc/graphics/gl/FacedCubemapData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "arc/graphics/CubemapData.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/PixmapTextureData.h"
#include "arc/graphics/Cubemap.h"

extern "C" {


void mark_arc_graphics_Cubemap(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_Cubemap *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_graphics_Cubemap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_GLTexture(ctx);
}

void init_arc_graphics_Cubemap_arc_graphics_CubemapData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_arc_graphics_GLTexture_int(ctx, (frame[0].o), (jint(34067)));
	LINE_NUMBER(19);
	((arc_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(20);
	((func_arc_graphics_Cubemap_load_arc_graphics_CubemapData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Cubemap_load_arc_graphics_CubemapData])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"right.png"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[1].o));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"left.png"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	LINE_NUMBER(25);
	sp[2].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, sp[3].o);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[4].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[4].o);
	sp[4].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[4].o, (frame[1].o));
	sp[4].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[4].o, (((jobject) createStringLiteral(ctx, u8"top.png"_j))));
	sp[4].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[4].o);
	LINE_NUMBER(26);
	sp[3].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[3].o))(ctx, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[4].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[5].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[5].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (frame[1].o));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, (((jobject) createStringLiteral(ctx, u8"bottom.png"_j))));
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	LINE_NUMBER(27);
	sp[4].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[4].o))(ctx, sp[4].o, sp[5].o);
	clinit_arc_Core(ctx);
	sp[5].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[6].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[6].o);
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[6].o, (frame[1].o));
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[6].o, (((jobject) createStringLiteral(ctx, u8"front.png"_j))));
	sp[6].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[6].o);
	LINE_NUMBER(28);
	sp[5].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[5].o))(ctx, sp[5].o, sp[6].o);
	clinit_arc_Core(ctx);
	sp[6].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[7].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[7].o);
	sp[7].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[7].o, (frame[1].o));
	sp[7].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[7].o, (((jobject) createStringLiteral(ctx, u8"back.png"_j))));
	sp[7].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[7].o);
	LINE_NUMBER(29);
	sp[6].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[6].o))(ctx, sp[6].o, sp[7].o);
	LINE_NUMBER(24);
	init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(35);
	init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[1].o), (frame[7].i));
	sp[2].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[2].o), (frame[7].i));
	sp[3].o = frame[3].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(41);
	sp[3].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[3].o, temp0);
	sp[4].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[4].o), (frame[7].i));
	sp[5].o = frame[5].o;
	jint temp1 = frame[7].i;
	LINE_NUMBER(42);
	sp[5].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[5].o, temp1);
	sp[6].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(40);
	init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(47);
	init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	LINE_NUMBER(53);
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[1].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_3:;
	{
	LINE_NUMBER(54);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[2].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_5:;
	{
	LINE_NUMBER(55);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[3].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_7:;
	{
	LINE_NUMBER(56);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	INST_ACONST_NULL();
	goto label_9;
label_8:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[4].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_9:;
	{
	LINE_NUMBER(57);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	INST_ACONST_NULL();
	goto label_11;
label_10:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[5].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_11:;
	{
	LINE_NUMBER(58);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	INST_ACONST_NULL();
	goto label_13;
label_12:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[6].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_13:;
	{
	sp -= 7;
	LINE_NUMBER(52);
	init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[2].o, (frame[3].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[3].o, (frame[3].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[2].o, sp[3].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[4].o, (frame[1].i), (frame[3].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[3].o, sp[4].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[5].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[5].o, (frame[1].i), (frame[3].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[4].o, sp[5].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[5].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[6].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[6].o, (frame[1].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[5].o, sp[6].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[6].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[7].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[7].o, (frame[1].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[6].o, sp[7].o, (jint(0)), (jint(1)));
	init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(77);
	init_arc_graphics_GLTexture_int(ctx, (frame[0].o), (jint(34067)));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FacedCubemapData);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o));
	((arc_graphics_Cubemap *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_graphics_Cubemap_load_arc_graphics_CubemapData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_load_arc_graphics_CubemapData])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_Cubemap_load_arc_graphics_CubemapData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_arc_graphics_CubemapData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_graphics_CubemapData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_prepare, sp[0].o))(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_CubemapData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_getWidth_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((func_arc_graphics_CubemapData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_getHeight_R_int, (frame[1].o)))(ctx, (frame[1].o));
	((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(91);
	((func_arc_graphics_Cubemap_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Cubemap_bind])(ctx, (frame[0].o));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_unsafeSetFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Cubemap_unsafeSetWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(94);
	((func_arc_graphics_CubemapData_consumeCubemapData) resolveInterfaceMethod(ctx, &class_arc_graphics_CubemapData, INDEX_arc_graphics_CubemapData_consumeCubemapData, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(95);
	SM_arc_graphics_Gl_bindTexture_int_int(ctx, ((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:getCubemapData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Cubemap_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Cubemap:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Cubemap[] {
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
	(void *) M_arc_graphics_Cubemap_getDepth_R_int,
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
	(void *) M_arc_graphics_Cubemap_load_arc_graphics_CubemapData,
	(void *) M_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData,
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
	{ "load", "(Larc/graphics/CubemapData;)V" },
	{ "getCubemapData", "()Larc/graphics/CubemapData;" },
};

static jclass innerClasses[] {
	&class_arc_graphics_Cubemap$CubemapSide,
};

static FieldMetadata fields[] {
	{ "data", &class_arc_graphics_CubemapData, offsetof(arc_graphics_Cubemap, F_data), "Larc/graphics/CubemapData;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_graphics_CubemapData, 0, "(Larc/graphics/CubemapData;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi, 0, "(Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean, 0, "(Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_int_int_int, 0, "(III)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_Cubemap_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData, 0, "(Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_Cubemap_load_arc_graphics_CubemapData, VTABLE_arc_graphics_Cubemap_load_arc_graphics_CubemapData, "(Larc/graphics/CubemapData;)V", 1 },
	{ "getCubemapData", (intptr_t) M_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData, VTABLE_arc_graphics_Cubemap_getCubemapData_R_arc_graphics_CubemapData, "()Larc/graphics/CubemapData;", 1 },
	{ "getDepth", (intptr_t) M_arc_graphics_Cubemap_getDepth_R_int, VTABLE_arc_graphics_Cubemap_getDepth_R_int, "()I", 1 },
};

Class class_arc_graphics_Cubemap{
		.nativeName = (intptr_t) "arc/graphics/Cubemap",
		.parentClass = (intptr_t) &class_arc_graphics_GLTexture,
		.size = sizeof(arc_graphics_Cubemap),
		.classVtable = (intptr_t) vtable_arc_graphics_Cubemap,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Cubemap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Cubemap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Cubemap = registerClass(&class_arc_graphics_Cubemap);

}
