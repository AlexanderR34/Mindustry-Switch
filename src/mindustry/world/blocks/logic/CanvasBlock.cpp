#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "java/lang/Integer.h"
#include "mindustry/world/Block.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "arc/struct/IntIntMap.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/blocks/logic/CanvasBlock_invoke_arc_func_Cons2_1.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/blocks/logic/CanvasBlock_invoke_arc_func_Boolf_1.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {


void mark_mindustry_world_blocks_logic_CanvasBlock(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_CanvasBlock *) object;
	if (self->F_palette)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_palette)->clazz)->markFunction)((jobject) self->F_palette, mark, depth + 1);
	if (self->F_colorToIndex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colorToIndex)->clazz)->markFunction)((jobject) self->F_colorToIndex, mark, depth + 1);
	if (self->F_side1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_side1)->clazz)->markFunction)((jobject) self->F_side1, mark, depth + 1);
	if (self->F_side2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_side2)->clazz)->markFunction)((jobject) self->F_side2, mark, depth + 1);
	if (self->F_corner1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corner1)->clazz)->markFunction)((jobject) self->F_corner1, mark, depth + 1);
	if (self->F_corner2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corner2)->clazz)->markFunction)((jobject) self->F_corner2, mark, depth + 1);
	if (self->F_previewPixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewPixmap)->clazz)->markFunction)((jobject) self->F_previewPixmap, mark, depth + 1);
	if (self->F_previewTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewTexture)->clazz)->markFunction)((jobject) self->F_previewTexture, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_CanvasBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_logic_CanvasBlock_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_CanvasBlock(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_padding = (jfloat(0));
	LINE_NUMBER(23);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize = (8);
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (8));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(908674303));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1000497153));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-476402433));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-254103041));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1684128511));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(732542207));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(-1814776321));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(-252253953));
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_colorToIndex = (jref) sp[1].o;
	LINE_NUMBER(36);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_tempBlend = (jint(0));
	LINE_NUMBER(41);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable = (jint(1));
	LINE_NUMBER(42);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destructible = (jint(1));
	LINE_NUMBER(43);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_canOverdrive = (jint(0));
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) getArrayClass(&class_byte, 1));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Cons2_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_logic_CanvasBlock_config_java_lang_Class_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_config_java_lang_Class_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock_setPaletteFromString_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:setPaletteFromString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_palette = (jref) sp[1].o;
	LINE_NUMBER(57);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (16));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((temp1 << (8)) | (255));
	LINE_NUMBER(57);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(66);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_colorToIndex;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[1].i))), (frame[1].i));
	LINE_NUMBER(66);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp0 = (jint)SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(ctx, (((jarray) nullCheck(ctx, sp[1].o))->length));
	jint temp1 = (jint)SM_arc_math_Mathf_log2_int_R_int(ctx, temp0);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_bitsPerPixel = temp1;
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize), ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) - ((jfloat)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_padding)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clipSize = temp2;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[1].o, ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize), ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize));
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_previewPixmap = (jref) sp[1].o;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_CanvasBlock_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:drawPlanRegion", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_worldContext) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_config;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), getArrayClass(&class_byte, 1))) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[4].o)));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_previewPixmap;
	sp[0].o = (jobject)((func_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_previewTexture;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[1].o, (frame[4].o));
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_previewTexture = (jref) sp[1].o;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_previewTexture;
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap])(ctx, sp[0].o, (frame[4].o));
	}
label_6:;
	{
	LINE_NUMBER(88);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_tempBlend = (jint(0));
	LINE_NUMBER(90);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_CanvasBlock_invoke_arc_func_Boolf_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	LINE_NUMBER(101);
	frame[5].i = ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_tempBlend);
	LINE_NUMBER(103);
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	frame[6].f = temp3;
	jfloat temp4 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	frame[7].f = temp4;
	LINE_NUMBER(104);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_previewTexture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	if ((frame[5].i) != 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_padding;
	sp[0].f = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	INST_FCONST(0);
label_14:;
	{
	sp -= 1;
	frame[8].f = sp[0].f;
	LINE_NUMBER(107);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) - (frame[8].f)), ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) - (frame[8].f)));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(111);
	frame[9].i = (jint(0));
	}
label_18:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_19;
	}
	{
	LINE_NUMBER(112);
	if (((frame[5].i) & ((jint(1)) << (frame[9].i))) != 0) goto label_21;
	}
	{
	LINE_NUMBER(113);
	if ((frame[9].i) < (jint(2))) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_side2;
	sp += 1;
	goto label_24;
	}
label_23:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[-1].o))->F_side1;
label_24:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (jfloat(((frame[9].i) * (90)))));
	LINE_NUMBER(115);
	if (((frame[5].i) & ((jint(1)) << (((frame[9].i) + (jint(1))) % (jint(4))))) == 0) goto label_26;
	}
	{
	LINE_NUMBER(116);
	if ((frame[9].i) < (jint(2))) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_corner2;
	sp += 1;
	goto label_29;
	}
label_28:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[-1].o))->F_corner1;
label_29:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (jfloat(((frame[9].i) * (90)))));
	}
label_26:;
	{
	LINE_NUMBER(119);
	jint temp0 = frame[5].i;
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, ((frame[9].i) - (jint(1))), (jint(4)));
	if ((temp0 & (temp1 << temp2)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(120);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(-1.0f));
	LINE_NUMBER(121);
	if ((frame[9].i) < (jint(2))) goto label_32;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_corner2;
	sp += 1;
	goto label_33;
	}
label_32:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[-1].o))->F_corner1;
label_33:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (frame[6].f), (frame[7].f), (jfloat(((frame[9].i) * (90)))));
	LINE_NUMBER(122);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_yscl = (jfloat(1));
	}
label_21:;
	{
	LINE_NUMBER(111);
	INST_IINC(9, 1);
	goto label_18;
	}
label_19:;
	LINE_NUMBER(126);
	goto label_35;
label_1:;
	{
	LINE_NUMBER(127);
	M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_35:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:makePixmap", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(132);
	frame[3].i = ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_bitsPerPixel);
	LINE_NUMBER(133);
	frame[4].i = (((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize) * ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize));
	LINE_NUMBER(134);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(135);
	frame[6].i = ((frame[5].i) * (frame[3].i));
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[6].i));
	frame[7].i = temp0;
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	jint temp1 = (frame[5].i) % ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize);
	jint temp2 = (frame[5].i) / ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_canvasSize);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp3 = frame[7].i;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_palette;
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp1, temp2, ((jint)ARRAY_ACCESS(jint, sp[1].o, temp4)));
	LINE_NUMBER(134);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:getByte", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(143);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK((frame[0].o)))->F_bitsPerPixel);
	LINE_NUMBER(144);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(145);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[2].i))) >> (jint(3))));
	LINE_NUMBER(146);
	jint temp0 = frame[3].i;
	sp[0].i = temp0;
	sp += 1;
	if ((((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[6].i))) & ((jint(1)) << (((frame[5].i) + (frame[2].i)) & (7)))) != 0) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	INST_ICONST(1);
label_8:;
	{
	sp -= 2;
	frame[3].i = (sp[0].i | (sp[1].i << (frame[5].i)));
	LINE_NUMBER(144);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_logic_CanvasBlock_lambda$drawPlanRegion$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:lambda$drawPlanRegion$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(92);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[3].i));
	if (temp0 != (temp1 + (temp2 * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) goto label_5;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[3].i));
	if (temp0 != (temp1 + (temp2 * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) goto label_5;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_tempBlend = (((jint)((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_tempBlend) | ((jint(1)) << (frame[3].i)));
	}
label_5:;
	{
	LINE_NUMBER(92);
	INST_IINC(3, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_logic_CanvasBlock_lambda$new$0_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/CanvasBlock:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_CanvasBlock(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_1;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_data;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(49);
	((mindustry_world_blocks_logic_CanvasBlock$CanvasBuild *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(1));
	}
label_1:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_logic_CanvasBlock;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field previewPixmap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field previewTexture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_logic_CanvasBlock[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_Block_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_setPaletteFromString_java_lang_String,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int,
	(void *) M_mindustry_world_blocks_logic_CanvasBlock_lambda$drawPlanRegion$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "setPaletteFromString", "(Ljava/lang/String;)V" },
	{ "makePixmap", "([BLarc/graphics/Pixmap;)Larc/graphics/Pixmap;" },
	{ "getByte", "([BI)I" },
	{ "lambda$drawPlanRegion$0", "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild,
};

static FieldMetadata fields[] {
	{ "padding", &class_float, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_padding), "F", 1 },
	{ "canvasSize", &class_int, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_canvasSize), "I", 1 },
	{ "palette", getArrayClass(&class_int, 1), offsetof(mindustry_world_blocks_logic_CanvasBlock, F_palette), "[I", 1 },
	{ "bitsPerPixel", &class_int, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_bitsPerPixel), "I", 1 },
	{ "colorToIndex", &class_arc_struct_IntIntMap, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_colorToIndex), "Larc/struct/IntIntMap;", 1 },
	{ "side1", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_side1), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "side2", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_side2), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "corner1", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_corner1), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "corner2", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_corner2), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "previewPixmap", &class_arc_graphics_Pixmap, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_previewPixmap), "Larc/graphics/Pixmap;", 4 },
	{ "previewTexture", &class_arc_graphics_Texture, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_previewTexture), "Larc/graphics/Texture;", 4 },
	{ "tempBlend", &class_int, offsetof(mindustry_world_blocks_logic_CanvasBlock, F_tempBlend), "I", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_CanvasBlock_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setPaletteFromString", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_setPaletteFromString_java_lang_String, VTABLE_mindustry_world_blocks_logic_CanvasBlock_setPaletteFromString_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_init, VTABLE_mindustry_world_blocks_logic_CanvasBlock_init, "()V", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_logic_CanvasBlock_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "makePixmap", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap, VTABLE_mindustry_world_blocks_logic_CanvasBlock_makePixmap_Array1_byte_arc_graphics_Pixmap_R_arc_graphics_Pixmap, "([BLarc/graphics/Pixmap;)Larc/graphics/Pixmap;", 1 },
	{ "getByte", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int, VTABLE_mindustry_world_blocks_logic_CanvasBlock_getByte_Array1_byte_int_R_int, "([BI)I", 4 },
	{ "lambda$drawPlanRegion$0", (intptr_t) M_mindustry_world_blocks_logic_CanvasBlock_lambda$drawPlanRegion$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_world_blocks_logic_CanvasBlock_lambda$drawPlanRegion$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean, "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)Z", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_world_blocks_logic_CanvasBlock_lambda$new$0_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild_Array1_byte, 0, "(Lmindustry/world/blocks/logic/CanvasBlock$CanvasBuild;[B)V", 4106 },
};

Class class_mindustry_world_blocks_logic_CanvasBlock{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/CanvasBlock",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_logic_CanvasBlock),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_CanvasBlock,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_CanvasBlock,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_CanvasBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 193,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_CanvasBlock = registerClass(&class_mindustry_world_blocks_logic_CanvasBlock);

}
