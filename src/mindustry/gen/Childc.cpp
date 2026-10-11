#include "mindustry/gen/Childc.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/Childc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/Rotc.h"
#include "arc/util/Nullable.h"
#include "arc/math/geom/Position.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_gen_Childc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Childc *) object;
}

void clinit_mindustry_gen_Childc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_Childc;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Method parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_Childc[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "parent", "()Lmindustry/gen/Posc;" },
	{ "rotWithParent", "()Z" },
	{ "offsetPos", "()F" },
	{ "offsetRot", "()F" },
	{ "offsetX", "()F" },
	{ "offsetY", "()F" },
	{ "offsetPos", "(F)V" },
	{ "offsetRot", "(F)V" },
	{ "offsetX", "(F)V" },
	{ "offsetY", "(F)V" },
	{ "parent", "(Lmindustry/gen/Posc;)V" },
	{ "rotWithParent", "(Z)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, &class_mindustry_gen_Posc, &class_mindustry_gen_Rotc, };

static MethodMetadata methods[] {
	{ "parent", 0, INDEX_mindustry_gen_Childc_parent_R_mindustry_gen_Posc, "()Lmindustry/gen/Posc;", 1025 },
	{ "rotWithParent", 0, INDEX_mindustry_gen_Childc_rotWithParent_R_boolean, "()Z", 1025 },
	{ "offsetPos", 0, INDEX_mindustry_gen_Childc_offsetPos_R_float, "()F", 1025 },
	{ "offsetRot", 0, INDEX_mindustry_gen_Childc_offsetRot_R_float, "()F", 1025 },
	{ "offsetX", 0, INDEX_mindustry_gen_Childc_offsetX_R_float, "()F", 1025 },
	{ "offsetY", 0, INDEX_mindustry_gen_Childc_offsetY_R_float, "()F", 1025 },
	{ "add", 0, INDEX_mindustry_gen_Childc_add, "()V", 1025 },
	{ "offsetPos", 0, INDEX_mindustry_gen_Childc_offsetPos_float, "(F)V", 1025 },
	{ "offsetRot", 0, INDEX_mindustry_gen_Childc_offsetRot_float, "(F)V", 1025 },
	{ "offsetX", 0, INDEX_mindustry_gen_Childc_offsetX_float, "(F)V", 1025 },
	{ "offsetY", 0, INDEX_mindustry_gen_Childc_offsetY_float, "(F)V", 1025 },
	{ "parent", 0, INDEX_mindustry_gen_Childc_parent_mindustry_gen_Posc, "(Lmindustry/gen/Posc;)V", 1025 },
	{ "rotWithParent", 0, INDEX_mindustry_gen_Childc_rotWithParent_boolean, "(Z)V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Childc_update, "()V", 1025 },
};

Class class_mindustry_gen_Childc{
		.nativeName = (intptr_t) "mindustry/gen/Childc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Childc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Childc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Childc,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_Childc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 3,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 67,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Childc = registerClass(&class_mindustry_gen_Childc);

}
