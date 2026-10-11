#include "mindustry/logic/LStatements_PlaySoundStatement_SoundChoice.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/audio/Sound.h"
#include "mindustry/logic/LStatements_PlaySoundStatement.h"
#include "mindustry/logic/LStatements_PlaySoundStatement_SoundChoice.h"

extern "C" {


void mark_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) object;
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_java_lang_String_java_lang_String_arc_audio_Sound(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlaySoundStatement$SoundChoice:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2275);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2276);
	((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[1].o);
	LINE_NUMBER(2277);
	((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(2278);
	((mindustry_logic_LStatements$PlaySoundStatement$SoundChoice *) NULL_CHECK((frame[0].o)))->F_sound = (jref) (frame[3].o);
	LINE_NUMBER(2279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice[] {
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
	{ "category", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, F_category), "Ljava/lang/String;", 16 },
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, F_name), "Ljava/lang/String;", 16 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_logic_LStatements$PlaySoundStatement$SoundChoice, F_sound), "Larc/audio/Sound;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice_java_lang_String_java_lang_String_arc_audio_Sound, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/audio/Sound;)V", 0 },
};

Class class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$PlaySoundStatement$SoundChoice",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LStatements$PlaySoundStatement$SoundChoice),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements$PlaySoundStatement,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
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
static bool registered_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice = registerClass(&class_mindustry_logic_LStatements$PlaySoundStatement$SoundChoice);

}

