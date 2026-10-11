#include "arc/Graphics.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/math/Mathf.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "arc/Files.h"
#include "arc/Graphics_BufferFormat.h"
#include "arc/Graphics_Cursor.h"
#include "arc/graphics/GL20.h"
#include "arc/graphics/Color.h"
#include "arc/files/Fi.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/util/OS.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/GLVersion.h"

extern "C" {


void mark_arc_Graphics(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Graphics *) object;
	if (self->F_lastCursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCursor)->clazz)->markFunction)((jobject) self->F_lastCursor, mark, depth + 1);
}

void clinit_arc_Graphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_Graphics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Graphics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_Graphics_isGL30Available_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:isGL30Available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_arc_Graphics_supportsInstancing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:supportsInstancing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) != 0) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_arc_Graphics_isGL30Available_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_isGL30Available_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(3)), (jint(3)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_clear_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:clear", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(65);
	SM_arc_graphics_Gl_clearColor_float_float_float_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(66);
	SM_arc_graphics_Gl_clear_int(ctx, (16384));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((func_arc_Graphics_clear_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_clear_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_Graphics_isPortrait_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:isPortrait", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_1;
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

jfloat M_arc_Graphics_getAspect_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:getAspect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, (frame[0].o));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 / (jfloat(temp2)));
	}

	popStackFrame(ctx);
}

jbool M_arc_Graphics_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:isHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, (frame[0].o));
	if (temp0 < (jint(2))) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, (frame[0].o));
	if (temp0 >= (jint(2))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_Graphics_getSafeInsets_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:getSafeInsets", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_Graphics_setFullscreen_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:setFullscreen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_setWindowPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:setWindowPosition", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Graphics_setWindowSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:setWindowSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Graphics_setPreferredFPS_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:setPreferredFPS", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:newCursor", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_outline_arc_graphics_Color_int_R_arc_graphics_Pixmap])(ctx, (frame[1].o), (frame[3].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(236);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap(ctx, (frame[5].o), (jfloat((frame[2].i))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(238);
	jint temp0 = (jint)SM_arc_math_Mathf_isPowerOfTwo_int_R_boolean(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_width));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(239);
	frame[7].o = (frame[6].o);
	LINE_NUMBER(240);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_width));
	jint temp1 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_width));
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_R_arc_graphics_Pixmap(ctx, sp[0].o, temp0, temp1);
	frame[6].o = sp[0].o;
	LINE_NUMBER(241);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	}
label_3:;
	{
	LINE_NUMBER(244);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[5].o));
	LINE_NUMBER(245);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor])(ctx, (frame[0].o), (frame[6].o), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_width) / (jint(2))), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height) / (jint(2))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(248);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[6].o));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:newCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(257);
	if ((frame[2].i) == (jint(1))) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isAndroid;
	if ((--sp)->i != 0) goto label_1;
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(258);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"cursors/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_float_R_arc_graphics_Pixmap(ctx, (frame[3].o), (jfloat((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width) * (frame[2].i)))), (jfloat((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height) * (frame[2].i)))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(260);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[3].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor])(ctx, (frame[0].o), (frame[4].o), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[4].o)))->F_width) / (jint(2))), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[4].o)))->F_height) / (jint(2))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(262);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:newCursor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(271);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"cursors/"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[1].o))(ctx, sp[1].o, sp[2].o);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor])(ctx, (frame[0].o), (frame[2].o), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) / (jint(2))), (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height) / (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(273);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:newCursor", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	clinit_java_lang_StringBuilder(ctx);
	sp[3].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[3].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"cursors/"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (frame[1].o));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, sp[3].o);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_restoreCursor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:restoreCursor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_arrow;
	((func_arc_Graphics_cursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_cursor_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:cursor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_Graphics *) NULL_CHECK((frame[0].o)))->F_lastCursor;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(294);
	if ((isInstance(ctx, (frame[1].o), &class_arc_Graphics$Cursor$SystemCursor)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((checkCast(ctx, &class_arc_Graphics$Cursor$SystemCursor, (frame[1].o)))))->F_cursor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_Graphics$Cursor$SystemCursor *) NULL_CHECK((checkCast(ctx, &class_arc_Graphics$Cursor$SystemCursor, (frame[1].o)))))->F_cursor;
	((func_arc_Graphics_setCursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_setCursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(298);
	((func_arc_Graphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_Graphics$Cursor$SystemCursor, (frame[1].o))));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(301);
	((func_arc_Graphics_setCursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_Graphics_setCursor_arc_Graphics$Cursor])(ctx, (frame[0].o), (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(304);
	((arc_Graphics *) NULL_CHECK((frame[0].o)))->F_lastCursor = (jref) (frame[1].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Graphics_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Graphics:dispose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)SM_arc_Graphics$Cursor$SystemCursor_values_R_Array1_arc_Graphics$Cursor$SystemCursor(ctx);
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(323);
	((func_arc_Graphics$Cursor$SystemCursor_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_Graphics$Cursor$SystemCursor_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(322);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(325);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_Graphics[] {
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
	(void *) M_arc_Graphics_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_Graphics_isGL30Available_R_boolean,
	(void *) M_arc_Graphics_supportsInstancing_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_clear_float_float_float_float,
	(void *) M_arc_Graphics_clear_arc_graphics_Color,
	(void *) M_arc_Graphics_isPortrait_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_getAspect_R_float,
	(void *) M_arc_Graphics_isHidden_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_getSafeInsets_R_Array1_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_setFullscreen_boolean_R_boolean,
	(void *) M_arc_Graphics_setWindowPosition_int_int,
	(void *) M_arc_Graphics_setWindowSize_int_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_setPreferredFPS_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_restoreCursor,
	(void *) M_arc_Graphics_cursor_arc_Graphics$Cursor,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "isGL30Available", "()Z" },
	{ "supportsInstancing", "()Z" },
	{ "getGL20", "()Larc/graphics/GL20;" },
	{ "setGL20", "(Larc/graphics/GL20;)V" },
	{ "getGL30", "()Larc/graphics/GL30;" },
	{ "setGL30", "(Larc/graphics/GL30;)V" },
	{ "clear", "(FFFF)V" },
	{ "clear", "(Larc/graphics/Color;)V" },
	{ "isPortrait", "()Z" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getAspect", "()F" },
	{ "isHidden", "()Z" },
	{ "getBackBufferWidth", "()I" },
	{ "getBackBufferHeight", "()I" },
	{ "getSafeInsets", "()[I" },
	{ "getFrameId", "()J" },
	{ "getDeltaTime", "()F" },
	{ "getFramesPerSecond", "()I" },
	{ "getGLVersion", "()Larc/graphics/gl/GLVersion;" },
	{ "getPpiX", "()F" },
	{ "getPpiY", "()F" },
	{ "getPpcX", "()F" },
	{ "getPpcY", "()F" },
	{ "getDensity", "()F" },
	{ "setFullscreen", "(Z)Z" },
	{ "setWindowPosition", "(II)V" },
	{ "setWindowSize", "(II)V" },
	{ "setTitle", "(Ljava/lang/String;)V" },
	{ "setVSync", "(Z)V" },
	{ "getBufferFormat", "()Larc/Graphics$BufferFormat;" },
	{ "supportsExtension", "(Ljava/lang/String;)Z" },
	{ "setPreferredFPS", "(I)V" },
	{ "isContinuousRendering", "()Z" },
	{ "setContinuousRendering", "(Z)V" },
	{ "requestRendering", "()V" },
	{ "isFullscreen", "()Z" },
	{ "newCursor", "(Larc/graphics/Pixmap;II)Larc/Graphics$Cursor;" },
	{ "newCursor", "(Larc/graphics/Pixmap;ILarc/graphics/Color;I)Larc/Graphics$Cursor;" },
	{ "newCursor", "(Ljava/lang/String;I)Larc/Graphics$Cursor;" },
	{ "newCursor", "(Ljava/lang/String;)Larc/Graphics$Cursor;" },
	{ "newCursor", "(Ljava/lang/String;ILarc/graphics/Color;I)Larc/Graphics$Cursor;" },
	{ "restoreCursor", "()V" },
	{ "cursor", "(Larc/Graphics$Cursor;)V" },
	{ "setCursor", "(Larc/Graphics$Cursor;)V" },
	{ "setSystemCursor", "(Larc/Graphics$Cursor$SystemCursor;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_Graphics$Cursor,
	&class_arc_Graphics$BufferFormat,
};

static FieldMetadata fields[] {
	{ "lastCursor", &class_java_lang_Object, offsetof(arc_Graphics, F_lastCursor), "Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Graphics, 0, "()V", 1 },
	{ "isGL30Available", (intptr_t) M_arc_Graphics_isGL30Available_R_boolean, VTABLE_arc_Graphics_isGL30Available_R_boolean, "()Z", 1 },
	{ "supportsInstancing", (intptr_t) M_arc_Graphics_supportsInstancing_R_boolean, VTABLE_arc_Graphics_supportsInstancing_R_boolean, "()Z", 1 },
	{ "getGL20", 0, VTABLE_arc_Graphics_getGL20_R_arc_graphics_GL20, "()Larc/graphics/GL20;", 1025 },
	{ "setGL20", 0, VTABLE_arc_Graphics_setGL20_arc_graphics_GL20, "(Larc/graphics/GL20;)V", 1025 },
	{ "getGL30", 0, VTABLE_arc_Graphics_getGL30_R_arc_graphics_GL30, "()Larc/graphics/GL30;", 1025 },
	{ "setGL30", 0, VTABLE_arc_Graphics_setGL30_arc_graphics_GL30, "(Larc/graphics/GL30;)V", 1025 },
	{ "clear", (intptr_t) M_arc_Graphics_clear_float_float_float_float, VTABLE_arc_Graphics_clear_float_float_float_float, "(FFFF)V", 1 },
	{ "clear", (intptr_t) M_arc_Graphics_clear_arc_graphics_Color, VTABLE_arc_Graphics_clear_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "isPortrait", (intptr_t) M_arc_Graphics_isPortrait_R_boolean, VTABLE_arc_Graphics_isPortrait_R_boolean, "()Z", 1 },
	{ "getWidth", 0, VTABLE_arc_Graphics_getWidth_R_int, "()I", 1025 },
	{ "getHeight", 0, VTABLE_arc_Graphics_getHeight_R_int, "()I", 1025 },
	{ "getAspect", (intptr_t) M_arc_Graphics_getAspect_R_float, VTABLE_arc_Graphics_getAspect_R_float, "()F", 1 },
	{ "isHidden", (intptr_t) M_arc_Graphics_isHidden_R_boolean, VTABLE_arc_Graphics_isHidden_R_boolean, "()Z", 1 },
	{ "getBackBufferWidth", 0, VTABLE_arc_Graphics_getBackBufferWidth_R_int, "()I", 1025 },
	{ "getBackBufferHeight", 0, VTABLE_arc_Graphics_getBackBufferHeight_R_int, "()I", 1025 },
	{ "getSafeInsets", (intptr_t) M_arc_Graphics_getSafeInsets_R_Array1_int, VTABLE_arc_Graphics_getSafeInsets_R_Array1_int, "()[I", 1 },
	{ "getFrameId", 0, VTABLE_arc_Graphics_getFrameId_R_long, "()J", 1025 },
	{ "getDeltaTime", 0, VTABLE_arc_Graphics_getDeltaTime_R_float, "()F", 1025 },
	{ "getFramesPerSecond", 0, VTABLE_arc_Graphics_getFramesPerSecond_R_int, "()I", 1025 },
	{ "getGLVersion", 0, VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion, "()Larc/graphics/gl/GLVersion;", 1025 },
	{ "getPpiX", 0, VTABLE_arc_Graphics_getPpiX_R_float, "()F", 1025 },
	{ "getPpiY", 0, VTABLE_arc_Graphics_getPpiY_R_float, "()F", 1025 },
	{ "getPpcX", 0, VTABLE_arc_Graphics_getPpcX_R_float, "()F", 1025 },
	{ "getPpcY", 0, VTABLE_arc_Graphics_getPpcY_R_float, "()F", 1025 },
	{ "getDensity", 0, VTABLE_arc_Graphics_getDensity_R_float, "()F", 1025 },
	{ "setFullscreen", (intptr_t) M_arc_Graphics_setFullscreen_boolean_R_boolean, VTABLE_arc_Graphics_setFullscreen_boolean_R_boolean, "(Z)Z", 1 },
	{ "setWindowPosition", (intptr_t) M_arc_Graphics_setWindowPosition_int_int, VTABLE_arc_Graphics_setWindowPosition_int_int, "(II)V", 1 },
	{ "setWindowSize", (intptr_t) M_arc_Graphics_setWindowSize_int_int, VTABLE_arc_Graphics_setWindowSize_int_int, "(II)V", 1 },
	{ "setTitle", 0, VTABLE_arc_Graphics_setTitle_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "setVSync", 0, VTABLE_arc_Graphics_setVSync_boolean, "(Z)V", 1025 },
	{ "getBufferFormat", 0, VTABLE_arc_Graphics_getBufferFormat_R_arc_Graphics$BufferFormat, "()Larc/Graphics$BufferFormat;", 1025 },
	{ "supportsExtension", 0, VTABLE_arc_Graphics_supportsExtension_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1025 },
	{ "setPreferredFPS", (intptr_t) M_arc_Graphics_setPreferredFPS_int, VTABLE_arc_Graphics_setPreferredFPS_int, "(I)V", 1 },
	{ "isContinuousRendering", 0, VTABLE_arc_Graphics_isContinuousRendering_R_boolean, "()Z", 1025 },
	{ "setContinuousRendering", 0, VTABLE_arc_Graphics_setContinuousRendering_boolean, "(Z)V", 1025 },
	{ "requestRendering", 0, VTABLE_arc_Graphics_requestRendering, "()V", 1025 },
	{ "isFullscreen", 0, VTABLE_arc_Graphics_isFullscreen_R_boolean, "()Z", 1025 },
	{ "newCursor", 0, VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor, "(Larc/graphics/Pixmap;II)Larc/Graphics$Cursor;", 1025 },
	{ "newCursor", (intptr_t) M_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor, VTABLE_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor, "(Larc/graphics/Pixmap;ILarc/graphics/Color;I)Larc/Graphics$Cursor;", 1 },
	{ "newCursor", (intptr_t) M_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor, VTABLE_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor, "(Ljava/lang/String;I)Larc/Graphics$Cursor;", 1 },
	{ "newCursor", (intptr_t) M_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor, VTABLE_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor, "(Ljava/lang/String;)Larc/Graphics$Cursor;", 1 },
	{ "newCursor", (intptr_t) M_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor, VTABLE_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor, "(Ljava/lang/String;ILarc/graphics/Color;I)Larc/Graphics$Cursor;", 1 },
	{ "restoreCursor", (intptr_t) M_arc_Graphics_restoreCursor, VTABLE_arc_Graphics_restoreCursor, "()V", 1 },
	{ "cursor", (intptr_t) M_arc_Graphics_cursor_arc_Graphics$Cursor, VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor, "(Larc/Graphics$Cursor;)V", 1 },
	{ "setCursor", 0, VTABLE_arc_Graphics_setCursor_arc_Graphics$Cursor, "(Larc/Graphics$Cursor;)V", 1028 },
	{ "setSystemCursor", 0, VTABLE_arc_Graphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor, "(Larc/Graphics$Cursor$SystemCursor;)V", 1028 },
	{ "dispose", (intptr_t) M_arc_Graphics_dispose, VTABLE_arc_Graphics_dispose, "()V", 1 },
};

Class class_arc_Graphics{
		.nativeName = (intptr_t) "arc/Graphics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Graphics),
		.classVtable = (intptr_t) vtable_arc_Graphics,
		.staticInitializer = (intptr_t) clinit_arc_Graphics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Graphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 48,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Graphics = registerClass(&class_arc_Graphics);

}
