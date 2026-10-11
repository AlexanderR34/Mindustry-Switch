#include "mindustry/logic/LExecutor_PlayMusicI.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_PlayMusicI.h"
#include "mindustry/logic/LVar.h"
#include "arc/audio/Music.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "mindustry/core/Control.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PlayMusicI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$PlayMusicI *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_interrupt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interrupt)->clazz)->markFunction)((jobject) self->F_interrupt, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PlayMusicI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PlayMusicI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlayMusicI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PlayMusicI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2264);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PlayMusicI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlayMusicI:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PlayMusicI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2267);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2268);
	((mindustry_logic_LExecutor$PlayMusicI *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(2269);
	((mindustry_logic_LExecutor$PlayMusicI *) NULL_CHECK((frame[0].o)))->F_interrupt = (jref) (frame[2].o);
	LINE_NUMBER(2270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PlayMusicI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PlayMusicI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2274);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2277);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PlayMusicI *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2278);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$PlayMusicI *) NULL_CHECK((frame[0].o)))->F_interrupt;
	jint temp0 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[2].o);
	((func_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(2279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PlayMusicI[] {
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
	(void *) M_mindustry_logic_LExecutor$PlayMusicI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "name", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlayMusicI, F_name), "Lmindustry/logic/LVar;", 1 },
	{ "interrupt", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PlayMusicI, F_interrupt), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PlayMusicI, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PlayMusicI_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PlayMusicI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PlayMusicI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$PlayMusicI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PlayMusicI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PlayMusicI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PlayMusicI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PlayMusicI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PlayMusicI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$PlayMusicI = registerClass(&class_mindustry_logic_LExecutor$PlayMusicI);

}

