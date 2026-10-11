#include "mindustry/content/Blocks_308_6.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Blocks_308.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/Blocks_308_6.h"
#include "mindustry/content/Blocks_308_6_1.h"

extern "C" {


void mark_mindustry_content_Blocks$308$6(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Blocks$308$6 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$308$6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_draw_DrawTurret(ctx);
}

void init_mindustry_content_Blocks$308$6_mindustry_content_Blocks$308(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$308$6:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$308$6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4200);
	((mindustry_content_Blocks$308$6 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_draw_DrawTurret(ctx, (frame[0].o));
	LINE_NUMBER(4201);
	frame[2].i = (jint(3));
	}
label_2:;
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_3;
	{
	LINE_NUMBER(4202);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(4203);
	sp[0].o = (jobject)((mindustry_world_draw_DrawTurret *) NULL_CHECK((frame[0].o)))->F_parts;
	clinit_mindustry_content_Blocks$308$6$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_content_Blocks$308$6$1);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"-barrel-\u0001"_j.string, 1, boxInteger(ctx, (frame[2].i)));
	init_mindustry_content_Blocks$308$6$1_mindustry_content_Blocks$308$6_java_lang_String_int(ctx, sp[1].o, sp[2].o, sp[3].o, (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(4201);
	INST_IINC(2, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(4200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$308$6[] {
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
	{ "this$0", &class_mindustry_content_Blocks$308, offsetof(mindustry_content_Blocks$308$6, F_this$0), "Lmindustry/content/Blocks$308;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$308$6_mindustry_content_Blocks$308, 0, "(Lmindustry/content/Blocks$308;)V", 0 },
};

Class class_mindustry_content_Blocks$308$6{
		.nativeName = (intptr_t) "mindustry/content/Blocks$308$6",
		.parentClass = (intptr_t) &class_mindustry_world_draw_DrawTurret,
		.size = sizeof(mindustry_content_Blocks$308$6),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$308$6,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$308$6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$308$6,
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
static bool registered_mindustry_content_Blocks$308$6 = registerClass(&class_mindustry_content_Blocks$308$6);

}

