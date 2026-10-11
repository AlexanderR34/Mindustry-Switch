#include "mindustry/ui/dialogs/ResearchDialog_6.h"
#include "mindustry/ui/layout/BranchTreeLayout_TreeLocation.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/BranchTreeLayout.h"
#include "mindustry/ui/dialogs/ResearchDialog.h"
#include "mindustry/ui/dialogs/ResearchDialog_6.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$6(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_layout_BranchTreeLayout(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$6 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_layout_BranchTreeLayout(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$6_mindustry_ui_dialogs_ResearchDialog_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$6:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(350);
	((mindustry_ui_dialogs_ResearchDialog$6 *) NULL_CHECK((frame[0].o)))->F_val$spacing = (frame[2].f);
	((mindustry_ui_dialogs_ResearchDialog$6 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_ui_layout_BranchTreeLayout(ctx, (frame[0].o));
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_ui_dialogs_ResearchDialog$6 *) NULL_CHECK((frame[0].o)))->F_val$spacing;
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[1].o))->F_gapBetweenNodes = temp0;
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[0].o))->F_gapBetweenLevels = temp0;
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_bottom;
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[0].o))->F_rootLocation = (jref) sp[1].o;
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$6[] {
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
	(void *) M_mindustry_ui_layout_BranchTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getBounds_R_arc_math_geom_Rect,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float,
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
	{ "layout", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "getWidthOrHeightOfNode", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Z)F" },
	{ "getNodeThickness", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "getNodeSize", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "isLevelChangeInYAxis", "()Z" },
	{ "getLevelChangeSign", "()I" },
	{ "updateBounds", "(Lmindustry/ui/layout/TreeLayout$TreeNode;FF)V" },
	{ "getBounds", "()Larc/math/geom/Rect;" },
	{ "calcSizeOfLevels", "(Lmindustry/ui/layout/TreeLayout$TreeNode;I)V" },
	{ "getLevelCount", "()I" },
	{ "getGapBetweenNodes", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "getSizeOfLevel", "(I)F" },
	{ "getAncestor", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "getDistance", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "nextLeft", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "nextRight", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "getNumber", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)I" },
	{ "ancestor", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "moveSubtree", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;F)V" },
	{ "apportion", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "executeShifts", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "firstWalk", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "secondWalk", "(Lmindustry/ui/layout/TreeLayout$TreeNode;FIF)V" },
};

static FieldMetadata fields[] {
	{ "val$spacing", &class_float, offsetof(mindustry_ui_dialogs_ResearchDialog$6, F_val$spacing), "F", 4112 },
	{ "this$0", &class_mindustry_ui_dialogs_ResearchDialog, offsetof(mindustry_ui_dialogs_ResearchDialog$6, F_this$0), "Lmindustry/ui/dialogs/ResearchDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$6_mindustry_ui_dialogs_ResearchDialog_float, 0, "(Lmindustry/ui/dialogs/ResearchDialog;F)V", 0 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$6{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$6",
		.parentClass = (intptr_t) &class_mindustry_ui_layout_BranchTreeLayout,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$6),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$6,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$6,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ResearchDialog$6 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$6);

}

