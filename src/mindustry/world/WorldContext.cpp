#include "mindustry/world/WorldContext.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/WorldContext.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_world_WorldContext(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_WorldContext *) object;
}

void clinit_mindustry_world_WorldContext(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_world_WorldContext_onReadBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/WorldContext:onReadBuilding", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_WorldContext_onReadTileData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/WorldContext:onReadTileData", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/WorldContext:getSector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_WorldContext_isMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/WorldContext:isMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_WorldContext;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_WorldContext[] {
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
	(void *) M_mindustry_world_WorldContext_onReadBuilding,
	(void *) M_mindustry_world_WorldContext_onReadTileData,
	(void *) M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_world_WorldContext_isMap_R_boolean,
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
	{ "tile", "(I)Lmindustry/world/Tile;" },
	{ "resize", "(II)V" },
	{ "create", "(IIIII)Lmindustry/world/Tile;" },
	{ "isGenerating", "()Z" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "onReadBuilding", "()V" },
	{ "onReadTileData", "()V" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "isMap", "()Z" },
};

static MethodMetadata methods[] {
	{ "tile", 0, INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1025 },
	{ "resize", 0, INDEX_mindustry_world_WorldContext_resize_int_int, "(II)V", 1025 },
	{ "create", 0, INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile, "(IIIII)Lmindustry/world/Tile;", 1025 },
	{ "isGenerating", 0, INDEX_mindustry_world_WorldContext_isGenerating_R_boolean, "()Z", 1025 },
	{ "begin", 0, INDEX_mindustry_world_WorldContext_begin, "()V", 1025 },
	{ "end", 0, INDEX_mindustry_world_WorldContext_end, "()V", 1025 },
	{ "onReadBuilding", (intptr_t) M_mindustry_world_WorldContext_onReadBuilding, INDEX_mindustry_world_WorldContext_onReadBuilding, "()V", 1 },
	{ "onReadTileData", (intptr_t) M_mindustry_world_WorldContext_onReadTileData, INDEX_mindustry_world_WorldContext_onReadTileData, "()V", 1 },
	{ "getSector", (intptr_t) M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector, INDEX_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "isMap", (intptr_t) M_mindustry_world_WorldContext_isMap_R_boolean, INDEX_mindustry_world_WorldContext_isMap_R_boolean, "()Z", 1 },
};

Class class_mindustry_world_WorldContext{
		.nativeName = (intptr_t) "mindustry/world/WorldContext",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_WorldContext),
		.classVtable = (intptr_t) vtable_mindustry_world_WorldContext,
		.staticInitializer = (intptr_t) clinit_mindustry_world_WorldContext,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_WorldContext,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_WorldContext = registerClass(&class_mindustry_world_WorldContext);

}
