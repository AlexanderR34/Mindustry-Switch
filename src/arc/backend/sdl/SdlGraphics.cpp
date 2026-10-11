#include "arc/backend/sdl/SdlGraphics.h"
#include "java/lang/StringBuilder.h"
#include "arc/Graphics_BufferFormat.h"
#include "arc/backend/sdl/SdlConfig.h"
#include "arc/graphics/GL20.h"
#include "arc/graphics/Color.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/Application_ApplicationType.h"
#include "arc/backend/sdl/SdlApplication.h"
#include "arc/backend/sdl/SdlGL30.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/backend/sdl/SdlGraphics.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "arc/backend/sdl/SdlGraphics_invoke_arc_func_Cons2_0.h"
#include "arc/backend/sdl/SdlGraphics_SdlCursor.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/Graphics_Cursor.h"
#include "java/lang/Enum.h"
#include "arc/func/Cons2.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "java/lang/Object.h"
#include "arc/backend/sdl/jni/SDLGL.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/backend/sdl/SdlGL20.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "arc/graphics/gl/HdpiMode.h"
#include "arc/struct/ObjectMap.h"
#include "arc/backend/sdl/SdlGraphics_1.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_backend_sdl_SdlGraphics(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_Graphics(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_backend_sdl_SdlGraphics *) object;
	if (self->F_gl20)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gl20)->clazz)->markFunction)((jobject) self->F_gl20, mark, depth + 1);
	if (self->F_gl30)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gl30)->clazz)->markFunction)((jobject) self->F_gl30, mark, depth + 1);
	if (self->F_glVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glVersion)->clazz)->markFunction)((jobject) self->F_glVersion, mark, depth + 1);
	if (self->F_bufferFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufferFormat)->clazz)->markFunction)((jobject) self->F_bufferFormat, mark, depth + 1);
	if (self->F_app)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_app)->clazz)->markFunction)((jobject) self->F_app, mark, depth + 1);
	if (self->F_cursors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursors)->clazz)->markFunction)((jobject) self->F_cursors, mark, depth + 1);
	if (self->F_wh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wh)->clazz)->markFunction)((jobject) self->F_wh, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlGraphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_Graphics(ctx);
}

void init_arc_backend_sdl_SdlGraphics_arc_backend_sdl_SdlApplication(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlGraphics(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	init_arc_Graphics(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_lastFrameTime = (jlong(-1ll));
	LINE_NUMBER(24);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frameCounterStart = (jlong(0));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_wh = (jref) sp[1].o;
	LINE_NUMBER(35);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app = (jref) (frame[1].o);
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDLGL_init_R_java_lang_String(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(39);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"GLEW failed to initialize: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_backend_sdl_SdlGL20(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlGL20);
	init_arc_backend_sdl_SdlGL20(ctx, sp[1].o);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_gl20 = (jref) sp[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl20 = sp[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl = sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7938));
	frame[3].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7936));
	frame[4].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20;
	sp[0].o = (jobject)((func_arc_graphics_GL20_glGetString_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glGetString_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (7937));
	frame[5].o = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_cursors = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_GLVersion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_GLVersion);
	clinit_arc_Application$ApplicationType(ctx);
	sp[2].o = (jobject)SF_arc_Application$ApplicationType_desktop;
	init_arc_graphics_gl_GLVersion_arc_Application$ApplicationType_java_lang_String_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[3].o), (frame[4].o), (frame[5].o));
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_glVersion = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_Graphics$BufferFormat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_Graphics$BufferFormat);
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp0 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_r;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp1 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_g;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp2 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_b;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp3 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_a;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp4 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_depth;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	jint temp5 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_stencil;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	init_arc_Graphics$BufferFormat_int_int_int_int_int_int_int_boolean(ctx, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_samples), (jint(0)));
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_bufferFormat = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_glVersion;
	jint temp6 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(2)), (jint(0)));
	if (temp6 == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(53);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"OpenGL 2.0 or higher with the FBO extension is required. OpenGL version: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_glVersion;
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(3)), (jint(0)));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_allowGl30) == 0) goto label_18;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_backend_sdl_SdlGL30(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlGL30);
	init_arc_backend_sdl_SdlGL30(ctx, sp[2].o);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[1].o))->F_gl30 = (jref) sp[2].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl30 = sp[2].o;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_gl20 = (jref) sp[2].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl20 = sp[2].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl = sp[2].o;
	}
label_18:;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_config;
	sp[1].o = (jobject)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_initialBackgroundColor;
	((func_arc_backend_sdl_SdlGraphics_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_clear_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	SM_arc_backend_sdl_jni_SDL_SDL_GL_SwapWindow_long(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[1].o)))->F_window));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:supportsFBO", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_glVersion;
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(3)), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_ExtensionSupported_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"GL_EXT_framebuffer_object"_j))));
	if (temp0 == 0) goto label_2;
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

void M_arc_backend_sdl_SdlGraphics_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(71);
	if ((longCompare(((jlong)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_lastFrameTime), (jlong(-1ll)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(72);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_lastFrameTime = (frame[1].l);
	}
label_2:;
	{
	LINE_NUMBER(73);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_deltaTime = ((jfloat(((frame[1].l) - ((jlong)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_lastFrameTime)))) / (jfloat(1,000000e+09f)));
	LINE_NUMBER(74);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_lastFrameTime = (frame[1].l);
	LINE_NUMBER(76);
	if ((longCompare(((frame[1].l) - ((jlong)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frameCounterStart)), (jlong(1000000000ll)))) < 0) goto label_6;
	}
	{
	LINE_NUMBER(77);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_fps = ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frames);
	LINE_NUMBER(78);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frames = (jint(0));
	LINE_NUMBER(79);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frameCounterStart = (frame[1].l);
	}
label_6:;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_frames = (((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_frames) + (jint(1)));
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_frameId = (((jlong)((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_frameId) + (jlong(1)));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_updateSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:updateSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(86);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_logicalWidth = (frame[1].i);
	LINE_NUMBER(87);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_logicalHeight = (frame[2].i);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	jlong temp0 = (jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window;
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_wh;
	SM_arc_backend_sdl_jni_SDL_SDL_GL_GetDrawableSize_long_Array1_int(ctx, temp0, sp[0].o);
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_wh;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_backBufferWidth = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0))));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_wh;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_backBufferHeight = ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(1))));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20;
	((func_arc_graphics_GL20_glViewport_int_int_int_int) resolveInterfaceMethod(ctx, &class_arc_graphics_GL20, INDEX_arc_graphics_GL20_glViewport_int_int_int_int, sp[0].o))(ctx, sp[0].o, (jint(0)), (jint(0)), ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferWidth), ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferHeight));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_isGL30Available_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:isGL30Available", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl30;
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

jobject M_arc_backend_sdl_SdlGraphics_getGL20_R_arc_graphics_GL20(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getGL20", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setGL20_arc_graphics_GL20(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setGL20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl20 = (jref) (frame[1].o);
	LINE_NUMBER(109);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl20 = sp[0].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl = sp[0].o;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGraphics_getGL30_R_arc_graphics_GL30(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getGL30", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_gl30;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setGL30_arc_graphics_GL30(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setGL30", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[1].o))->F_gl30 = (jref) sp[2].o;
	((arc_backend_sdl_SdlGraphics *) NULL_CHECK(sp[0].o))->F_gl20 = (jref) sp[2].o;
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl20 = sp[0].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_gl = sp[0].o;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_config;
	sp[0].o = (jobject)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_hdpiMode;
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_HdpiMode_pixels;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferWidth);
	}
label_1:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_logicalWidth);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_config;
	sp[0].o = (jobject)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_hdpiMode;
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_HdpiMode_pixels;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferHeight);
	}
label_1:;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_logicalHeight);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_getBackBufferWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getBackBufferWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferWidth);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_getBackBufferHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getBackBufferHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_backBufferHeight);
	}

	popStackFrame(ctx);
}

jlong M_arc_backend_sdl_SdlGraphics_getFrameId_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getFrameId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return ((jlong)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_frameId);
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getDeltaTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getDeltaTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return ((jfloat)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_deltaTime);
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_getFramesPerSecond_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getFramesPerSecond", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return ((jint)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_fps);
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGraphics_getGLVersion_R_arc_graphics_gl_GLVersion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getGLVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_glVersion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getPpiX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getPpiX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getPpiY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getPpiY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getPpcX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getPpcX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getPpcY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getPpcY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_backend_sdl_SdlGraphics_getDensity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getDensity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_setFullscreen_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setFullscreen", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	jlong temp0 = (jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window;
	sp[0].l = temp0;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_SIPUSH(4097);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	sp->i = (jint)SM_arc_backend_sdl_jni_SDL_SDL_SetWindowFullscreen_long_int_R_int(ctx, sp[0].l, sp[1].i);
	sp++;
	if ((--sp)->i != 0) goto label_3;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setTitle_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setTitle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	SM_arc_backend_sdl_jni_SDL_SDL_SetWindowTitle_long_java_lang_String(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window), (frame[1].o));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setWindowPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setWindowPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	SM_arc_backend_sdl_jni_SDL_SDL_SetWindowPosition_long_int_int(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window), (frame[1].i), (frame[2].i));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setWindowSize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setWindowSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	SM_arc_backend_sdl_jni_SDL_SDL_SetWindowSize_long_int_int(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window), (frame[1].i), (frame[2].i));
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setVSync_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setVSync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(218);
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetSwapInterval_int_R_int(ctx, sp[0].i);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlGraphics_getBufferFormat_R_arc_Graphics$BufferFormat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:getBufferFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_bufferFormat;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_supportsExtension_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:supportsExtension", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_ExtensionSupported_java_lang_String_R_boolean(ctx, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_isContinuousRendering_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:isContinuousRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setContinuousRendering_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setContinuousRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_requestRendering(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:requestRendering", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlGraphics_isFullscreen_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:isFullscreen", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_app;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GetWindowFlags_long_R_int(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window));
	if ((temp0 & (jint(1))) != (jint(1))) goto label_1;
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

jobject M_arc_backend_sdl_SdlGraphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:newCursor", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixels;
	jlong temp0 = (jlong)SM_arc_backend_sdl_jni_SDL_SDL_CreateRGBSurfaceFrom_java_nio_ByteBuffer_int_int_R_long(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height));
	frame[4].l = temp0;
	LINE_NUMBER(254);
	jlong temp1 = (jlong)SM_arc_backend_sdl_jni_SDL_SDL_CreateColorCursor_long_int_int_R_long(ctx, (frame[4].l), (frame[2].i), (frame[3].i));
	frame[6].l = temp1;
	LINE_NUMBER(255);
	clinit_arc_backend_sdl_SdlGraphics$SdlCursor(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlGraphics$SdlCursor);
	init_arc_backend_sdl_SdlGraphics$SdlCursor_long_long(ctx, sp[0].o, (frame[4].l), (frame[6].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setCursor_arc_Graphics$Cursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setCursor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	SM_arc_backend_sdl_jni_SDL_SDL_SetCursor_long(ctx, ((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((checkCast(ctx, &class_arc_backend_sdl_SdlGraphics$SdlCursor, (frame[1].o)))))->F_cursorHandle));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:setSystemCursor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_cursors;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)M_arc_backend_sdl_SdlGraphics_mapCursor_arc_Graphics$Cursor$SystemCursor_R_int(ctx, (frame[0].o), (frame[1].o));
	jlong temp1 = (jlong)SM_arc_backend_sdl_jni_SDL_SDL_CreateSystemCursor_int_R_long(ctx, temp0);
	frame[2].l = temp1;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_cursors;
	sp[1].o = frame[1].o;
	clinit_arc_backend_sdl_SdlGraphics$SdlCursor(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlGraphics$SdlCursor);
	init_arc_backend_sdl_SdlGraphics$SdlCursor_long_long(ctx, sp[2].o, (jlong(0)), (frame[2].l));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_cursors;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	SM_arc_backend_sdl_jni_SDL_SDL_SetCursor_long(ctx, ((jlong)((arc_backend_sdl_SdlGraphics$SdlCursor *) NULL_CHECK((checkCast(ctx, &class_arc_backend_sdl_SdlGraphics$SdlCursor, sp[0].o))))->F_cursorHandle));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlGraphics_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	M_arc_Graphics_dispose(ctx, (frame[0].o));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_backend_sdl_SdlGraphics *) NULL_CHECK((frame[0].o)))->F_cursors;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlGraphics_invoke_arc_func_Cons2_0(ctx);
		auto proxy = (arc_backend_sdl_SdlGraphics_invoke_arc_func_Cons2_0 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlGraphics_invoke_arc_func_Cons2_0);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_backend_sdl_SdlGraphics_mapCursor_arc_Graphics$Cursor$SystemCursor_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:mapCursor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	clinit_arc_backend_sdl_SdlGraphics$1(ctx);
	sp[0].o = (jobject)SF_arc_backend_sdl_SdlGraphics$1_$SwitchMap$arc$Graphics$Cursor$SystemCursor;
	jint temp0 = (jint)((func_arc_Graphics$Cursor$SystemCursor_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_Graphics$Cursor$SystemCursor_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(3));
	}
label_4:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (11);
	}
label_5:;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (7);
	}
label_6:;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (8);
	}
label_7:;
	{
	LINE_NUMBER(288);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"this is impossible."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_arc_backend_sdl_SdlGraphics_lambda$dispose$0_arc_Graphics$Cursor$SystemCursor_arc_backend_sdl_SdlGraphics$SdlCursor(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlGraphics:lambda$dispose$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlGraphics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(276);
	((func_arc_backend_sdl_SdlGraphics$SdlCursor_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_dispose])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlGraphics[] {
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
	(void *) M_arc_backend_sdl_SdlGraphics_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_isGL30Available_R_boolean,
	(void *) M_arc_Graphics_supportsInstancing_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_getGL20_R_arc_graphics_GL20,
	(void *) M_arc_backend_sdl_SdlGraphics_setGL20_arc_graphics_GL20,
	(void *) M_arc_backend_sdl_SdlGraphics_getGL30_R_arc_graphics_GL30,
	(void *) M_arc_backend_sdl_SdlGraphics_setGL30_arc_graphics_GL30,
	(void *) M_arc_Graphics_clear_float_float_float_float,
	(void *) M_arc_Graphics_clear_arc_graphics_Color,
	(void *) M_arc_Graphics_isPortrait_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_getWidth_R_int,
	(void *) M_arc_backend_sdl_SdlGraphics_getHeight_R_int,
	(void *) M_arc_Graphics_getAspect_R_float,
	(void *) M_arc_Graphics_isHidden_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_getBackBufferWidth_R_int,
	(void *) M_arc_backend_sdl_SdlGraphics_getBackBufferHeight_R_int,
	(void *) M_arc_Graphics_getSafeInsets_R_Array1_int,
	(void *) M_arc_backend_sdl_SdlGraphics_getFrameId_R_long,
	(void *) M_arc_backend_sdl_SdlGraphics_getDeltaTime_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_getFramesPerSecond_R_int,
	(void *) M_arc_backend_sdl_SdlGraphics_getGLVersion_R_arc_graphics_gl_GLVersion,
	(void *) M_arc_backend_sdl_SdlGraphics_getPpiX_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_getPpiY_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_getPpcX_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_getPpcY_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_getDensity_R_float,
	(void *) M_arc_backend_sdl_SdlGraphics_setFullscreen_boolean_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_setWindowPosition_int_int,
	(void *) M_arc_backend_sdl_SdlGraphics_setWindowSize_int_int,
	(void *) M_arc_backend_sdl_SdlGraphics_setTitle_java_lang_String,
	(void *) M_arc_backend_sdl_SdlGraphics_setVSync_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_getBufferFormat_R_arc_Graphics$BufferFormat,
	(void *) M_arc_backend_sdl_SdlGraphics_supportsExtension_java_lang_String_R_boolean,
	(void *) M_arc_Graphics_setPreferredFPS_int,
	(void *) M_arc_backend_sdl_SdlGraphics_isContinuousRendering_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_setContinuousRendering_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_requestRendering,
	(void *) M_arc_backend_sdl_SdlGraphics_isFullscreen_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_arc_graphics_Pixmap_int_arc_graphics_Color_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_newCursor_java_lang_String_int_arc_graphics_Color_int_R_arc_Graphics$Cursor,
	(void *) M_arc_Graphics_restoreCursor,
	(void *) M_arc_Graphics_cursor_arc_Graphics$Cursor,
	(void *) M_arc_backend_sdl_SdlGraphics_setCursor_arc_Graphics$Cursor,
	(void *) M_arc_backend_sdl_SdlGraphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor,
	(void *) M_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean,
	(void *) M_arc_backend_sdl_SdlGraphics_update,
	(void *) M_arc_backend_sdl_SdlGraphics_updateSize_int_int,
	(void *) M_arc_backend_sdl_SdlGraphics_mapCursor_arc_Graphics$Cursor$SystemCursor_R_int,
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
	{ "supportsFBO", "()Z" },
	{ "update", "()V" },
	{ "updateSize", "(II)V" },
	{ "mapCursor", "(Larc/Graphics$Cursor$SystemCursor;)I" },
};

static jclass innerClasses[] {
	&class_arc_backend_sdl_SdlGraphics$SdlCursor,
};

static FieldMetadata fields[] {
	{ "gl20", &class_arc_graphics_GL20, offsetof(arc_backend_sdl_SdlGraphics, F_gl20), "Larc/graphics/GL20;", 2 },
	{ "gl30", &class_arc_graphics_GL30, offsetof(arc_backend_sdl_SdlGraphics, F_gl30), "Larc/graphics/GL30;", 2 },
	{ "glVersion", &class_arc_graphics_gl_GLVersion, offsetof(arc_backend_sdl_SdlGraphics, F_glVersion), "Larc/graphics/gl/GLVersion;", 2 },
	{ "bufferFormat", &class_arc_Graphics$BufferFormat, offsetof(arc_backend_sdl_SdlGraphics, F_bufferFormat), "Larc/Graphics$BufferFormat;", 2 },
	{ "app", &class_arc_backend_sdl_SdlApplication, offsetof(arc_backend_sdl_SdlGraphics, F_app), "Larc/backend/sdl/SdlApplication;", 2 },
	{ "cursors", &class_arc_struct_ObjectMap, offsetof(arc_backend_sdl_SdlGraphics, F_cursors), "Larc/struct/ObjectMap;", 2 },
	{ "lastFrameTime", &class_long, offsetof(arc_backend_sdl_SdlGraphics, F_lastFrameTime), "J", 2 },
	{ "deltaTime", &class_float, offsetof(arc_backend_sdl_SdlGraphics, F_deltaTime), "F", 2 },
	{ "frameId", &class_long, offsetof(arc_backend_sdl_SdlGraphics, F_frameId), "J", 2 },
	{ "frameCounterStart", &class_long, offsetof(arc_backend_sdl_SdlGraphics, F_frameCounterStart), "J", 2 },
	{ "frames", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_frames), "I", 2 },
	{ "fps", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_fps), "I", 2 },
	{ "wh", getArrayClass(&class_int, 1), offsetof(arc_backend_sdl_SdlGraphics, F_wh), "[I", 2 },
	{ "backBufferWidth", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_backBufferWidth), "I", 0 },
	{ "backBufferHeight", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_backBufferHeight), "I", 0 },
	{ "logicalWidth", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_logicalWidth), "I", 0 },
	{ "logicalHeight", &class_int, offsetof(arc_backend_sdl_SdlGraphics, F_logicalHeight), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlGraphics_arc_backend_sdl_SdlApplication, 0, "(Larc/backend/sdl/SdlApplication;)V", 0 },
	{ "supportsFBO", (intptr_t) M_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_supportsFBO_R_boolean, "()Z", 0 },
	{ "update", (intptr_t) M_arc_backend_sdl_SdlGraphics_update, VTABLE_arc_backend_sdl_SdlGraphics_update, "()V", 0 },
	{ "updateSize", (intptr_t) M_arc_backend_sdl_SdlGraphics_updateSize_int_int, VTABLE_arc_backend_sdl_SdlGraphics_updateSize_int_int, "(II)V", 0 },
	{ "isGL30Available", (intptr_t) M_arc_backend_sdl_SdlGraphics_isGL30Available_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_isGL30Available_R_boolean, "()Z", 1 },
	{ "getGL20", (intptr_t) M_arc_backend_sdl_SdlGraphics_getGL20_R_arc_graphics_GL20, VTABLE_arc_backend_sdl_SdlGraphics_getGL20_R_arc_graphics_GL20, "()Larc/graphics/GL20;", 1 },
	{ "setGL20", (intptr_t) M_arc_backend_sdl_SdlGraphics_setGL20_arc_graphics_GL20, VTABLE_arc_backend_sdl_SdlGraphics_setGL20_arc_graphics_GL20, "(Larc/graphics/GL20;)V", 1 },
	{ "getGL30", (intptr_t) M_arc_backend_sdl_SdlGraphics_getGL30_R_arc_graphics_GL30, VTABLE_arc_backend_sdl_SdlGraphics_getGL30_R_arc_graphics_GL30, "()Larc/graphics/GL30;", 1 },
	{ "setGL30", (intptr_t) M_arc_backend_sdl_SdlGraphics_setGL30_arc_graphics_GL30, VTABLE_arc_backend_sdl_SdlGraphics_setGL30_arc_graphics_GL30, "(Larc/graphics/GL30;)V", 1 },
	{ "getWidth", (intptr_t) M_arc_backend_sdl_SdlGraphics_getWidth_R_int, VTABLE_arc_backend_sdl_SdlGraphics_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_backend_sdl_SdlGraphics_getHeight_R_int, VTABLE_arc_backend_sdl_SdlGraphics_getHeight_R_int, "()I", 1 },
	{ "getBackBufferWidth", (intptr_t) M_arc_backend_sdl_SdlGraphics_getBackBufferWidth_R_int, VTABLE_arc_backend_sdl_SdlGraphics_getBackBufferWidth_R_int, "()I", 1 },
	{ "getBackBufferHeight", (intptr_t) M_arc_backend_sdl_SdlGraphics_getBackBufferHeight_R_int, VTABLE_arc_backend_sdl_SdlGraphics_getBackBufferHeight_R_int, "()I", 1 },
	{ "getFrameId", (intptr_t) M_arc_backend_sdl_SdlGraphics_getFrameId_R_long, VTABLE_arc_backend_sdl_SdlGraphics_getFrameId_R_long, "()J", 1 },
	{ "getDeltaTime", (intptr_t) M_arc_backend_sdl_SdlGraphics_getDeltaTime_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getDeltaTime_R_float, "()F", 1 },
	{ "getFramesPerSecond", (intptr_t) M_arc_backend_sdl_SdlGraphics_getFramesPerSecond_R_int, VTABLE_arc_backend_sdl_SdlGraphics_getFramesPerSecond_R_int, "()I", 1 },
	{ "getGLVersion", (intptr_t) M_arc_backend_sdl_SdlGraphics_getGLVersion_R_arc_graphics_gl_GLVersion, VTABLE_arc_backend_sdl_SdlGraphics_getGLVersion_R_arc_graphics_gl_GLVersion, "()Larc/graphics/gl/GLVersion;", 1 },
	{ "getPpiX", (intptr_t) M_arc_backend_sdl_SdlGraphics_getPpiX_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getPpiX_R_float, "()F", 1 },
	{ "getPpiY", (intptr_t) M_arc_backend_sdl_SdlGraphics_getPpiY_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getPpiY_R_float, "()F", 1 },
	{ "getPpcX", (intptr_t) M_arc_backend_sdl_SdlGraphics_getPpcX_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getPpcX_R_float, "()F", 1 },
	{ "getPpcY", (intptr_t) M_arc_backend_sdl_SdlGraphics_getPpcY_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getPpcY_R_float, "()F", 1 },
	{ "getDensity", (intptr_t) M_arc_backend_sdl_SdlGraphics_getDensity_R_float, VTABLE_arc_backend_sdl_SdlGraphics_getDensity_R_float, "()F", 1 },
	{ "setFullscreen", (intptr_t) M_arc_backend_sdl_SdlGraphics_setFullscreen_boolean_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_setFullscreen_boolean_R_boolean, "(Z)Z", 1 },
	{ "setTitle", (intptr_t) M_arc_backend_sdl_SdlGraphics_setTitle_java_lang_String, VTABLE_arc_backend_sdl_SdlGraphics_setTitle_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setWindowPosition", (intptr_t) M_arc_backend_sdl_SdlGraphics_setWindowPosition_int_int, VTABLE_arc_backend_sdl_SdlGraphics_setWindowPosition_int_int, "(II)V", 1 },
	{ "setWindowSize", (intptr_t) M_arc_backend_sdl_SdlGraphics_setWindowSize_int_int, VTABLE_arc_backend_sdl_SdlGraphics_setWindowSize_int_int, "(II)V", 1 },
	{ "setVSync", (intptr_t) M_arc_backend_sdl_SdlGraphics_setVSync_boolean, VTABLE_arc_backend_sdl_SdlGraphics_setVSync_boolean, "(Z)V", 1 },
	{ "getBufferFormat", (intptr_t) M_arc_backend_sdl_SdlGraphics_getBufferFormat_R_arc_Graphics$BufferFormat, VTABLE_arc_backend_sdl_SdlGraphics_getBufferFormat_R_arc_Graphics$BufferFormat, "()Larc/Graphics$BufferFormat;", 1 },
	{ "supportsExtension", (intptr_t) M_arc_backend_sdl_SdlGraphics_supportsExtension_java_lang_String_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_supportsExtension_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isContinuousRendering", (intptr_t) M_arc_backend_sdl_SdlGraphics_isContinuousRendering_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_isContinuousRendering_R_boolean, "()Z", 1 },
	{ "setContinuousRendering", (intptr_t) M_arc_backend_sdl_SdlGraphics_setContinuousRendering_boolean, VTABLE_arc_backend_sdl_SdlGraphics_setContinuousRendering_boolean, "(Z)V", 1 },
	{ "requestRendering", (intptr_t) M_arc_backend_sdl_SdlGraphics_requestRendering, VTABLE_arc_backend_sdl_SdlGraphics_requestRendering, "()V", 1 },
	{ "isFullscreen", (intptr_t) M_arc_backend_sdl_SdlGraphics_isFullscreen_R_boolean, VTABLE_arc_backend_sdl_SdlGraphics_isFullscreen_R_boolean, "()Z", 1 },
	{ "newCursor", (intptr_t) M_arc_backend_sdl_SdlGraphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor, VTABLE_arc_backend_sdl_SdlGraphics_newCursor_arc_graphics_Pixmap_int_int_R_arc_Graphics$Cursor, "(Larc/graphics/Pixmap;II)Larc/Graphics$Cursor;", 1 },
	{ "setCursor", (intptr_t) M_arc_backend_sdl_SdlGraphics_setCursor_arc_Graphics$Cursor, VTABLE_arc_backend_sdl_SdlGraphics_setCursor_arc_Graphics$Cursor, "(Larc/Graphics$Cursor;)V", 4 },
	{ "setSystemCursor", (intptr_t) M_arc_backend_sdl_SdlGraphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor, VTABLE_arc_backend_sdl_SdlGraphics_setSystemCursor_arc_Graphics$Cursor$SystemCursor, "(Larc/Graphics$Cursor$SystemCursor;)V", 4 },
	{ "dispose", (intptr_t) M_arc_backend_sdl_SdlGraphics_dispose, VTABLE_arc_backend_sdl_SdlGraphics_dispose, "()V", 1 },
	{ "mapCursor", (intptr_t) M_arc_backend_sdl_SdlGraphics_mapCursor_arc_Graphics$Cursor$SystemCursor_R_int, VTABLE_arc_backend_sdl_SdlGraphics_mapCursor_arc_Graphics$Cursor$SystemCursor_R_int, "(Larc/Graphics$Cursor$SystemCursor;)I", 2 },
	{ "lambda$dispose$0", (intptr_t) SM_arc_backend_sdl_SdlGraphics_lambda$dispose$0_arc_Graphics$Cursor$SystemCursor_arc_backend_sdl_SdlGraphics$SdlCursor, 0, "(Larc/Graphics$Cursor$SystemCursor;Larc/backend/sdl/SdlGraphics$SdlCursor;)V", 4106 },
};

Class class_arc_backend_sdl_SdlGraphics{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlGraphics",
		.parentClass = (intptr_t) &class_arc_Graphics,
		.size = sizeof(arc_backend_sdl_SdlGraphics),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlGraphics,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlGraphics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlGraphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlGraphics = registerClass(&class_arc_backend_sdl_SdlGraphics);

}
