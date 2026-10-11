#include "mindustry/input/InputHandler_QueryEachable.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/struct/Seq.h"
#include "arc/util/Eachable.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/input/InputHandler.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_input_InputHandler$QueryEachable(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_input_InputHandler$QueryEachable *) object;
	if (self->F_tree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tree)->clazz)->markFunction)((jobject) self->F_tree, mark, depth + 1);
	if (self->F_fallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallback)->clazz)->markFunction)((jobject) self->F_fallback, mark, depth + 1);
}

void clinit_mindustry_input_InputHandler$QueryEachable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$QueryEachable:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2531);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2532);
	((mindustry_input_InputHandler$QueryEachable *) NULL_CHECK((frame[0].o)))->F_tree = (jref) (frame[1].o);
	LINE_NUMBER(2533);
	((mindustry_input_InputHandler$QueryEachable *) NULL_CHECK((frame[0].o)))->F_fallback = (jref) (frame[2].o);
	LINE_NUMBER(2534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler$QueryEachable_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$QueryEachable:each", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(2539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler$QueryEachable_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$QueryEachable:find", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2542);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(1)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$QueryEachable:find", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(2546);
	sp[0].o = (jobject)((mindustry_input_InputHandler$QueryEachable *) NULL_CHECK((frame[0].o)))->F_tree;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2547);
	sp[0].o = (jobject)((mindustry_input_InputHandler$QueryEachable *) NULL_CHECK((frame[0].o)))->F_tree;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) - ((jfloat(4.0f)) * (jfloat((frame[3].i))))), ((jfloat(((frame[2].i) * (8)))) - ((jfloat(4.0f)) * (jfloat((frame[3].i))))), (jfloat(((frame[3].i) * (8)))), (jfloat(((frame[3].i) * (8)))), (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(2548);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2549);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_1:;
	{
	LINE_NUMBER(2552);
	sp[0].o = (jobject)((mindustry_input_InputHandler$QueryEachable *) NULL_CHECK((frame[0].o)))->F_fallback;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_6;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(2553);
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, (frame[8].o), (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2554);
	if ((frame[9].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2555);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, (frame[9].o)));
	}
label_9:;
	{
	LINE_NUMBER(2552);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(2558);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_input_InputHandler$QueryEachable[] {
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
	(void *) M_mindustry_input_InputHandler$QueryEachable_each_arc_func_Cons,
	(void *) M_mindustry_input_InputHandler$QueryEachable_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan,
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
	{ "find", "(IILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;" },
	{ "find", "(IIILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;" },
};

static jclass interfaces[] { &class_arc_util_Eachable, };

static FieldMetadata fields[] {
	{ "tree", &class_arc_math_geom_QuadTree, offsetof(mindustry_input_InputHandler$QueryEachable, F_tree), "Larc/math/geom/QuadTree;", 16 },
	{ "fallback", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_input_InputHandler$QueryEachable, F_fallback), "[Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq, 0, "(Larc/math/geom/QuadTree;[Larc/struct/Seq;)V", 129 },
	{ "each", (intptr_t) M_mindustry_input_InputHandler$QueryEachable_each_arc_func_Cons, VTABLE_mindustry_input_InputHandler$QueryEachable_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "find", (intptr_t) M_mindustry_input_InputHandler$QueryEachable_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler$QueryEachable_find_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, "(IILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;", 1 },
	{ "find", (intptr_t) M_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, "(IIILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;", 1 },
};

Class class_mindustry_input_InputHandler$QueryEachable{
		.nativeName = (intptr_t) "mindustry/input/InputHandler$QueryEachable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_InputHandler$QueryEachable),
		.classVtable = (intptr_t) vtable_mindustry_input_InputHandler$QueryEachable,
		.staticInitializer = (intptr_t) clinit_mindustry_input_InputHandler$QueryEachable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_InputHandler$QueryEachable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_input_InputHandler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_InputHandler$QueryEachable = registerClass(&class_mindustry_input_InputHandler$QueryEachable);

}

