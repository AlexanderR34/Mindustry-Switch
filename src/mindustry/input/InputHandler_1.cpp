#include "mindustry/input/InputHandler_1.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/input/InputHandler_1.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/struct/Seq.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/input/InputHandler.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_input_InputHandler$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_input_InputHandler$QueryEachable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_input_InputHandler$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_input_InputHandler$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
}

void init_mindustry_input_InputHandler$1_mindustry_input_InputHandler_arc_math_geom_QuadTree_Array1_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(889);
	((mindustry_input_InputHandler$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler$1:find", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)M_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(893);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((mindustry_input_InputHandler$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectPlanTree;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) - ((jfloat(4.0f)) * (jfloat((frame[3].i))))), ((jfloat(((frame[2].i) * (8)))) - ((jfloat(4.0f)) * (jfloat((frame[3].i))))), (jfloat(((frame[3].i) * (8)))), (jfloat(((frame[3].i) * (8)))), (frame[4].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_input_InputHandler$1[] {
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
	(void *) M_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan,
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

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_input_InputHandler, offsetof(mindustry_input_InputHandler$1, F_this$0), "Lmindustry/input/InputHandler;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_InputHandler$1_mindustry_input_InputHandler_arc_math_geom_QuadTree_Array1_arc_struct_Seq, 0, "(Lmindustry/input/InputHandler;Larc/math/geom/QuadTree;[Larc/struct/Seq;)V", 128 },
	{ "find", (intptr_t) M_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler$1_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, "(IIILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;", 1 },
};

Class class_mindustry_input_InputHandler$1{
		.nativeName = (intptr_t) "mindustry/input/InputHandler$1",
		.parentClass = (intptr_t) &class_mindustry_input_InputHandler$QueryEachable,
		.size = sizeof(mindustry_input_InputHandler$1),
		.classVtable = (intptr_t) vtable_mindustry_input_InputHandler$1,
		.staticInitializer = (intptr_t) clinit_mindustry_input_InputHandler$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_InputHandler$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_input_InputHandler$1 = registerClass(&class_mindustry_input_InputHandler$1);

}

