#include "rhino/regexp/RegExpImpl.h"
#include "rhino/regexp/NativeRegExp.h"
#include "rhino/Function.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/regexp/GlobData.h"
#include "rhino/regexp/RECompiled.h"
#include "java/lang/Boolean.h"
#include "rhino/Context.h"
#include "rhino/regexp/RegExpImpl.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"
#include "java/lang/CharSequence.h"
#include "rhino/RegExpProxy.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "rhino/regexp/SubString.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_rhino_regexp_RegExpImpl(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_RegExpImpl *) object;
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_parens)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parens)->clazz)->markFunction)((jobject) self->F_parens, mark, depth + 1);
	if (self->F_lastMatch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastMatch)->clazz)->markFunction)((jobject) self->F_lastMatch, mark, depth + 1);
	if (self->F_lastParen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastParen)->clazz)->markFunction)((jobject) self->F_lastParen, mark, depth + 1);
	if (self->F_leftContext)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_leftContext)->clazz)->markFunction)((jobject) self->F_leftContext, mark, depth + 1);
	if (self->F_rightContext)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rightContext)->clazz)->markFunction)((jobject) self->F_rightContext, mark, depth + 1);
}

void clinit_rhino_regexp_RegExpImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_RegExpImpl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:isRegExp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[1].o), &class_rhino_regexp_NativeRegExp));
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:compileRegExp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:wrapRegExp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExp);
	init_rhino_regexp_NativeRegExp_rhino_Scriptable_rhino_regexp_RECompiled(ctx, sp[0].o, (frame[2].o), (checkCast(ctx, &class_rhino_regexp_RECompiled, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:action", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(30);
	clinit_rhino_regexp_GlobData(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_GlobData);
	init_rhino_regexp_GlobData(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(31);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_mode = (frame[5].i);
	LINE_NUMBER(32);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	((rhino_regexp_GlobData *) NULL_CHECK(sp[0].o))->F_str = (jref) sp[1].o;
	LINE_NUMBER(34);
	switch((frame[5].i)) {
		case 1: goto label_4;
		case 2: goto label_5;
		case 3: goto label_6;
		default: goto label_7;
	}
	}
label_4:;
	{
	LINE_NUMBER(36);
	frame[7].i = (jint(2147483647));
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 >= (160)) goto label_9;
	}
	{
	LINE_NUMBER(38);
	frame[7].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp(ctx, (frame[1].o), (frame[2].o), (frame[4].o), (frame[7].i), (jint(0)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[0].o), (frame[6].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_arrayobj;
	if (sp[0].o != nullptr) goto label_13;
	}
	INST_ALOAD(9);
	goto label_14;
label_13:;
	INST_ALOAD(6);
	sp[-1].o = (jobject) ((rhino_regexp_GlobData *) NULL_CHECK(sp[-1].o))->F_arrayobj;
label_14:;
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(47);
	frame[7].i = (jint(2147483647));
	LINE_NUMBER(48);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 >= (160)) goto label_16;
	}
	{
	LINE_NUMBER(49);
	frame[7].i = (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp(ctx, (frame[1].o), (frame[2].o), (frame[4].o), (frame[7].i), (jint(0)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[0].o), (frame[6].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(57);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_19;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), &class_rhino_regexp_NativeRegExp)) == 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 >= (160)) goto label_22;
	}
	{
	LINE_NUMBER(61);
	jint temp0 = frame[7].i;
	sp[0].i = temp0;
	sp += 1;
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(2))) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	INST_IOR();
	INST_ISTORE(7);
label_22:;
	{
	LINE_NUMBER(64);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(65);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(66);
	if ((frame[7].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp(ctx, (frame[1].o), (frame[2].o), (frame[4].o), (jint(2)), (jint(1)));
	frame[8].o = sp[0].o;
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(69);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (jint(1))) goto label_31;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_32;
label_31:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)));
	sp += 1;
	}
label_32:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[10].o));
	frame[9].o = sp[0].o;
	}
label_30:;
	{
	LINE_NUMBER(73);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (jint(2))) goto label_34;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_35;
label_34:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	sp += 1;
	}
label_35:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(74);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(75);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(76);
	if ((isInstance(ctx, (frame[10].o), &class_rhino_Function)) == 0) goto label_39;
	}
	{
	LINE_NUMBER(77);
	frame[12].o = (checkCast(ctx, &class_rhino_Function, (frame[10].o)));
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(82);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_lambda = (jref) (frame[12].o);
	LINE_NUMBER(83);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_repstr = (jref) (frame[11].o);
	LINE_NUMBER(84);
	sp[0].o = frame[6].o;
	sp += 1;
	if ((frame[11].o) != nullptr) goto label_44;
	}
	INST_ICONST(-1);
	goto label_45;
label_44:;
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[11].o), (36));
	sp[0].i = temp0;
	sp += 1;
	}
label_45:;
	{
	sp -= 2;
	((rhino_regexp_GlobData *) NULL_CHECK(sp[0].o))->F_dollar = sp[1].i;
	LINE_NUMBER(85);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_charBuf = (jref) (jobject(nullptr));
	LINE_NUMBER(86);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_leftIndex = (jint(0));
	LINE_NUMBER(89);
	if ((frame[7].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[0].o), (frame[6].o), (frame[8].o));
	frame[13].o = sp[0].o;
	goto label_52;
	}
label_49:;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_str;
	frame[14].o = sp[0].o;
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[14].o), (frame[9].o));
	frame[15].i = temp0;
	LINE_NUMBER(95);
	if ((frame[15].i) < 0) goto label_55;
	}
	{
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	frame[16].i = temp0;
	LINE_NUMBER(97);
	((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens = (jref) (jobject(nullptr));
	LINE_NUMBER(98);
	((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_lastParen = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString_java_lang_String_int_int(ctx, sp[1].o, (frame[14].o), (jint(0)), (frame[15].i));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_leftContext = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString_java_lang_String_int_int(ctx, sp[1].o, (frame[14].o), (frame[15].i), (frame[16].i));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_lastMatch = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_rhino_regexp_SubString(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	sp[2].o = frame[14].o;
	jint temp1 = (frame[15].i) + (frame[16].i);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[14].o));
	init_rhino_regexp_SubString_java_lang_String_int_int(ctx, sp[1].o, sp[2].o, temp1, ((temp2 - (frame[15].i)) - (frame[16].i)));
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_rightContext = (jref) sp[1].o;
	LINE_NUMBER(102);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	frame[13].o = sp[0].o;
	LINE_NUMBER(103);
	goto label_52;
	}
label_55:;
	{
	LINE_NUMBER(104);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	frame[13].o = sp[0].o;
	}
label_52:;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_charBuf;
	if (sp[0].o != nullptr) goto label_64;
	}
	{
	LINE_NUMBER(109);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_global) != 0) goto label_66;
	}
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_66;
	{
	sp[0].o = frame[13].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_68;
	}
label_66:;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_str;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_leftContext;
	frame[14].o = sp[0].o;
	LINE_NUMBER(115);
	SM_rhino_regexp_RegExpImpl_replace_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_int_int(ctx, (frame[6].o), (frame[1].o), (frame[2].o), (frame[0].o), ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_index), ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_length));
	}
label_64:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_rightContext;
	frame[14].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_charBuf;
	sp[1].o = (jobject)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_str;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_index), (((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_index) + ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[14].o)))->F_length)));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[6].o)))->F_charBuf;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jbool param4) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:createRegExp", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(132);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))), (((jobject) createStringLiteral(ctx, u8""_j))), (jint(0)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(134);
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExp);
	init_rhino_regexp_NativeRegExp_rhino_Scriptable_rhino_regexp_RECompiled(ctx, sp[0].o, (frame[6].o), (frame[7].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	goto label_6;
	}
label_3:;
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))), &class_rhino_regexp_NativeRegExp)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(136);
	frame[5].o = (checkCast(ctx, &class_rhino_regexp_NativeRegExp, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(140);
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(141);
	ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))) = (frame[7].o);
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	frame[8].o = sp[0].o;
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(144);
	frame[8].o = (jobject(nullptr));
	}
label_15:;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_rhino_regexp_NativeRegExp_compileRE_rhino_Context_java_lang_String_java_lang_String_boolean_R_rhino_regexp_RECompiled(ctx, (frame[0].o), (frame[7].o), (frame[8].o), (frame[4].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(147);
	clinit_rhino_regexp_NativeRegExp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_NativeRegExp);
	init_rhino_regexp_NativeRegExp_rhino_Scriptable_rhino_regexp_RECompiled(ctx, sp[0].o, (frame[6].o), (frame[9].o));
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[22];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:matchOrReplace", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_str;
	frame[7].o = sp[0].o;
	LINE_NUMBER(160);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_rhino_regexp_NativeRegExp_getFlags_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_getFlags_R_int])(ctx, (frame[6].o));
	sp += 1;
	if ((temp0 & (jint(1))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 2;
	((rhino_regexp_GlobData *) NULL_CHECK(sp[0].o))->F_global = sp[1].i;
	LINE_NUMBER(161);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[8].o = sp[0].o;
	LINE_NUMBER(162);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(163);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_mode) != (jint(3))) goto label_7;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[0].o), (frame[1].o), (frame[4].o), (frame[7].o), (frame[8].o), (jint(0)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(166);
	if ((frame[9].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[9].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[4].o)))->F_leftContext;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length));
	frame[9].o = sp[0].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(-1)));
	frame[9].o = sp[0].o;
	goto label_12;
	}
label_7:;
	{
	LINE_NUMBER(170);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_global) == 0) goto label_13;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(0)));
	((rhino_regexp_NativeRegExp *) NULL_CHECK(sp[0].o))->F_lastIndex = (jref) sp[1].o;
	LINE_NUMBER(172);
	frame[10].i = (jint(0));
	}
label_16:;
	{
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[8].o), (jint(0)));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	if (temp0 > temp1) goto label_17;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[0].o), (frame[1].o), (frame[4].o), (frame[7].o), (frame[8].o), (jint(0)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(175);
	if ((frame[9].o) == nullptr) goto label_17;
	}
	{
	sp[0].o = frame[9].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_20;
	}
	LINE_NUMBER(176);
	goto label_17;
label_20:;
	{
	LINE_NUMBER(177);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_mode) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(178);
	SM_rhino_regexp_RegExpImpl_match_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_int_rhino_regexp_RegExpImpl(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[10].i), (frame[4].o));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(180);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_mode) == (jint(2))) goto label_25;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_25:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[4].o)))->F_lastMatch;
	frame[11].o = sp[0].o;
	LINE_NUMBER(182);
	frame[12].i = ((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_leftIndex);
	LINE_NUMBER(183);
	frame[13].i = (((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[11].o)))->F_index) - (frame[12].i));
	LINE_NUMBER(184);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_leftIndex = (((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[11].o)))->F_index) + ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[11].o)))->F_length));
	LINE_NUMBER(185);
	SM_rhino_regexp_RegExpImpl_replace_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_int_int(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[4].o), (frame[12].i), (frame[13].i));
	}
label_24:;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[4].o)))->F_lastMatch;
	if (((jint)((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length) != 0) goto label_30;
	}
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[8].o), (jint(0)));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	if (temp0 != temp1) goto label_32;
	}
	LINE_NUMBER(189);
	goto label_17;
label_32:;
	{
	LINE_NUMBER(190);
	sp[0].o = frame[8].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(172);
	INST_IINC(10, 1);
	goto label_16;
	}
label_17:;
	goto label_12;
label_13:;
	{
	LINE_NUMBER(194);
	sp[0].o = frame[6].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[4].o;
	sp[4].o = frame[7].o;
	sp[5].o = frame[8].o;
	sp += 6;
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[5].o)))->F_mode) != (jint(2))) goto label_34;
	}
	INST_ICONST(0);
	goto label_35;
label_34:;
	INST_ICONST(1);
label_35:;
	POP_N(7); // Pop method args
	sp->o = (jobject)((func_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].i);
	sp++;
	INST_ASTORE(9);
label_12:;
	{
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:find_split", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(209);
	frame[10].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0))));
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[11].i = temp0;
	LINE_NUMBER(213);
	jint temp1 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	frame[13].i = temp1;
	LINE_NUMBER(214);
	frame[14].o = (checkCast(ctx, &class_rhino_regexp_NativeRegExp, (frame[5].o)));
	}
label_4:;
	{
	LINE_NUMBER(218);
	frame[15].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0))));
	LINE_NUMBER(219);
	ARRAY_ACCESS(jint, (frame[6].o), (jint(0))) = (frame[10].i);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_regexp_NativeRegExp_executeRegExp_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_java_lang_String_Array1_int_int_R_java_lang_Object])(ctx, (frame[14].o), (frame[1].o), (frame[2].o), (frame[0].o), (frame[3].o), (frame[6].o), (jint(0)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(222);
	sp[0].o = frame[16].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(224);
	ARRAY_ACCESS(jint, (frame[6].o), (jint(0))) = (frame[15].i);
	LINE_NUMBER(225);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = (jint(1));
	LINE_NUMBER(226);
	ARRAY_ACCESS(jbyte, (frame[8].o), (jint(0))) = (jint(0));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[11].i);
	}
label_8:;
	{
	LINE_NUMBER(229);
	frame[10].i = ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0))));
	LINE_NUMBER(230);
	ARRAY_ACCESS(jint, (frame[6].o), (jint(0))) = (frame[15].i);
	LINE_NUMBER(231);
	ARRAY_ACCESS(jbyte, (frame[8].o), (jint(0))) = (jint(1));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_lastMatch;
	frame[17].o = sp[0].o;
	LINE_NUMBER(234);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[17].o)))->F_length);
	LINE_NUMBER(235);
	if (((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))) != 0) goto label_18;
	}
	{
	LINE_NUMBER(242);
	if ((frame[10].i) != ((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0))))) goto label_18;
	}
	{
	LINE_NUMBER(249);
	if ((frame[10].i) != (frame[11].i)) goto label_21;
	}
	{
	LINE_NUMBER(250);
	if ((frame[13].i) != (120)) goto label_23;
	}
	{
	LINE_NUMBER(251);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = (jint(1));
	LINE_NUMBER(252);
	frame[12].i = (frame[10].i);
	goto label_27;
	}
label_23:;
	{
	LINE_NUMBER(254);
	frame[12].i = (jint(-1));
	LINE_NUMBER(255);
	goto label_27;
	}
label_21:;
	{
	LINE_NUMBER(257);
	INST_IINC(10, 1);
	LINE_NUMBER(258);
	goto label_4;
	}
label_18:;
	{
	LINE_NUMBER(262);
	frame[12].i = ((frame[10].i) - ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	LINE_NUMBER(263);
	goto label_27;
	}
label_27:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens;
	if (sp[0].o != nullptr) goto label_31;
	}
	INST_ICONST(0);
	goto label_32;
label_31:;
	{
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_32:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(266);
	sp[0].o = frame[9].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[15].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(267);
	frame[16].i = (jint(0));
	}
label_35:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_36;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString])(ctx, (frame[0].o), (frame[16].i));
	frame[17].o = sp[0].o;
	LINE_NUMBER(269);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[9].o), (jint(0)));
	jint temp0 = frame[16].i;
	sp[1].o = (jobject)((func_rhino_regexp_SubString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_rhino_regexp_SubString_toString_R_java_lang_String])(ctx, (frame[17].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(267);
	INST_IINC(16, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (frame[12].i);
	}

	popStackFrame(ctx);
}

jobject M_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:getParenSubString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[0].o)))->F_parens;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(281);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(285);
	clinit_rhino_regexp_SubString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_RegExpImpl_match_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_int_rhino_regexp_RegExpImpl(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:match_glob", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_arrayobj;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	((rhino_regexp_GlobData *) NULL_CHECK(sp[0].o))->F_arrayobj = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[4].o)))->F_lastMatch;
	frame[5].o = sp[0].o;
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_rhino_regexp_SubString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_rhino_regexp_SubString_toString_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_arrayobj;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_arrayobj;
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o, (frame[6].o));
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_RegExpImpl_replace_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:replace_glob", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_lambda;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_parens;
	frame[8].o = sp[0].o;
	LINE_NUMBER(314);
	if ((frame[8].o) != nullptr) goto label_10;
	}
	INST_ICONST(0);
	goto label_11;
label_10:;
	INST_ALOAD(8);
	INST_ARRAYLENGTH();
label_11:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(315);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[9].i) + (jint(3))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(316);
	sp[0].o = frame[10].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_lastMatch;
	sp[1].o = (jobject)((func_rhino_regexp_SubString_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_regexp_SubString_toString_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(317);
	frame[11].i = (jint(0));
	}
label_15:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_16;
	}
	{
	LINE_NUMBER(318);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[11].i)));
	LINE_NUMBER(319);
	if ((frame[12].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = frame[10].o;
	jint temp0 = (frame[11].i) + (jint(1));
	sp[1].o = (jobject)((func_rhino_regexp_SubString_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_rhino_regexp_SubString_toString_R_java_lang_String])(ctx, (frame[12].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(322);
	sp[0].o = frame[10].o;
	jint temp0 = (frame[11].i) + (jint(1));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(317);
	INST_IINC(11, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[10].o;
	jint temp0 = (frame[9].i) + (jint(1));
	sp[1].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((rhino_regexp_SubString *) NULL_CHECK(sp[1].o))->F_length));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(326);
	sp[0].o = frame[10].o;
	jint temp1 = (frame[9].i) + (jint(2));
	sp[1].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_str;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(331);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_24;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_24:;
	{
	LINE_NUMBER(332);
	clinit_rhino_regexp_RegExpImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_RegExpImpl);
	init_rhino_regexp_RegExpImpl(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(333);
	((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[11].o)))->F_multiline = ((jint)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_multiline);
	LINE_NUMBER(334);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_input;
	((rhino_regexp_RegExpImpl *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	LINE_NUMBER(335);
	SM_rhino_ScriptRuntime_setRegExpProxy_rhino_Context_rhino_RegExpProxy(ctx, (frame[1].o), (frame[11].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(338);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_lambda;
	sp[0].o = (jobject)((func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Function, INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[12].o), (frame[12].o), (frame[10].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, (frame[13].o));
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(341);
	SM_rhino_ScriptRuntime_setRegExpProxy_rhino_Context_rhino_RegExpProxy(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(342);
	goto label_31;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(341);
	INST_ASTORE(14);
	popExceptionFrame(frameRef);
	{
	SM_rhino_ScriptRuntime_setRegExpProxy_rhino_Context_rhino_RegExpProxy(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(342);
	throwException(ctx, (frame[14].o));	}
label_31:;
	{
	LINE_NUMBER(343);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[6].i = temp0;
	LINE_NUMBER(344);
	goto label_34;
	}
label_7:;
	{
	LINE_NUMBER(345);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(346);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_repstr;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[6].i = temp0;
	LINE_NUMBER(347);
	if (((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_dollar) < 0) goto label_34;
	}
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(349);
	frame[9].i = ((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_dollar);
	}
label_39:;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_repstr;
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_interpretDollar_rhino_Context_rhino_regexp_RegExpImpl_java_lang_String_int_Array1_int_R_rhino_regexp_SubString(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[9].i), (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(353);
	if ((frame[10].o) == nullptr) goto label_41;
	}
	{
	LINE_NUMBER(354);
	frame[6].i = ((frame[6].i) + (((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[10].o)))->F_length) - ((jint)ARRAY_ACCESS(jint, (frame[8].o), (jint(0))))));
	LINE_NUMBER(355);
	frame[9].i = ((frame[9].i) + ((jint)ARRAY_ACCESS(jint, (frame[8].o), (jint(0)))));
	goto label_44;
	}
label_41:;
	LINE_NUMBER(357);
	INST_IINC(9, 1);
label_44:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_repstr;
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, sp[0].o, (36), (frame[9].i));
	frame[9].i = temp0;
	LINE_NUMBER(360);
	if ((frame[9].i) >= 0) goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(364);
	jint temp0 = (frame[5].i) + (frame[6].i);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_rightContext;
	frame[8].i = (temp0 + ((jint)((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_charBuf;
	frame[9].o = sp[0].o;
	LINE_NUMBER(366);
	if ((frame[9].o) != nullptr) goto label_48;
	}
	{
	LINE_NUMBER(367);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(368);
	((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_charBuf = (jref) (frame[9].o);
	goto label_51;
	}
label_48:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_charBuf;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[1].o);
	((func_java_lang_StringBuilder_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_ensureCapacity_int])(ctx, sp[0].o, (temp0 + (frame[8].i)));
	}
label_51:;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[3].o)))->F_leftContext;
	sp[1].o = (jobject)((rhino_regexp_SubString *) NULL_CHECK(sp[1].o))->F_str;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[4].i), ((frame[4].i) + (frame[5].i)));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_lambda;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[9].o), (frame[7].o));
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(377);
	SM_rhino_regexp_RegExpImpl_do_replace_rhino_regexp_GlobData_rhino_Context_rhino_regexp_RegExpImpl(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	}
label_55:;
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_regexp_RegExpImpl_interpretDollar_rhino_Context_rhino_regexp_RegExpImpl_java_lang_String_int_Array1_int_R_rhino_regexp_SubString(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:interpretDollar", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[3].i));
	if (temp0 == (36)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(389);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[0].o));
	frame[8].i = temp0;
	LINE_NUMBER(390);
	if ((frame[8].i) == (200)) goto label_3;
	}
	{
	if ((frame[8].i) > (140)) goto label_3;
	}
	{
	LINE_NUMBER(392);
	if ((frame[3].i) <= 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[3].i) - (jint(1))));
	if (temp0 != (92)) goto label_3;
	}
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[9].i = temp0;
	LINE_NUMBER(396);
	if (((frame[3].i) + (jint(1))) < (frame[9].i)) goto label_7;
	}
	{
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(399);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(400);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, (frame[5].i));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(402);
	if ((frame[8].i) == (200)) goto label_12;
	}
	{
	if ((frame[8].i) > (140)) goto label_12;
	}
	{
	LINE_NUMBER(404);
	if ((frame[5].i) != (48)) goto label_14;
	}
	{
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_14:;
	{
	LINE_NUMBER(407);
	frame[6].i = (jint(0));
	LINE_NUMBER(408);
	frame[10].i = (frame[3].i);
	}
label_17:;
	{
	LINE_NUMBER(409);
	INST_IINC(10, 1);
	if ((frame[10].i) >= (frame[9].i)) goto label_18;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[10].i));
	frame[5].i = temp0;
	jint temp3 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, temp0);
	if (temp3 == 0) goto label_18;
	}
	{
	LINE_NUMBER(410);
	frame[7].i = (((10) * (frame[6].i)) + ((frame[5].i) - (48)));
	LINE_NUMBER(411);
	if ((frame[7].i) >= (frame[6].i)) goto label_21;
	}
	LINE_NUMBER(412);
	goto label_18;
label_21:;
	{
	LINE_NUMBER(413);
	frame[6].i = (frame[7].i);
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_parens;
	if (sp[0].o != nullptr) goto label_23;
	}
	INST_ICONST(0);
	goto label_24;
label_23:;
	{
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_parens;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].i = temp0;
	sp += 1;
	}
label_24:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(417);
	frame[6].i = ((frame[5].i) - (48));
	LINE_NUMBER(418);
	if ((frame[6].i) <= (frame[11].i)) goto label_27;
	}
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_27:;
	{
	LINE_NUMBER(420);
	frame[10].i = ((frame[3].i) + (jint(2)));
	LINE_NUMBER(421);
	if (((frame[3].i) + (jint(2))) >= (frame[9].i)) goto label_30;
	}
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), ((frame[3].i) + (jint(2))));
	frame[5].i = temp0;
	LINE_NUMBER(423);
	jint temp1 = (jint)SM_rhino_regexp_NativeRegExp_isDigit_char_R_boolean(ctx, (frame[5].i));
	if (temp1 == 0) goto label_30;
	}
	{
	LINE_NUMBER(424);
	frame[7].i = (((10) * (frame[6].i)) + ((frame[5].i) - (48)));
	LINE_NUMBER(425);
	if ((frame[7].i) > (frame[11].i)) goto label_30;
	}
	{
	LINE_NUMBER(426);
	INST_IINC(10, 1);
	LINE_NUMBER(427);
	frame[6].i = (frame[7].i);
	}
label_30:;
	{
	LINE_NUMBER(431);
	if ((frame[6].i) != 0) goto label_18;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_18:;
	{
	LINE_NUMBER(434);
	INST_IINC(6, -1);
	LINE_NUMBER(435);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = ((frame[10].i) - (frame[3].i));
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString])(ctx, (frame[1].o), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(439);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = (jint(2));
	LINE_NUMBER(440);
	switch((frame[5].i)) {
		case 36: goto label_40;
		case 38: goto label_41;
		case 39: goto label_42;
		case 43: goto label_43;
		case 96: goto label_44;
		default: goto label_45;
	}
	}
label_40:;
	{
	LINE_NUMBER(442);
	clinit_rhino_regexp_SubString(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_regexp_SubString);
	init_rhino_regexp_SubString_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_41:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_lastMatch;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_43:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_lastParen;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_44:;
	{
	LINE_NUMBER(448);
	if ((frame[8].i) != (120)) goto label_46;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_leftContext;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_index = (jint(0));
	LINE_NUMBER(457);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_leftContext;
	sp[1].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_lastMatch;
	((rhino_regexp_SubString *) NULL_CHECK(sp[0].o))->F_length = ((jint)((rhino_regexp_SubString *) NULL_CHECK(sp[1].o))->F_index);
	}
label_46:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_leftContext;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((rhino_regexp_RegExpImpl *) NULL_CHECK((frame[1].o)))->F_rightContext;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_45:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_rhino_regexp_RegExpImpl_do_replace_rhino_regexp_GlobData_rhino_Context_rhino_regexp_RegExpImpl(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:do_replace", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_charBuf;
	frame[3].o = sp[0].o;
	LINE_NUMBER(472);
	frame[4].i = (jint(0));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_repstr;
	frame[5].o = sp[0].o;
	LINE_NUMBER(474);
	frame[6].i = ((jint)((rhino_regexp_GlobData *) NULL_CHECK((frame[0].o)))->F_dollar);
	LINE_NUMBER(475);
	if ((frame[6].i) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[7].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].o), (frame[4].i), (frame[6].i));
	LINE_NUMBER(480);
	frame[4].i = (frame[6].i);
	LINE_NUMBER(481);
	sp[0].o = (jobject)SM_rhino_regexp_RegExpImpl_interpretDollar_rhino_Context_rhino_regexp_RegExpImpl_java_lang_String_int_Array1_int_R_rhino_regexp_SubString(ctx, (frame[1].o), (frame[2].o), (frame[5].o), (frame[6].i), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(483);
	if ((frame[9].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(484);
	frame[8].i = ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[9].o)))->F_length);
	LINE_NUMBER(485);
	if ((frame[8].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(486);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((rhino_regexp_SubString *) NULL_CHECK((frame[9].o)))->F_str;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, ((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[9].o)))->F_index), (((jint)((rhino_regexp_SubString *) NULL_CHECK((frame[9].o)))->F_index) + (frame[8].i)));
	}
label_14:;
	{
	LINE_NUMBER(488);
	frame[4].i = ((frame[4].i) + ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	LINE_NUMBER(489);
	frame[6].i = ((frame[6].i) + ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	goto label_17;
	}
label_11:;
	LINE_NUMBER(491);
	INST_IINC(6, 1);
label_17:;
	{
	LINE_NUMBER(493);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[5].o), (36), (frame[6].i));
	frame[6].i = temp0;
	LINE_NUMBER(494);
	if ((frame[6].i) >= 0) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(496);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[5].o));
	frame[7].i = temp0;
	LINE_NUMBER(497);
	if ((frame[7].i) <= (frame[4].i)) goto label_20;
	}
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].o), (frame[4].i), (frame[7].i));
	}
label_20:;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[33];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:js_split", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, (frame[1].o), (frame[2].o), (jint(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(514);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(1))) goto label_2;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(515);
	frame[7].l = (jlong(0));
	LINE_NUMBER(516);
	if ((frame[6].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(518);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_toUint32_java_lang_Object_R_long(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(1)))));
	frame[7].l = temp0;
	LINE_NUMBER(519);
	if ((longCompare((frame[7].l), (jlong(0)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(520);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_9:;
	{
	LINE_NUMBER(522);
	jlong temp0 = frame[7].l;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if ((longCompare(temp0, (jlong(temp1)))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(523);
	jint temp0 = jint(1);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	frame[7].l = (jlong((temp0 + temp1)));
	}
label_6:;
	{
	LINE_NUMBER(528);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) < (jint(1))) goto label_12;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)));
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(529);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (jint(0)), (frame[5].o), (frame[3].o));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_13:;
	{
	LINE_NUMBER(533);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(534);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(535);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(536);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(537);
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))), &class_rhino_Scriptable)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getRegExpProxy_rhino_Context_R_rhino_RegExpProxy(ctx, (frame[1].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(539);
	if ((frame[12].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(540);
	frame[13].o = (checkCast(ctx, &class_rhino_Scriptable, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0))))));
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_rhino_RegExpProxy_isRegExp_rhino_Scriptable_R_boolean) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_isRegExp_rhino_Scriptable_R_boolean, (frame[12].o)))(ctx, (frame[12].o), (frame[13].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(542);
	frame[11].o = (frame[13].o);
	}
label_19:;
	{
	LINE_NUMBER(546);
	if ((frame[11].o) != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = frame[10].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[9].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_25:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[13].o = sp[0].o;
	LINE_NUMBER(554);
	frame[15].i = (jint(0));
	LINE_NUMBER(555);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[16].o = sp[0].o;
	LINE_NUMBER(556);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[17].o = sp[0].o;
	LINE_NUMBER(557);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	frame[18].i = temp0;
	}
label_32:;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)SM_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_int_rhino_RegExpProxy_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[9].o), (frame[18].i), (frame[12].o), (frame[11].o), (frame[13].o), (frame[10].o), (frame[16].o), (frame[17].o));
	frame[14].i = temp0;
	if (temp0 < 0) goto label_34;
	}
	{
	LINE_NUMBER(561);
	if ((frame[6].i) == 0) goto label_36;
	}
	{
	if ((longCompare((jlong((frame[15].i))), (frame[7].l))) >= 0) goto label_34;
	}
label_36:;
	{
	jint temp0 = frame[14].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 <= temp1) goto label_37;
	}
	LINE_NUMBER(562);
	goto label_34;
label_37:;
	{
	LINE_NUMBER(565);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_39;
	}
	{
	LINE_NUMBER(566);
	frame[19].o = (frame[3].o);
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[13].o), (jint(0)))), (frame[14].i));
	frame[19].o = sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(570);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[15].i), (frame[5].o), (frame[19].o));
	LINE_NUMBER(571);
	INST_IINC(15, 1);
	LINE_NUMBER(577);
	if ((frame[11].o) == nullptr) goto label_45;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[16].o), (jint(0)))) == 0) goto label_45;
	}
	{
	LINE_NUMBER(578);
	frame[20].i = (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (jint(0))))))->length);
	LINE_NUMBER(579);
	frame[21].i = (jint(0));
	}
label_48:;
	{
	if ((frame[21].i) >= (frame[20].i)) goto label_49;
	}
	{
	LINE_NUMBER(580);
	if ((frame[6].i) == 0) goto label_51;
	}
	{
	if ((longCompare((jlong((frame[15].i))), (frame[7].l))) < 0) goto label_51;
	}
	LINE_NUMBER(581);
	goto label_49;
label_51:;
	{
	LINE_NUMBER(582);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[15].i), (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (jint(0)))), (frame[21].i))));
	LINE_NUMBER(583);
	INST_IINC(15, 1);
	LINE_NUMBER(579);
	INST_IINC(21, 1);
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(585);
	ARRAY_ACCESS(jbyte, (frame[16].o), (jint(0))) = (jint(0));
	}
label_45:;
	{
	LINE_NUMBER(587);
	ARRAY_ACCESS(jint, (frame[13].o), (jint(0))) = ((frame[14].i) + ((jint)ARRAY_ACCESS(jint, (frame[10].o), (jint(0)))));
	LINE_NUMBER(589);
	if ((frame[18].i) >= (130)) goto label_56;
	}
	{
	if ((frame[18].i) == (200)) goto label_56;
	}
	{
	LINE_NUMBER(595);
	if ((frame[6].i) != 0) goto label_56;
	}
	{
	jint temp0 = (jint)ARRAY_ACCESS(jint, (frame[13].o), (jint(0)));
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != temp1) goto label_56;
	}
	LINE_NUMBER(596);
	goto label_34;
label_56:;
	LINE_NUMBER(598);
	goto label_32;
label_34:;
	{
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jint SM_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_int_rhino_RegExpProxy_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10) {
	jtype frame[24];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/RegExpImpl:find_split", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_RegExpImpl(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	frame[9].o = param9;
	frame[10].o = param10;
	{
	LINE_NUMBER(619);
	frame[11].i = ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0))));
	LINE_NUMBER(620);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[12].i = temp0;
	LINE_NUMBER(627);
	if ((frame[4].i) != (120)) goto label_3;
	}
	INST_ALOAD(6);
	if ((--sp)->o != nullptr) goto label_3;
	{
	sp[0].o = frame[3].o;
	LINE_NUMBER(628);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (jint(0)));
	if (temp0 != (32)) goto label_3;
	}
	{
	LINE_NUMBER(630);
	if ((frame[11].i) != 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(631);
	if ((frame[11].i) >= (frame[12].i)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[11].i));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(632);
	INST_IINC(11, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(633);
	ARRAY_ACCESS(jint, (frame[7].o), (jint(0))) = (frame[11].i);
	}
label_6:;
	{
	LINE_NUMBER(637);
	if ((frame[11].i) != (frame[12].i)) goto label_10;
	}
	{
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_10:;
	{
	LINE_NUMBER(641);
	if ((frame[11].i) >= (frame[12].i)) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	LINE_NUMBER(642);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	jint temp2 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp1);
	if (temp2 != 0) goto label_12;
	}
	{
	LINE_NUMBER(643);
	INST_IINC(11, 1);
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(646);
	frame[13].i = (frame[11].i);
	}
label_15:;
	{
	LINE_NUMBER(647);
	if ((frame[13].i) >= (frame[12].i)) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[13].i));
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_16;
	}
	{
	LINE_NUMBER(648);
	INST_IINC(13, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(651);
	ARRAY_ACCESS(jint, (frame[8].o), (jint(0))) = ((frame[13].i) - (frame[11].i));
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return (frame[11].i);
	}
label_3:;
	{
	LINE_NUMBER(665);
	if ((frame[11].i) <= (frame[12].i)) goto label_19;
	}
	{
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_19:;
	{
	LINE_NUMBER(673);
	if ((frame[6].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(674);
	jint temp0 = (jint)((func_rhino_RegExpProxy_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int) resolveInterfaceMethod(ctx, &class_rhino_RegExpProxy, INDEX_rhino_RegExpProxy_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[6].o), (frame[7].o), (frame[8].o), (frame[9].o), (frame[10].o));
	popStackFrame(ctx);
	return temp0;
	}
label_21:;
	{
	LINE_NUMBER(683);
	if ((frame[4].i) == (200)) goto label_23;
	}
	{
	if ((frame[4].i) >= (130)) goto label_23;
	}
	INST_ILOAD(12);
	if ((--sp)->i != 0) goto label_23;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_23:;
	{
	LINE_NUMBER(697);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(698);
	if ((frame[4].i) != (120)) goto label_27;
	}
	{
	LINE_NUMBER(699);
	if ((frame[11].i) != (frame[12].i)) goto label_29;
	}
	{
	LINE_NUMBER(700);
	ARRAY_ACCESS(jint, (frame[8].o), (jint(0))) = (jint(1));
	LINE_NUMBER(701);
	popStackFrame(ctx);
	return (frame[11].i);
	}
label_29:;
	{
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return ((frame[11].i) + (jint(1)));
	}
label_27:;
	{
	LINE_NUMBER(705);
	if ((frame[11].i) != (frame[12].i)) goto label_32;
	}
	INST_ICONST(-1);
	goto label_33;
label_32:;
	{
	jint temp0 = (frame[11].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_33:;
	popStackFrame(ctx);
	INST_IRETURN();
label_25:;
	{
	LINE_NUMBER(711);
	if (((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))) < (frame[12].i)) goto label_34;
	}
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return (frame[12].i);
	}
label_34:;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int])(ctx, (frame[2].o), (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	frame[11].i = temp0;
	LINE_NUMBER(716);
	if ((frame[11].i) == (jint(-1))) goto label_37;
	}
	INST_ILOAD(11);
	goto label_38;
label_37:;
	INST_ILOAD(12);
label_38:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_RegExpImpl[] {
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
	(void *) M_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean,
	(void *) M_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object,
	(void *) M_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int,
	(void *) M_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString,
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
	{ "isRegExp", "(Lrhino/Scriptable;)Z" },
	{ "compileRegExp", "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "wrapRegExp", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "action", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;" },
	{ "find_split", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;Lrhino/Scriptable;[I[I[Z[[Ljava/lang/String;)I" },
	{ "js_split", "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getParenSubString", "(I)Lrhino/regexp/SubString;" },
};

static jclass interfaces[] { &class_rhino_RegExpProxy, };

static FieldMetadata fields[] {
	{ "input", &class_java_lang_String, offsetof(rhino_regexp_RegExpImpl, F_input), "Ljava/lang/String;", 4 },
	{ "multiline", &class_boolean, offsetof(rhino_regexp_RegExpImpl, F_multiline), "Z", 4 },
	{ "parens", getArrayClass(&class_rhino_regexp_SubString, 1), offsetof(rhino_regexp_RegExpImpl, F_parens), "[Lrhino/regexp/SubString;", 4 },
	{ "lastMatch", &class_rhino_regexp_SubString, offsetof(rhino_regexp_RegExpImpl, F_lastMatch), "Lrhino/regexp/SubString;", 4 },
	{ "lastParen", &class_rhino_regexp_SubString, offsetof(rhino_regexp_RegExpImpl, F_lastParen), "Lrhino/regexp/SubString;", 4 },
	{ "leftContext", &class_rhino_regexp_SubString, offsetof(rhino_regexp_RegExpImpl, F_leftContext), "Lrhino/regexp/SubString;", 4 },
	{ "rightContext", &class_rhino_regexp_SubString, offsetof(rhino_regexp_RegExpImpl, F_rightContext), "Lrhino/regexp/SubString;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_RegExpImpl, 0, "()V", 1 },
	{ "isRegExp", (intptr_t) M_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean, VTABLE_rhino_regexp_RegExpImpl_isRegExp_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "compileRegExp", (intptr_t) M_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object, VTABLE_rhino_regexp_RegExpImpl_compileRegExp_rhino_Context_java_lang_String_java_lang_String_R_java_lang_Object, "(Lrhino/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "wrapRegExp", (intptr_t) M_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, VTABLE_rhino_regexp_RegExpImpl_wrapRegExp_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/Scriptable;", 1 },
	{ "action", (intptr_t) M_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, VTABLE_rhino_regexp_RegExpImpl_action_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_int_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;I)Ljava/lang/Object;", 1 },
	{ "createRegExp", (intptr_t) SM_rhino_regexp_RegExpImpl_createRegExp_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_int_boolean_R_rhino_regexp_NativeRegExp, 0, "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;IZ)Lrhino/regexp/NativeRegExp;", 10 },
	{ "matchOrReplace", (intptr_t) SM_rhino_regexp_RegExpImpl_matchOrReplace_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_rhino_regexp_RegExpImpl_rhino_regexp_GlobData_rhino_regexp_NativeRegExp_R_java_lang_Object, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;Lrhino/regexp/RegExpImpl;Lrhino/regexp/GlobData;Lrhino/regexp/NativeRegExp;)Ljava/lang/Object;", 10 },
	{ "find_split", (intptr_t) M_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int, VTABLE_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;Lrhino/Scriptable;[I[I[Z[[Ljava/lang/String;)I", 1 },
	{ "getParenSubString", (intptr_t) M_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString, VTABLE_rhino_regexp_RegExpImpl_getParenSubString_int_R_rhino_regexp_SubString, "(I)Lrhino/regexp/SubString;", 0 },
	{ "match_glob", (intptr_t) SM_rhino_regexp_RegExpImpl_match_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_int_rhino_regexp_RegExpImpl, 0, "(Lrhino/regexp/GlobData;Lrhino/Context;Lrhino/Scriptable;ILrhino/regexp/RegExpImpl;)V", 10 },
	{ "replace_glob", (intptr_t) SM_rhino_regexp_RegExpImpl_replace_glob_rhino_regexp_GlobData_rhino_Context_rhino_Scriptable_rhino_regexp_RegExpImpl_int_int, 0, "(Lrhino/regexp/GlobData;Lrhino/Context;Lrhino/Scriptable;Lrhino/regexp/RegExpImpl;II)V", 10 },
	{ "interpretDollar", (intptr_t) SM_rhino_regexp_RegExpImpl_interpretDollar_rhino_Context_rhino_regexp_RegExpImpl_java_lang_String_int_Array1_int_R_rhino_regexp_SubString, 0, "(Lrhino/Context;Lrhino/regexp/RegExpImpl;Ljava/lang/String;I[I)Lrhino/regexp/SubString;", 10 },
	{ "do_replace", (intptr_t) SM_rhino_regexp_RegExpImpl_do_replace_rhino_regexp_GlobData_rhino_Context_rhino_regexp_RegExpImpl, 0, "(Lrhino/regexp/GlobData;Lrhino/Context;Lrhino/regexp/RegExpImpl;)V", 10 },
	{ "js_split", (intptr_t) M_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_regexp_RegExpImpl_js_split_rhino_Context_rhino_Scriptable_java_lang_String_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "find_split", (intptr_t) SM_rhino_regexp_RegExpImpl_find_split_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_int_rhino_RegExpProxy_rhino_Scriptable_Array1_int_Array1_int_Array1_boolean_Array2_java_lang_String_R_int, 0, "(Lrhino/Context;Lrhino/Scriptable;Ljava/lang/String;Ljava/lang/String;ILrhino/RegExpProxy;Lrhino/Scriptable;[I[I[Z[[Ljava/lang/String;)I", 10 },
};

Class class_rhino_regexp_RegExpImpl{
		.nativeName = (intptr_t) "rhino/regexp/RegExpImpl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_RegExpImpl),
		.classVtable = (intptr_t) vtable_rhino_regexp_RegExpImpl,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_RegExpImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_RegExpImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_RegExpImpl = registerClass(&class_rhino_regexp_RegExpImpl);

}
