#include "mindustry/game/EventType_BlockBuildBeginEvent.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/EventType_BlockBuildBeginEvent.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/EventType.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Team.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_game_EventType$BlockBuildBeginEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$BlockBuildBeginEvent *) object;
	if (self->F_tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tile)->clazz)->markFunction)((jobject) self->F_tile, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_unit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unit)->clazz)->markFunction)((jobject) self->F_unit, mark, depth + 1);
}

void clinit_mindustry_game_EventType$BlockBuildBeginEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$BlockBuildBeginEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$BlockBuildBeginEvent:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$BlockBuildBeginEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(562);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(563);
	((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[0].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(564);
	((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(565);
	((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[0].o)))->F_unit = (jref) (frame[3].o);
	LINE_NUMBER(566);
	((mindustry_game_EventType$BlockBuildBeginEvent *) NULL_CHECK((frame[0].o)))->F_breaking = (frame[4].i);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_EventType$BlockBuildBeginEvent;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_EventType$BlockBuildBeginEvent[] {
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
	{ "tile", &class_mindustry_world_Tile, offsetof(mindustry_game_EventType$BlockBuildBeginEvent, F_tile), "Lmindustry/world/Tile;", 17 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_game_EventType$BlockBuildBeginEvent, F_team), "Lmindustry/game/Team;", 17 },
	{ "unit", &class_mindustry_gen_Unit, offsetof(mindustry_game_EventType$BlockBuildBeginEvent, F_unit), "Lmindustry/gen/Unit;", 17 },
	{ "breaking", &class_boolean, offsetof(mindustry_game_EventType$BlockBuildBeginEvent, F_breaking), "Z", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$BlockBuildBeginEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/game/Team;Lmindustry/gen/Unit;Z)V", 1 },
};

Class class_mindustry_game_EventType$BlockBuildBeginEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$BlockBuildBeginEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$BlockBuildBeginEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$BlockBuildBeginEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$BlockBuildBeginEvent,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$BlockBuildBeginEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$BlockBuildBeginEvent = registerClass(&class_mindustry_game_EventType$BlockBuildBeginEvent);

}

