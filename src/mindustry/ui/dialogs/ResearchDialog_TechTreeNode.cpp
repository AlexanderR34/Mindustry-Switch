#include "mindustry/ui/dialogs/ResearchDialog_TechTreeNode.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog_TechTreeNode.h"
#include "mindustry/content/TechTree_TechNode.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) object;
	if (self->F_node)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_node)->clazz)->markFunction)((jobject) self->F_node, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_layout_TreeLayout$TreeNode(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$TechTreeNode:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(429);
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_ui_layout_TreeLayout$TreeNode(ctx, (frame[0].o));
	LINE_NUMBER(427);
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_visible = (jint(1));
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_selectable = (jint(1));
	LINE_NUMBER(430);
	((mindustry_ui_dialogs_ResearchDialog$TechTreeNode *) NULL_CHECK((frame[0].o)))->F_node = (jref) (frame[2].o);
	LINE_NUMBER(431);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[3].o);
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[1].o)))->F_nodeSize;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[1].o))->F_height = temp0;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(433);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ResearchDialog *) NULL_CHECK((frame[1].o)))->F_nodes;
	jint temp3 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(434);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(435);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 >= (((jarray) nullCheck(ctx, (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 1), sp[0].o))))->length)) goto label_9;
	}
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 1), sp[0].o);
	jint temp0 = frame[4].i;
	clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_children;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[4].i));
	init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[3].o)), (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(435);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$TechTreeNode[] {
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
};

static FieldMetadata fields[] {
	{ "node", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_ui_dialogs_ResearchDialog$TechTreeNode, F_node), "Lmindustry/content/TechTree$TechNode;", 17 },
	{ "visible", &class_boolean, offsetof(mindustry_ui_dialogs_ResearchDialog$TechTreeNode, F_visible), "Z", 1 },
	{ "selectable", &class_boolean, offsetof(mindustry_ui_dialogs_ResearchDialog$TechTreeNode, F_selectable), "Z", 1 },
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$TechTreeNode, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$TechTreeNode_mindustry_ui_dialogs_ResearchDialog_mindustry_content_TechTree$TechNode_mindustry_ui_dialogs_ResearchDialog$TechTreeNode, 0, "(Lmindustry/ui/dialogs/ResearchDialog;Lmindustry/content/TechTree$TechNode;Lmindustry/ui/dialogs/ResearchDialog$TechTreeNode;)V", 1 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$TechTreeNode",
		.parentClass = (intptr_t) &class_mindustry_ui_layout_TreeLayout$TreeNode,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$TechTreeNode),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$TechTreeNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_ResearchDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$TechTreeNode = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$TechTreeNode);

}

