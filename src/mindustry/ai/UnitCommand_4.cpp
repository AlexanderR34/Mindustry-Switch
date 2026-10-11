#include "mindustry/ai/UnitCommand_4.h"
#include "arc/func/Func.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ai/UnitCommand_4.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/input/KeyBind.h"

extern "C" {


void mark_mindustry_ai_UnitCommand$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_UnitCommand(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_UnitCommand$4 *) object;
}

void clinit_mindustry_ai_UnitCommand$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_UnitCommand(ctx);
}

void init_mindustry_ai_UnitCommand$4_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand$4:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(96);
	init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	LINE_NUMBER(97);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_switchToMove = (jint(0));
	LINE_NUMBER(98);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_drawTarget = (jint(1));
	LINE_NUMBER(99);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_resetTarget = (jint(0));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_UnitCommand$4[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ai_UnitCommand_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_UnitCommand_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ai_UnitCommand_localized_R_java_lang_String,
	(void *) M_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_ai_UnitCommand_getEmoji_R_char,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getIcon", "()Larc/scene/style/TextureRegionDrawable;" },
	{ "getEmoji", "()C" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_UnitCommand$4_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/input/KeyBind;Larc/func/Func;)V", 0 },
};

Class class_mindustry_ai_UnitCommand$4{
		.nativeName = (intptr_t) "mindustry/ai/UnitCommand$4",
		.parentClass = (intptr_t) &class_mindustry_ai_UnitCommand,
		.size = sizeof(mindustry_ai_UnitCommand$4),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitCommand$4,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitCommand$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitCommand$4,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitCommand$4 = registerClass(&class_mindustry_ai_UnitCommand$4);

}

