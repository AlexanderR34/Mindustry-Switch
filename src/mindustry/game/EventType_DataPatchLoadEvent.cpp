#include "mindustry/game/EventType_DataPatchLoadEvent.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType.h"
#include "arc/struct/Seq.h"
#include "mindustry/game/EventType_DataPatchLoadEvent.h"

extern "C" {


void mark_mindustry_game_EventType$DataPatchLoadEvent(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_EventType$DataPatchLoadEvent *) object;
	if (self->F_assets)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assets)->clazz)->markFunction)((jobject) self->F_assets, mark, depth + 1);
}

void clinit_mindustry_game_EventType$DataPatchLoadEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_EventType$DataPatchLoadEvent_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/EventType$DataPatchLoadEvent:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_EventType$DataPatchLoadEvent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(118);
	((mindustry_game_EventType$DataPatchLoadEvent *) NULL_CHECK((frame[0].o)))->F_assets = (jref) (frame[1].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_EventType$DataPatchLoadEvent[] {
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
	{ "assets", &class_arc_struct_Seq, offsetof(mindustry_game_EventType$DataPatchLoadEvent, F_assets), "Larc/struct/Seq;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_EventType$DataPatchLoadEvent_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 1 },
};

Class class_mindustry_game_EventType$DataPatchLoadEvent{
		.nativeName = (intptr_t) "mindustry/game/EventType$DataPatchLoadEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_EventType$DataPatchLoadEvent),
		.classVtable = (intptr_t) vtable_mindustry_game_EventType$DataPatchLoadEvent,
		.staticInitializer = (intptr_t) clinit_mindustry_game_EventType$DataPatchLoadEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_EventType$DataPatchLoadEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_EventType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_EventType$DataPatchLoadEvent = registerClass(&class_mindustry_game_EventType$DataPatchLoadEvent);

}

