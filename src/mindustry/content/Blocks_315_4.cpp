#include "mindustry/content/Blocks_315_4.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "mindustry/content/Blocks_315.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Blocks_315_4_2.h"
#include "mindustry/content/Blocks_315_4_1.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/content/Blocks_315_4.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/part/DrawPart.h"

extern "C" {


void mark_mindustry_content_Blocks$315$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$315$4 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$315$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawTurret(ctx);
}

void init_mindustry_content_Blocks$315$4_mindustry_content_Blocks$315_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$315$4:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$315$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(4842);
	((mindustry_content_Blocks$315$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_draw_DrawTurret_java_lang_String(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(4843);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_entities_part_DrawPart, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks$315$4$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$315$4$1);
	init_mindustry_content_Blocks$315$4$1_mindustry_content_Blocks$315$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-barrel"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks$315$4$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_content_Blocks$315$4$2);
	init_mindustry_content_Blocks$315$4$2_mindustry_content_Blocks$315$4_java_lang_String(ctx, sp[2].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"-side"_j))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(4842);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$315$4[] {
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
	{ "this$0", &class_mindustry_content_Blocks$315, offsetof(mindustry_content_Blocks$315$4, F_this$0), "Lmindustry/content/Blocks$315;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$315$4_mindustry_content_Blocks$315_java_lang_String, 0, "(Lmindustry/content/Blocks$315;Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_Blocks$315$4{
		.nativeName = (intptr_t) "mindustry/content/Blocks$315$4",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawTurret,
		.size = sizeof(mindustry_content_Blocks$315$4),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$315$4,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$315$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$315$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$315$4 = registerClass(&class_mindustry_content_Blocks$315$4);

}

