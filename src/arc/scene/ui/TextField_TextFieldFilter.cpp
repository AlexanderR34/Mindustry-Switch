#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextField_TextFieldFilter_invoke_arc_scene_ui_TextField_TextFieldFilter_1.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/TextField.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "arc/scene/ui/TextField_TextFieldFilter.h"
#include "arc/scene/ui/TextField_TextFieldFilter_invoke_arc_scene_ui_TextField_TextFieldFilter_0.h"
#include "java/lang/CharSequence.h"

extern "C" {

jobject SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly;
jobject SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly;

void mark_arc_scene_ui_TextField$TextFieldFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly)->clazz)->markFunction)((jobject) SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly, mark, depth + 1);
		if (SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly)->clazz)->markFunction)((jobject) SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly, mark, depth + 1);
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
	auto self = (arc_scene_ui_TextField$TextFieldFilter *) object;
}

jbool SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$1_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldFilter:lambda$static$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(840);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	if ((frame[1].i) != (46)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$0_arc_scene_ui_TextField_char_R_boolean(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldFilter:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(839);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_TextField$TextFieldFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TextField$TextFieldFilter:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	{
	LINE_NUMBER(839);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_0(ctx);
		auto proxy = (arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_0 *) gcAlloc(ctx, &class_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly = sp[0].o;
	LINE_NUMBER(840);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1(ctx);
		auto proxy = (arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1 *) gcAlloc(ctx, &class_arc_scene_ui_TextField$TextFieldFilter_invoke_arc_scene_ui_TextField$TextFieldFilter_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_scene_ui_TextField$TextFieldFilter(ctx);
	SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TextField$TextFieldFilter[] {
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
	{ "acceptChar", "(Larc/scene/ui/TextField;C)Z" },
};

static FieldMetadata fields[] {
	{ "digitsOnly", &class_arc_scene_ui_TextField$TextFieldFilter, (intptr_t) &SF_arc_scene_ui_TextField$TextFieldFilter_digitsOnly, "Larc/scene/ui/TextField$TextFieldFilter;", 25 },
	{ "floatsOnly", &class_arc_scene_ui_TextField$TextFieldFilter, (intptr_t) &SF_arc_scene_ui_TextField$TextFieldFilter_floatsOnly, "Larc/scene/ui/TextField$TextFieldFilter;", 25 },
};

static MethodMetadata methods[] {
	{ "acceptChar", 0, INDEX_arc_scene_ui_TextField$TextFieldFilter_acceptChar_arc_scene_ui_TextField_char_R_boolean, "(Larc/scene/ui/TextField;C)Z", 1025 },
	{ "lambda$static$1", (intptr_t) SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$1_arc_scene_ui_TextField_char_R_boolean, 0, "(Larc/scene/ui/TextField;C)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_arc_scene_ui_TextField$TextFieldFilter_lambda$static$0_arc_scene_ui_TextField_char_R_boolean, 0, "(Larc/scene/ui/TextField;C)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_TextField$TextFieldFilter, 0, "()V", 8 },
};

Class class_arc_scene_ui_TextField$TextFieldFilter{
		.nativeName = (intptr_t) "arc/scene/ui/TextField$TextFieldFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_TextField$TextFieldFilter),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TextField$TextFieldFilter,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TextField$TextFieldFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TextField$TextFieldFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TextField$TextFieldFilter = registerClass(&class_arc_scene_ui_TextField$TextFieldFilter);

}

