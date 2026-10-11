#include "mindustry/world/blocks/defense/turrets/ItemTurret_1.h"
#include "mindustry/ui/MultiReqImage.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_1_invoke_arc_func_Cons_1.h"
#include "arc/func/Boolp.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_1_invoke_arc_func_Boolf_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemEntry.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/ui/ReqImage.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/meta/Stats.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemTurretBuild.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "mindustry/gen/Building.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_1_invoke_arc_func_Boolp_1.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_1.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_world_blocks_defense_turrets_ItemTurret$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_consumers_ConsumeItemFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_defense_turrets_ItemTurret$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_consumers_ConsumeItemFilter(ctx);
}

void init_mindustry_world_blocks_defense_turrets_ItemTurret$1_mindustry_world_blocks_defense_turrets_ItemTurret_arc_func_Boolf(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(72);
	((mindustry_world_blocks_defense_turrets_ItemTurret$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_consumers_ConsumeItemFilter_arc_func_Boolf(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(75);
	clinit_mindustry_ui_MultiReqImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_MultiReqImage);
	init_mindustry_ui_MultiReqImage(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(76);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_defense_turrets_ItemTurret$1_efficiency_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:efficiency", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_ammo;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	jint temp0 = (jint)((mindustry_world_blocks_defense_turrets_Turret$AmmoEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry, sp[0].o))))->F_amount;
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK(sp[0].o))->F_ammoPerShot)) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_cheating_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild_cheating_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_FCONST(1);
	goto label_4;
label_1:;
	INST_FCONST(0);
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_defense_turrets_ItemTurret$1_display_mindustry_world_meta_Stats(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:display", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:lambda$build$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_ReqImage(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_ReqImage);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[3].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$1_invoke_arc_func_Boolp_1);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_ReqImage_arc_scene_Element_arc_func_Boolp(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_MultiReqImage_add_mindustry_ui_ReqImage])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$2_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:lambda$build$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(78);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_ammo;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_Turret$TurretBuild *) NULL_CHECK((frame[2].o)))->F_ammo;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry, sp[0].o))))->F_item;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$0_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/defense/turrets/ItemTurret$1:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItemFilter *) NULL_CHECK((frame[0].o)))->F_filter;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Item_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Item_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
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

void *vtable_mindustry_world_blocks_defense_turrets_ItemTurret$1[] {
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
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_apply_mindustry_world_Block,
	(void *) M_mindustry_world_consumers_Consume_optional_boolean_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_boost_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_update_boolean_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_consumers_Consume_ignore_R_boolean,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_trigger_mindustry_gen_Building,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_update_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_efficiency_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_efficiencyMultiplier_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_display_mindustry_world_meta_Stats,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_getConsumed_mindustry_gen_Building_R_mindustry_type_Item,
	(void *) M_mindustry_world_consumers_ConsumeItemFilter_itemEfficiencyMultiplier_mindustry_type_Item_R_float,
	(void *) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$0_mindustry_type_Item_R_boolean,
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
	{ "apply", "(Lmindustry/world/Block;)V" },
	{ "optional", "(ZZ)Lmindustry/world/consumers/Consume;" },
	{ "boost", "()Lmindustry/world/consumers/Consume;" },
	{ "update", "(Z)Lmindustry/world/consumers/Consume;" },
	{ "ignore", "()Z" },
	{ "build", "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V" },
	{ "trigger", "(Lmindustry/gen/Building;)V" },
	{ "update", "(Lmindustry/gen/Building;)V" },
	{ "efficiency", "(Lmindustry/gen/Building;)F" },
	{ "efficiencyMultiplier", "(Lmindustry/gen/Building;)F" },
	{ "display", "(Lmindustry/world/meta/Stats;)V" },
	{ "getConsumed", "(Lmindustry/gen/Building;)Lmindustry/type/Item;" },
	{ "itemEfficiencyMultiplier", "(Lmindustry/type/Item;)F" },
	{ "lambda$build$0", "(Lmindustry/type/Item;)Z" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_world_blocks_defense_turrets_ItemTurret, offsetof(mindustry_world_blocks_defense_turrets_ItemTurret$1, F_this$0), "Lmindustry/world/blocks/defense/turrets/ItemTurret;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_defense_turrets_ItemTurret$1_mindustry_world_blocks_defense_turrets_ItemTurret_arc_func_Boolf, 0, "(Lmindustry/world/blocks/defense/turrets/ItemTurret;Larc/func/Boolf;)V", 0 },
	{ "build", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$1_build_mindustry_gen_Building_arc_scene_ui_layout_Table, "(Lmindustry/gen/Building;Larc/scene/ui/layout/Table;)V", 1 },
	{ "efficiency", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_efficiency_mindustry_gen_Building_R_float, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$1_efficiency_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 1 },
	{ "display", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_display_mindustry_world_meta_Stats, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$1_display_mindustry_world_meta_Stats, "(Lmindustry/world/meta/Stats;)V", 1 },
	{ "lambda$build$1", (intptr_t) SM_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$1_mindustry_ui_MultiReqImage_mindustry_gen_Building_mindustry_type_Item, 0, "(Lmindustry/ui/MultiReqImage;Lmindustry/gen/Building;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$build$2", (intptr_t) SM_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$2_mindustry_gen_Building_mindustry_type_Item_R_boolean, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$build$0", (intptr_t) M_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$0_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_blocks_defense_turrets_ItemTurret$1_lambda$build$0_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 4098 },
};

Class class_mindustry_world_blocks_defense_turrets_ItemTurret$1{
		.nativeName = (intptr_t) "mindustry/world/blocks/defense/turrets/ItemTurret$1",
		.parentClass = (intptr_t) &class_mindustry_world_consumers_ConsumeItemFilter,
		.size = sizeof(mindustry_world_blocks_defense_turrets_ItemTurret$1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_defense_turrets_ItemTurret$1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_defense_turrets_ItemTurret$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_defense_turrets_ItemTurret$1,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_defense_turrets_ItemTurret$1 = registerClass(&class_mindustry_world_blocks_defense_turrets_ItemTurret$1);

}

