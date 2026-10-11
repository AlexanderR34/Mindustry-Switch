#include "mindustry/ui/layout/RowTreeLayout.h"
#include "java/lang/Object.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "mindustry/ui/layout/RowTreeLayout.h"
#include "mindustry/ui/layout/TreeLayout.h"
#include "arc/struct/IntSeq.h"

extern "C" {


void mark_mindustry_ui_layout_RowTreeLayout(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_layout_RowTreeLayout *) object;
}

void clinit_mindustry_ui_layout_RowTreeLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_layout_RowTreeLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RowTreeLayout:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_layout_RowTreeLayout(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RowTreeLayout:layout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	clinit_arc_struct_IntSeq(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[2].o);
	((func_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RowTreeLayout:layout", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(22);
	frame[4].f = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_height) * (jfloat(5.0f)));
	LINE_NUMBER(24);
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size) >= ((frame[2].i) + (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int])(ctx, (frame[3].o), ((frame[2].i) + (jint(1))));
	LINE_NUMBER(26);
	((arc_struct_IntSeq *) NULL_CHECK((frame[3].o)))->F_size = ((frame[2].i) + (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[1].o;
	jfloat temp0 = frame[4].f;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[3].o), (frame[2].i));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_x = (temp0 * (jfloat(temp1)));
	LINE_NUMBER(30);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_y = ((frame[4].f) * (jfloat((frame[2].i))));
	LINE_NUMBER(31);
	((func_arc_struct_IntSeq_incr_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_incr_int_int])(ctx, (frame[3].o), (frame[2].i), (jint(1)));
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_9;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(33);
	((func_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq])(ctx, (frame[0].o), (frame[8].o), ((frame[2].i) + (jint(1))), (frame[3].o));
	LINE_NUMBER(32);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(35);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_layout_RowTreeLayout[] {
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
	(void *) M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq,
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
	{ "layout", "(Lmindustry/ui/layout/TreeLayout$TreeNode;ILarc/struct/IntSeq;)V" },
};

static jclass interfaces[] { &class_mindustry_ui_layout_TreeLayout, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_layout_RowTreeLayout, 0, "()V", 1 },
	{ "layout", (intptr_t) M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V", 1 },
	{ "layout", (intptr_t) M_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq, VTABLE_mindustry_ui_layout_RowTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode_int_arc_struct_IntSeq, "(Lmindustry/ui/layout/TreeLayout$TreeNode;ILarc/struct/IntSeq;)V", 0 },
};

Class class_mindustry_ui_layout_RowTreeLayout{
		.nativeName = (intptr_t) "mindustry/ui/layout/RowTreeLayout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_layout_RowTreeLayout),
		.classVtable = (intptr_t) vtable_mindustry_ui_layout_RowTreeLayout,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_layout_RowTreeLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_layout_RowTreeLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_layout_RowTreeLayout = registerClass(&class_mindustry_ui_layout_RowTreeLayout);

}
