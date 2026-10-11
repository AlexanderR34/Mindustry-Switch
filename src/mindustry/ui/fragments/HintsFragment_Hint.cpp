#include "mindustry/ui/fragments/HintsFragment_Hint.h"
#include "mindustry/ui/fragments/HintsFragment_Hint.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/fragments/HintsFragment.h"
#include "arc/Settings.h"

extern "C" {

jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleDesktop;
jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleMobile;
jint SF_mindustry_ui_fragments_HintsFragment$Hint_visibleAll;

void mark_mindustry_ui_fragments_HintsFragment$Hint(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HintsFragment$Hint *) object;
}

void clinit_mindustry_ui_fragments_HintsFragment$Hint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_fragments_HintsFragment$Hint_visibleDesktop = jint(1);
	SF_mindustry_ui_fragments_HintsFragment$Hint_visibleMobile = jint(2);
	SF_mindustry_ui_fragments_HintsFragment$Hint_visibleAll = jint(3);
}

void M_mindustry_ui_fragments_HintsFragment$Hint_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$Hint:finish", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hint-done"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$Hint:finished", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hint-done"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HintsFragment$Hint[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_ui_fragments_HintsFragment$Hint_finish,
	(void *) M_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean,
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
	{ "name", "()Ljava/lang/String;" },
	{ "text", "()Ljava/lang/String;" },
	{ "complete", "()Z" },
	{ "show", "()Z" },
	{ "order", "()I" },
	{ "valid", "()Z" },
	{ "finish", "()V" },
	{ "finished", "()Z" },
};

static FieldMetadata fields[] {
	{ "visibleDesktop", &class_int, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$Hint_visibleDesktop, "I", 25 },
	{ "visibleMobile", &class_int, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$Hint_visibleMobile, "I", 25 },
	{ "visibleAll", &class_int, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$Hint_visibleAll, "I", 25 },
};

static MethodMetadata methods[] {
	{ "name", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_name_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "text", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_text_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "complete", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_complete_R_boolean, "()Z", 1025 },
	{ "show", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_show_R_boolean, "()Z", 1025 },
	{ "order", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_order_R_int, "()I", 1025 },
	{ "valid", 0, INDEX_mindustry_ui_fragments_HintsFragment$Hint_valid_R_boolean, "()Z", 1025 },
	{ "finish", (intptr_t) M_mindustry_ui_fragments_HintsFragment$Hint_finish, INDEX_mindustry_ui_fragments_HintsFragment$Hint_finish, "()V", 1 },
	{ "finished", (intptr_t) M_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean, INDEX_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean, "()Z", 1 },
};

Class class_mindustry_ui_fragments_HintsFragment$Hint{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HintsFragment$Hint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_HintsFragment$Hint),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HintsFragment$Hint,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HintsFragment$Hint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HintsFragment$Hint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_fragments_HintsFragment,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HintsFragment$Hint = registerClass(&class_mindustry_ui_fragments_HintsFragment$Hint);

}

