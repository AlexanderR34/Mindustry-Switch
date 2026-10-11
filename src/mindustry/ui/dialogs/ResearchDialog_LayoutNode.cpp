#include "mindustry/ui/dialogs/ResearchDialog_LayoutNode.h"
#include "arc/func/Func.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/ResearchDialog_LayoutNode.h"
#include "mindustry/ui/dialogs/ResearchDialog_LayoutNode_invoke_arc_func_Func_1.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog_TechTreeNode.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$LayoutNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_layout_TreeLayout$TreeNode(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$LayoutNode *) object;
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_layout_TreeLayout$TreeNode(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$LayoutNode_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog$LayoutNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$LayoutNode:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(415);
	((mindustry_ui_dialogs_ResearchDialog$LayoutNode *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_ui_layout_TreeLayout$TreeNode(ctx, (frame[0].o));
	LINE_NUMBER(416);
	((mindustry_ui_dialogs_ResearchDialog$LayoutNode *) NULL_CHECK((frame[0].o)))->F_node = (jref) (frame[2].o);
	LINE_NUMBER(417);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[3].o);
	LINE_NUMBER(418);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[1].o)))->F_nodeSize;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[1].o))->F_height = temp0;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 1), sp[1].o)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ResearchDialog$LayoutNode_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$LayoutNode_invoke_arc_func_Func_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_ui_dialogs_ResearchDialog$LayoutNode)));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_children = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_ui_layout_TreeLayout$TreeNode, 1), sp[1].o));
	}
label_5:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_ResearchDialog$LayoutNode_lambda$new$0_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_mindustry_ui_dialogs_ResearchDialog$LayoutNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$LayoutNode:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(420);
	clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$LayoutNode);
	init_mindustry_ui_dialogs_ResearchDialog$LayoutNode_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog$LayoutNode(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$LayoutNode[] {
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
	(void *) M_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean,
	(void *) M_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float,
	(void *) M_mindustry_ui_dialogs_ResearchDialog$LayoutNode_lambda$new$0_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
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
	{ "isLeaf", "()Z" },
	{ "calcWidth", "()F" },
	{ "lambda$new$0", "(Lmindustry/ui/dialogs/ResearchDialog;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;" },
};

static FieldMetadata fields[] {
	{ "node", &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, offsetof(mindustry_ui_dialogs_ResearchDialog$LayoutNode, F_node), "Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;", 16 },
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$LayoutNode, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$LayoutNode_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog$LayoutNode, 0, "(Lmindustry/ui/dialogs/ResearchDialog;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_dialogs_ResearchDialog$LayoutNode_lambda$new$0_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_mindustry_ui_dialogs_ResearchDialog$LayoutNode, VTABLE_mindustry_ui_dialogs_ResearchDialog$LayoutNode_lambda$new$0_mindustry_ui_dialogs_ResearchDialog_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_R_mindustry_ui_dialogs_ResearchDialog$LayoutNode, "(Lmindustry/ui/dialogs/ResearchDialog;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)Lmindustry/ui/dialogs/ResearchDialog$LayoutNode;", 4098 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$LayoutNode{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$LayoutNode",
		.parentClass = (intptr_t) &class_mindustry_ui_layout_TreeLayout$TreeNode,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$LayoutNode),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$LayoutNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_ResearchDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$LayoutNode = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$LayoutNode);

}

