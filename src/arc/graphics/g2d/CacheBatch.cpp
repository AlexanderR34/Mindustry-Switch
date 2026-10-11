#include "arc/graphics/g2d/CacheBatch.h"
#include "arc/graphics/g2d/SpriteCache.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/CacheBatch.h"

extern "C" {


void mark_arc_graphics_g2d_CacheBatch(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Batch(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_CacheBatch *) object;
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_tmpVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpVertices)->clazz)->markFunction)((jobject) self->F_tmpVertices, mark, depth + 1);
}

void clinit_arc_graphics_g2d_CacheBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Batch(ctx);
}

void init_arc_graphics_g2d_CacheBatch_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_CacheBatch(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_SpriteCache(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_SpriteCache);
	init_arc_graphics_g2d_SpriteCache_int_boolean(ctx, sp[1].o, (frame[1].i), (jint(0)));
	init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_CacheBatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_arc_graphics_g2d_Batch(ctx, (frame[0].o));
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (20));
	((arc_graphics_g2d_CacheBatch *) NULL_CHECK(sp[0].o))->F_tmpVertices = (jref) sp[1].o;
	LINE_NUMBER(16);
	((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache = (jref) (frame[1].o);
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_setPackedColor_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:setPackedColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_setPackedColor_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_setPackedColor_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_CacheBatch_getPackedColor_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:getPackedColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_SpriteCache_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_getPackedColor_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:setProjection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_beginCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:beginCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_beginCache) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_beginCache])(ctx, sp[0].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_CacheBatch_endCache_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:endCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp0 = (jint)((func_arc_graphics_g2d_SpriteCache_endCache_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_endCache_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(50);
	jint temp0 = ((frame[4].i) / (6)) * (jint(5));
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_float, (((frame[4].i) / (6)) * (jint(5))));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= ((frame[4].i) / (6))) goto label_5;
	}
	{
	LINE_NUMBER(52);
	frame[7].i = ((frame[6].i) * (6));
	LINE_NUMBER(53);
	frame[8].i = ((frame[6].i) * (jint(5)));
	LINE_NUMBER(54);
	ARRAY_ACCESS(jfloat, (frame[5].o), (frame[8].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[3].i) + (frame[7].i))));
	LINE_NUMBER(55);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[8].i) + (jint(1)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (((frame[3].i) + (frame[7].i)) + (jint(1)))));
	LINE_NUMBER(56);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[8].i) + (jint(2)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (((frame[3].i) + (frame[7].i)) + (jint(2)))));
	LINE_NUMBER(57);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[8].i) + (jint(3)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (((frame[3].i) + (frame[7].i)) + (jint(3)))));
	LINE_NUMBER(58);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[8].i) + (jint(4)))) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (((frame[3].i) + (frame[7].i)) + (jint(4)))));
	LINE_NUMBER(51);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int])(ctx, sp[0].o, (frame[1].o), (frame[5].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (jfloat(1)), (jfloat(1)), (frame[8].f));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:setShader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	((func_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:setShader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	jint temp0 = (jint)((func_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(79);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_end])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(81);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_begin])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(82);
	if ((frame[2].i) == 0) goto label_5;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_5;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, sp[0].o);
label_5:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	M_arc_graphics_g2d_Batch_dispose(ctx, (frame[0].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_dispose])(ctx, sp[0].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_beginDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:beginDraw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_begin])(ctx, sp[0].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_endDraw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:endDraw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_end])(ctx, sp[0].o);
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_CacheBatch_drawCache_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/CacheBatch:drawCache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_graphics_g2d_CacheBatch *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_SpriteCache_draw_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_SpriteCache_draw_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_CacheBatch[] {
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
	(void *) M_arc_graphics_g2d_CacheBatch_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_Batch_z_float,
	(void *) M_arc_graphics_g2d_Batch_setSort_boolean,
	(void *) M_arc_graphics_g2d_CacheBatch_setPackedColor_float,
	(void *) M_arc_graphics_g2d_CacheBatch_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_Batch_setPackedMixColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float,
	(void *) M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable,
	(void *) M_arc_graphics_g2d_CacheBatch_flush,
	(void *) M_arc_graphics_g2d_Batch_discard,
	(void *) M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setupMatrices,
	(void *) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_CacheBatch_beginCache,
	(void *) M_arc_graphics_g2d_CacheBatch_endCache_R_int,
	(void *) M_arc_graphics_g2d_CacheBatch_beginDraw,
	(void *) M_arc_graphics_g2d_CacheBatch_endDraw,
	(void *) M_arc_graphics_g2d_CacheBatch_drawCache_int,
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
	{ "z", "(F)V" },
	{ "setSort", "(Z)V" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedMixColor", "(F)V" },
	{ "getPackedMixColor", "()F" },
	{ "draw", "(Larc/graphics/Texture;[FII)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "draw", "(Ljava/lang/Runnable;)V" },
	{ "flush", "()V" },
	{ "discard", "()V" },
	{ "setBlending", "(Larc/graphics/Blending;)V" },
	{ "getBlending", "()Larc/graphics/Blending;" },
	{ "getProjection", "()Larc/math/Mat;" },
	{ "getTransform", "()Larc/math/Mat;" },
	{ "setProjection", "(Larc/math/Mat;)V" },
	{ "setTransform", "(Larc/math/Mat;)V" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Larc/graphics/Texture;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;Z)V" },
	{ "getShader", "()Larc/graphics/gl/Shader;" },
	{ "beginCache", "()V" },
	{ "endCache", "()I" },
	{ "beginDraw", "()V" },
	{ "endDraw", "()V" },
	{ "drawCache", "(I)V" },
};

static FieldMetadata fields[] {
	{ "cache", &class_arc_graphics_g2d_SpriteCache, offsetof(arc_graphics_g2d_CacheBatch, F_cache), "Larc/graphics/g2d/SpriteCache;", 1 },
	{ "tmpVertices", getArrayClass(&class_float, 1), offsetof(arc_graphics_g2d_CacheBatch, F_tmpVertices), "[F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_CacheBatch_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache, 0, "(Larc/graphics/g2d/SpriteCache;)V", 1 },
	{ "flush", (intptr_t) M_arc_graphics_g2d_CacheBatch_flush, VTABLE_arc_graphics_g2d_CacheBatch_flush, "()V", 1 },
	{ "setPackedColor", (intptr_t) M_arc_graphics_g2d_CacheBatch_setPackedColor_float, VTABLE_arc_graphics_g2d_CacheBatch_setPackedColor_float, "(F)V", 1 },
	{ "getPackedColor", (intptr_t) M_arc_graphics_g2d_CacheBatch_getPackedColor_R_float, VTABLE_arc_graphics_g2d_CacheBatch_getPackedColor_R_float, "()F", 1 },
	{ "setProjection", (intptr_t) M_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat, VTABLE_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat, "(Larc/math/Mat;)V", 1 },
	{ "beginCache", (intptr_t) M_arc_graphics_g2d_CacheBatch_beginCache, VTABLE_arc_graphics_g2d_CacheBatch_beginCache, "()V", 1 },
	{ "endCache", (intptr_t) M_arc_graphics_g2d_CacheBatch_endCache_R_int, VTABLE_arc_graphics_g2d_CacheBatch_endCache_R_int, "()I", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int, VTABLE_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader, VTABLE_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "setShader", (intptr_t) M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean, VTABLE_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean, "(Larc/graphics/gl/Shader;Z)V", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_CacheBatch_dispose, VTABLE_arc_graphics_g2d_CacheBatch_dispose, "()V", 1 },
	{ "beginDraw", (intptr_t) M_arc_graphics_g2d_CacheBatch_beginDraw, VTABLE_arc_graphics_g2d_CacheBatch_beginDraw, "()V", 1 },
	{ "endDraw", (intptr_t) M_arc_graphics_g2d_CacheBatch_endDraw, VTABLE_arc_graphics_g2d_CacheBatch_endDraw, "()V", 1 },
	{ "drawCache", (intptr_t) M_arc_graphics_g2d_CacheBatch_drawCache_int, VTABLE_arc_graphics_g2d_CacheBatch_drawCache_int, "(I)V", 1 },
};

Class class_arc_graphics_g2d_CacheBatch{
		.nativeName = (intptr_t) "arc/graphics/g2d/CacheBatch",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Batch,
		.size = sizeof(arc_graphics_g2d_CacheBatch),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_CacheBatch,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_CacheBatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_CacheBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_CacheBatch = registerClass(&class_arc_graphics_g2d_CacheBatch);

}
