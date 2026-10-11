#include "rhino/TopLevel.h"
#include "rhino/Function.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "java/lang/Enum.h"
#include "rhino/BaseFunction.h"
#include "rhino/TopLevel_NativeErrors.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "rhino/TopLevel.h"
#include "java/util/EnumMap.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Class.h"

extern "C" {

jbool SF_rhino_TopLevel_$assertionsDisabled;

void mark_rhino_TopLevel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_IdScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_TopLevel *) object;
	if (self->F_ctors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ctors)->clazz)->markFunction)((jobject) self->F_ctors, mark, depth + 1);
	if (self->F_errors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errors)->clazz)->markFunction)((jobject) self->F_errors, mark, depth + 1);
}

void init_rhino_TopLevel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TopLevel_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"global"_j)));
	}

	popStackFrame(ctx);
}

void M_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:cacheBuiltins", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_java_util_EnumMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_EnumMap);
	init_java_util_EnumMap_java_lang_Class(ctx, sp[1].o, (((jobject) &class_rhino_TopLevel$Builtins)));
	((rhino_TopLevel *) NULL_CHECK(sp[0].o))->F_ctors = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_rhino_TopLevel$Builtins_values_R_Array1_rhino_TopLevel$Builtins(ctx);
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_TopLevel$Builtins_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_TopLevel$Builtins_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(104);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_BaseFunction)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_ctors;
	sp[0].o = (jobject)((func_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (checkCast(ctx, &class_rhino_BaseFunction, (frame[7].o))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[6].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_GeneratorFunction;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_ctors;
	sp[1].o = frame[6].o;
	sp[2].o = (jobject)SM_rhino_BaseFunction_initAsGeneratorFunction_rhino_Scriptable_boolean_R_java_lang_Object(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_rhino_BaseFunction, sp[2].o)));
	}
label_8:;
	{
	LINE_NUMBER(102);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_java_util_EnumMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_EnumMap);
	init_java_util_EnumMap_java_lang_Class(ctx, sp[1].o, (((jobject) &class_rhino_TopLevel$NativeErrors)));
	((rhino_TopLevel *) NULL_CHECK(sp[0].o))->F_errors = (jref) sp[1].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_rhino_TopLevel$NativeErrors_values_R_Array1_rhino_TopLevel$NativeErrors(ctx);
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_TopLevel$NativeErrors_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_TopLevel$NativeErrors_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	if ((isInstance(ctx, (frame[7].o), &class_rhino_BaseFunction)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_errors;
	sp[0].o = (jobject)((func_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (checkCast(ctx, &class_rhino_BaseFunction, (frame[7].o))));
	}
label_15:;
	{
	LINE_NUMBER(113);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_rhino_TopLevel_getBuiltinCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Function(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getBuiltinCtor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(135);
	if ((clinit_rhino_TopLevel(ctx), (jint)SF_rhino_TopLevel_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(136);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_TopLevel)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))))->vtable)[VTABLE_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction])(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[2].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_GeneratorFunction;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(148);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"__GeneratorFunction"_j)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_rhino_TopLevel$Builtins_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_TopLevel$Builtins_name_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_TopLevel_getNativeErrorCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_R_rhino_Function(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getNativeErrorCtor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(168);
	if ((clinit_rhino_TopLevel(ctx), (jint)SF_rhino_TopLevel_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[1].o)))(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(169);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_TopLevel)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))))->vtable)[VTABLE_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction])(ctx, (checkCast(ctx, &class_rhino_TopLevel, (frame[1].o))), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(171);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_rhino_TopLevel$NativeErrors_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_TopLevel$NativeErrors_name_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_getExistingCtor_rhino_Context_rhino_Scriptable_java_lang_String_R_rhino_Function(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getBuiltinPrototype", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(191);
	if ((clinit_rhino_TopLevel(ctx), (jint)SF_rhino_TopLevel_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_rhino_Scriptable_getParentScope_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getParentScope_R_rhino_Scriptable, (frame[0].o)))(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(192);
	if ((isInstance(ctx, (frame[0].o), &class_rhino_TopLevel)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = checkCast(ctx, &class_rhino_TopLevel, (frame[0].o));
	sp[1].o = frame[1].o;
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(195);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_GeneratorFunction;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(205);
	frame[2].o = (((jobject) createStringLiteral(ctx, u8"__GeneratorFunction"_j)));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_rhino_TopLevel$Builtins_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_TopLevel$Builtins_name_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getClassPrototype_rhino_Scriptable_java_lang_String_R_rhino_Scriptable(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getBuiltinCtor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_ctors;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_ctors;
	sp[0].o = (jobject)((func_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_rhino_BaseFunction, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getNativeErrorCtor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_errors;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_TopLevel *) NULL_CHECK((frame[0].o)))->F_errors;
	sp[0].o = (jobject)((func_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_rhino_BaseFunction, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:getBuiltinPrototype", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(243);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object])(ctx, (frame[2].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(244);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_5;
	}
	{
	sp[0].o = checkCast(ctx, &class_rhino_Scriptable, (frame[3].o));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ACONST_NULL();
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_rhino_TopLevel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel(ctx);
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_TopLevel)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_TopLevel)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_TopLevel(ctx);
	SF_rhino_TopLevel_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_TopLevel[] {
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
	(void *) M_rhino_TopLevel_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_ScriptableObject_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getMaxInstanceId_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeId_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean,
	(void *) M_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction,
	(void *) M_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction,
	(void *) M_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "cacheBuiltins", "(Lrhino/Scriptable;Z)V" },
	{ "getBuiltinCtor", "(Lrhino/TopLevel$Builtins;)Lrhino/BaseFunction;" },
	{ "getNativeErrorCtor", "(Lrhino/TopLevel$NativeErrors;)Lrhino/BaseFunction;" },
	{ "getBuiltinPrototype", "(Lrhino/TopLevel$Builtins;)Lrhino/Scriptable;" },
};

static jclass innerClasses[] {
	&class_rhino_TopLevel$NativeErrors,
	&class_rhino_TopLevel$Builtins,
};

static FieldMetadata fields[] {
	{ "ctors", &class_java_util_EnumMap, offsetof(rhino_TopLevel, F_ctors), "Ljava/util/EnumMap;", 2 },
	{ "errors", &class_java_util_EnumMap, offsetof(rhino_TopLevel, F_errors), "Ljava/util/EnumMap;", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_TopLevel_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_TopLevel, 0, "()V", 1 },
	{ "getClassName", (intptr_t) M_rhino_TopLevel_getClassName_R_java_lang_String, VTABLE_rhino_TopLevel_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "cacheBuiltins", (intptr_t) M_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean, VTABLE_rhino_TopLevel_cacheBuiltins_rhino_Scriptable_boolean, "(Lrhino/Scriptable;Z)V", 1 },
	{ "getBuiltinCtor", (intptr_t) SM_rhino_TopLevel_getBuiltinCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Function, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/TopLevel$Builtins;)Lrhino/Function;", 9 },
	{ "getNativeErrorCtor", (intptr_t) SM_rhino_TopLevel_getNativeErrorCtor_rhino_Context_rhino_Scriptable_rhino_TopLevel$NativeErrors_R_rhino_Function, 0, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/TopLevel$NativeErrors;)Lrhino/Function;", 8 },
	{ "getBuiltinPrototype", (intptr_t) SM_rhino_TopLevel_getBuiltinPrototype_rhino_Scriptable_rhino_TopLevel$Builtins_R_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/TopLevel$Builtins;)Lrhino/Scriptable;", 9 },
	{ "getBuiltinCtor", (intptr_t) M_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction, VTABLE_rhino_TopLevel_getBuiltinCtor_rhino_TopLevel$Builtins_R_rhino_BaseFunction, "(Lrhino/TopLevel$Builtins;)Lrhino/BaseFunction;", 1 },
	{ "getNativeErrorCtor", (intptr_t) M_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction, VTABLE_rhino_TopLevel_getNativeErrorCtor_rhino_TopLevel$NativeErrors_R_rhino_BaseFunction, "(Lrhino/TopLevel$NativeErrors;)Lrhino/BaseFunction;", 0 },
	{ "getBuiltinPrototype", (intptr_t) M_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable, VTABLE_rhino_TopLevel_getBuiltinPrototype_rhino_TopLevel$Builtins_R_rhino_Scriptable, "(Lrhino/TopLevel$Builtins;)Lrhino/Scriptable;", 1 },
	{ "<clinit>", (intptr_t) clinit_rhino_TopLevel, 0, "()V", 8 },
};

Class class_rhino_TopLevel{
		.nativeName = (intptr_t) "rhino/TopLevel",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_TopLevel),
		.classVtable = (intptr_t) vtable_rhino_TopLevel,
		.staticInitializer = (intptr_t) clinit_rhino_TopLevel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_TopLevel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 117,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_TopLevel = registerClass(&class_rhino_TopLevel);

}
