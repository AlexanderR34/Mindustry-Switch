#include "mindustry/game/Objectives_Produce.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/game/Objectives.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/game/Objectives_Produce.h"

extern "C" {


void mark_mindustry_game_Objectives$Produce(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Objectives$Produce *) object;
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
}

void clinit_mindustry_game_Objectives$Produce(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Objectives$Produce_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Produce:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Objectives$Produce(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content = (jref) (frame[1].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Objectives$Produce(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Produce:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Objectives$Produce(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Objectives$Produce_complete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Produce:complete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Objectives$Produce_display_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Produce:display", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"requirement.produce"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	LINE_NUMBER(56);
	sp[3].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content;
	jint temp1 = (jint)((func_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean])(ctx, sp[3].o);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)((func_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"???"_j));
label_3:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Objectives$Produce_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Objectives$Produce:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[0].o)))->F_content;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"produce: \u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Objectives$Produce[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Objectives$Produce_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_Objectives$Produce_complete_R_boolean,
	(void *) M_mindustry_game_Objectives$Produce_display_R_java_lang_String,
	(void *) M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table,
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
	{ "complete", "()Z" },
	{ "display", "()Ljava/lang/String;" },
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
};

static jclass interfaces[] { &class_mindustry_game_Objectives$Objective, };

static FieldMetadata fields[] {
	{ "content", &class_mindustry_ctype_UnlockableContent, offsetof(mindustry_game_Objectives$Produce, F_content), "Lmindustry/ctype/UnlockableContent;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Objectives$Produce_mindustry_ctype_UnlockableContent, 0, "(Lmindustry/ctype/UnlockableContent;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_Objectives$Produce, 0, "()V", 4 },
	{ "complete", (intptr_t) M_mindustry_game_Objectives$Produce_complete_R_boolean, VTABLE_mindustry_game_Objectives$Produce_complete_R_boolean, "()Z", 1 },
	{ "display", (intptr_t) M_mindustry_game_Objectives$Produce_display_R_java_lang_String, VTABLE_mindustry_game_Objectives$Produce_display_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_game_Objectives$Produce_toString_R_java_lang_String, VTABLE_mindustry_game_Objectives$Produce_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_Objectives$Produce{
		.nativeName = (intptr_t) "mindustry/game/Objectives$Produce",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Objectives$Produce),
		.classVtable = (intptr_t) vtable_mindustry_game_Objectives$Produce,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Objectives$Produce,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Objectives$Produce,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Objectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Objectives$Produce = registerClass(&class_mindustry_game_Objectives$Produce);

}

