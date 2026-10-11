#include "mindustry/content/Blocks_321_2.h"
#include "mindustry/content/Blocks_321_2_10.h"
#include "mindustry/content/Blocks_321_2_2.h"
#include "mindustry/content/Blocks_321_2_17.h"
#include "mindustry/content/Blocks_321_2_3.h"
#include "mindustry/content/Blocks_321_2_18.h"
#include "mindustry/content/Blocks_321_2.h"
#include "mindustry/content/Blocks_321_2_15.h"
#include "mindustry/content/Blocks_321_2_1.h"
#include "mindustry/content/Blocks_321_2_16.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/Blocks_321_2_6.h"
#include "mindustry/content/Blocks_321_2_13.h"
#include "mindustry/content/Blocks_321_2_7.h"
#include "mindustry/content/Blocks_321_2_14.h"
#include "mindustry/content/Blocks_321_2_4.h"
#include "mindustry/content/Blocks_321_2_11.h"
#include "mindustry/content/Blocks_321_2_5.h"
#include "mindustry/content/Blocks_321_2_12.h"
#include "mindustry/content/Blocks_321_2_8.h"
#include "java/lang/String.h"
#include "mindustry/content/Blocks_321_2_9.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/content/Blocks_321.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"

extern "C" {


void mark_mindustry_content_Blocks$321$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_draw_DrawTurret(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$321$2 *) object;
	if (self->F_val$circleProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$circleProgress)->clazz)->markFunction)((jobject) self->F_val$circleProgress, mark, depth + 1);
	if (self->F_val$circleColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$circleColor)->clazz)->markFunction)((jobject) self->F_val$circleColor, mark, depth + 1);
	if (self->F_val$heatCol)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$heatCol)->clazz)->markFunction)((jobject) self->F_val$heatCol, mark, depth + 1);
	if (self->F_val$haloProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloProgress)->clazz)->markFunction)((jobject) self->F_val$haloProgress, mark, depth + 1);
	if (self->F_val$haloColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloColor)->clazz)->markFunction)((jobject) self->F_val$haloColor, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$321$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawTurret(ctx);
}

void init_mindustry_content_Blocks$321$2_mindustry_content_Blocks$321_java_lang_String_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float_float_float_float_arc_graphics_Color_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jobject param11, jfloat param12) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$321$2:<init>", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$321$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].o = param9;
	frame[11].o = param10;
	frame[12].o = param11;
	frame[13].f = param12;
	{
	LINE_NUMBER(6039);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress = (jref) (frame[3].o);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor = (jref) (frame[4].o);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke = (frame[5].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRad = (frame[6].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY = (frame[7].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed = (frame[8].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed = (frame[9].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol = (jref) (frame[10].o);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress = (jref) (frame[11].o);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor = (jref) (frame[12].o);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY = (frame[13].f);
	((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_draw_DrawTurret_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(6040);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_part_DrawPart, (17));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks$321$2$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$1);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$2$1_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRad), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks$321$2$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$2);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	jfloat temp2 = (jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$2$2_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, temp2, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRad), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_content_Blocks$321$2$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$3);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	jfloat temp4 = (jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$2$3_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, temp4, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleStroke), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRad), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp5 = jint(3);
	clinit_mindustry_content_Blocks$321$2$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$4);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	jfloat temp6 = (jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRotSpeed;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$2$4_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_float_arc_graphics_Color_float(ctx, sp[2].o, sp[3].o, sp[4].o, temp6, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp7 = jint(4);
	clinit_mindustry_content_Blocks$321$2$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$5);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleColor;
	init_mindustry_content_Blocks$321$2$5_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleRad), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$circleY));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(5);
	clinit_mindustry_content_Blocks$321$2$6(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$6);
	sp[3].o = frame[0].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"-mouth"_j));
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol;
	init_mindustry_content_Blocks$321$2$6_mindustry_content_Blocks$321$2_java_lang_String_arc_graphics_Color(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 6;
	clinit_mindustry_content_Blocks$321$2$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$7);
	init_mindustry_content_Blocks$321$2$7_mindustry_content_Blocks$321$2_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-end"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 7;
	clinit_mindustry_content_Blocks$321$2$8(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$8);
	sp[3].o = frame[0].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"-front"_j));
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol;
	init_mindustry_content_Blocks$321$2$8_mindustry_content_Blocks$321$2_java_lang_String_arc_graphics_Color(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 8;
	clinit_mindustry_content_Blocks$321$2$9(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$9);
	sp[3].o = frame[0].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"-back"_j));
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol;
	init_mindustry_content_Blocks$321$2$9_mindustry_content_Blocks$321$2_java_lang_String_arc_graphics_Color(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 9;
	clinit_mindustry_content_Blocks$321$2$10(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$10);
	sp[3].o = frame[0].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"-mid"_j));
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol;
	init_mindustry_content_Blocks$321$2$10_mindustry_content_Blocks$321$2_java_lang_String_arc_graphics_Color(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 10;
	clinit_mindustry_content_Blocks$321$2$11(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$11);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$11_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = 11;
	clinit_mindustry_content_Blocks$321$2$12(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$12);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$12_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = 12;
	clinit_mindustry_content_Blocks$321$2$13(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$13);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$13_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	jint temp16 = 13;
	clinit_mindustry_content_Blocks$321$2$14(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$14);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$14_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = 14;
	clinit_mindustry_content_Blocks$321$2$15(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$15);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$15_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	jint temp18 = 15;
	clinit_mindustry_content_Blocks$321$2$16(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$16);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$16_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	jint temp19 = 16;
	clinit_mindustry_content_Blocks$321$2$17(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$17);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	sp[5].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloColor;
	init_mindustry_content_Blocks$321$2$17_mindustry_content_Blocks$321$2_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, sp[5].o, ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed), ((jfloat)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(6251);
	sp[0].o = (jobject)((mindustry_content_Blocks$321$2 *) NULL_CHECK((frame[0].o)))->F_val$heatCol;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.1f)), (jfloat(0.1f)), (jfloat(0.1f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1.2f)));
	frame[14].o = sp[0].o;
	LINE_NUMBER(6252);
	frame[15].i = (jint(1));
	}
label_4:;
	{
	if ((frame[15].i) >= (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(6253);
	frame[16].i = (frame[15].i);
	LINE_NUMBER(6254);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	clinit_mindustry_content_Blocks$321$2$18(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321$2$18);
	init_mindustry_content_Blocks$321$2$18_mindustry_content_Blocks$321$2_java_lang_String_int_arc_graphics_Color(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-spine"_j))), (frame[16].i), (frame[14].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(6252);
	INST_IINC(15, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(6039);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$321$2[] {
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
	(void *) M_mindustry_world_draw_DrawTurret_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq,
	(void *) M_mindustry_world_draw_DrawTurret_draw_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawBlock_drawLight_mindustry_gen_Building,
	(void *) M_mindustry_world_draw_DrawTurret_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_draw_DrawTurret_load_mindustry_world_Block,
	(void *) M_mindustry_world_draw_DrawTurret_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_draw_DrawBlock_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter,
	(void *) M_mindustry_world_draw_DrawTurret_setAmmoParts_Array1_java_lang_Object,
	(void *) M_mindustry_world_draw_DrawTurret_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
	(void *) M_mindustry_world_draw_DrawTurret_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild,
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
	{ "setAmmoParts", "([Ljava/lang/Object;)V" },
	{ "drawTurret", "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V" },
	{ "drawHeat", "(Lmindustry/world/blocks/defense/turrets/Turret;Lmindustry/world/blocks/defense/turrets/Turret$TurretBuild;)V" },
};

static FieldMetadata fields[] {
	{ "val$circleProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_content_Blocks$321$2, F_val$circleProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 4112 },
	{ "val$circleColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2, F_val$circleColor), "Larc/graphics/Color;", 4112 },
	{ "val$circleStroke", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$circleStroke), "F", 4112 },
	{ "val$circleRad", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$circleRad), "F", 4112 },
	{ "val$circleY", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$circleY), "F", 4112 },
	{ "val$circleRotSpeed", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$circleRotSpeed), "F", 4112 },
	{ "val$haloRotSpeed", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$haloRotSpeed), "F", 4112 },
	{ "val$heatCol", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2, F_val$heatCol), "Larc/graphics/Color;", 4112 },
	{ "val$haloProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_content_Blocks$321$2, F_val$haloProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 4112 },
	{ "val$haloColor", &class_arc_graphics_Color, offsetof(mindustry_content_Blocks$321$2, F_val$haloColor), "Larc/graphics/Color;", 4112 },
	{ "val$haloY", &class_float, offsetof(mindustry_content_Blocks$321$2, F_val$haloY), "F", 4112 },
	{ "this$0", &class_mindustry_content_Blocks$321, offsetof(mindustry_content_Blocks$321$2, F_this$0), "Lmindustry/content/Blocks$321;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$321$2_mindustry_content_Blocks$321_java_lang_String_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float_float_float_float_arc_graphics_Color_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float, 0, "(Lmindustry/content/Blocks$321;Ljava/lang/String;Lmindustry/entities/part/DrawPart$PartProgress;Larc/graphics/Color;FFFFFLarc/graphics/Color;Lmindustry/entities/part/DrawPart$PartProgress;Larc/graphics/Color;F)V", 0 },
};

Class class_mindustry_content_Blocks$321$2{
		.nativeName = (intptr_t) "mindustry/content/Blocks$321$2",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawTurret,
		.size = sizeof(mindustry_content_Blocks$321$2),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$321$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$321$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$321$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$321$2 = registerClass(&class_mindustry_content_Blocks$321$2);

}

