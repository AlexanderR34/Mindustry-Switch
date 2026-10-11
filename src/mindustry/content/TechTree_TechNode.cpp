#include "mindustry/content/TechTree_TechNode.h"
#include "java/lang/Integer.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Objectives_Research.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/content/TechTree_TechNode_invoke_arc_func_Cons_3.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/TechTree_TechNode_invoke_arc_func_Cons_5.h"
#include "mindustry/content/TechTree_TechNode_invoke_arc_func_Cons_4.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/ObjectSet.h"

extern "C" {


void mark_mindustry_content_TechTree$TechNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_TechTree$TechNode *) object;
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_rootNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootNode)->clazz)->markFunction)((jobject) self->F_rootNode, mark, depth + 1);
	if (self->F_researchCostMultipliers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_researchCostMultipliers)->clazz)->markFunction)((jobject) self->F_researchCostMultipliers, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_requirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requirements)->clazz)->markFunction)((jobject) self->F_requirements, mark, depth + 1);
	if (self->F_finishedRequirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_finishedRequirements)->clazz)->markFunction)((jobject) self->F_finishedRequirements, mark, depth + 1);
	if (self->F_objectives)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectives)->clazz)->markFunction)((jobject) self->F_objectives, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
}

void clinit_mindustry_content_TechTree$TechNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_TechTree$TechNode_mindustry_content_TechTree$TechNode_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree$TechNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(104);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(86);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_requiresUnlock = (jint(0));
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_objectives = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(105);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_rootNode;
	sp += 1;
	if (sp[0].o != nullptr) goto label_8;
	}
	INST_ALOAD(1);
	goto label_9;
label_8:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[-1].o))->F_rootNode;
label_9:;
	{
	sp -= 2;
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_rootNode = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_planet;
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_researchCostMultipliers;
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_researchCostMultipliers = (jref) sp[1].o;
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_researchCostMultipliers;
	if (sp[0].o != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_researchCostMultipliers = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(114);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[1].o);
	LINE_NUMBER(115);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content = (jref) (frame[2].o);
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_16;
	}
	INST_ICONST(0);
	goto label_17;
label_16:;
	{
	jint temp0 = ((jint)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_depth) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 2;
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_depth = sp[1].i;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_researchCostMultipliers;
	if (((jint)((arc_struct_ObjectFloatMap *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_mindustry_type_ItemStack_copy_Array1_mindustry_type_ItemStack_R_Array1_mindustry_type_ItemStack(ctx, (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(120);
	frame[4].o = (frame[3].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_22:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_19;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(121);
	sp[0].o = frame[7].o;
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount));
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_researchCostMultipliers;
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_item;
	jfloat temp1 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[1].o, sp[2].o, (jfloat(1)));
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = (jint((temp0 * temp1)));
	LINE_NUMBER(120);
	INST_IINC(6, 1);
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(125);
	((func_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(127);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_3);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(136);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_techNode = (jref) (frame[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[2].o)))->F_techNodes;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(138);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:each", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(145);
	((func_mindustry_content_TechTree$TechNode_each_arc_func_Cons) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_each_arc_func_Cons])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(146);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:addDatabaseTab", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_content_TechTree$TechNode_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:addPlanet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_content_TechTree$TechNode_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_content_TechTree$TechNode_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:icon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_icon;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_arc_scene_style_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_style_TextureRegionDrawable);
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_uiIcon;
	init_arc_scene_style_TextureRegionDrawable_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[-1].o))->F_icon;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:localizedName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"techtree.\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:setupRequirements", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(168);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_requirements = (jref) (frame[1].o);
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_finishedRequirements = (jref) sp[1].o;
	LINE_NUMBER(172);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_finishedRequirements;
	jint temp0 = frame[2].i;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_item;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_settings;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	jobject temp2 = sp[2].o;
	sp[2].o = temp1;
	jobject temp3 = sp[3].o;
	sp[3].o = temp1;
	sp[4].o = temp2;
	sp += 5;
	if (temp3 != nullptr) goto label_7;
	}
	INST_ICONST(0);
	goto label_8;
label_7:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_item;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"req-\u0001-\u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	}
label_8:;
	{
	sp -= 6;
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[2].o, sp[4].o, sp[5].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(172);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_finishedRequirements;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(180);
	((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount = (jint(0));
	LINE_NUMBER(179);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(182);
	((func_mindustry_content_TechTree$TechNode_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_save])(ctx, (frame[0].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_children;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:save", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_finishedRequirements;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"req-\u0001-\u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(200);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	if (temp0 == ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount)) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(197);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_TechTree$TechNode_lambda$addPlanet$0_mindustry_type_Planet_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:lambda$addPlanet$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree$TechNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_shownPlanets;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_TechTree$TechNode_lambda$addDatabaseTab$0_mindustry_ctype_UnlockableContent_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:lambda$addDatabaseTab$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree$TechNode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_databaseTabs;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree$TechNode:lambda$new$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[0].o)))->F_objectives;
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_content_TechTree$TechNode;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field icon
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field name
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field rootNode
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field researchCostMultipliers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field planet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_content_TechTree$TechNode[] {
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
	(void *) M_mindustry_content_TechTree$TechNode_each_arc_func_Cons,
	(void *) M_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet,
	(void *) M_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable,
	(void *) M_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String,
	(void *) M_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_content_TechTree$TechNode_reset,
	(void *) M_mindustry_content_TechTree$TechNode_remove,
	(void *) M_mindustry_content_TechTree$TechNode_save,
	(void *) M_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent,
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
	{ "each", "(Larc/func/Cons;)V" },
	{ "addDatabaseTab", "(Lmindustry/ctype/UnlockableContent;)V" },
	{ "addPlanet", "(Lmindustry/type/Planet;)V" },
	{ "icon", "()Larc/scene/style/Drawable;" },
	{ "localizedName", "()Ljava/lang/String;" },
	{ "setupRequirements", "([Lmindustry/type/ItemStack;)V" },
	{ "reset", "()V" },
	{ "remove", "()V" },
	{ "save", "()V" },
	{ "lambda$new$0", "(Larc/struct/ObjectSet;Lmindustry/ctype/UnlockableContent;)V" },
};

static FieldMetadata fields[] {
	{ "depth", &class_int, offsetof(mindustry_content_TechTree$TechNode, F_depth), "I", 1 },
	{ "icon", &class_arc_scene_style_Drawable, offsetof(mindustry_content_TechTree$TechNode, F_icon), "Larc/scene/style/Drawable;", 1 },
	{ "name", &class_java_lang_String, offsetof(mindustry_content_TechTree$TechNode, F_name), "Ljava/lang/String;", 1 },
	{ "requiresUnlock", &class_boolean, offsetof(mindustry_content_TechTree$TechNode, F_requiresUnlock), "Z", 1 },
	{ "parent", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_content_TechTree$TechNode, F_parent), "Lmindustry/content/TechTree$TechNode;", 1 },
	{ "rootNode", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_content_TechTree$TechNode, F_rootNode), "Lmindustry/content/TechTree$TechNode;", 1 },
	{ "researchCostMultipliers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_content_TechTree$TechNode, F_researchCostMultipliers), "Larc/struct/ObjectFloatMap;", 1 },
	{ "content", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_content_TechTree$TechNode, F_content), "Lmindustry/ctype/UnlockableContent;", 1 },
	{ "requirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_content_TechTree$TechNode, F_requirements), "[Lmindustry/type/ItemStack;", 1 },
	{ "finishedRequirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_content_TechTree$TechNode, F_finishedRequirements), "[Lmindustry/type/ItemStack;", 1 },
	{ "objectives", &class_arc_struct_Seq, offsetof(mindustry_content_TechTree$TechNode, F_objectives), "Larc/struct/Seq;", 1 },
	{ "children", &class_arc_struct_Seq, offsetof(mindustry_content_TechTree$TechNode, F_children), "Larc/struct/Seq;", 17 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_content_TechTree$TechNode, F_planet), "Lmindustry/type/Planet;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_TechTree$TechNode_mindustry_content_TechTree$TechNode_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack, 0, "(Lmindustry/content/TechTree$TechNode;Lmindustry/ctype/UnlockableContent;[Lmindustry/type/ItemStack;)V", 1 },
	{ "each", (intptr_t) M_mindustry_content_TechTree$TechNode_each_arc_func_Cons, VTABLE_mindustry_content_TechTree$TechNode_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "addDatabaseTab", (intptr_t) M_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent, VTABLE_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "addPlanet", (intptr_t) M_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet, VTABLE_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 1 },
	{ "icon", (intptr_t) M_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable, VTABLE_mindustry_content_TechTree$TechNode_icon_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 1 },
	{ "localizedName", (intptr_t) M_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String, VTABLE_mindustry_content_TechTree$TechNode_localizedName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setupRequirements", (intptr_t) M_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack, VTABLE_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack, "([Lmindustry/type/ItemStack;)V", 1 },
	{ "reset", (intptr_t) M_mindustry_content_TechTree$TechNode_reset, VTABLE_mindustry_content_TechTree$TechNode_reset, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_content_TechTree$TechNode_remove, VTABLE_mindustry_content_TechTree$TechNode_remove, "()V", 1 },
	{ "save", (intptr_t) M_mindustry_content_TechTree$TechNode_save, VTABLE_mindustry_content_TechTree$TechNode_save, "()V", 1 },
	{ "lambda$addPlanet$0", (intptr_t) SM_mindustry_content_TechTree$TechNode_lambda$addPlanet$0_mindustry_type_Planet_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/type/Planet;Lmindustry/content/TechTree$TechNode;)V", 4106 },
	{ "lambda$addDatabaseTab$0", (intptr_t) SM_mindustry_content_TechTree$TechNode_lambda$addDatabaseTab$0_mindustry_ctype_UnlockableContent_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;Lmindustry/content/TechTree$TechNode;)V", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent, VTABLE_mindustry_content_TechTree$TechNode_lambda$new$0_arc_struct_ObjectSet_mindustry_ctype_UnlockableContent, "(Larc/struct/ObjectSet;Lmindustry/ctype/UnlockableContent;)V", 4098 },
};

Class class_mindustry_content_TechTree$TechNode{
		.nativeName = (intptr_t) "mindustry/content/TechTree$TechNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_TechTree$TechNode),
		.classVtable = (intptr_t) vtable_mindustry_content_TechTree$TechNode,
		.staticInitializer = (intptr_t) clinit_mindustry_content_TechTree$TechNode,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_content_TechTree$TechNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_content_TechTree,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_TechTree$TechNode = registerClass(&class_mindustry_content_TechTree$TechNode);

}

