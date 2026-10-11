#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild_invoke_java_lang_Runnable_1.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/ui/Displayable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "mindustry/ui/dialogs/CanvasEditDialog.h"
#include "arc/math/geom/Position.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/struct/IntIntMap.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/logic/LVar.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LWritable.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/Styles.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/logic/LReadable.h"
#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "mindustry/game/Team.h"
#include "mindustry/world/blocks/logic/CanvasBlock_1.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_gen_Building(ctx);
}

void init_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_mindustry_world_blocks_logic_CanvasBlock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_gen_Building(ctx, (frame[0].o));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_canvasSize;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = temp0 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_canvasSize);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((temp1 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_bitsPerPixel)))) / (jfloat(8.0f))));
	sp[1].o = (jobject) createArray(ctx, &class_byte, temp2);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(155);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(0));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:setPixel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(158);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= (temp1 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize))) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_1;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_1;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[1].i;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (temp0 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[2].o))->F_bitsPerPixel)), (frame[2].i));
	LINE_NUMBER(160);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(1));
	}
label_1:;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:getPixel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= (temp1 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize))) goto label_1;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = frame[1].i;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int])(ctx, sp[0].o, sp[1].o, (temp0 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[2].o))->F_bitsPerPixel)));
	popStackFrame(ctx);
	return (jdouble(temp1));
	}
label_1:;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:updateTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if (((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[2].o))->F_previewPixmap;
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap])(ctx, sp[0].o, (frame[1].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, (frame[1].o));
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(181);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(0));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:packPixmap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[3].i = (temp0 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize));
	LINE_NUMBER(187);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = frame[1].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = temp0 % ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_canvasSize);
	jint temp2 = frame[4].i;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, sp[0].o, temp1, (temp2 / ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[1].o))->F_canvasSize)));
	frame[5].i = temp3;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_colorToIndex;
	jint temp4 = (jint)((func_arc_struct_IntIntMap_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[6].i = temp4;
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp5 = frame[4].i;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int])(ctx, sp[0].o, sp[1].o, (temp5 * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[2].o))->F_bitsPerPixel)), (frame[6].i));
	LINE_NUMBER(187);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:setByte", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[4].i = ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_bitsPerPixel);
	LINE_NUMBER(197);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(198);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[2].i))) >> (jint(3))));
	LINE_NUMBER(200);
	if (((bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (frame[5].i))) & (jint(1))) != 0) goto label_6;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) & (((jint(1)) << (((frame[5].i) + (frame[2].i)) & (7))) ^ (jint(-1))))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[1].o;
	jint temp0 = frame[6].i;
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) | ((jint(1)) << (((frame[5].i) + (frame[2].i)) & (7))))));
	}
label_8:;
	{
	LINE_NUMBER(197);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(206);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:onProximityUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	M_mindustry_gen_Building_onProximityUpdate(ctx, (frame[0].o));
	LINE_NUMBER(212);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(213);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp1 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i)))))->F_x;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = temp0 + (temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size));
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp4 = (jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[1].i)))))->F_y;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, temp2, (temp3 + (temp4 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size))));
	jint temp5 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp5 == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK(sp[0].o))->F_blending = (((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK(sp[0].o))->F_blending) | ((jint(1)) << (frame[1].i)));
	}
label_6:;
	{
	LINE_NUMBER(213);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_afterPickedUp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:afterPickedUp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	M_mindustry_gen_Building_afterPickedUp(ctx, (frame[0].o));
	LINE_NUMBER(221);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending = (jint(0));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_dropped(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:dropped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	M_mindustry_gen_Building_dropped(ctx, (frame[0].o));
	LINE_NUMBER(228);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:readable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_isValid_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(238);
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[1].o));
	jdouble temp1 = (jdouble)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double])(ctx, sp[1].o, temp0);
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp1);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_writable_mindustry_logic_LExecutor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:writable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, (frame[2].o));
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:blends", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[0].o);
	if (temp0 != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y)) goto label_1;
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

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawDisplays) != 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(263);
	if (((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending) != 0) goto label_4;
	}
	{
	LINE_NUMBER(264);
	M_mindustry_gen_Building_draw(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	if (((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated) == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(268);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture])(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(271);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	if (((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_padding;
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FCONST(0);
label_10:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(274);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) - (frame[1].f);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) - (frame[1].f)));
	LINE_NUMBER(275);
	frame[2].i = (jint(0));
	}
label_13:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_14;
	}
	{
	LINE_NUMBER(276);
	if ((((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending) & ((jint(1)) << (frame[2].i))) != 0) goto label_16;
	}
	{
	LINE_NUMBER(277);
	if ((frame[2].i) < (jint(2))) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_side2;
	sp += 1;
	goto label_19;
	}
label_18:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_side1;
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((frame[2].i) * (90)))));
	LINE_NUMBER(279);
	if ((((jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending) & ((jint(1)) << (((frame[2].i) + (jint(1))) % (jint(4))))) == 0) goto label_21;
	}
	{
	LINE_NUMBER(280);
	if ((frame[2].i) < (jint(2))) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner2;
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner1;
	sp += 1;
	}
label_24:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((frame[2].i) * (90)))));
	}
label_21:;
	{
	LINE_NUMBER(283);
	jint temp0 = (jint)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_blending;
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, ((frame[2].i) - (jint(1))), (jint(4)));
	if ((temp0 & (temp1 << temp2)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(284);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(-1.0f));
	LINE_NUMBER(285);
	if ((frame[2].i) < (jint(2))) goto label_27;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner2;
	sp += 1;
	goto label_28;
	}
label_27:;
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner1;
	sp += 1;
	}
label_28:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(((frame[2].i) * (90)))));
	LINE_NUMBER(286);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(1));
	}
label_16:;
	{
	LINE_NUMBER(275);
	INST_IINC(2, 1);
	goto label_13;
	}
label_14:;
	LINE_NUMBER(290);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	clinit_mindustry_world_blocks_logic_CanvasBlock$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_logic_CanvasBlock$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_this$0;
	jdouble temp0 = jdouble(((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_canvasSize));
	sp[0].d = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(296);
	jdouble temp0 = (jdouble)M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	M_mindustry_gen_Building_remove(ctx, (frame[0].o));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(305);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:buildConfiguration", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_pencil;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_cleari;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(40.0f)));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:onConfigureBuildTapped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(317);
	((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_deselect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_deselect])(ctx, (frame[0].o));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	M_mindustry_gen_Building_write_arc_util_io_Writes(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(335);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_util_io_Writes_b_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(340);
	M_mindustry_gen_Building_read_arc_util_io_Reads_byte(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_util_io_Reads_b_Array1_byte_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Reads_b_Array1_byte_R_Array1_byte])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(346);
	((func_arc_util_io_Reads_skip_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_skip_int])(ctx, (frame[1].o), (frame[3].i));
	}
label_5:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:config", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_lambda$buildConfiguration$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild:lambda$buildConfiguration$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(311);
	clinit_mindustry_ui_dialogs_CanvasEditDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog);
	init_mindustry_ui_dialogs_CanvasEditDialog_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CanvasEditDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog_show_R_arc_scene_ui_Dialog])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field texture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild[] {
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
	(void *) M_mindustry_gen_Building_add,
	(void *) M_mindustry_gen_Building_afterRead,
	(void *) M_mindustry_gen_Building_afterReadAll,
	(void *) M_mindustry_gen_Building_beforeWrite,
	(void *) M_mindustry_gen_Building_id_int,
	(void *) M_mindustry_gen_Building_read_arc_util_io_Reads,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_remove,
	(void *) M_mindustry_gen_Building_update,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_arc_util_io_Writes,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_sense_mindustry_logic_LAccess_R_double,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_java_lang_Object,
	(void *) M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq,
	(void *) M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload,
	(void *) M_mindustry_gen_Building_onRepaired,
	(void *) M_mindustry_gen_Building_placed,
	(void *) M_mindustry_gen_Building_playerPlaced_java_lang_Object,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_arc_util_io_Reads_byte,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean,
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
	(void *) M_mindustry_gen_Building_version_R_byte,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_afterPickedUp,
	(void *) M_mindustry_gen_Building_applyBoost_float_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float,
	(void *) M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color,
	(void *) M_mindustry_gen_Building_applySlowdown_float_float,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_buildConfiguration_arc_scene_ui_layout_Table,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_draw,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_dropped,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate,
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
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_mindustry_logic_LVar_mindustry_logic_LVar,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_writable_mindustry_logic_LExecutor_R_boolean,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_mindustry_logic_LVar_mindustry_logic_LVar,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_lambda$buildConfiguration$0,
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
	{ "readable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "read", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
	{ "writable", "(Lmindustry/logic/LExecutor;)Z" },
	{ "write", "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V" },
	{ "setPixel", "(II)V" },
	{ "getPixel", "(I)D" },
	{ "updateTexture", "()V" },
	{ "packPixmap", "(Larc/graphics/Pixmap;)[B" },
	{ "setByte", "([BII)V" },
	{ "blends", "(Lmindustry/world/Tile;)Z" },
	{ "config", "()[B" },
	{ "lambda$buildConfiguration$0", "()V" },
};

static jclass interfaces[] { &class_mindustry_logic_LReadable, &class_mindustry_logic_LWritable, };

static FieldMetadata fields[] {
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, F_texture), "Larc/graphics/Texture;", 1 },
	{ "data", getArrayClass(&class_byte, 1), offsetof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, F_data), "[B", 1 },
	{ "blending", &class_int, offsetof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, F_blending), "I", 1 },
	{ "invalidated", &class_boolean, offsetof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, F_invalidated), "Z", 4 },
	{ "this$0", &class_mindustry_world_blocks_logic_CanvasBlock, offsetof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild, F_this$0), "Lmindustry/world/blocks/logic/CanvasBlock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_mindustry_world_blocks_logic_CanvasBlock, 0, "(Lmindustry/world/blocks/logic/CanvasBlock;)V", 1 },
	{ "setPixel", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setPixel_int_int, "(II)V", 1 },
	{ "getPixel", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_getPixel_int_R_double, "(I)D", 1 },
	{ "updateTexture", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_updateTexture, "()V", 1 },
	{ "packPixmap", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_packPixmap_arc_graphics_Pixmap_R_Array1_byte, "(Larc/graphics/Pixmap;)[B", 1 },
	{ "setByte", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_setByte_Array1_byte_int_int, "([BII)V", 4 },
	{ "onProximityUpdate", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onProximityUpdate, "()V", 1 },
	{ "afterPickedUp", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_afterPickedUp, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_afterPickedUp, "()V", 1 },
	{ "dropped", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_dropped, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_dropped, "()V", 1 },
	{ "readable", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_readable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "writable", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_writable_mindustry_logic_LExecutor_R_boolean, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_writable_mindustry_logic_LExecutor_R_boolean, "(Lmindustry/logic/LExecutor;)Z", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_mindustry_logic_LVar_mindustry_logic_LVar, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_blends_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_draw, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_draw, "()V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_remove, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_remove, "()V", 1 },
	{ "buildConfiguration", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_buildConfiguration_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_buildConfiguration_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "onConfigureBuildTapped", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_onConfigureBuildTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_Array1_byte, "()[B", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_arc_util_io_Reads_byte, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_read_arc_util_io_Reads_byte, "(Larc/util/io/Reads;B)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_java_lang_Object, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_config_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "lambda$buildConfiguration$0", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_lambda$buildConfiguration$0, VTABLE_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_lambda$buildConfiguration$0, "()V", 4098 },
};

Class class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/CanvasBlock$CanvasBuild",
		.parentClass = (intptr_t) &class_mindustry_gen_Building,
		.size = sizeof(mindustry_world_blocks_logic_CanvasBlock$CanvasBuild),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_logic_CanvasBlock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 322,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild = registerClass(&class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild);

}

