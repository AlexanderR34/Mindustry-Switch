#include "mindustry/graphics/Pixelator.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/math/geom/Vec2.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Core.h"
#include "mindustry/graphics/Pixelator.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "arc/Graphics.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/graphics/Pixelator_invoke_java_lang_Runnable_1.h"
#include "mindustry/core/Renderer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/Vars.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/Blending.h"

extern "C" {


void mark_mindustry_graphics_Pixelator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Pixelator *) object;
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
}

void clinit_mindustry_graphics_Pixelator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Pixelator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Pixelator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer(ctx, sp[1].o);
	((mindustry_graphics_Pixelator *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Pixelator_drawPixelate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:drawPixelate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[1].o);
	((mindustry_graphics_Pixelator *) NULL_CHECK(sp[0].o))->F_pre = temp0;
	LINE_NUMBER(24);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[0].o);
	frame[1].f = temp1;
	LINE_NUMBER(25);
	frame[1].f = (jfloat((jint((frame[1].f)))));
	LINE_NUMBER(26);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_setScale_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(27);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width = (jfloat((jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_width)))));
	LINE_NUMBER(28);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height = (jfloat((jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_height)))));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	((mindustry_graphics_Pixelator *) NULL_CHECK(sp[0].o))->F_px = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	((mindustry_graphics_Pixelator *) NULL_CHECK(sp[0].o))->F_py = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(32);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp2 = jfloat((jint(((jfloat)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_px))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	jobject temp3 = sp[1].o;
	sp[1].f = temp2;
	sp += 2;
	if (((jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(temp3))->F_width))) % (jint(2))) != 0) goto label_9;
	}
	INST_FCONST(0);
	goto label_10;
label_9:;
	(sp++)->f = jfloat(0.5f);
label_10:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	jfloat temp1 = jfloat((jint(((jfloat)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_py))));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(temp2))->F_height))) % (jint(2))) != 0) goto label_11;
	}
	INST_FCONST(0);
	goto label_12;
label_11:;
	(sp++)->f = jfloat(0.5f);
label_12:;
	{
	sp -= 4;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f, (sp[2].f + sp[3].f));
	LINE_NUMBER(34);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[2].i = (jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	frame[3].i = (jint(((jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height)));
	LINE_NUMBER(35);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(36);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp0 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_width;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp1 = (jfloat)((func_mindustry_core_Renderer_landScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_landScale_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 * temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp3 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[0].o);
	frame[2].i = (jint((temp2 / temp3)));
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	jfloat temp4 = (jfloat)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_height;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp5 = (jfloat)((func_mindustry_core_Renderer_landScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_landScale_R_float])(ctx, sp[0].o);
	jfloat temp6 = temp4 * temp5;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp7 = (jfloat)((func_mindustry_core_Renderer_getScale_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_getScale_R_float])(ctx, sp[0].o);
	frame[3].i = (jint((temp6 / temp7)));
	}
label_16:;
	{
	LINE_NUMBER(39);
	jint temp0 = frame[2].i;
	jint temp1 = jint(2);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, temp2);
	frame[2].i = temp3;
	LINE_NUMBER(40);
	jint temp4 = frame[3].i;
	jint temp5 = jint(2);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, temp6);
	frame[3].i = temp7;
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_draw])(ctx, sp[0].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Pixelator_register(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:register", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	jfloat temp0 = jfloat(200.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Pixelator_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_graphics_Pixelator_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_graphics_Pixelator_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_Pixelator_enabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:enabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	popStackFrame(ctx);
	return ((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Pixelator_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Pixelator_lambda$register$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pixelator:lambda$register$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(52);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_disabled;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_buffer;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_screenspace;
	((func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_px), ((jfloat)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_py));
	LINE_NUMBER(56);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	((func_mindustry_core_Renderer_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_setScale_float])(ctx, sp[0].o, ((jfloat)((mindustry_graphics_Pixelator *) NULL_CHECK((frame[0].o)))->F_pre));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Pixelator[] {
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
	(void *) M_mindustry_graphics_Pixelator_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_graphics_Pixelator_drawPixelate,
	(void *) M_mindustry_graphics_Pixelator_register,
	(void *) M_mindustry_graphics_Pixelator_enabled_R_boolean,
	(void *) M_mindustry_graphics_Pixelator_lambda$register$0,
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
	{ "drawPixelate", "()V" },
	{ "register", "()V" },
	{ "enabled", "()Z" },
	{ "lambda$register$0", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_graphics_Pixelator, F_buffer), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "px", &class_float, offsetof(mindustry_graphics_Pixelator, F_px), "F", 2 },
	{ "py", &class_float, offsetof(mindustry_graphics_Pixelator, F_py), "F", 2 },
	{ "pre", &class_float, offsetof(mindustry_graphics_Pixelator, F_pre), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Pixelator, 0, "()V", 1 },
	{ "drawPixelate", (intptr_t) M_mindustry_graphics_Pixelator_drawPixelate, VTABLE_mindustry_graphics_Pixelator_drawPixelate, "()V", 1 },
	{ "register", (intptr_t) M_mindustry_graphics_Pixelator_register, VTABLE_mindustry_graphics_Pixelator_register, "()V", 1 },
	{ "enabled", (intptr_t) M_mindustry_graphics_Pixelator_enabled_R_boolean, VTABLE_mindustry_graphics_Pixelator_enabled_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_mindustry_graphics_Pixelator_dispose, VTABLE_mindustry_graphics_Pixelator_dispose, "()V", 1 },
	{ "lambda$register$0", (intptr_t) M_mindustry_graphics_Pixelator_lambda$register$0, VTABLE_mindustry_graphics_Pixelator_lambda$register$0, "()V", 4098 },
};

Class class_mindustry_graphics_Pixelator{
		.nativeName = (intptr_t) "mindustry/graphics/Pixelator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Pixelator),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Pixelator,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Pixelator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Pixelator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Pixelator = registerClass(&class_mindustry_graphics_Pixelator);

}
