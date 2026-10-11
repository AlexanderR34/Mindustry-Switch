#include "arc/input/KeyBind.h"
#include "java/lang/Integer.h"
#include "arc/input/KeyBind_Axis.h"
#include "arc/Core.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/Boolean.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/input/KeyBind_KeybindValue.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "arc/input/KeyCode.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "arc/input/KeyBind.h"

extern "C" {

jobject SF_arc_input_KeyBind_all;

void mark_arc_input_KeyBind(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_input_KeyBind_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_input_KeyBind_all)->clazz)->markFunction)((jobject) SF_arc_input_KeyBind_all, mark, depth + 1);
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
	auto self = (arc_input_KeyBind *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_defaultValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultValue)->clazz)->markFunction)((jobject) self->F_defaultValue, mark, depth + 1);
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

jobject SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(23);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind);
	init_arc_input_KeyBind_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(32);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind);
	init_arc_input_KeyBind_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_input_KeyBind_resetAll(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:resetAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind(ctx);
	{
	LINE_NUMBER(36);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyBind_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_input_KeyBind, sp[0].o));
	LINE_NUMBER(37);
	((func_arc_input_KeyBind_resetToDefault) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_input_KeyBind_resetToDefault])(ctx, (frame[1].o));
	LINE_NUMBER(38);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_arc_input_KeyBind_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(43);
	((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue = (jref) (frame[2].o);
	LINE_NUMBER(44);
	((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[3].o);
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[2].o), &class_arc_input_KeyBind$Axis)) == 0) goto label_5;
	}
	{
	sp[0].o = checkCast(ctx, &class_arc_input_KeyBind$Axis, (frame[2].o));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[0].o, (checkCast(ctx, &class_arc_input_KeyCode, (frame[2].o))));
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(47);
	clinit_arc_input_KeyBind(ctx);
	sp[0].o = (jobject)SF_arc_input_KeyBind_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(49);
	((func_arc_input_KeyBind_load) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyBind_load])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_KeyBind_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:save", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_input_KeyBind_settingsKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyBind_settingsKey_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-single"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[2].o))->F_key;
	sp += 2;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 3;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[2].i);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(58);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-key"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[2].o))->F_key;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(60);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-min"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[2].o))->F_min;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(61);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-max"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[2].o))->F_max;
	jint temp1 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_7:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_input_KeyBind_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_input_KeyBind_settingsKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyBind_settingsKey_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(71);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-single"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(72);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-key"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(-1)));
	frame[3].i = temp0;
	LINE_NUMBER(73);
	if ((frame[3].i) >= 0) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	sp[1].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, (frame[3].i));
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(74);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(75);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-min"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_unset;
	jint temp0 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[2].o);
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	sp[0].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(76);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-max"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_unset;
	jint temp2 = (jint)((func_arc_input_KeyCode_ordinal_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_input_KeyCode_ordinal_R_int])(ctx, sp[2].o);
	jint temp3 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp2);
	sp[0].o = (jobject)SM_arc_input_KeyCode_byOrdinal_int_R_arc_input_KeyCode(ctx, temp3);
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = frame[3].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = frame[4].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_12:;
	INST_ACONST_NULL();
	goto label_14;
label_13:;
	{
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	sp += 1;
	}
label_14:;
	INST_ASTORE(1);
label_9:;
	{
	LINE_NUMBER(80);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(81);
	((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	}
label_15:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_input_KeyBind_resetToDefault(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:resetToDefault", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_input_KeyBind_settingsKey_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_input_KeyBind_settingsKey_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(87);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-single"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(88);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-key"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-min"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-max"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	if ((isInstance(ctx, sp[0].o, &class_arc_input_KeyBind$Axis)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[0].o))))->F_min;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[2].o))))->F_key;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, sp[2].o);
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[2].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[2].o))))->F_min;
	sp[3].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[3].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[3].o))))->F_max;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(ctx, sp[1].o, sp[2].o, sp[3].o);
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	sp[2].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, (checkCast(ctx, &class_arc_input_KeyCode, sp[2].o)));
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	}
label_10:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_input_KeyBind_unset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:unset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_unset;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, sp[2].o);
	((arc_input_KeyBind *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_input_KeyBind_isDefault_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:isDefault", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	if ((isInstance(ctx, sp[0].o, &class_arc_input_KeyBind$Axis)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[0].o))))->F_min;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[0].o))))->F_key;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[0].o))))->F_max;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_max;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK((checkCast(ctx, &class_arc_input_KeyBind$Axis, sp[0].o))))->F_min;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_min;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[1].o))->F_key;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_input_KeyBind_isUnset_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:isUnset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((arc_input_KeyBind$Axis *) NULL_CHECK(sp[0].o))->F_key;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_input_KeyBind_settingsKey_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:settingsKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keybind-default-keyboard-"_j))));
	sp[1].o = (jobject)((arc_input_KeyBind *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_input_KeyBind(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/KeyBind:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_KeyBind(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_arc_input_KeyBind(ctx);
	SF_arc_input_KeyBind_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_input_KeyBind;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field category
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_input_KeyBind[] {
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
	(void *) M_arc_input_KeyBind_save,
	(void *) M_arc_input_KeyBind_load,
	(void *) M_arc_input_KeyBind_resetToDefault,
	(void *) M_arc_input_KeyBind_unset,
	(void *) M_arc_input_KeyBind_isDefault_R_boolean,
	(void *) M_arc_input_KeyBind_isUnset_R_boolean,
	(void *) M_arc_input_KeyBind_settingsKey_R_java_lang_String,
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
	{ "save", "()V" },
	{ "load", "()V" },
	{ "resetToDefault", "()V" },
	{ "unset", "()V" },
	{ "isDefault", "()Z" },
	{ "isUnset", "()Z" },
	{ "settingsKey", "()Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_arc_input_KeyBind$KeybindValue,
	&class_arc_input_KeyBind$Axis,
};

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_arc_input_KeyBind_all, "Larc/struct/Seq;", 25 },
	{ "name", &class_java_lang_String, offsetof(arc_input_KeyBind, F_name), "Ljava/lang/String;", 17 },
	{ "defaultValue", &class_arc_input_KeyBind$KeybindValue, offsetof(arc_input_KeyBind, F_defaultValue), "Larc/input/KeyBind$KeybindValue;", 17 },
	{ "category", &class_java_lang_String, offsetof(arc_input_KeyBind, F_category), "Ljava/lang/String;", 17 },
	{ "value", &class_arc_input_KeyBind$Axis, offsetof(arc_input_KeyBind, F_value), "Larc/input/KeyBind$Axis;", 1 },
};

static MethodMetadata methods[] {
	{ "add", (intptr_t) SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind, 0, "(Ljava/lang/String;Larc/input/KeyBind$KeybindValue;Ljava/lang/String;)Larc/input/KeyBind;", 9 },
	{ "add", (intptr_t) SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind, 0, "(Ljava/lang/String;Larc/input/KeyBind$KeybindValue;)Larc/input/KeyBind;", 9 },
	{ "resetAll", (intptr_t) SM_arc_input_KeyBind_resetAll, 0, "()V", 9 },
	{ "<init>", (intptr_t) init_arc_input_KeyBind_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String, 0, "(Ljava/lang/String;Larc/input/KeyBind$KeybindValue;Ljava/lang/String;)V", 4 },
	{ "save", (intptr_t) M_arc_input_KeyBind_save, VTABLE_arc_input_KeyBind_save, "()V", 1 },
	{ "load", (intptr_t) M_arc_input_KeyBind_load, VTABLE_arc_input_KeyBind_load, "()V", 1 },
	{ "resetToDefault", (intptr_t) M_arc_input_KeyBind_resetToDefault, VTABLE_arc_input_KeyBind_resetToDefault, "()V", 1 },
	{ "unset", (intptr_t) M_arc_input_KeyBind_unset, VTABLE_arc_input_KeyBind_unset, "()V", 1 },
	{ "isDefault", (intptr_t) M_arc_input_KeyBind_isDefault_R_boolean, VTABLE_arc_input_KeyBind_isDefault_R_boolean, "()Z", 1 },
	{ "isUnset", (intptr_t) M_arc_input_KeyBind_isUnset_R_boolean, VTABLE_arc_input_KeyBind_isUnset_R_boolean, "()Z", 1 },
	{ "settingsKey", (intptr_t) M_arc_input_KeyBind_settingsKey_R_java_lang_String, VTABLE_arc_input_KeyBind_settingsKey_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "<clinit>", (intptr_t) clinit_arc_input_KeyBind, 0, "()V", 8 },
};

Class class_arc_input_KeyBind{
		.nativeName = (intptr_t) "arc/input/KeyBind",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_KeyBind),
		.classVtable = (intptr_t) vtable_arc_input_KeyBind,
		.staticInitializer = (intptr_t) clinit_arc_input_KeyBind,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_input_KeyBind,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_KeyBind = registerClass(&class_arc_input_KeyBind);

}
