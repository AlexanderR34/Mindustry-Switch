#include "mindustry/game/EventType_PickupEvent.h"
#include "mindustry/game/EventType_PickupEvent.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/EventType.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_game_EventType$PickupEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$PickupEvent *) object;
	if (self->F_carrier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_carrier)->clazz)->markFunction)((jobject) self->F_carrier, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
}

void clinit_mindustry_game_EventType$PickupEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$PickupEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$PickupEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(337);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(338);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_carrier = (jref) (frame[1].o);
	LINE_NUMBER(339);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[2].o);
	LINE_NUMBER(340);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$PickupEvent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$PickupEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(343);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(344);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_carrier = (jref) (frame[1].o);
	LINE_NUMBER(345);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(346);
	((mindustry_game_EventType$PickupEvent *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (jobject(nullptr));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_EventType$PickupEvent;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_EventType$PickupEvent[] {
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
	{ "carrier", &class_mindustry_gen_Unit, offsetof(mindustry_game_EventType$PickupEvent, F_carrier), "Lmindustry/gen/Unit;", 17 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_game_EventType$PickupEvent, F_unit), "Lmindustry/gen/Unit;", 17 },
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_game_EventType$PickupEvent, F_build), "Lmindustry/gen/Building;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_EventType$PickupEvent_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
};

Class class_mindustry_game_EventType$PickupEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$PickupEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$PickupEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$PickupEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$PickupEvent,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$PickupEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$PickupEvent = registerClass(&class_mindustry_game_EventType$PickupEvent);

}

