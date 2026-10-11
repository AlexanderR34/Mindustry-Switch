#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/geom/Position.h"
#include "arc/graphics/Blending.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/logic/LogicDisplay_1.h"
#include "arc/struct/LongQueue.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"
#include "arc/util/io/Writes.h"
#include "arc/graphics/GLTexture.h"
#include "arc/struct/LongSeq.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild_invoke_java_lang_Runnable_4.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild_invoke_java_lang_Runnable_3.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild_invoke_java_lang_Runnable_5.h"
#include "mindustry/gen/DisplayCmd.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LDrawable.h"
#include "java/lang/Enum.h"
#include "arc/util/io/Reads.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_gen_Building(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) object;
	if (self->F_rootDisplay)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootDisplay)->clazz)->markFunction)((jobject) self->F_rootDisplay, mark, depth + 1);
	if (self->F_buffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer)->clazz)->markFunction)((jobject) self->F_buffer, mark, depth + 1);
	if (self->F_commands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commands)->clazz)->markFunction)((jobject) self->F_commands, mark, depth + 1);
	if (self->F_transform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transform)->clazz)->markFunction)((jobject) self->F_transform, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_mindustry_world_blocks_logic_LogicDisplay(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(87);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay = (jref) (frame[0].o);
	LINE_NUMBER(89);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_color = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits);
	LINE_NUMBER(90);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongQueue);
	init_arc_struct_LongQueue_int(ctx, sp[1].o, (256));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_commands = (jref) sp[1].o;
	LINE_NUMBER(94);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	LINE_NUMBER(95);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_processing = (jint(0));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawDisplays) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(104);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(105);
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands])(ctx, (frame[0].o));
	LINE_NUMBER(107);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_disabled;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(108);
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	LINE_NUMBER(113);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	clinit_mindustry_world_blocks_logic_LogicDisplay$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp0 = jdouble(((jint)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[0].o))->F_displaySize));
	sp[0].d = temp0;
	sp += 1;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_commands;
	jdouble temp0 = jdouble(((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].d = temp0;
	sp += 1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	jdouble temp0 = jdouble(((jlong)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_operations));
	sp[0].d = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(122);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_5:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_drawable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:drawable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((arc_struct_LongSeq *) NULL_CHECK((frame[1].o)))->F_size;
	jint temp1 = 1024;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 - ((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size)));
	frame[2].i = temp2;
	LINE_NUMBER(135);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[1].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK((frame[1].o)))->F_items;
	((func_arc_struct_LongQueue_addLast_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_addLast_long])(ctx, sp[0].o, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[3].i))));
	LINE_NUMBER(135);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_operations = (((jlong)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_operations) + (jlong(1)));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:ensureBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[2].o))->F_displaySize;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, temp0, ((jint)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[2].o))->F_displaySize));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_backgroundColor;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:getBufferRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[1].o))->F_buffer;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_arc_graphics_Texture, sp[1].o);
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[2].o))->F_buffer;
	sp[2].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[2].o);
	jint temp1 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_Texture, sp[2].o))))->F_height;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[2].o))->F_buffer;
	LINE_NUMBER(154);
	sp[2].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[2].o);
	jint temp2 = (jint)((arc_graphics_GLTexture *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_Texture, sp[2].o))))->F_width;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_rootDisplay;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[2].o))->F_buffer;
	sp[2].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[2].o);
	jint temp3 = -((jint)((arc_graphics_GLTexture *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_Texture, sp[2].o))))->F_height);
	LINE_NUMBER(153);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_1:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:processCommands", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jint temp0 = (jint)((func_arc_struct_LongQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(161);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_processing = (jint(1));
	LINE_NUMBER(164);
	frame[1].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	if (temp0 >= ((jint)((arc_struct_LongQueue *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jlong temp0 = (jlong)((func_arc_struct_LongQueue_get_int_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_get_int_R_long])(ctx, sp[0].o, (frame[1].i));
	frame[2].l = temp0;
	LINE_NUMBER(166);
	jint temp1 = (jint)SM_mindustry_gen_DisplayCmd_type_long_R_int(ctx, (frame[2].l));
	if (temp1 == (10)) goto label_8;
	}
	goto label_9;
label_8:;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)SM_mindustry_gen_DisplayCmd_p4_long_R_int(ctx, (frame[2].l));
	jint temp1 = temp0 << (10);
	jint temp2 = (jint)SM_mindustry_gen_DisplayCmd_p1_long_R_int(ctx, (frame[2].l));
	frame[4].i = (temp1 | temp2);
	LINE_NUMBER(168);
	frame[5].i = ((frame[4].i) & (31));
	LINE_NUMBER(169);
	if ((frame[5].i) == (30)) goto label_12;
	}
	goto label_9;
label_12:;
	{
	LINE_NUMBER(171);
	frame[6].i = ((frame[4].i) >> (jint(5)));
	LINE_NUMBER(172);
	if ((frame[6].i) == ((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index)) goto label_9;
	}
	{
	jint temp0 = frame[6].i;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_9;
	{
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, sp[0].o))))->F_buffer;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(173);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, sp[0].o))))->F_rootDisplay;
	frame[7].o = sp[0].o;
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_isAdded_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_processing) != 0) goto label_9;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[7].o)))->F_rootDisplay;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(164);
	INST_IINC(1, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(180);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(249);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_processing = (jint(0));
	}
label_1:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_version_R_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:version", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(260);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(263);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(264);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK(sp[1].o))->F_val;
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[2].i))));
	LINE_NUMBER(264);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_2:;
	{
	LINE_NUMBER(268);
	((func_arc_util_io_Writes_bool_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_bool_boolean])(ctx, (frame[1].o), (jint(0)));
	}
label_9:;
	LINE_NUMBER(270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:read", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(274);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(276);
	if ((frame[2].i) < (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(277);
	jint temp0 = (jint)((func_arc_util_io_Reads_bool_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_bool_R_boolean])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(278);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	LINE_NUMBER(281);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val;
	jint temp0 = frame[4].i;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(281);
	INST_IINC(4, 1);
	goto label_7;
	}
label_2:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	M_mindustry_gen_Building_add(ctx, (frame[0].o));
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_index = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(293);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	M_mindustry_gen_Building_remove(ctx, (frame[0].o));
	LINE_NUMBER(300);
	if (((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(301);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, sp[0].o));
	LINE_NUMBER(302);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[1].o)))->F_index = ((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(303);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index), (frame[1].o));
	LINE_NUMBER(304);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	LINE_NUMBER(305);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index = (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, sp[0].o);
	LINE_NUMBER(310);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer = (jref) (jobject(nullptr));
	}
label_8:;
	LINE_NUMBER(312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$processCommands$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:lambda$processCommands$0", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jint temp0 = (jint)((func_arc_struct_LongQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(183);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(184);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(185);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp3 = jfloat(temp2);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_proj_float_float_float_float(ctx, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, sp[0].o);
	LINE_NUMBER(190);
	SM_arc_graphics_g2d_Draw_color_float(ctx, ((jfloat)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(191);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((jfloat)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_stroke));
	}
label_10:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jint temp0 = (jint)((func_arc_struct_LongQueue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_commands;
	jlong temp0 = (jlong)((func_arc_struct_LongQueue_removeFirst_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongQueue_removeFirst_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	LINE_NUMBER(195);
	jint temp1 = (jint)SM_mindustry_gen_DisplayCmd_type_long_R_int(ctx, (frame[1].l));
	frame[3].i = temp1;
	LINE_NUMBER(196);
	jint temp2 = (jint)SM_mindustry_gen_DisplayCmd_x_long_R_int(ctx, (frame[1].l));
	jint temp3 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp2);
	frame[4].i = temp3;
	jint temp4 = (jint)SM_mindustry_gen_DisplayCmd_y_long_R_int(ctx, (frame[1].l));
	jint temp5 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp4);
	frame[5].i = temp5;
	LINE_NUMBER(197);
	jint temp6 = (jint)SM_mindustry_gen_DisplayCmd_p1_long_R_int(ctx, (frame[1].l));
	jint temp7 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp6);
	frame[6].i = temp7;
	jint temp8 = (jint)SM_mindustry_gen_DisplayCmd_p2_long_R_int(ctx, (frame[1].l));
	jint temp9 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp8);
	frame[7].i = temp9;
	jint temp10 = (jint)SM_mindustry_gen_DisplayCmd_p3_long_R_int(ctx, (frame[1].l));
	jint temp11 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp10);
	frame[8].i = temp11;
	jint temp12 = (jint)SM_mindustry_gen_DisplayCmd_p4_long_R_int(ctx, (frame[1].l));
	jint temp13 = (jint)SM_mindustry_world_blocks_logic_LogicDisplay_unpackSign_int_R_int(ctx, temp12);
	frame[9].i = temp13;
	LINE_NUMBER(199);
	switch((frame[3].i)) {
		case 0: goto label_21;
		case 1: goto label_22;
		case 2: goto label_23;
		case 3: goto label_24;
		case 4: goto label_25;
		case 5: goto label_26;
		case 6: goto label_27;
		case 7: goto label_28;
		case 8: goto label_29;
		case 9: goto label_30;
		case 10: goto label_31;
		case 11: goto label_32;
		case 12: goto label_33;
		case 13: goto label_34;
		case 14: goto label_35;
		case 15: goto label_36;
		default: goto label_23;
	}
	}
label_21:;
	{
	LINE_NUMBER(202);
	SM_arc_graphics_g2d_Draw_discard(ctx);
	LINE_NUMBER(203);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_clear_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_clear_float_float_float_float])(ctx, sp[0].o, ((jfloat((frame[4].i))) / (jfloat(255.0f))), ((jfloat((frame[5].i))) / (jfloat(255.0f))), ((jfloat((frame[6].i))) / (jfloat(255.0f))), (jfloat(1)));
	LINE_NUMBER(204);
	goto label_23;
	}
label_25:;
	{
	LINE_NUMBER(205);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))));
	goto label_23;
	}
label_26:;
	{
	LINE_NUMBER(206);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))));
	goto label_23;
	}
label_27:;
	{
	LINE_NUMBER(207);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))));
	goto label_23;
	}
label_28:;
	{
	LINE_NUMBER(208);
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = jfloat((frame[5].i));
	jint temp2 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, ((jint)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[0].o))->F_maxSides));
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, temp0, temp1, temp3, (jfloat((frame[7].i))), (jfloat((frame[8].i))));
	goto label_23;
	}
label_29:;
	{
	LINE_NUMBER(209);
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = jfloat((frame[5].i));
	jint temp2 = frame[6].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp2, ((jint)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[0].o))->F_maxSides));
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, temp0, temp1, temp3, (jfloat((frame[7].i))), (jfloat((frame[8].i))));
	goto label_23;
	}
label_30:;
	{
	LINE_NUMBER(210);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[7].i))), (jfloat((frame[8].i))), (jfloat((frame[9].i))));
	goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_toFloatBits_int_int_int_int_R_float(ctx, (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_color = temp0;
	SM_arc_graphics_g2d_Draw_color_float(ctx, temp0);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat((frame[4].i));
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_stroke = temp0;
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp0);
	goto label_23;
	}
label_31:;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)SM_mindustry_gen_DisplayCmd_p4_long_R_int(ctx, (frame[1].l));
	jint temp1 = temp0 << (10);
	jint temp2 = (jint)SM_mindustry_gen_DisplayCmd_p1_long_R_int(ctx, (frame[1].l));
	frame[10].i = (temp1 | temp2);
	LINE_NUMBER(215);
	frame[11].i = ((frame[10].i) & (31));
	LINE_NUMBER(216);
	frame[12].i = ((frame[10].i) >> (jint(5)));
	LINE_NUMBER(217);
	if ((frame[11].i) != (30)) goto label_42;
	}
	{
	LINE_NUMBER(218);
	if ((frame[12].i) == ((jint)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_index)) goto label_44;
	}
	{
	jint temp0 = frame[12].i;
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_44;
	}
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_44;
	{
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[12].i));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, sp[0].o))))->F_buffer;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(219);
	clinit_mindustry_world_blocks_logic_LogicDisplay(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_LogicDisplay_displays;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[12].i));
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, sp[0].o))))->F_rootDisplay;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(220);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = jfloat((frame[7].i));
	jfloat temp3 = jfloat((frame[7].i));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 / temp4), (jfloat((frame[8].i))));
	goto label_44;
	}
label_42:;
	{
	LINE_NUMBER(222);
	jint temp0 = frame[11].i;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_44;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[11].i))), (frame[12].i));
	frame[14].o = sp[0].o;
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_44;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[14].o)));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[13].o)))->F_fullIcon;
	frame[14].o = sp[0].o;
	LINE_NUMBER(224);
	sp[0].o = frame[14].o;
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = jfloat((frame[7].i));
	jfloat temp3 = jfloat((frame[7].i));
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, (frame[14].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 / temp4), (jfloat((frame[8].i))));
	}
label_44:;
	LINE_NUMBER(226);
	goto label_23;
label_32:;
	{
	LINE_NUMBER(228);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (jchar((frame[6].i))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(229);
	if ((frame[10].o) == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(230);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(231);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	((func_arc_graphics_g2d_TextureRegion_set_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_float_float_float_float])(ctx, sp[0].o, ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_u), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_v2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_u2), ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_v));
	LINE_NUMBER(233);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp0 = jfloat((frame[4].i));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp1 = (temp0 + ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_width))) / (jfloat(2)))) + (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_xoffset)));
	jfloat temp2 = jfloat((frame[5].i));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp3 = (temp2 + ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height))) / (jfloat(2)))) + (jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[10].o)))->F_yoffset)));
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[1].o);
	jfloat temp4 = temp3 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_capHeight);
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_logic;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[1].o);
	jfloat temp5 = temp4 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_ascent);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp6 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_width));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp1, temp5, temp6, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height))));
	}
label_51:;
	LINE_NUMBER(235);
	goto label_23;
label_33:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o != nullptr) goto label_55;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_56;
	}
label_55:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[-1].o))->F_transform;
label_56:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat((frame[4].i))), (jfloat((frame[5].i))));
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	goto label_23;
	}
label_34:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o != nullptr) goto label_57;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_58;
	}
label_57:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[-1].o))->F_transform;
label_58:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[0].o, ((jfloat((frame[4].i))) * (jfloat(0.05f))), ((jfloat((frame[5].i))) * (jfloat(0.05f))));
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	goto label_23;
	}
label_35:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o != nullptr) goto label_59;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_60;
	}
label_59:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[-1].o))->F_transform;
label_60:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_arc_math_Mat_rotate_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_rotate_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat((frame[6].i))));
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	goto label_23;
	}
label_36:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_transform;
	if (sp[0].o != nullptr) goto label_61;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[0].o))->F_transform = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_62;
	}
label_61:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK(sp[-1].o))->F_transform;
label_62:;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[0].o);
	sp++;
	POP_N(1); // Pop method args
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
label_23:;
	LINE_NUMBER(241);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(244);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(245);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(246);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild:lambda$draw$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = (temp3 * ((jfloat)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_scaleFactor)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_buffer;
	jint temp5 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp6 = jfloat((-temp5));
	sp[1].o = (jobject)((mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, ((temp6 * ((jfloat)((mindustry_world_blocks_logic_LogicDisplay *) NULL_CHECK(sp[1].o))->F_scaleFactor)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl)));
	}
label_1:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field buffer
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field transform
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_Building_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_Building_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_gen_Building_getX_R_float,
	(void *) M_mindustry_gen_Building_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_isValid_R_boolean,
	(void *) M_mindustry_gen_Building_shouldAmbientSound_R_boolean,
	(void *) M_mindustry_gen_Building_getAmbientVolume_R_float,
	(void *) M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound,
	(void *) M_mindustry_gen_Building_hitSize_R_float,
	(void *) M_mindustry_gen_Building_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_Building_as_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_isAdded_R_boolean,
	(void *) M_mindustry_gen_Building_isLocal_R_boolean,
	(void *) M_mindustry_gen_Building_isRemote_R_boolean,
	(void *) M_mindustry_gen_Building_serialize_R_boolean,
	(void *) M_mindustry_gen_Building_classId_R_int,
	(void *) M_mindustry_gen_Building_id_R_int,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onSolid_R_boolean,
	(void *) M_mindustry_gen_Building_x_R_float,
	(void *) M_mindustry_gen_Building_y_R_float,
	(void *) M_mindustry_gen_Building_tileX_R_int,
	(void *) M_mindustry_gen_Building_tileY_R_int,
	(void *) M_mindustry_gen_Building_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_set_float_float,
	(void *) M_mindustry_gen_Building_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_Building_trns_float_float,
	(void *) M_mindustry_gen_Building_x_float,
	(void *) M_mindustry_gen_Building_y_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageArmorMult_float_float_boolean,
	(void *) M_mindustry_gen_Building_damagePierce_float,
	(void *) M_mindustry_gen_Building_damagePierce_float_boolean,
	(void *) M_mindustry_gen_Building_healFract_float,
	(void *) M_mindustry_gen_Building_heal_float,
	(void *) M_mindustry_gen_Building_damaged_R_boolean,
	(void *) M_mindustry_gen_Building_dead_R_boolean,
	(void *) M_mindustry_gen_Building_health_R_float,
	(void *) M_mindustry_gen_Building_healthf_R_float,
	(void *) M_mindustry_gen_Building_hitTime_R_float,
	(void *) M_mindustry_gen_Building_maxHealth_R_float,
	(void *) M_mindustry_gen_Building_clampHealth,
	(void *) M_mindustry_gen_Building_damage_float,
	(void *) M_mindustry_gen_Building_damage_float_boolean,
	(void *) M_mindustry_gen_Building_damageContinuous_float,
	(void *) M_mindustry_gen_Building_damageContinuousArmorMult_float_float,
	(void *) M_mindustry_gen_Building_damageContinuousPierce_float,
	(void *) M_mindustry_gen_Building_dead_boolean,
	(void *) M_mindustry_gen_Building_heal,
	(void *) M_mindustry_gen_Building_health_float,
	(void *) M_mindustry_gen_Building_hitTime_float,
	(void *) M_mindustry_gen_Building_kill,
	(void *) M_mindustry_gen_Building_killed,
	(void *) M_mindustry_gen_Building_maxHealth_float,
	(void *) M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_cheating_R_boolean,
	(void *) M_mindustry_gen_Building_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_Building_team_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_timer_R_arc_util_Interval,
	(void *) M_mindustry_gen_Building_timer_int_float_R_boolean,
	(void *) M_mindustry_gen_Building_timer_arc_util_Interval,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double,
	(void *) M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double,
	(void *) M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object,
	(void *) M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double,
	(void *) M_mindustry_ui_Displayable_displayable_R_boolean,
	(void *) M_mindustry_gen_Building_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_setIndex__build_int,
	(void *) M_mindustry_gen_Building_back_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_front_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_left_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_right_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_read_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor,
	(void *) M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_absorbLasers_R_boolean,
	(void *) M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_allowDeposit_R_boolean,
	(void *) M_mindustry_gen_Building_allowUpdate_R_boolean,
	(void *) M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_gen_Building_canConsume_R_boolean,
	(void *) M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_gen_Building_canPickup_R_boolean,
	(void *) M_mindustry_gen_Building_canResupply_R_boolean,
	(void *) M_mindustry_gen_Building_canUnload_R_boolean,
	(void *) M_mindustry_gen_Building_canWithdraw_R_boolean,
	(void *) M_mindustry_gen_Building_checkSolid_R_boolean,
	(void *) M_mindustry_gen_Building_checkSuppression_R_boolean,
	(void *) M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean,
	(void *) M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_configTapped_R_boolean,
	(void *) M_mindustry_gen_Building_consumeTriggerValid_R_boolean,
	(void *) M_mindustry_gen_Building_dump_R_boolean,
	(void *) M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_R_boolean,
	(void *) M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_inMapArea_R_boolean,
	(void *) M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isCommandable_R_boolean,
	(void *) M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_Building_isHealSuppressed_R_boolean,
	(void *) M_mindustry_gen_Building_isInsulated_R_boolean,
	(void *) M_mindustry_gen_Building_isPayload_R_boolean,
	(void *) M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean,
	(void *) M_mindustry_gen_Building_payloadCheck_int_R_boolean,
	(void *) M_mindustry_gen_Building_productionValid_R_boolean,
	(void *) M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_gen_Building_shouldConsume_R_boolean,
	(void *) M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean,
	(void *) M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_int_int_R_byte,
	(void *) M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_version_R_byte,
	(void *) M_mindustry_gen_Building_ambientVolume_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_R_float,
	(void *) M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float,
	(void *) M_mindustry_gen_Building_delta_R_float,
	(void *) M_mindustry_gen_Building_drawrot_R_float,
	(void *) M_mindustry_gen_Building_edelta_R_float,
	(void *) M_mindustry_gen_Building_efficiencyScale_R_float,
	(void *) M_mindustry_gen_Building_fogRadius_R_float,
	(void *) M_mindustry_gen_Building_getDisplayEfficiency_R_float,
	(void *) M_mindustry_gen_Building_getPowerProduction_R_float,
	(void *) M_mindustry_gen_Building_getProgressIncrease_float_R_float,
	(void *) M_mindustry_gen_Building_handleDamage_float_R_float,
	(void *) M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_gen_Building_progress_R_float,
	(void *) M_mindustry_gen_Building_rotdeg_R_float,
	(void *) M_mindustry_gen_Building_timeScale_R_float,
	(void *) M_mindustry_gen_Building_totalProgress_R_float,
	(void *) M_mindustry_gen_Building_warmup_R_float,
	(void *) M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int,
	(void *) M_mindustry_gen_Building_explosionItemCap_R_int,
	(void *) M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int,
	(void *) M_mindustry_gen_Building_moduleBitmask_R_int,
	(void *) M_mindustry_gen_Building_pos_R_int,
	(void *) M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int,
	(void *) M_mindustry_gen_Building_getDisplayName_R_java_lang_String,
	(void *) M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus,
	(void *) M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_gen_Building_addPlan_boolean,
	(void *) M_mindustry_gen_Building_addPlan_boolean_boolean,
	(void *) M_mindustry_gen_Building_afterDestroyed,
	(void *) M_mindustry_gen_Building_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team,
	(void *) M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean,
	(void *) M_mindustry_gen_Building_checkAllowUpdate,
	(void *) M_mindustry_gen_Building_configure_java_lang_Object,
	(void *) M_mindustry_gen_Building_configureAny_java_lang_Object,
	(void *) M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object,
	(void *) M_mindustry_gen_Building_consume,
	(void *) M_mindustry_gen_Building_created,
	(void *) M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_damage_mindustry_game_Team_float,
	(void *) M_mindustry_gen_Building_deselect,
	(void *) M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw,
	(void *) M_mindustry_gen_Building_drawCached,
	(void *) M_mindustry_gen_Building_drawConfigure,
	(void *) M_mindustry_gen_Building_drawCracks,
	(void *) M_mindustry_gen_Building_drawDisabled,
	(void *) M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_gen_Building_drawLight,
	(void *) M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_drawSelect,
	(void *) M_mindustry_gen_Building_drawStatus,
	(void *) M_mindustry_gen_Building_drawTeam,
	(void *) M_mindustry_gen_Building_drawTeamTop,
	(void *) M_mindustry_gen_Building_dropped,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int,
	(void *) M_mindustry_gen_Building_eachEdge_arc_func_Cons,
	(void *) M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc,
	(void *) M_mindustry_gen_Building_handleString_java_lang_Object,
	(void *) M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons,
	(void *) M_mindustry_gen_Building_healthChanged,
	(void *) M_mindustry_gen_Building_incrementDump_int,
	(void *) M_mindustry_gen_Building_itemTaken_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_noSleep,
	(void *) M_mindustry_gen_Building_offload_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_Building_onConfigureClosed,
	(void *) M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_onDestroyed,
	(void *) M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_onProximityAdded,
	(void *) M_mindustry_gen_Building_onProximityRemoved,
	(void *) M_mindustry_gen_Building_onProximityUpdate,
	(void *) M_mindustry_gen_Building_onRemoved,
	(void *) M_mindustry_gen_Building_overwrote_arc_struct_Seq,
	(void *) M_mindustry_gen_Building_payloadDraw,
	(void *) M_mindustry_gen_Building_pickedUp,
	(void *) M_mindustry_gen_Building_playDestroySound,
	(void *) M_mindustry_gen_Building_powerGraphRemoved,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item,
	(void *) M_mindustry_gen_Building_produced_mindustry_type_Item_int,
	(void *) M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle,
	(void *) M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_readBase_arc_util_io_Reads,
	(void *) M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte,
	(void *) M_mindustry_gen_Building_recache,
	(void *) M_mindustry_gen_Building_recentlyHealed,
	(void *) M_mindustry_gen_Building_removeFromProximity,
	(void *) M_mindustry_gen_Building_sleep,
	(void *) M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_tapped,
	(void *) M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid,
	(void *) M_mindustry_gen_Building_unitOn_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_gen_Building_updateConsumption,
	(void *) M_mindustry_gen_Building_updateEfficiencyMultiplier,
	(void *) M_mindustry_gen_Building_updateFogVisibility,
	(void *) M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player,
	(void *) M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_gen_Building_updatePowerGraph,
	(void *) M_mindustry_gen_Building_updateProximity,
	(void *) M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_updateTile,
	(void *) M_mindustry_gen_Building_writeAll_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeBase_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float,
	(void *) M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable,
	(void *) M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence,
	(void *) M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_drawable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$processCommands$0,
	(void *) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$draw$0,
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
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "isValid", "()Z" },
	{ "shouldAmbientSound", "()Z" },
	{ "getAmbientVolume", "()F" },
	{ "getAmbientSound", "()Larc/audio/Sound;" },
	{ "hitSize", "()F" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "damageArmorMult", "(FF)V" },
	{ "damageArmorMult", "(FFZ)V" },
	{ "damagePierce", "(F)V" },
	{ "damagePierce", "(FZ)V" },
	{ "healFract", "(F)V" },
	{ "heal", "(F)V" },
	{ "damaged", "()Z" },
	{ "dead", "()Z" },
	{ "health", "()F" },
	{ "healthf", "()F" },
	{ "hitTime", "()F" },
	{ "maxHealth", "()F" },
	{ "clampHealth", "()V" },
	{ "damage", "(F)V" },
	{ "damage", "(FZ)V" },
	{ "damageContinuous", "(F)V" },
	{ "damageContinuousArmorMult", "(FF)V" },
	{ "damageContinuousPierce", "(F)V" },
	{ "dead", "(Z)V" },
	{ "heal", "()V" },
	{ "health", "(F)V" },
	{ "hitTime", "(F)V" },
	{ "kill", "()V" },
	{ "killed", "()V" },
	{ "maxHealth", "(F)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "timer", "()Larc/util/Interval;" },
	{ "timer", "(IF)Z" },
	{ "timer", "(Larc/util/Interval;)V" },
	{ "control", "(Lmindustry/logic/LAccess;DDDD)V" },
	{ "control", "(Lmindustry/logic/LAccess;Ljava/lang/Object;DDD)V" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "setProp", "(Lmindustry/logic/LAccess;D)V" },
	{ "setProp", "(Lmindustry/logic/LAccess;Ljava/lang/Object;)V" },
	{ "setProp", "(Lmindustry/ctype/UnlockableContent;D)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "setIndex__build", "(I)V" },
	{ "back", "()Lmindustry/gen/Building;" },
	{ "front", "()Lmindustry/gen/Building;" },
	{ "left", "()Lmindustry/gen/Building;" },
	{ "right", "()Lmindustry/gen/Building;" },
	{ "getCommandPosition", "()Larc/math/geom/Vec2;" },
	{ "config", "()Ljava/lang/Object;" },
	{ "getPayloads", "()Lmindustry/type/PayloadSeq;" },
	{ "findClosestEdge", "(Larc/math/geom/Position;Larc/func/Boolf;)Lmindustry/world/Tile;" },
	{ "getPayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "takePayload", "()Lmindustry/world/blocks/payloads/Payload;" },
	{ "onRepaired", "()V" },
	{ "placed", "()V" },
	{ "playerPlaced", "(Ljava/lang/Object;)V" },
	{ "read", "(Larc/util/io/Reads;B)V" },
	{ "create", "(Lmindustry/world/Block;Lmindustry/game/Team;)Lmindustry/gen/Building;" },
	{ "getLiquidDestination", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Lmindustry/gen/Building;" },
	{ "init", "(Lmindustry/world/Tile;Lmindustry/game/Team;ZI)Lmindustry/gen/Building;" },
	{ "nearby", "(II)Lmindustry/gen/Building;" },
	{ "nearby", "(I)Lmindustry/gen/Building;" },
	{ "getCursor", "()Larc/Graphics$Cursor;" },
	{ "getDisplayIcon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getPowerConnections", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "absorbLasers", "()Z" },
	{ "acceptItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "acceptLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "acceptPayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "allowDeposit", "()Z" },
	{ "allowUpdate", "()Z" },
	{ "canBeReplaced", "(Lmindustry/world/Block;)Z" },
	{ "canConsume", "()Z" },
	{ "canControlSelect", "(Lmindustry/gen/Unit;)Z" },
	{ "canDump", "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z" },
	{ "canDumpLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)Z" },
	{ "canPickup", "()Z" },
	{ "canResupply", "()Z" },
	{ "canUnload", "()Z" },
	{ "canWithdraw", "()Z" },
	{ "checkSolid", "()Z" },
	{ "checkSuppression", "()Z" },
	{ "collide", "(Lmindustry/gen/Bullet;)Z" },
	{ "collision", "(Lmindustry/gen/Bullet;)Z" },
	{ "conductsTo", "(Lmindustry/gen/Building;)Z" },
	{ "configTapped", "()Z" },
	{ "consumeTriggerValid", "()Z" },
	{ "dump", "()Z" },
	{ "dump", "(Lmindustry/type/Item;)Z" },
	{ "dumpAccumulate", "()Z" },
	{ "dumpAccumulate", "(Lmindustry/type/Item;)Z" },
	{ "dumpPayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "inMapArea", "()Z" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "isCommandable", "()Z" },
	{ "isDiscovered", "(Lmindustry/game/Team;)Z" },
	{ "isHealSuppressed", "()Z" },
	{ "isInsulated", "()Z" },
	{ "isPayload", "()Z" },
	{ "moveForward", "(Lmindustry/type/Item;)Z" },
	{ "movePayload", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "onConfigureBuildTapped", "(Lmindustry/gen/Building;)Z" },
	{ "onConfigureTapped", "(FF)Z" },
	{ "payloadCheck", "(I)Z" },
	{ "productionValid", "()Z" },
	{ "put", "(Lmindustry/type/Item;)Z" },
	{ "shouldConsume", "()Z" },
	{ "shouldHideConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "shouldShowConfigure", "(Lmindustry/gen/Player;)Z" },
	{ "wasRecentlyDamaged", "()Z" },
	{ "wasRecentlyHealed", "(F)Z" },
	{ "relativeTo", "(Lmindustry/gen/Building;)B" },
	{ "relativeTo", "(II)B" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeToEdge", "(Lmindustry/world/Tile;)B" },
	{ "version", "()B" },
	{ "ambientVolume", "()F" },
	{ "calculateHeat", "([F)F" },
	{ "calculateHeat", "([FLarc/struct/IntSet;)F" },
	{ "delta", "()F" },
	{ "drawrot", "()F" },
	{ "edelta", "()F" },
	{ "efficiencyScale", "()F" },
	{ "fogRadius", "()F" },
	{ "getDisplayEfficiency", "()F" },
	{ "getPowerProduction", "()F" },
	{ "getProgressIncrease", "(F)F" },
	{ "handleDamage", "(F)F" },
	{ "moveLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "moveLiquidForward", "(ZLmindustry/type/Liquid;)F" },
	{ "progress", "()F" },
	{ "rotdeg", "()F" },
	{ "timeScale", "()F" },
	{ "totalProgress", "()F" },
	{ "warmup", "()F" },
	{ "acceptStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)I" },
	{ "explosionItemCap", "()I" },
	{ "getMaximumAccepted", "(Lmindustry/type/Item;)I" },
	{ "moduleBitmask", "()I" },
	{ "pos", "()I" },
	{ "removeStack", "(Lmindustry/type/Item;I)I" },
	{ "getDisplayName", "()Ljava/lang/String;" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "status", "()Lmindustry/world/meta/BlockStatus;" },
	{ "flowItems", "()Lmindustry/world/modules/ItemModule;" },
	{ "addPlan", "(Z)V" },
	{ "addPlan", "(ZZ)V" },
	{ "afterDestroyed", "()V" },
	{ "afterPickedUp", "()V" },
	{ "applyBoost", "(FF)V" },
	{ "applyHealSuppression", "(F)V" },
	{ "applyHealSuppression", "(FLarc/graphics/Color;)V" },
	{ "applySlowdown", "(FF)V" },
	{ "buildConfiguration", "(Larc/scene/ui/layout/Table;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;)V" },
	{ "changeTeam", "(Lmindustry/game/Team;Z)V" },
	{ "checkAllowUpdate", "()V" },
	{ "configure", "(Ljava/lang/Object;)V" },
	{ "configureAny", "(Ljava/lang/Object;)V" },
	{ "configured", "(Lmindustry/gen/Unit;Ljava/lang/Object;)V" },
	{ "consume", "()V" },
	{ "created", "()V" },
	{ "damage", "(Lmindustry/gen/Bullet;Lmindustry/game/Team;F)V" },
	{ "damage", "(Lmindustry/game/Team;F)V" },
	{ "deselect", "()V" },
	{ "displayBars", "(Larc/scene/ui/layout/Table;)V" },
	{ "displayConsumption", "(Larc/scene/ui/layout/Table;)V" },
	{ "draw", "()V" },
	{ "drawCached", "()V" },
	{ "drawConfigure", "()V" },
	{ "drawCracks", "()V" },
	{ "drawDisabled", "()V" },
	{ "drawItemSelection", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "drawLight", "()V" },
	{ "drawLiquidLight", "(Lmindustry/type/Liquid;F)V" },
	{ "drawSelect", "()V" },
	{ "drawStatus", "()V" },
	{ "drawTeam", "()V" },
	{ "drawTeamTop", "()V" },
	{ "dropped", "()V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "dumpLiquid", "(Lmindustry/type/Liquid;FI)V" },
	{ "eachEdge", "(Larc/func/Cons;)V" },
	{ "getStackOffset", "(Lmindustry/type/Item;Larc/math/geom/Vec2;)V" },
	{ "handleItem", "(Lmindustry/gen/Building;Lmindustry/type/Item;)V" },
	{ "handleLiquid", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V" },
	{ "handlePayload", "(Lmindustry/gen/Building;Lmindustry/world/blocks/payloads/Payload;)V" },
	{ "handleStack", "(Lmindustry/type/Item;ILmindustry/gen/Teamc;)V" },
	{ "handleString", "(Ljava/lang/Object;)V" },
	{ "handleUnitPayload", "(Lmindustry/gen/Unit;Larc/func/Cons;)V" },
	{ "healthChanged", "()V" },
	{ "incrementDump", "(I)V" },
	{ "itemTaken", "(Lmindustry/type/Item;)V" },
	{ "noSleep", "()V" },
	{ "offload", "(Lmindustry/type/Item;)V" },
	{ "onCommand", "(Larc/math/geom/Vec2;)V" },
	{ "onConfigureClosed", "()V" },
	{ "onControlSelect", "(Lmindustry/gen/Unit;)V" },
	{ "onDeconstructed", "(Lmindustry/gen/Unit;)V" },
	{ "onDestroyed", "()V" },
	{ "onNearbyBuildAdded", "(Lmindustry/gen/Building;)V" },
	{ "onProximityAdded", "()V" },
	{ "onProximityRemoved", "()V" },
	{ "onProximityUpdate", "()V" },
	{ "onRemoved", "()V" },
	{ "overwrote", "(Larc/struct/Seq;)V" },
	{ "payloadDraw", "()V" },
	{ "pickedUp", "()V" },
	{ "playDestroySound", "()V" },
	{ "powerGraphRemoved", "()V" },
	{ "produced", "(Lmindustry/type/Item;)V" },
	{ "produced", "(Lmindustry/type/Item;I)V" },
	{ "puddleOn", "(Lmindustry/gen/Puddle;)V" },
	{ "readAll", "(Larc/util/io/Reads;B)V" },
	{ "readBase", "(Larc/util/io/Reads;)V" },
	{ "readSync", "(Larc/util/io/Reads;B)V" },
	{ "recache", "()V" },
	{ "recentlyHealed", "()V" },
	{ "removeFromProximity", "()V" },
	{ "sleep", "()V" },
	{ "splashLiquid", "(Lmindustry/type/Liquid;F)V" },
	{ "tapped", "()V" },
	{ "transferLiquid", "(Lmindustry/gen/Building;FLmindustry/type/Liquid;)V" },
	{ "unitOn", "(Lmindustry/gen/Unit;)V" },
	{ "unitOnAny", "(Lmindustry/gen/Unit;)V" },
	{ "unitRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "updateConsumption", "()V" },
	{ "updateEfficiencyMultiplier", "()V" },
	{ "updateFogVisibility", "()V" },
	{ "updateLastAccess", "(Lmindustry/gen/Player;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "updatePowerGraph", "()V" },
	{ "updateProximity", "()V" },
	{ "updateTableAlign", "(Larc/scene/ui/layout/Table;)V" },
	{ "updateTile", "()V" },
	{ "writeAll", "(Larc/util/io/Writes;)V" },
	{ "writeBase", "(Larc/util/io/Writes;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "lambda$splashLiquid$0", "(Lmindustry/type/Liquid;F)V" },
	{ "lambda$onDeconstructed$0", "(FLmindustry/world/Tile;)V" },
	{ "lambda$display$6", "(Ljava/lang/String;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$9", "(Larc/struct/Bits;Ljava/lang/Runnable;)V" },
	{ "lambda$display$7", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "lambda$display$8", "(Lmindustry/type/Liquid;Ljava/lang/String;)Ljava/lang/CharSequence;" },
	{ "lambda$display$1", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$placed$0", "(Lmindustry/gen/Building;)V" },
	{ "drawable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "draw", "(Larc/struct/LongSeq;)V" },
	{ "ensureBuffer", "()V" },
	{ "getBufferRegion", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "processCommands", "()V" },
	{ "lambda$processCommands$0", "()V" },
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_mindustry_logic_LDrawable, };

static FieldMetadata fields[] {
	{ "rootDisplay", &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_rootDisplay), "Lmindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild;", 1 },
	{ "buffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_buffer), "Larc/graphics/gl/FrameBuffer;", 1 },
	{ "color", &class_float, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_color), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_stroke), "F", 1 },
	{ "commands", &class_arc_struct_LongQueue, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_commands), "Larc/struct/LongQueue;", 1 },
	{ "transform", &class_arc_math_Mat, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_transform), "Larc/math/Mat;", 1 },
	{ "operations", &class_long, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_operations), "J", 1 },
	{ "index", &class_int, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_index), "I", 1 },
	{ "processing", &class_boolean, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_processing), "Z", 1 },
	{ "this$0", &class_mindustry_world_blocks_logic_LogicDisplay, offsetof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild, F_this$0), "Lmindustry/world/blocks/logic/LogicDisplay;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_mindustry_world_blocks_logic_LogicDisplay, 0, "(Lmindustry/world/blocks/logic/LogicDisplay;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "drawable", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_drawable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_drawable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_draw_arc_struct_LongSeq, "(Larc/struct/LongSeq;)V", 1 },
	{ "ensureBuffer", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_ensureBuffer, "()V", 1 },
	{ "getBufferRegion", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_getBufferRegion_arc_graphics_g2d_TextureRegion, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "processCommands", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_processCommands, "()V", 1 },
	{ "version", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_version_R_byte, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_version_R_byte, "()B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "add", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_add, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_add, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_remove, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_remove, "()V", 1 },
	{ "lambda$processCommands$0", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$processCommands$0, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$processCommands$0, "()V", 4098 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$draw$0, VTABLE_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/LogicDisplay$LogicDisplayBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_LogicDisplay,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 317,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild = registerClass(&class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild);

}

