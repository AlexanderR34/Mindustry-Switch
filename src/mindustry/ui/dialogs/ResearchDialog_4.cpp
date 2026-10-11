#include "mindustry/ui/dialogs/ResearchDialog_4.h"
#include "mindustry/type/ItemSeq.h"
#include "java/lang/Math.h"
#include "java/util/Iterator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/dialogs/ResearchDialog_4_invoke_arc_func_Cons2_1.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/type/Sector.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule_ItemConsumer.h"
#include "mindustry/ui/dialogs/ResearchDialog_4.h"
#include "java/lang/Object.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/content/Planets.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ui/dialogs/ResearchDialog_4_invoke_mindustry_world_modules_ItemModule_ItemConsumer_1.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_ItemSeq(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$4 *) object;
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_ItemSeq(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$4_mindustry_ui_dialogs_ResearchDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$4:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_type_ItemSeq(ctx, (frame[0].o));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_techTree;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[1].o))->F_lastNode;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_lastNode;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o != (frame[3].o)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	}
label_8:;
	LINE_NUMBER(224);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_9;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK(sp[0].o))->F_rootPlanets;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isFrozen_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_isFrozen_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_mindustry_type_Sector_items_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_items_R_mindustry_type_ItemSeq])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o), (frame[6].o));
	LINE_NUMBER(237);
	sp[0].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$4_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$4_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$4_invoke_mindustry_world_modules_ItemModule$ItemConsumer_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	LINE_NUMBER(242);
	goto label_14;
label_15:;
	LINE_NUMBER(243);
	goto label_11;
label_12:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$4_add_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$4:add", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(250);
	if ((frame[2].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ACONST_NULL();
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(255);
	frame[2].i = (-(frame[2].i));
	LINE_NUMBER(258);
	jdouble temp0 = jdouble((frame[2].i));
	jint temp1 = (jint)((func_mindustry_ui_dialogs_ResearchDialog$4_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ResearchDialog$4_get_mindustry_type_Item_R_int])(ctx, (frame[0].o), (frame[1].o));
	sp[0].d = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_type_ItemSeq, sp[0].o)))->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, (checkCast(ctx, &class_mindustry_type_ItemSeq, sp[0].o)), (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (sp[1].i - sp[2].i), (jint(1)));
	frame[4].d = (sp[0].d / (jdouble(temp0)));
	LINE_NUMBER(259);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[2].i);
	frame[6].o = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_cache;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$4_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$4_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$4_invoke_arc_func_Cons2_1);
		proxy->F_field3 = (frame[4].d);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(278);
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0)))) <= 0) goto label_12;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_12;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog$4 *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_type_ItemSeq, sp[0].o));
	LINE_NUMBER(280);
	if ((frame[7].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, (frame[7].o), (frame[1].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0)))));
	frame[8].i = temp1;
	LINE_NUMBER(283);
	((func_mindustry_type_Sector_removeItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_Sector_removeItem_mindustry_type_Item_int])(ctx, (frame[3].o), (frame[1].o), (frame[8].i));
	LINE_NUMBER(284);
	((func_mindustry_type_ItemSeq_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item_int])(ctx, (frame[7].o), (frame[1].o), (frame[8].i));
	LINE_NUMBER(286);
	sp[0].o = frame[6].o;
	jint temp2 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp2)) - (frame[8].i));
	}
label_12:;
	{
	LINE_NUMBER(291);
	frame[2].i = (-(frame[2].i));
	}
label_1:;
	{
	LINE_NUMBER(294);
	M_mindustry_type_ItemSeq_add_mindustry_type_Item_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ResearchDialog$4_lambda$add$0_Array1_int_mindustry_type_Sector_mindustry_type_Item_double_mindustry_type_Sector_mindustry_type_ItemSeq(jcontext ctx, jobject param0, jobject param1, jobject param2, jdouble param3, jobject param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$4:lambda$add$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$4(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].d = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(262);
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))) == 0) goto label_1;
	}
	{
	if ((frame[5].o) != (frame[1].o)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int])(ctx, (frame[6].o), (frame[2].o));
	frame[7].i = temp0;
	LINE_NUMBER(265);
	if ((frame[7].i) > 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)));
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, ((frame[3].d) * (jdouble((frame[7].i)))));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (jint(temp1)), (frame[7].i));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp2);
	frame[8].i = temp3;
	LINE_NUMBER(271);
	((func_mindustry_type_Sector_removeItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Sector_removeItem_mindustry_type_Item_int])(ctx, (frame[5].o), (frame[2].o), (frame[8].i));
	LINE_NUMBER(272);
	((func_mindustry_type_ItemSeq_remove_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_ItemSeq_remove_mindustry_type_Item_int])(ctx, (frame[6].o), (frame[2].o), (frame[8].i));
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jint temp4 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp4)) - (frame[8].i));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ResearchDialog$4_lambda$new$0_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$4:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_type_ItemSeq *) NULL_CHECK((frame[0].o)))->F_values;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + temp4);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	jint temp5 = (jint)((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_total;
	jint temp6 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[2].i), (jint(0)));
	((mindustry_type_ItemSeq *) NULL_CHECK(sp[0].o))->F_total = (temp5 + temp6);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$4[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_ItemSeq_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_type_ItemSeq_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_type_ItemSeq_write_arc_util_serialization_Json,
	(void *) M_mindustry_type_ItemSeq_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_type_ItemSeq_checkNegative,
	(void *) M_mindustry_type_ItemSeq_copy_R_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_ItemSeq_each_mindustry_world_modules_ItemModule$ItemConsumer,
	(void *) M_mindustry_type_ItemSeq_clear,
	(void *) M_mindustry_type_ItemSeq_toSeq_R_arc_struct_Seq,
	(void *) M_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_min_int,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_ItemSeq_R_boolean,
	(void *) M_mindustry_type_ItemSeq_has_mindustry_type_Item_int_R_boolean,
	(void *) M_mindustry_type_ItemSeq_get_mindustry_type_Item_R_int,
	(void *) M_mindustry_type_ItemSeq_set_mindustry_type_Item_int,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_world_modules_ItemModule,
	(void *) M_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_ItemSeq,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_add_mindustry_type_Item,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$4_add_mindustry_type_Item_int,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_ItemStack,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_Item,
	(void *) M_mindustry_type_ItemSeq_remove_mindustry_type_Item_int,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$4_lambda$new$0_mindustry_type_Item_int,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "checkNegative", "()V" },
	{ "copy", "()Lmindustry/type/ItemSeq;" },
	{ "each", "(Lmindustry/world/modules/ItemModule$ItemConsumer;)V" },
	{ "clear", "()V" },
	{ "toSeq", "()Larc/struct/Seq;" },
	{ "toArray", "()[Lmindustry/type/ItemStack;" },
	{ "min", "(I)V" },
	{ "has", "(Lmindustry/type/Item;)Z" },
	{ "has", "(Lmindustry/type/ItemSeq;)Z" },
	{ "has", "(Lmindustry/type/Item;I)Z" },
	{ "get", "(Lmindustry/type/Item;)I" },
	{ "set", "(Lmindustry/type/Item;I)V" },
	{ "add", "(Lmindustry/world/modules/ItemModule;)V" },
	{ "add", "([Lmindustry/type/ItemStack;)V" },
	{ "add", "(Lmindustry/type/ItemSeq;)V" },
	{ "add", "(Lmindustry/type/ItemStack;)V" },
	{ "add", "(Lmindustry/type/Item;)V" },
	{ "add", "(Lmindustry/type/Item;I)V" },
	{ "remove", "(Lmindustry/type/ItemStack;)V" },
	{ "remove", "(Lmindustry/type/Item;)V" },
	{ "remove", "(Lmindustry/type/Item;I)V" },
	{ "lambda$new$0", "(Lmindustry/type/Item;I)V" },
};

static FieldMetadata fields[] {
	{ "cache", &class_arc_struct_ObjectMap, offsetof(mindustry_ui_dialogs_ResearchDialog$4, F_cache), "Larc/struct/ObjectMap;", 0 },
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$4, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$4_mindustry_ui_dialogs_ResearchDialog, 0, "(Lmindustry/ui/dialogs/ResearchDialog;)V", 0 },
	{ "add", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$4_add_mindustry_type_Item_int, VTABLE_mindustry_ui_dialogs_ResearchDialog$4_add_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 1 },
	{ "lambda$add$0", (intptr_t) SM_mindustry_ui_dialogs_ResearchDialog$4_lambda$add$0_Array1_int_mindustry_type_Sector_mindustry_type_Item_double_mindustry_type_Sector_mindustry_type_ItemSeq, 0, "([ILmindustry/type/Sector;Lmindustry/type/Item;DLmindustry/type/Sector;Lmindustry/type/ItemSeq;)V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$4_lambda$new$0_mindustry_type_Item_int, VTABLE_mindustry_ui_dialogs_ResearchDialog$4_lambda$new$0_mindustry_type_Item_int, "(Lmindustry/type/Item;I)V", 4098 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$4{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$4",
		.parentClass = (intptr_t) &class_mindustry_type_ItemSeq,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$4),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$4,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$4 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$4);

}

