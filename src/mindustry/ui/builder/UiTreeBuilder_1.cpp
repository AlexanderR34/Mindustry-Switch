#include "mindustry/ui/builder/UiTreeBuilder_1.h"
#include "java/lang/NoSuchFieldError.h"
#include "java/lang/Object.h"
#include "mindustry/ui/builder/UiTreeBuilder_1.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {

jobject SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;

void mark_mindustry_ui_builder_UiTreeBuilder$1(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey, mark, depth + 1);
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
	auto self = (mindustry_ui_builder_UiTreeBuilder$1 *) object;
}

void clinit_mindustry_ui_builder_UiTreeBuilder$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiTreeBuilder$1:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiKey_values_R_Array1_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_stack;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pane;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_buttonTable;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_background;
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
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_margin;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (13);
	}
	popExceptionFrame(frameRef);
	goto label_52;
label_50:;
	INST_ASTORE(0);
label_52:;
label_55: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_54; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_align;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (14);
	}
	popExceptionFrame(frameRef);
	goto label_56;
label_54:;
	INST_ASTORE(0);
label_56:;
label_59: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_58; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_grow;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (15);
	}
	popExceptionFrame(frameRef);
	goto label_60;
label_58:;
	INST_ASTORE(0);
label_60:;
label_63: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_62; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growX;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (16);
	}
	popExceptionFrame(frameRef);
	goto label_64;
label_62:;
	INST_ASTORE(0);
label_64:;
label_67: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_66; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_growY;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (17);
	}
	popExceptionFrame(frameRef);
	goto label_68;
label_66:;
	INST_ASTORE(0);
label_68:;
label_71: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_70; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fill;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (18);
	}
	popExceptionFrame(frameRef);
	goto label_72;
label_70:;
	INST_ASTORE(0);
label_72:;
label_75: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_74; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillX;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (19);
	}
	popExceptionFrame(frameRef);
	goto label_76;
label_74:;
	INST_ASTORE(0);
label_76:;
label_79: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_78; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_fillY;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (20);
	}
	popExceptionFrame(frameRef);
	goto label_80;
label_78:;
	INST_ASTORE(0);
label_80:;
label_83: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_82; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expand;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (21);
	}
	popExceptionFrame(frameRef);
	goto label_84;
label_82:;
	INST_ASTORE(0);
label_84:;
label_87: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_86; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandX;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (22);
	}
	popExceptionFrame(frameRef);
	goto label_88;
label_86:;
	INST_ASTORE(0);
label_88:;
label_91: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_90; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_expandY;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (23);
	}
	popExceptionFrame(frameRef);
	goto label_92;
label_90:;
	INST_ASTORE(0);
label_92:;
label_95: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_94; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniform;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (24);
	}
	popExceptionFrame(frameRef);
	goto label_96;
label_94:;
	INST_ASTORE(0);
label_96:;
label_99: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_98; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformX;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (25);
	}
	popExceptionFrame(frameRef);
	goto label_100;
label_98:;
	INST_ASTORE(0);
label_100:;
label_103: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_102; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_uniformY;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (26);
	}
	popExceptionFrame(frameRef);
	goto label_104;
label_102:;
	INST_ASTORE(0);
label_104:;
label_107: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_106; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_disabled;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (27);
	}
	popExceptionFrame(frameRef);
	goto label_108;
label_106:;
	INST_ASTORE(0);
label_108:;
label_111: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_110; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_width;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (28);
	}
	popExceptionFrame(frameRef);
	goto label_112;
label_110:;
	INST_ASTORE(0);
label_112:;
label_115: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_114; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_height;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (29);
	}
	popExceptionFrame(frameRef);
	goto label_116;
label_114:;
	INST_ASTORE(0);
label_116:;
label_119: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_118; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_size;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (30);
	}
	popExceptionFrame(frameRef);
	goto label_120;
label_118:;
	INST_ASTORE(0);
label_120:;
label_123: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_122; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minWidth;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (31);
	}
	popExceptionFrame(frameRef);
	goto label_124;
label_122:;
	INST_ASTORE(0);
label_124:;
label_127: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_126; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxWidth;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (32);
	}
	popExceptionFrame(frameRef);
	goto label_128;
label_126:;
	INST_ASTORE(0);
label_128:;
label_131: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_130; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_minHeight;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (33);
	}
	popExceptionFrame(frameRef);
	goto label_132;
label_130:;
	INST_ASTORE(0);
label_132:;
label_135: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_134; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_maxHeight;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (34);
	}
	popExceptionFrame(frameRef);
	goto label_136;
label_134:;
	INST_ASTORE(0);
label_136:;
label_139: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_138; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_pad;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (35);
	}
	popExceptionFrame(frameRef);
	goto label_140;
label_138:;
	INST_ASTORE(0);
label_140:;
label_143: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_142; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padTop;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (36);
	}
	popExceptionFrame(frameRef);
	goto label_144;
label_142:;
	INST_ASTORE(0);
label_144:;
label_147: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_146; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padLeft;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (37);
	}
	popExceptionFrame(frameRef);
	goto label_148;
label_146:;
	INST_ASTORE(0);
label_148:;
label_151: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_150; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padBottom;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (38);
	}
	popExceptionFrame(frameRef);
	goto label_152;
label_150:;
	INST_ASTORE(0);
label_152:;
label_155: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_154; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_padRight;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (39);
	}
	popExceptionFrame(frameRef);
	goto label_156;
label_154:;
	INST_ASTORE(0);
label_156:;
label_159: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_158; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_colspan;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (40);
	}
	popExceptionFrame(frameRef);
	goto label_160;
label_158:;
	INST_ASTORE(0);
label_160:;
label_163: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchFieldError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_162; }
	}
	{
	clinit_mindustry_ui_builder_UiTreeBuilder$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_color;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (41);
	}
	popExceptionFrame(frameRef);
	goto label_165;
label_162:;
	INST_ASTORE(0);
label_165:;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiTreeBuilder$1[] {
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
	{ "$SwitchMap$mindustry$ui$builder$UiKey", getArrayClass(&class_int, 1), (intptr_t) &SF_mindustry_ui_builder_UiTreeBuilder$1_$SwitchMap$mindustry$ui$builder$UiKey, "[I", 4120 },
};

static MethodMetadata methods[] {
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_builder_UiTreeBuilder$1, 0, "()V", 8 },
};

Class class_mindustry_ui_builder_UiTreeBuilder$1{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiTreeBuilder$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiTreeBuilder$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiTreeBuilder$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiTreeBuilder$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiTreeBuilder$1,
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
static bool registered_mindustry_ui_builder_UiTreeBuilder$1 = registerClass(&class_mindustry_ui_builder_UiTreeBuilder$1);

}

