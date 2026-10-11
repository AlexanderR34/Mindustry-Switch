#include "mindustry/game/Saves_SaveSlot_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/Saves_SaveSlot_1.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/io/SaveOptions.h"

extern "C" {


void mark_mindustry_game_Saves$SaveSlot$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_io_SaveOptions(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Saves$SaveSlot$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_game_Saves$SaveSlot$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_io_SaveOptions(ctx);
}

void init_mindustry_game_Saves$SaveSlot$1_mindustry_game_Saves$SaveSlot(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$SaveSlot$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves$SaveSlot$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(476);
	((mindustry_game_Saves$SaveSlot$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_mindustry_io_SaveOptions(ctx, (frame[0].o));
	LINE_NUMBER(477);
	((mindustry_io_SaveOptions *) NULL_CHECK((frame[0].o)))->F_embedAssets = (jint(1));
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Saves$SaveSlot$1[] {
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
	{ "this$1", &class_mindustry_game_Saves$SaveSlot, offsetof(mindustry_game_Saves$SaveSlot$1, F_this$1), "Lmindustry/game/Saves$SaveSlot;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Saves$SaveSlot$1_mindustry_game_Saves$SaveSlot, 0, "(Lmindustry/game/Saves$SaveSlot;)V", 0 },
};

Class class_mindustry_game_Saves$SaveSlot$1{
		.nativeName = (intptr_t) "mindustry/game/Saves$SaveSlot$1",
		.parentClass = (intptr_t) &class_mindustry_io_SaveOptions,
		.size = sizeof(mindustry_game_Saves$SaveSlot$1),
		.classVtable = (intptr_t) vtable_mindustry_game_Saves$SaveSlot$1,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Saves$SaveSlot$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Saves$SaveSlot$1,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_game_Saves$SaveSlot$1 = registerClass(&class_mindustry_game_Saves$SaveSlot$1);

}

