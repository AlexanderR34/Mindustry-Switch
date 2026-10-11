#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "mindustry/ui/layout/TreeLayout.h"

extern "C" {


void mark_mindustry_ui_layout_TreeLayout$TreeNode(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_layout_TreeLayout$TreeNode *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
	if (self->F_ancestor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ancestor)->clazz)->markFunction)((jobject) self->F_ancestor, mark, depth + 1);
}

void clinit_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/TreeLayout$TreeNode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_layout_TreeLayout$TreeNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_cachedWidth = (jfloat(-1.0f));
	LINE_NUMBER(15);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_number = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/TreeLayout$TreeNode:isLeaf", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/TreeLayout$TreeNode:calcWidth", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_width);
	}
label_1:;
	{
	LINE_NUMBER(24);
	if ((floatCompare(((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_cachedWidth), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_cachedWidth);
	}
label_2:;
	{
	LINE_NUMBER(26);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(28);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float])(ctx, (frame[5].o));
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(27);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[0].o)))->F_width), (frame[1].f));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_cachedWidth = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_layout_TreeLayout$TreeNode[] {
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
	{ "width", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_width), "F", 1 },
	{ "height", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_height), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_y), "F", 1 },
	{ "children", getArrayClass(&class_mindustry_ui_layout_TreeLayout$TreeNode, 1), offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_children), "[Lmindustry/ui/layout/TreeLayout$TreeNode;", 1 },
	{ "parent", &class_mindustry_ui_layout_TreeLayout$TreeNode, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_parent), "Lmindustry/ui/layout/TreeLayout$TreeNode;", 1 },
	{ "mode", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_mode), "F", 1 },
	{ "prelim", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_prelim), "F", 1 },
	{ "change", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_change), "F", 1 },
	{ "shift", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_shift), "F", 1 },
	{ "cachedWidth", &class_float, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_cachedWidth), "F", 1 },
	{ "number", &class_int, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_number), "I", 1 },
	{ "leaves", &class_int, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_leaves), "I", 1 },
	{ "thread", &class_mindustry_ui_layout_TreeLayout$TreeNode, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_thread), "Lmindustry/ui/layout/TreeLayout$TreeNode;", 1 },
	{ "ancestor", &class_mindustry_ui_layout_TreeLayout$TreeNode, offsetof(mindustry_ui_layout_TreeLayout$TreeNode, F_ancestor), "Lmindustry/ui/layout/TreeLayout$TreeNode;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_layout_TreeLayout$TreeNode, 0, "()V", 1 },
	{ "isLeaf", (intptr_t) M_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean, VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean, "()Z", 1 },
	{ "calcWidth", (intptr_t) M_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float, VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float, "()F", 1 },
};

Class class_mindustry_ui_layout_TreeLayout$TreeNode{
		.nativeName = (intptr_t) "mindustry/ui/layout/TreeLayout$TreeNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_layout_TreeLayout$TreeNode),
		.classVtable = (intptr_t) vtable_mindustry_ui_layout_TreeLayout$TreeNode,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_layout_TreeLayout$TreeNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_layout_TreeLayout$TreeNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_layout_TreeLayout,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_layout_TreeLayout$TreeNode = registerClass(&class_mindustry_ui_layout_TreeLayout$TreeNode);

}

