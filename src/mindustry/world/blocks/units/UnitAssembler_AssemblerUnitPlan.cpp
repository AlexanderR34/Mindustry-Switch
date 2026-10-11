#include "mindustry/world/blocks/units/UnitAssembler_AssemblerUnitPlan.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/type/ItemStack.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/type/LiquidStack.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/units/UnitAssembler_AssemblerUnitPlan.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) object;
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_requirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requirements)->clazz)->markFunction)((jobject) self->F_requirements, mark, depth + 1);
	if (self->F_itemReq)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemReq)->clazz)->markFunction)((jobject) self->F_itemReq, mark, depth + 1);
	if (self->F_liquidReq)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquidReq)->clazz)->markFunction)((jobject) self->F_liquidReq, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_mindustry_type_UnitType_float_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(287);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(288);
	((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(289);
	((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[0].o)))->F_time = (frame[2].f);
	LINE_NUMBER(290);
	((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[0].o)))->F_requirements = (jref) (frame[3].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(293);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field requirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field itemReq
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field liquidReq
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan[] {
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
	{ "unit", &class_mindustry_type_UnitType, offsetof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, F_unit), "Lmindustry/type/UnitType;", 1 },
	{ "requirements", &class_arc_struct_Seq, offsetof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, F_requirements), "Larc/struct/Seq;", 1 },
	{ "itemReq", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, F_itemReq), "[Lmindustry/type/ItemStack;", 1 },
	{ "liquidReq", getArrayClass(&class_mindustry_type_LiquidStack, 1), offsetof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, F_liquidReq), "[Lmindustry/type/LiquidStack;", 1 },
	{ "time", &class_float, offsetof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, F_time), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_mindustry_type_UnitType_float_arc_struct_Seq, 0, "(Lmindustry/type/UnitType;FLarc/struct/Seq;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, 0, "()V", 0 },
};

Class class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_units_UnitAssembler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan = registerClass(&class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan);

}

