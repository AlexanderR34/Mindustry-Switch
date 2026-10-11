#include "mindustry/world/draw/DrawRegion.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/draw/DrawRegion.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/graphics/Drawf.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"

extern "C" {


void mark_mindustry_world_draw_DrawRegion(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawBlock(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_draw_DrawRegion *) object;
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_suffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_suffix)->clazz)->markFunction)((jobject) self->F_suffix, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_world_draw_DrawRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawBlock(ctx);
}

void init_mindustry_world_draw_DrawRegion_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite = (jint(0));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate = (jint(0));
	LINE_NUMBER(23);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(26);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawRegion_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(29);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite = (jint(0));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate = (jint(0));
	LINE_NUMBER(23);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(30);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(31);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (frame[2].f);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawRegion_java_lang_String_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(34);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite = (jint(0));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate = (jint(0));
	LINE_NUMBER(23);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(35);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (frame[1].o);
	LINE_NUMBER(36);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite = (frame[3].i);
	LINE_NUMBER(37);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (frame[2].f);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_draw_DrawRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_draw_DrawRegion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_mindustry_world_draw_DrawBlock(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(18);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite = (jint(0));
	LINE_NUMBER(19);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_drawPlan = (jint(1));
	LINE_NUMBER(20);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate = (jint(0));
	LINE_NUMBER(23);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer = (jfloat(-1.0f));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawRegion_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(46);
	if ((floatCompare(((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_layer));
	}
label_2:;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(48);
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite) == 0) goto label_4;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (temp2 * ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotation);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp += 4;
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_rotdeg_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(0);
label_7:;
	{
	sp -= 5;
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, (sp[3].f + sp[4].f));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp1 = ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_totalProgress_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_totalProgress_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (temp2 * ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotateSpeed)) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotation);
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].f = temp3;
	sp += 4;
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate) == 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_rotdeg_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_rotdeg_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_FCONST(0);
label_10:;
	INST_FADD();
	POP_N(4); // Pop method args
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
label_8:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o == nullptr) goto label_11;
	}
	SM_arc_graphics_g2d_Draw_color(ctx);
label_11:;
	{
	LINE_NUMBER(54);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawRegion_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:drawPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(59);
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_drawPlan) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(60);
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_spinSprite) == 0) goto label_2;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	jfloat temp3 = temp2 + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_y);
	sp[1].f = temp1;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation))) * (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = (jfloat(0)) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotation);
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	POP_N(4); // Pop method args
	SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	goto label_6;
label_2:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[2].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[2].o));
	jfloat temp3 = temp2 + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_y);
	sp[1].f = temp1;
	sp[2].f = temp3;
	sp += 3;
	if (((jint)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_buildingRotate) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation))) * (jfloat(90.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	jfloat temp0 = (jfloat(0)) + ((jfloat)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_rotation);
	sp[0].f = temp0;
	sp += 1;
	}
label_8:;
	POP_N(4); // Pop method args
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
label_6:;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_draw_DrawRegion_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_draw_DrawRegion_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/draw/DrawRegion:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 2;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)((mindustry_world_draw_DrawRegion *) NULL_CHECK((frame[0].o)))->F_suffix;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_draw_DrawRegion *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_draw_DrawRegion;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field name
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_draw_DrawRegion[] {
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
	(void *) M_mindustry_world_draw_DrawBlock_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawRegion_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawRegion_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawRegion_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawRegion_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
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
	{ "getRegionsToOutline", "(Lmindustry/world/Block;Larc/struct/Seq;)V" },
	{ "draw", "(Lmindustry/gen/Building;)V" },
	{ "drawLight", "(Lmindustry/gen/Building;)V" },
	{ "drawPlan", "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "load", "(Lmindustry/world/Block;)V" },
	{ "icons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "finalIcons", "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;" },
	{ "expectCrafter", "(Lmindustry/world/Block;)Lmindustry/world/blocks/production/GenericCrafter;" },
};

static FieldMetadata fields[] {
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_draw_DrawRegion, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "suffix", &class_java_lang_String, offsetof(mindustry_world_draw_DrawRegion, F_suffix), "Ljava/lang/String;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_draw_DrawRegion, F_name), "Ljava/lang/String;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_draw_DrawRegion, F_color), "Larc/graphics/Color;", 1 },
	{ "spinSprite", &class_boolean, offsetof(mindustry_world_draw_DrawRegion, F_spinSprite), "Z", 1 },
	{ "drawPlan", &class_boolean, offsetof(mindustry_world_draw_DrawRegion, F_drawPlan), "Z", 1 },
	{ "buildingRotate", &class_boolean, offsetof(mindustry_world_draw_DrawRegion, F_buildingRotate), "Z", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_world_draw_DrawRegion, F_rotateSpeed), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_world_draw_DrawRegion, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_world_draw_DrawRegion, F_y), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_world_draw_DrawRegion, F_rotation), "F", 1 },
	{ "layer", &class_float, offsetof(mindustry_world_draw_DrawRegion, F_layer), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawRegion_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawRegion_java_lang_String_float, 0, "(Ljava/lang/String;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawRegion_java_lang_String_float_boolean, 0, "(Ljava/lang/String;FZ)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_draw_DrawRegion, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_draw_DrawRegion_draw_mindustry_gen_Building, VTABLE_mindustry_world_draw_DrawRegion_draw_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_draw_DrawRegion_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_draw_DrawRegion_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/world/Block;Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "icons", (intptr_t) M_mindustry_world_draw_DrawRegion_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_draw_DrawRegion_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Block;)[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "load", (intptr_t) M_mindustry_world_draw_DrawRegion_load_mindustry_world_Block, VTABLE_mindustry_world_draw_DrawRegion_load_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_world_draw_DrawRegion{
		.nativeName = (intptr_t) "mindustry/world/draw/DrawRegion",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawBlock,
		.size = sizeof(mindustry_world_draw_DrawRegion),
		.classVtable = (intptr_t) vtable_mindustry_world_draw_DrawRegion,
		.staticInitializer = (intptr_t) clinit_mindustry_world_draw_DrawRegion,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_draw_DrawRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_draw_DrawRegion = registerClass(&class_mindustry_world_draw_DrawRegion);

}
