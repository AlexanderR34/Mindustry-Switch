#include "mindustry/game/MapObjectives_TilePos.h"
#include "java/lang/annotation/ElementType.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/MapObjectives_TilePos.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/annotation/Retention.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Class.h"
#include "java/lang/annotation/Target.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_game_MapObjectives$TilePos(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$TilePos *) object;
}

void clinit_mindustry_game_MapObjectives$TilePos(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_mindustry_game_MapObjectives$TilePos_annotationType_R_java_lang_Class(jcontext ctx, jobject self) {
	return (jobject) &class_mindustry_game_MapObjectives$TilePos;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$TilePos;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_annotation_Target);
		((java_lang_annotation_Target *)annotations[0])->F_value = (intptr_t) createArray(ctx, &class_java_lang_annotation_ElementType, 1);
		clinit_java_lang_annotation_ElementType(ctx);
		((jobject *) ((jarray) ((java_lang_annotation_Target *)annotations[0])->F_value)->data)[0] = SF_java_lang_annotation_ElementType_FIELD;
		annotations[1] = gcAlloc(ctx, &class_java_lang_annotation_Retention);
		clinit_java_lang_annotation_RetentionPolicy(ctx);
		((java_lang_annotation_Retention *)annotations[1])->F_value = (intptr_t) SF_java_lang_annotation_RetentionPolicy_RUNTIME;
	}

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$TilePos[] {
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
	(void *) M_mindustry_game_MapObjectives$TilePos_annotationType_R_java_lang_Class,
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
	{ "annotationType", "()Ljava/lang/Class;" },
};

static jclass interfaces[] { &class_java_lang_annotation_Annotation, };

static MethodMetadata methods[] {
	{ "annotationType", 0, INDEX_mindustry_game_MapObjectives$TilePos_annotationType_R_java_lang_Class, "()Ljava/lang/Class;", 1025 },
};

Class class_mindustry_game_MapObjectives$TilePos{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$TilePos",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_MapObjectives$TilePos),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$TilePos,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$TilePos,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$TilePos,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 9737,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$TilePos = registerClass(&class_mindustry_game_MapObjectives$TilePos);

}

