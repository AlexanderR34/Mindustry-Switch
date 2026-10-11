#include "mindustry/game/EventType_AdminRequestEvent.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/game/EventType.h"
#include "mindustry/gen/Player.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/EventType_AdminRequestEvent.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_game_EventType$AdminRequestEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$AdminRequestEvent *) object;
	if (self->F_player)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_player)->clazz)->markFunction)((jobject) self->F_player, mark, depth + 1);
	if (self->F_other)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_other)->clazz)->markFunction)((jobject) self->F_other, mark, depth + 1);
	if (self->F_action)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_action)->clazz)->markFunction)((jobject) self->F_action, mark, depth + 1);
}

void clinit_mindustry_game_EventType$AdminRequestEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$AdminRequestEvent_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$AdminRequestEvent:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$AdminRequestEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(841);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(842);
	((mindustry_game_EventType$AdminRequestEvent *) NULL_CHECK((frame[0].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(843);
	((mindustry_game_EventType$AdminRequestEvent *) NULL_CHECK((frame[0].o)))->F_other = (jref) (frame[2].o);
	LINE_NUMBER(844);
	((mindustry_game_EventType$AdminRequestEvent *) NULL_CHECK((frame[0].o)))->F_action = (jref) (frame[3].o);
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_EventType$AdminRequestEvent;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field other
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_EventType$AdminRequestEvent[] {
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
	{ "player", &class_mindustry_gen_Player, offsetof(mindustry_game_EventType$AdminRequestEvent, F_player), "Lmindustry/gen/Player;", 17 },
	{ "other", &class_mindustry_gen_Player, offsetof(mindustry_game_EventType$AdminRequestEvent, F_other), "Lmindustry/gen/Player;", 17 },
	{ "action", &class_mindustry_net_Packets$AdminAction, offsetof(mindustry_game_EventType$AdminRequestEvent, F_action), "Lmindustry/net/Packets$AdminAction;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$AdminRequestEvent_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Player;Lmindustry/net/Packets$AdminAction;)V", 1 },
};

Class class_mindustry_game_EventType$AdminRequestEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$AdminRequestEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$AdminRequestEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$AdminRequestEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$AdminRequestEvent,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$AdminRequestEvent,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$AdminRequestEvent = registerClass(&class_mindustry_game_EventType$AdminRequestEvent);

}

