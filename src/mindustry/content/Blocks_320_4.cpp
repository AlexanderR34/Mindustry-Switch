#include "mindustry/content/Blocks_320_4.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "mindustry/content/Blocks_320_4_7.h"
#include "mindustry/content/Blocks_320_4_8.h"
#include "mindustry/content/Blocks_320_4_9.h"
#include "mindustry/content/Blocks_320_4.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/content/Blocks_320.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "java/lang/String.h"
#include "mindustry/content/Blocks_320_4_10.h"
#include "mindustry/content/Blocks_320_4_11.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/Blocks_320_4_3.h"
#include "mindustry/content/Blocks_320_4_4.h"
#include "mindustry/content/Blocks_320_4_5.h"
#include "mindustry/content/Blocks_320_4_12.h"
#include "mindustry/content/Blocks_320_4_6.h"
#include "mindustry/content/Blocks_320_4_13.h"
#include "mindustry/content/Blocks_320_4_1.h"
#include "mindustry/content/Blocks_320_4_2.h"

extern "C" {


void mark_mindustry_content_Blocks$320$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$320$4 *) object;
	if (self->F_val$haloProgress)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$haloProgress)->clazz)->markFunction)((jobject) self->F_val$haloProgress, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$320$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawTurret(ctx);
}

void init_mindustry_content_Blocks$320$4_mindustry_content_Blocks$320_java_lang_String_float_float_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$320$4:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$320$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(5771);
	((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY = (frame[3].f);
	((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed = (frame[4].f);
	((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress = (jref) (frame[5].o);
	((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_draw_DrawTurret_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(5772);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_part_DrawPart, (11));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks$320$4$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$1);
	init_mindustry_content_Blocks$320$4$1_mindustry_content_Blocks$320$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-mid"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks$320$4$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$2);
	init_mindustry_content_Blocks$320$4$2_mindustry_content_Blocks$320$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-blade"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Blocks$320$4$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$3);
	init_mindustry_content_Blocks$320$4$3_mindustry_content_Blocks$320$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-front"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Blocks$320$4$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$4);
	init_mindustry_content_Blocks$320$4$4_mindustry_content_Blocks$320$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-back"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_Blocks$320$4$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$5);
	init_mindustry_content_Blocks$320$4$5_mindustry_content_Blocks$320$4_float_float(ctx, sp[2].o, (frame[0].o), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_Blocks$320$4$6(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$6);
	init_mindustry_content_Blocks$320$4$6_mindustry_content_Blocks$320$4_float_float(ctx, sp[2].o, (frame[0].o), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_content_Blocks$320$4$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$7);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	init_mindustry_content_Blocks$320$4$7_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float(ctx, sp[2].o, sp[3].o, sp[4].o, ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_content_Blocks$320$4$8(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$8);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	init_mindustry_content_Blocks$320$4$8_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float(ctx, sp[2].o, sp[3].o, sp[4].o, ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY));
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_content_Blocks$320$4$9(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$9);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	init_mindustry_content_Blocks$320$4$9_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed));
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	clinit_mindustry_content_Blocks$320$4$10(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$10);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	init_mindustry_content_Blocks$320$4$10_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed));
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	clinit_mindustry_content_Blocks$320$4$11(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$11);
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloProgress;
	init_mindustry_content_Blocks$320$4$11_mindustry_content_Blocks$320$4_mindustry_entities_part_DrawPart$PartProgress_float_float(ctx, sp[2].o, sp[3].o, sp[4].o, ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloY), ((jfloat)((mindustry_content_Blocks$320$4 *) NULL_CHECK((frame[0].o)))->F_val$haloRotSpeed));
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5902);
	frame[6].i = (jint(0));
	}
label_3:;
	{
	if ((frame[6].i) >= (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(5903);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(5904);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	clinit_mindustry_content_Blocks$320$4$12(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$12);
	init_mindustry_content_Blocks$320$4$12_mindustry_content_Blocks$320$4_java_lang_String_int(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-blade-bar"_j))), (frame[7].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5902);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(5919);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (jint(4))) goto label_9;
	}
	{
	LINE_NUMBER(5920);
	frame[7].i = (frame[6].i);
	LINE_NUMBER(5921);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	clinit_mindustry_content_Blocks$320$4$13(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320$4$13);
	init_mindustry_content_Blocks$320$4$13_mindustry_content_Blocks$320$4_java_lang_String_int(ctx, sp[1].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-spine"_j))), (frame[7].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(5919);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(5771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$320$4[] {
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
	{ "val$haloY", &class_float, offsetof(mindustry_content_Blocks$320$4, F_val$haloY), "F", 4112 },
	{ "val$haloRotSpeed", &class_float, offsetof(mindustry_content_Blocks$320$4, F_val$haloRotSpeed), "F", 4112 },
	{ "val$haloProgress", &class_mindustry_entities_part_DrawPart$PartProgress, offsetof(mindustry_content_Blocks$320$4, F_val$haloProgress), "Lmindustry/entities/part/DrawPart$PartProgress;", 4112 },
	{ "this$0", &class_mindustry_content_Blocks$320, offsetof(mindustry_content_Blocks$320$4, F_this$0), "Lmindustry/content/Blocks$320;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$320$4_mindustry_content_Blocks$320_java_lang_String_float_float_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/content/Blocks$320;Ljava/lang/String;FFLmindustry/entities/part/DrawPart$PartProgress;)V", 0 },
};

Class class_mindustry_content_Blocks$320$4{
		.nativeName = (intptr_t) "mindustry/content/Blocks$320$4",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawTurret,
		.size = sizeof(mindustry_content_Blocks$320$4),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$320$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$320$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$320$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$320$4 = registerClass(&class_mindustry_content_Blocks$320$4);

}

