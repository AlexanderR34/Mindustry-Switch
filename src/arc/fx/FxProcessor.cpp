#include "arc/fx/FxProcessor.h"
#include "arc/fx/FxProcessor_invoke_arc_func_Boolf_1.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/fx/FxProcessor.h"
#include "arc/graphics/Color.h"
#include "arc/fx/FxProcessor_invoke_arc_func_Cons_0.h"
#include "arc/fx/FxProcessor_invoke_arc_func_Boolf_0.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "arc/fx/FxProcessor_invoke_arc_func_Floatf_1.h"
#include "arc/fx/FxFilter.h"
#include "arc/fx/FxProcessor_invoke_arc_func_Floatf_0.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/graphics/Pixmap_Format.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/IllegalStateException.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/graphics/Gl.h"
#include "arc/struct/ObjectIntMap.h"
#include "arc/fx/util/FxBufferRenderer.h"

extern "C" {


void mark_arc_fx_FxProcessor(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_FxProcessor *) object;
	if (self->F_priorities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_priorities)->clazz)->markFunction)((jobject) self->F_priorities, mark, depth + 1);
	if (self->F_effectsAll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effectsAll)->clazz)->markFunction)((jobject) self->F_effectsAll, mark, depth + 1);
	if (self->F_effectsEnabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effectsEnabled)->clazz)->markFunction)((jobject) self->F_effectsEnabled, mark, depth + 1);
	if (self->F_bufferRenderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bufferRenderer)->clazz)->markFunction)((jobject) self->F_bufferRenderer, mark, depth + 1);
	if (self->F_fboFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fboFormat)->clazz)->markFunction)((jobject) self->F_fboFormat, mark, depth + 1);
	if (self->F_pingPongBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pingPongBuffer)->clazz)->markFunction)((jobject) self->F_pingPongBuffer, mark, depth + 1);
}

void clinit_arc_fx_FxProcessor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_fx_FxProcessor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getBackBufferWidth_R_int])(ctx, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getBackBufferHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Graphics_getBackBufferHeight_R_int])(ctx, sp[2].o);
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_FxProcessor_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(52);
	init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)), (jint(0)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((arc_fx_FxProcessor *) NULL_CHECK(sp[0].o))->F_priorities = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_fx_FxProcessor *) NULL_CHECK(sp[0].o))->F_effectsAll = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_fx_FxProcessor *) NULL_CHECK(sp[0].o))->F_effectsEnabled = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_fx_util_FxBufferRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_util_FxBufferRenderer);
	init_arc_fx_util_FxBufferRenderer(ctx, sp[1].o);
	((arc_fx_FxProcessor *) NULL_CHECK(sp[0].o))->F_bufferRenderer = (jref) sp[1].o;
	LINE_NUMBER(34);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled = (jint(0));
	LINE_NUMBER(35);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(36);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured = (jint(0));
	LINE_NUMBER(37);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects = (jint(0));
	LINE_NUMBER(39);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled = (jint(0));
	LINE_NUMBER(56);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_fboFormat = (jref) (frame[1].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_arc_fx_util_PingPongBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_util_PingPongBuffer);
	init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	((arc_fx_FxProcessor *) NULL_CHECK(sp[0].o))->F_pingPongBuffer = (jref) sp[1].o;
	LINE_NUMBER(58);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_width = (frame[2].i);
	LINE_NUMBER(59);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_height = (frame[3].i);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:resize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(68);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_width) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_height) == (frame[2].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(69);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(70);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_fx_FxFilter, sp[0].o));
	LINE_NUMBER(75);
	((func_arc_fx_FxFilter_resize_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_fx_FxFilter_resize_int_int])(ctx, (frame[4].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(76);
	((func_arc_fx_FxFilter_rebind) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_fx_FxFilter_rebind])(ctx, (frame[4].o));
	LINE_NUMBER(77);
	goto label_6;
	}
label_2:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_rebind(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:rebind", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_bufferRenderer;
	((func_arc_fx_util_FxBufferRenderer_rebind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_rebind])(ctx, sp[0].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_fx_FxFilter, sp[0].o));
	LINE_NUMBER(85);
	((func_arc_fx_FxFilter_rebind) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_fx_FxFilter_rebind])(ctx, (frame[2].o));
	LINE_NUMBER(86);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_fx_FxProcessor_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_arc_fx_FxProcessor_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_isBlendingEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:isBlendingEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled);
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_setBlendingEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:setBlendingEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled = (frame[1].i);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:getFramebufferFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_fboFormat;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:setBufferTextureParams", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:setTextureFilter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	((func_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o), (frame[1].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_isCapturing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:isCapturing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing);
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_isApplyingEffects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:isApplyingEffects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects);
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_hasResult_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:hasResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured);
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:getResultBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[0].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:getPingPongBuffer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_hasEnabledEffects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:hasEnabledEffects", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	{ /* InvokeDynamic */
		clinit_arc_fx_FxProcessor_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_fx_FxProcessor_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_fx_FxProcessor_invoke_arc_func_Boolf_0);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:addEffect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	((func_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:addEffect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(178);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_priorities;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	{ /* InvokeDynamic */
		clinit_arc_fx_FxProcessor_invoke_arc_func_Floatf_0(ctx);
		auto proxy = (arc_fx_FxProcessor_invoke_arc_func_Floatf_0 *) gcAlloc(ctx, &class_arc_fx_FxProcessor_invoke_arc_func_Floatf_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(180);
	((func_arc_fx_FxFilter_resize_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_FxFilter_resize_int_int])(ctx, (frame[1].o), ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(181);
	((func_arc_fx_FxFilter_rebind) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_FxFilter_rebind])(ctx, (frame[1].o));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:removeEffect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_removeAllEffects(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:removeAllEffects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:setEffectPriority", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_priorities;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	{ /* InvokeDynamic */
		clinit_arc_fx_FxProcessor_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (arc_fx_FxProcessor_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_arc_fx_FxProcessor_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_fx_FxProcessor_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxProcessor_clear_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot clean up buffers when capturing."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(218);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects) == 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot clean up buffers when applying effects."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(221);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured = (jint(0));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_begin_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects) == 0) goto label_1;
	}
	{
	LINE_NUMBER(231);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You cannot capture when you're applying the effects."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(234);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(235);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(237);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(239);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(1));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_fx_FxProcessor_end_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(251);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(253);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured = (jint(1));
	LINE_NUMBER(254);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing = (jint(0));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_applyEffects(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:applyEffects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(264);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You should call VfxManager.endCapture() before applying the effects."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(267);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(268);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured) != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	{ /* InvokeDynamic */
		clinit_arc_fx_FxProcessor_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_fx_FxProcessor_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_fx_FxProcessor_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsEnabled;
	sp[1].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_effectsAll;
	{ /* InvokeDynamic */
		clinit_arc_fx_FxProcessor_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (arc_fx_FxProcessor_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_arc_fx_FxProcessor_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(274);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects = (jint(1));
	LINE_NUMBER(275);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(276);
	if ((frame[2].i) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(278);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_11;
	}
	{
	LINE_NUMBER(279);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(282);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_13:;
	{
	LINE_NUMBER(285);
	SM_arc_graphics_Gl_disable_int(ctx, (2884));
	LINE_NUMBER(286);
	SM_arc_graphics_Gl_disable_int(ctx, (2929));
	LINE_NUMBER(289);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, sp[0].o);
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(291);
	frame[3].i = (jint(0));
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_fx_FxFilter, sp[0].o));
	LINE_NUMBER(293);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[2].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[2].o);
	((func_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_FxFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(294);
	if ((frame[3].i) >= ((frame[2].i) - (jint(1)))) goto label_23;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(291);
	INST_IINC(3, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	((func_arc_fx_util_PingPongBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(301);
	SM_arc_graphics_Gl_activeTexture_int(ctx, (jint(33984)));
	LINE_NUMBER(303);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_9;
	}
	{
	LINE_NUMBER(304);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_9:;
	{
	LINE_NUMBER(307);
	((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_applyingEffects = (jint(0));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_render(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:render", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(312);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You should call VfxManager.endCapture() before rendering the result."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(314);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(315);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured) != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(318);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_5;
	}
	{
	LINE_NUMBER(319);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(321);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_7:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_bufferRenderer;
	sp[1].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	((func_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_9;
	}
	{
	LINE_NUMBER(325);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_9:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_render_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:render", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(330);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(331);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You should call VfxManager.endCapture() before rendering the result."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(333);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(334);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured) != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(337);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_5;
	}
	{
	LINE_NUMBER(338);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	}
label_5:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_bufferRenderer;
	sp[1].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	((func_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(341);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_8;
	}
	{
	LINE_NUMBER(342);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_8:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:render", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(347);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_capturing) == 0) goto label_1;
	}
	{
	LINE_NUMBER(348);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You should call VfxManager.endCapture() before rendering the result."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(350);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(351);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_hasCaptured) != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(354);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_5;
	}
	{
	LINE_NUMBER(355);
	SM_arc_graphics_Gl_enable_int(ctx, (3042));
	}
label_5:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_bufferRenderer;
	sp[1].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_pingPongBuffer;
	sp[1].o = (jobject)((func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer])(ctx, sp[1].o);
	((func_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(358);
	if (((jint)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_blendingEnabled) == 0) goto label_8;
	}
	{
	LINE_NUMBER(359);
	SM_arc_graphics_Gl_disable_int(ctx, (3042));
	}
label_8:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_fx_FxProcessor_lambda$applyEffects$0_arc_fx_FxFilter_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:lambda$applyEffects$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_arc_fx_FxFilter_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jfloat M_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:lambda$setEffectPriority$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_priorities;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:lambda$addEffect$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_fx_FxProcessor *) NULL_CHECK((frame[0].o)))->F_priorities;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jbool SM_arc_fx_FxProcessor_lambda$hasEnabledEffects$0_arc_fx_FxFilter_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/FxProcessor:lambda$hasEnabledEffects$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_FxProcessor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_arc_fx_FxFilter_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_FxFilter_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

void *vtable_arc_fx_FxProcessor[] {
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
	(void *) M_arc_fx_FxProcessor_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_FxProcessor_resize_int_int,
	(void *) M_arc_fx_FxProcessor_rebind,
	(void *) M_arc_fx_FxProcessor_getWidth_R_int,
	(void *) M_arc_fx_FxProcessor_getHeight_R_int,
	(void *) M_arc_fx_FxProcessor_isDisabled_R_boolean,
	(void *) M_arc_fx_FxProcessor_setDisabled_boolean,
	(void *) M_arc_fx_FxProcessor_isBlendingEnabled_R_boolean,
	(void *) M_arc_fx_FxProcessor_setBlendingEnabled_boolean,
	(void *) M_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format,
	(void *) M_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter,
	(void *) M_arc_fx_FxProcessor_isCapturing_R_boolean,
	(void *) M_arc_fx_FxProcessor_isApplyingEffects_R_boolean,
	(void *) M_arc_fx_FxProcessor_hasResult_R_boolean,
	(void *) M_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer,
	(void *) M_arc_fx_FxProcessor_hasEnabledEffects_R_boolean,
	(void *) M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter,
	(void *) M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int,
	(void *) M_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter,
	(void *) M_arc_fx_FxProcessor_removeAllEffects,
	(void *) M_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int,
	(void *) M_arc_fx_FxProcessor_clear,
	(void *) M_arc_fx_FxProcessor_clear_arc_graphics_Color,
	(void *) M_arc_fx_FxProcessor_begin_R_boolean,
	(void *) M_arc_fx_FxProcessor_end_R_boolean,
	(void *) M_arc_fx_FxProcessor_applyEffects,
	(void *) M_arc_fx_FxProcessor_render,
	(void *) M_arc_fx_FxProcessor_render_int_int_int_int,
	(void *) M_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer,
	(void *) M_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float,
	(void *) M_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float,
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
	{ "resize", "(II)V" },
	{ "rebind", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "isBlendingEnabled", "()Z" },
	{ "setBlendingEnabled", "(Z)V" },
	{ "getFramebufferFormat", "()Larc/graphics/Pixmap$Format;" },
	{ "setBufferTextureParams", "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V" },
	{ "setTextureFilter", "(Larc/graphics/Texture$TextureFilter;)V" },
	{ "isCapturing", "()Z" },
	{ "isApplyingEffects", "()Z" },
	{ "hasResult", "()Z" },
	{ "getResultBuffer", "()Larc/graphics/gl/FrameBuffer;" },
	{ "getPingPongBuffer", "()Larc/fx/util/PingPongBuffer;" },
	{ "hasEnabledEffects", "()Z" },
	{ "addEffect", "(Larc/fx/FxFilter;)V" },
	{ "addEffect", "(Larc/fx/FxFilter;I)V" },
	{ "removeEffect", "(Larc/fx/FxFilter;)V" },
	{ "removeAllEffects", "()V" },
	{ "setEffectPriority", "(Larc/fx/FxFilter;I)V" },
	{ "clear", "()V" },
	{ "clear", "(Larc/graphics/Color;)V" },
	{ "begin", "()Z" },
	{ "end", "()Z" },
	{ "applyEffects", "()V" },
	{ "render", "()V" },
	{ "render", "(IIII)V" },
	{ "render", "(Larc/graphics/gl/FrameBuffer;)V" },
	{ "lambda$setEffectPriority$0", "(Larc/fx/FxFilter;Larc/fx/FxFilter;)F" },
	{ "lambda$addEffect$0", "(Larc/fx/FxFilter;Larc/fx/FxFilter;)F" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "priorities", &class_arc_struct_ObjectIntMap, offsetof(arc_fx_FxProcessor, F_priorities), "Larc/struct/ObjectIntMap;", 18 },
	{ "effectsAll", &class_arc_struct_Seq, offsetof(arc_fx_FxProcessor, F_effectsAll), "Larc/struct/Seq;", 18 },
	{ "effectsEnabled", &class_arc_struct_Seq, offsetof(arc_fx_FxProcessor, F_effectsEnabled), "Larc/struct/Seq;", 18 },
	{ "bufferRenderer", &class_arc_fx_util_FxBufferRenderer, offsetof(arc_fx_FxProcessor, F_bufferRenderer), "Larc/fx/util/FxBufferRenderer;", 18 },
	{ "fboFormat", &class_arc_graphics_Pixmap$Format, offsetof(arc_fx_FxProcessor, F_fboFormat), "Larc/graphics/Pixmap$Format;", 18 },
	{ "pingPongBuffer", &class_arc_fx_util_PingPongBuffer, offsetof(arc_fx_FxProcessor, F_pingPongBuffer), "Larc/fx/util/PingPongBuffer;", 18 },
	{ "disabled", &class_boolean, offsetof(arc_fx_FxProcessor, F_disabled), "Z", 2 },
	{ "capturing", &class_boolean, offsetof(arc_fx_FxProcessor, F_capturing), "Z", 2 },
	{ "hasCaptured", &class_boolean, offsetof(arc_fx_FxProcessor, F_hasCaptured), "Z", 2 },
	{ "applyingEffects", &class_boolean, offsetof(arc_fx_FxProcessor, F_applyingEffects), "Z", 2 },
	{ "blendingEnabled", &class_boolean, offsetof(arc_fx_FxProcessor, F_blendingEnabled), "Z", 2 },
	{ "width", &class_int, offsetof(arc_fx_FxProcessor, F_width), "I", 2 },
	{ "height", &class_int, offsetof(arc_fx_FxProcessor, F_height), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_FxProcessor, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_FxProcessor_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int, 0, "(Larc/graphics/Pixmap$Format;II)V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean, 0, "(Larc/graphics/Pixmap$Format;IIZZ)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_FxProcessor_dispose, VTABLE_arc_fx_FxProcessor_dispose, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_FxProcessor_resize_int_int, VTABLE_arc_fx_FxProcessor_resize_int_int, "(II)V", 1 },
	{ "rebind", (intptr_t) M_arc_fx_FxProcessor_rebind, VTABLE_arc_fx_FxProcessor_rebind, "()V", 1 },
	{ "getWidth", (intptr_t) M_arc_fx_FxProcessor_getWidth_R_int, VTABLE_arc_fx_FxProcessor_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_fx_FxProcessor_getHeight_R_int, VTABLE_arc_fx_FxProcessor_getHeight_R_int, "()I", 1 },
	{ "isDisabled", (intptr_t) M_arc_fx_FxProcessor_isDisabled_R_boolean, VTABLE_arc_fx_FxProcessor_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_fx_FxProcessor_setDisabled_boolean, VTABLE_arc_fx_FxProcessor_setDisabled_boolean, "(Z)V", 1 },
	{ "isBlendingEnabled", (intptr_t) M_arc_fx_FxProcessor_isBlendingEnabled_R_boolean, VTABLE_arc_fx_FxProcessor_isBlendingEnabled_R_boolean, "()Z", 1 },
	{ "setBlendingEnabled", (intptr_t) M_arc_fx_FxProcessor_setBlendingEnabled_boolean, VTABLE_arc_fx_FxProcessor_setBlendingEnabled_boolean, "(Z)V", 1 },
	{ "getFramebufferFormat", (intptr_t) M_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format, VTABLE_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format, "()Larc/graphics/Pixmap$Format;", 1 },
	{ "setBufferTextureParams", (intptr_t) M_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureWrap;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "setTextureFilter", (intptr_t) M_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter, VTABLE_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter, "(Larc/graphics/Texture$TextureFilter;)V", 1 },
	{ "isCapturing", (intptr_t) M_arc_fx_FxProcessor_isCapturing_R_boolean, VTABLE_arc_fx_FxProcessor_isCapturing_R_boolean, "()Z", 1 },
	{ "isApplyingEffects", (intptr_t) M_arc_fx_FxProcessor_isApplyingEffects_R_boolean, VTABLE_arc_fx_FxProcessor_isApplyingEffects_R_boolean, "()Z", 1 },
	{ "hasResult", (intptr_t) M_arc_fx_FxProcessor_hasResult_R_boolean, VTABLE_arc_fx_FxProcessor_hasResult_R_boolean, "()Z", 1 },
	{ "getResultBuffer", (intptr_t) M_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer, "()Larc/graphics/gl/FrameBuffer;", 1 },
	{ "getPingPongBuffer", (intptr_t) M_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer, VTABLE_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer, "()Larc/fx/util/PingPongBuffer;", 1 },
	{ "hasEnabledEffects", (intptr_t) M_arc_fx_FxProcessor_hasEnabledEffects_R_boolean, VTABLE_arc_fx_FxProcessor_hasEnabledEffects_R_boolean, "()Z", 1 },
	{ "addEffect", (intptr_t) M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter, VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter, "(Larc/fx/FxFilter;)V", 1 },
	{ "addEffect", (intptr_t) M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int, VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int, "(Larc/fx/FxFilter;I)V", 1 },
	{ "removeEffect", (intptr_t) M_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter, VTABLE_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter, "(Larc/fx/FxFilter;)V", 1 },
	{ "removeAllEffects", (intptr_t) M_arc_fx_FxProcessor_removeAllEffects, VTABLE_arc_fx_FxProcessor_removeAllEffects, "()V", 1 },
	{ "setEffectPriority", (intptr_t) M_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int, VTABLE_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int, "(Larc/fx/FxFilter;I)V", 1 },
	{ "clear", (intptr_t) M_arc_fx_FxProcessor_clear, VTABLE_arc_fx_FxProcessor_clear, "()V", 1 },
	{ "clear", (intptr_t) M_arc_fx_FxProcessor_clear_arc_graphics_Color, VTABLE_arc_fx_FxProcessor_clear_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "begin", (intptr_t) M_arc_fx_FxProcessor_begin_R_boolean, VTABLE_arc_fx_FxProcessor_begin_R_boolean, "()Z", 1 },
	{ "end", (intptr_t) M_arc_fx_FxProcessor_end_R_boolean, VTABLE_arc_fx_FxProcessor_end_R_boolean, "()Z", 1 },
	{ "applyEffects", (intptr_t) M_arc_fx_FxProcessor_applyEffects, VTABLE_arc_fx_FxProcessor_applyEffects, "()V", 1 },
	{ "render", (intptr_t) M_arc_fx_FxProcessor_render, VTABLE_arc_fx_FxProcessor_render, "()V", 1 },
	{ "render", (intptr_t) M_arc_fx_FxProcessor_render_int_int_int_int, VTABLE_arc_fx_FxProcessor_render_int_int_int_int, "(IIII)V", 1 },
	{ "render", (intptr_t) M_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer, VTABLE_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer, "(Larc/graphics/gl/FrameBuffer;)V", 1 },
	{ "lambda$applyEffects$0", (intptr_t) SM_arc_fx_FxProcessor_lambda$applyEffects$0_arc_fx_FxFilter_R_boolean, 0, "(Larc/fx/FxFilter;)Z", 4106 },
	{ "lambda$setEffectPriority$0", (intptr_t) M_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float, VTABLE_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float, "(Larc/fx/FxFilter;Larc/fx/FxFilter;)F", 4098 },
	{ "lambda$addEffect$0", (intptr_t) M_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float, VTABLE_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float, "(Larc/fx/FxFilter;Larc/fx/FxFilter;)F", 4098 },
	{ "lambda$hasEnabledEffects$0", (intptr_t) SM_arc_fx_FxProcessor_lambda$hasEnabledEffects$0_arc_fx_FxFilter_R_boolean, 0, "(Larc/fx/FxFilter;)Z", 4106 },
};

Class class_arc_fx_FxProcessor{
		.nativeName = (intptr_t) "arc/fx/FxProcessor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_fx_FxProcessor),
		.classVtable = (intptr_t) vtable_arc_fx_FxProcessor,
		.staticInitializer = (intptr_t) clinit_arc_fx_FxProcessor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_FxProcessor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_FxProcessor = registerClass(&class_arc_fx_FxProcessor);

}
