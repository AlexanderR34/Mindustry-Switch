#include "mindustry/ui/layout/RadialTreeLayout.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "mindustry/ui/layout/TreeLayout.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/Queue.h"
#include "mindustry/ui/layout/RadialTreeLayout.h"

extern "C" {

jobject SF_mindustry_ui_layout_RadialTreeLayout_visited;
jobject SF_mindustry_ui_layout_RadialTreeLayout_queue;

void mark_mindustry_ui_layout_RadialTreeLayout(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_layout_RadialTreeLayout_visited)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_layout_RadialTreeLayout_visited)->clazz)->markFunction)((jobject) SF_mindustry_ui_layout_RadialTreeLayout_visited, mark, depth + 1);
		if (SF_mindustry_ui_layout_RadialTreeLayout_queue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_layout_RadialTreeLayout_queue)->clazz)->markFunction)((jobject) SF_mindustry_ui_layout_RadialTreeLayout_queue, mark, depth + 1);
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
	auto self = (mindustry_ui_layout_RadialTreeLayout *) object;
}

void init_mindustry_ui_layout_RadialTreeLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RadialTreeLayout:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RadialTreeLayout:layout", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	((mindustry_ui_layout_RadialTreeLayout *) NULL_CHECK((frame[0].o)))->F_startRadius = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_height) * (jfloat(2.4f)));
	LINE_NUMBER(15);
	((mindustry_ui_layout_RadialTreeLayout *) NULL_CHECK((frame[0].o)))->F_delta = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_height) * (jfloat(20.4f)));
	LINE_NUMBER(17);
	jint temp0 = (jint)((func_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(19);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_visited;
	init_arc_struct_ObjectSet_arc_struct_ObjectSet(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_layout_TreeLayout$TreeNode, sp[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int])(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_leaves = temp0;
	LINE_NUMBER(22);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(24);
	((func_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_ui_layout_RadialTreeLayout *) NULL_CHECK((frame[0].o)))->F_startRadius), (jfloat(0)), (jfloat(360.0f)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RadialTreeLayout:radialize", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(28);
	frame[5].f = (frame[3].f);
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_2:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_3;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(31);
	frame[10].f = ((frame[5].f) + (((jfloat(((jint)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[9].o)))->F_leaves))) / (jfloat(((jint)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_leaves)))) * ((frame[4].f) - (frame[3].f))));
	LINE_NUMBER(33);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, ((((frame[5].f) + (frame[10].f)) / (jfloat(2))) * (jfloat(0.017453292f))));
	frame[11].f = (temp0 * temp1);
	LINE_NUMBER(34);
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, ((((frame[5].f) + (frame[10].f)) / (jfloat(2))) * (jfloat(0.017453292f))));
	frame[12].f = (temp2 * temp3);
	LINE_NUMBER(36);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[9].o)))->F_x = (frame[11].f);
	LINE_NUMBER(37);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[9].o)))->F_y = (frame[12].f);
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[9].o)))->F_children;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_10;
	}
	{
	((func_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float])(ctx, (frame[0].o), (frame[9].o), ((frame[2].f) + ((jfloat)((mindustry_ui_layout_RadialTreeLayout *) NULL_CHECK((frame[0].o)))->F_delta)), (frame[5].f), (frame[10].f));
	}
label_10:;
	{
	LINE_NUMBER(40);
	frame[5].f = (frame[10].f);
	LINE_NUMBER(30);
	INST_IINC(8, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RadialTreeLayout:bfs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_visited;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(46);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_queue;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(47);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_number = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(48);
	frame[3].i = (jint(0));
	LINE_NUMBER(50);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_visited;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(51);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_queue;
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(53);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_queue;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(54);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_queue;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_layout_TreeLayout$TreeNode, sp[0].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_children;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_10;
	}
	INST_IINC(3, 1);
label_10:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_children;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_12;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(58);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_number = (((jint)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_number) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(59);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_visited;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[8].o));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(60);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_layout_RadialTreeLayout_queue;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	}
label_15:;
	{
	LINE_NUMBER(57);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(63);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_layout_RadialTreeLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/RadialTreeLayout:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	SF_mindustry_ui_layout_RadialTreeLayout_visited = sp[0].o;
	LINE_NUMBER(8);
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	clinit_mindustry_ui_layout_RadialTreeLayout(ctx);
	SF_mindustry_ui_layout_RadialTreeLayout_queue = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_layout_RadialTreeLayout[] {
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
	(void *) M_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float,
	(void *) M_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int,
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
	{ "radialize", "(Lmindustry/ui/layout/TreeLayout$TreeNode;FFF)V" },
	{ "bfs", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Z)I" },
};

static jclass interfaces[] { &class_mindustry_ui_layout_TreeLayout, };

static FieldMetadata fields[] {
	{ "visited", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_ui_layout_RadialTreeLayout_visited, "Larc/struct/ObjectSet;", 10 },
	{ "queue", &class_arc_struct_Queue, (intptr_t) &SF_mindustry_ui_layout_RadialTreeLayout_queue, "Larc/struct/Queue;", 10 },
	{ "startRadius", &class_float, offsetof(mindustry_ui_layout_RadialTreeLayout, F_startRadius), "F", 1 },
	{ "delta", &class_float, offsetof(mindustry_ui_layout_RadialTreeLayout, F_delta), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_layout_RadialTreeLayout, 0, "()V", 1 },
	{ "layout", (intptr_t) M_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_RadialTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V", 1 },
	{ "radialize", (intptr_t) M_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float, VTABLE_mindustry_ui_layout_RadialTreeLayout_radialize_mindustry_ui_layout_TreeLayout$TreeNode_float_float_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;FFF)V", 0 },
	{ "bfs", (intptr_t) M_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int, VTABLE_mindustry_ui_layout_RadialTreeLayout_bfs_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_int, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Z)I", 0 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_layout_RadialTreeLayout, 0, "()V", 8 },
};

Class class_mindustry_ui_layout_RadialTreeLayout{
		.nativeName = (intptr_t) "mindustry/ui/layout/RadialTreeLayout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_layout_RadialTreeLayout),
		.classVtable = (intptr_t) vtable_mindustry_ui_layout_RadialTreeLayout,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_layout_RadialTreeLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_layout_RadialTreeLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_layout_RadialTreeLayout = registerClass(&class_mindustry_ui_layout_RadialTreeLayout);

}
