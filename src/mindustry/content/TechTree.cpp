#include "mindustry/content/TechTree.h"
#include "mindustry/content/TechTree_invoke_java_lang_Runnable_1.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "arc/util/Nullable.h"
#include "mindustry/content/TechTree.h"
#include "mindustry/game/Objectives_Objective.h"
#include "java/lang/Runnable.h"
#include "mindustry/game/Objectives_Produce.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/content/TechTree_invoke_arc_func_Boolf_1.h"
#include "mindustry/game/Objectives_SectorComplete.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {

jobject SF_mindustry_content_TechTree_context;
jobject SF_mindustry_content_TechTree_all;
jobject SF_mindustry_content_TechTree_roots;

void mark_mindustry_content_TechTree(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_TechTree_context)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_TechTree_context)->clazz)->markFunction)((jobject) SF_mindustry_content_TechTree_context, mark, depth + 1);
		if (SF_mindustry_content_TechTree_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_TechTree_all)->clazz)->markFunction)((jobject) SF_mindustry_content_TechTree_all, mark, depth + 1);
		if (SF_mindustry_content_TechTree_roots)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_TechTree_roots)->clazz)->markFunction)((jobject) SF_mindustry_content_TechTree_roots, mark, depth + 1);
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
	auto self = (mindustry_content_TechTree *) object;
}

void init_mindustry_content_TechTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:nodeRoot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_boolean_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_boolean_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:nodeRoot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[4].o)))->F_name = (jref) (frame[0].o);
	LINE_NUMBER(26);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[4].o)))->F_requiresUnlock = (frame[2].i);
	LINE_NUMBER(27);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_roots;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:node", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:node", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:node", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(40);
	clinit_mindustry_content_TechTree$TechNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_TechTree$TechNode);
	clinit_mindustry_content_TechTree(ctx);
	sp[1].o = (jobject)SF_mindustry_content_TechTree_context;
	init_mindustry_content_TechTree$TechNode_mindustry_content_TechTree$TechNode_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(41);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[4].o)))->F_objectives;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(46);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_context;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_context;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_content;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_type_SectorPreset)) == 0) goto label_4;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_type_SectorPreset, (frame[6].o)));
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[4].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_content_TechTree_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_content_TechTree_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_content_TechTree_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[4].o)))->F_objectives;
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[1].o, (frame[5].o));
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(50);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_context;
	frame[5].o = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_content_TechTree(ctx);
	SF_mindustry_content_TechTree_context = (frame[4].o);
	LINE_NUMBER(52);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(53);
	clinit_mindustry_content_TechTree(ctx);
	SF_mindustry_content_TechTree_context = (frame[5].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:node", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:node", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_TechTree_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_content_TechTree_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_content_TechTree_invoke_java_lang_Runnable_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:nodeProduce", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	sp[2].o = frame[1].o;
	clinit_mindustry_game_Objectives$Produce(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Produce);
	init_mindustry_game_Objectives$Produce_mindustry_ctype_UnlockableContent(ctx, sp[3].o, (frame[0].o));
	sp[2].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:nodeProduce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_content_TechTree_context_R_mindustry_content_TechTree$TechNode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:context", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	{
	LINE_NUMBER(75);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_context;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_TechTree_lambda$node$1(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/TechTree:lambda$node$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_content_TechTree_lambda$node$0_mindustry_type_SectorPreset_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:lambda$node$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(46);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_game_Objectives$SectorComplete)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Objectives$SectorComplete, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_game_Objectives$SectorComplete *) NULL_CHECK((frame[2].o)))->F_preset;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void clinit_mindustry_content_TechTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/TechTree:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_TechTree(ctx);
	{
	LINE_NUMBER(14);
	clinit_mindustry_content_TechTree(ctx);
	SF_mindustry_content_TechTree_context = (jobject(nullptr));
	LINE_NUMBER(16);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_content_TechTree(ctx);
	SF_mindustry_content_TechTree_all = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_content_TechTree(ctx);
	SF_mindustry_content_TechTree_roots = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_content_TechTree;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method context
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_content_TechTree[] {
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
};

static jclass innerClasses[] {
	&class_mindustry_content_TechTree$TechNode,
};

static FieldMetadata fields[] {
	{ "context", &class_mindustry_content_TechTree$TechNode, (intptr_t) &SF_mindustry_content_TechTree_context, "Lmindustry/content/TechTree$TechNode;", 10 },
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_content_TechTree_all, "Larc/struct/Seq;", 9 },
	{ "roots", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_content_TechTree_roots, "Larc/struct/Seq;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_TechTree, 0, "()V", 1 },
	{ "nodeRoot", (intptr_t) SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "nodeRoot", (intptr_t) SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_boolean_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Ljava/lang/String;Lmindustry/ctype/UnlockableContent;ZLjava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "node", (intptr_t) SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "node", (intptr_t) SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;[Lmindustry/type/ItemStack;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "node", (intptr_t) SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;[Lmindustry/type/ItemStack;Larc/struct/Seq;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "node", (intptr_t) SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;Larc/struct/Seq;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "node", (intptr_t) SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "nodeProduce", (intptr_t) SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;Larc/struct/Seq;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "nodeProduce", (intptr_t) SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode, 0, "(Lmindustry/ctype/UnlockableContent;Ljava/lang/Runnable;)Lmindustry/content/TechTree$TechNode;", 9 },
	{ "context", (intptr_t) SM_mindustry_content_TechTree_context_R_mindustry_content_TechTree$TechNode, 0, "()Lmindustry/content/TechTree$TechNode;", 9 },
	{ "lambda$node$1", (intptr_t) SM_mindustry_content_TechTree_lambda$node$1, 0, "()V", 4106 },
	{ "lambda$node$0", (intptr_t) SM_mindustry_content_TechTree_lambda$node$0_mindustry_type_SectorPreset_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/type/SectorPreset;Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_content_TechTree, 0, "()V", 8 },
};

Class class_mindustry_content_TechTree{
		.nativeName = (intptr_t) "mindustry/content/TechTree",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_TechTree),
		.classVtable = (intptr_t) vtable_mindustry_content_TechTree,
		.staticInitializer = (intptr_t) clinit_mindustry_content_TechTree,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_content_TechTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_TechTree = registerClass(&class_mindustry_content_TechTree);

}
