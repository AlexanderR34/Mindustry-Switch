#include "mindustry/world/blocks/Autotiler_AutotilerHolder.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/Autotiler_AutotilerHolder.h"
#include "mindustry/world/blocks/Autotiler_AutotilerHolder_invoke_arc_func_Boolf_1.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"

extern "C" {

jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult;
jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals;
jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan;
jobject SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder;

void mark_mindustry_world_blocks_Autotiler$AutotilerHolder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_Autotiler$AutotilerHolder *) object;
}

void init_mindustry_world_blocks_Autotiler$AutotilerHolder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$AutotilerHolder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_Autotiler$AutotilerHolder_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$AutotilerHolder:lambda$static$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(25);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(27);
	frame[1].i = (jint(0));
	LINE_NUMBER(28);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(29);
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan;
	frame[6].i = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x));
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan;
	frame[7].i = (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(30);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 < (temp1 - ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2))))) goto label_11;
	}
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 > (temp1 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))))) goto label_11;
	}
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 < (temp1 - ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2))))) goto label_11;
	}
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if (temp0 > (temp1 + (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2))))) goto label_11;
	}
	{
	LINE_NUMBER(31);
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[0].o);
	}
label_11:;
	{
	LINE_NUMBER(33);
	INST_IINC(1, 1);
	LINE_NUMBER(28);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$AutotilerHolder:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult = sp[0].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_entities_units_BuildPlan, (jint(4)));
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals = sp[0].o;
	LINE_NUMBER(24);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_Autotiler$AutotilerHolder_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_world_blocks_Autotiler$AutotilerHolder_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_Autotiler$AutotilerHolder_invoke_arc_func_Boolf_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_world_blocks_Autotiler$AutotilerHolder(ctx);
	SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_Autotiler$AutotilerHolder[] {
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

static FieldMetadata fields[] {
	{ "blendresult", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendresult, "[I", 24 },
	{ "directionals", getArrayClass(&class_mindustry_entities_units_BuildPlan, 1), (intptr_t) &SF_mindustry_world_blocks_Autotiler$AutotilerHolder_directionals, "[Lmindustry/entities/units/BuildPlan;", 24 },
	{ "plan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_world_blocks_Autotiler$AutotilerHolder_plan, "Lmindustry/entities/units/BuildPlan;", 8 },
	{ "blendFinder", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_world_blocks_Autotiler$AutotilerHolder_blendFinder, "Larc/func/Boolf;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_Autotiler$AutotilerHolder, 0, "()V", 1 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_blocks_Autotiler$AutotilerHolder_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_Autotiler$AutotilerHolder, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_Autotiler$AutotilerHolder{
		.nativeName = (intptr_t) "mindustry/world/blocks/Autotiler$AutotilerHolder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_Autotiler$AutotilerHolder),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_Autotiler$AutotilerHolder,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_Autotiler$AutotilerHolder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_Autotiler$AutotilerHolder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_Autotiler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_Autotiler$AutotilerHolder = registerClass(&class_mindustry_world_blocks_Autotiler$AutotilerHolder);

}

