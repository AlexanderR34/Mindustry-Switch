#include "mindustry/ai/UnitStance_1.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "arc/struct/Seq.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ai/UnitStance_1.h"

extern "C" {


void mark_mindustry_ai_UnitStance$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_UnitStance(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_UnitStance$1 *) object;
}

void clinit_mindustry_ai_UnitStance$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_UnitStance(ctx);
}

void init_mindustry_ai_UnitStance$1_java_lang_String_java_lang_String_arc_input_KeyBind(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitStance$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitStance$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(87);
	init_mindustry_ai_UnitStance_java_lang_String_java_lang_String_arc_input_KeyBind(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ai_UnitStance *) NULL_CHECK((frame[0].o)))->F_incompatibleCommands;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitCommand, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_repairCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_assistCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_rebuildCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_UnitStance$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ai_UnitStance_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_UnitStance_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ai_UnitStance_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean,
	(void *) M_mindustry_ai_UnitStance_localized_R_java_lang_String,
	(void *) M_mindustry_ai_UnitStance_getIcon_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_ai_UnitStance_getEmoji_R_char,
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
	{ "isCompatible", "(Lmindustry/ai/UnitCommand;)Z" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getIcon", "()Larc/scene/style/TextureRegionDrawable;" },
	{ "getEmoji", "()C" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_UnitStance$1_java_lang_String_java_lang_String_arc_input_KeyBind, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/input/KeyBind;)V", 0 },
};

Class class_mindustry_ai_UnitStance$1{
		.nativeName = (intptr_t) "mindustry/ai/UnitStance$1",
		.parentClass = (intptr_t) &class_mindustry_ai_UnitStance,
		.size = sizeof(mindustry_ai_UnitStance$1),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitStance$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitStance$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitStance$1,
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
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitStance$1 = registerClass(&class_mindustry_ai_UnitStance$1);

}

