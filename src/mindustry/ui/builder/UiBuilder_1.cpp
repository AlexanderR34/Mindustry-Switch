#include "mindustry/ui/builder/UiBuilder_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiBuilder_1.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {

jobject SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;

void mark_mindustry_ui_builder_UiBuilder$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey, mark, depth + 1);
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
	auto self = (mindustry_ui_builder_UiBuilder$1 *) object;
}

void clinit_mindustry_ui_builder_UiBuilder$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiBuilder$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiKey_values_R_Array1_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_table;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(1));
	}
	popExceptionFrame(frameRef);
	goto label_4;
label_2:;
	INST_ASTORE(0);
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pane;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(2));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_6:;
	INST_ASTORE(0);
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_stack;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(3));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_10:;
	INST_ASTORE(0);
label_12:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_label;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(4));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_14:;
	INST_ASTORE(0);
label_16:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_18; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_image;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jint(5));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_18:;
	INST_ASTORE(0);
label_20:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_22; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_button;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (6);
	}
	popExceptionFrame(frameRef);
	goto label_24;
label_22:;
	INST_ASTORE(0);
label_24:;
label_27: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_26; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_imageButton;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (7);
	}
	popExceptionFrame(frameRef);
	goto label_28;
label_26:;
	INST_ASTORE(0);
label_28:;
label_31: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_30; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_field;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (8);
	}
	popExceptionFrame(frameRef);
	goto label_32;
label_30:;
	INST_ASTORE(0);
label_32:;
label_35: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_34; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_check;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (9);
	}
	popExceptionFrame(frameRef);
	goto label_36;
label_34:;
	INST_ASTORE(0);
label_36:;
label_39: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_38; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_slider;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (10);
	}
	popExceptionFrame(frameRef);
	goto label_40;
label_38:;
	INST_ASTORE(0);
label_40:;
label_43: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_42; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_space;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (11);
	}
	popExceptionFrame(frameRef);
	goto label_44;
label_42:;
	INST_ASTORE(0);
label_44:;
label_47: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_46; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_defaults;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (12);
	}
	popExceptionFrame(frameRef);
	goto label_48;
label_46:;
	INST_ASTORE(0);
label_48:;
label_51: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_50; }
	}
	{
	clinit_mindustry_ui_builder_UiBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_buttonTable;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (13);
	}
	popExceptionFrame(frameRef);
	goto label_53;
label_50:;
	INST_ASTORE(0);
label_53:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiBuilder$1[] {
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
	{ "$SwitchMap$mindustry$ui$builder$UiKey", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_ui_builder_UiBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_builder_UiBuilder$1, 0, "()V", 8 },
};

Class class_mindustry_ui_builder_UiBuilder$1{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiBuilder$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiBuilder$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiBuilder$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiBuilder$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiBuilder$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 4128,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = true,
};
static bool registered_mindustry_ui_builder_UiBuilder$1 = registerClass(&class_mindustry_ui_builder_UiBuilder$1);

}

