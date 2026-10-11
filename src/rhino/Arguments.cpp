#include "rhino/Arguments.h"
#include "rhino/NativeCall.h"
#include "java/lang/Integer.h"
#include "rhino/Symbol.h"
#include "rhino/NativeFunction.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/BaseFunction.h"
#include "rhino/UniqueTag.h"
#include "rhino/Callable.h"
#include "rhino/Arguments_ThrowTypeError.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/Arguments_1.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/SymbolKey.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"
#include "rhino/Arguments.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_rhino_Arguments_FTAG;
jint SF_rhino_Arguments_Id_callee;
jint SF_rhino_Arguments_Id_length;
jint SF_rhino_Arguments_Id_caller;
jint SF_rhino_Arguments_MAX_INSTANCE_ID;
jobject SF_rhino_Arguments_iteratorMethod;

void mark_rhino_Arguments(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Arguments_FTAG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Arguments_FTAG)->clazz)->markFunction)((jobject) SF_rhino_Arguments_FTAG, mark, depth + 1);
		if (SF_rhino_Arguments_iteratorMethod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Arguments_iteratorMethod)->clazz)->markFunction)((jobject) SF_rhino_Arguments_iteratorMethod, mark, depth + 1);
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
	auto self = (rhino_Arguments *) object;
	if (self->F_callerObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_callerObj)->clazz)->markFunction)((jobject) self->F_callerObj, mark, depth + 1);
	if (self->F_calleeObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_calleeObj)->clazz)->markFunction)((jobject) self->F_calleeObj, mark, depth + 1);
	if (self->F_lengthObj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lengthObj)->clazz)->markFunction)((jobject) self->F_lengthObj, mark, depth + 1);
	if (self->F_activation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activation)->clazz)->markFunction)((jobject) self->F_activation, mark, depth + 1);
	if (self->F_args)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_args)->clazz)->markFunction)((jobject) self->F_args, mark, depth + 1);
}

void init_rhino_Arguments_rhino_NativeCall(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Arguments(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_rhino_IdScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(445);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerAttr = (jint(2));
	LINE_NUMBER(446);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeAttr = (jint(2));
	LINE_NUMBER(447);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_lengthAttr = (jint(2));
	LINE_NUMBER(16);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation = (jref) (frame[1].o);
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_rhino_NativeCall_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeCall_getParentScope_R_rhino_Scriptable])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(19);
	((func_rhino_Arguments_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Arguments_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	((func_rhino_Arguments_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[1].o)))->F_originalArgs;
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_args = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_lengthObj = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK((frame[1].o)))->F_function;
	frame[3].o = sp[0].o;
	LINE_NUMBER(26);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeObj = (jref) (frame[3].o);
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_rhino_NativeFunction_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeFunction_getLanguageVersion_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(29);
	if ((frame[4].i) > (130)) goto label_14;
	}
	{
	if ((frame[4].i) == (200)) goto label_14;
	}
	{
	LINE_NUMBER(31);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerObj = (jref) (jobject(nullptr));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_callerObj = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_rhino_SymbolKey(ctx);
	sp[1].o = (jobject)SF_rhino_SymbolKey_ITERATOR;
	clinit_rhino_Arguments(ctx);
	sp[2].o = (jobject)SF_rhino_Arguments_iteratorMethod;
	((func_rhino_Arguments_defineProperty_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_defineProperty_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(2)));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"Arguments"_j)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_arg_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:arg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (frame[1].i)) goto label_2;
	}
label_1:;
	clinit_rhino_Arguments(ctx);
	(sp++)->o = SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_putIntoActivation_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:putIntoActivation", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_function;
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	((func_rhino_NativeCall_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getFromActivation_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getFromActivation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_function;
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[0].o = (jobject)((func_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_replaceArg_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:replaceArg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(62);
	jint temp0 = (jint)M_rhino_Arguments_sharedWithActivation_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(63);
	M_rhino_Arguments_putIntoActivation_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[1].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[1].o))->F_originalArgs;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_args = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	}
label_9:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[2].o);
	LINE_NUMBER(70);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_12;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_12:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Arguments_removeArg_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:removeArg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[1].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[1].o))->F_originalArgs;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[1].o);
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_args = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[1].o));
	}
label_9:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	jint temp0 = frame[1].i;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(81);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(3);
	INST_ATHROW();
	label_11:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_Arguments_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)M_rhino_Arguments_arg_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)M_rhino_Arguments_arg_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = frame[3].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(100);
	jint temp0 = (jint)M_rhino_Arguments_sharedWithActivation_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)M_rhino_Arguments_getFromActivation_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_Arguments_sharedWithActivation_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:sharedWithActivation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_function;
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_rhino_NativeFunction_getParamCount_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeFunction_getParamCount_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(113);
	if ((frame[1].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(116);
	if ((frame[1].i) >= ((frame[4].i) - (jint(1)))) goto label_8;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, (frame[3].o), (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(118);
	frame[6].i = ((frame[1].i) + (jint(1)));
	}
label_11:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeFunction_getParamOrVarName_int_R_java_lang_String])(ctx, (frame[3].o), (frame[6].i));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(118);
	INST_IINC(6, 1);
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)M_rhino_Arguments_arg_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(132);
	M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(134);
	M_rhino_Arguments_replaceArg_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[3].o));
	}
label_3:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Arguments_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(140);
	M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(145);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(146);
	M_rhino_Arguments_removeArg_int(ctx, (frame[0].o), (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(148);
	M_rhino_ScriptableObject_delete_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_Arguments_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (jint(3));
	}

	popStackFrame(ctx);
}

jint M_rhino_Arguments_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:findInstanceIdInfo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	frame[2].i = (jint(0));
	LINE_NUMBER(172);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(174);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(175);
	if ((frame[5].i) != (6)) goto label_4;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(5)));
	frame[4].i = temp0;
	LINE_NUMBER(177);
	if ((frame[4].i) != (101)) goto label_7;
	}
	{
	LINE_NUMBER(178);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"callee"_j)));
	LINE_NUMBER(179);
	frame[2].i = (jint(1));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(180);
	if ((frame[4].i) != (104)) goto label_10;
	}
	{
	LINE_NUMBER(181);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"length"_j)));
	LINE_NUMBER(182);
	frame[2].i = (jint(2));
	goto label_4;
	}
label_10:;
	{
	LINE_NUMBER(183);
	if ((frame[4].i) != (114)) goto label_4;
	}
	{
	LINE_NUMBER(184);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8"caller"_j)));
	LINE_NUMBER(185);
	frame[2].i = (jint(3));
	}
label_4:;
	{
	LINE_NUMBER(188);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	if ((frame[3].o) == (frame[1].o)) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ICONST(0);
	INST_ISTORE(2);
label_15:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(193);
	if ((frame[2].i) == (jint(1))) goto label_19;
	}
	{
	if ((frame[2].i) != (jint(3))) goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_17:;
	{
	LINE_NUMBER(199);
	if ((frame[2].i) != 0) goto label_20;
	}
	{
	jint temp0 = (jint)M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}
label_20:;
	{
	LINE_NUMBER(202);
	switch((frame[2].i)) {
		case 1: goto label_21;
		case 2: goto label_22;
		case 3: goto label_23;
		default: goto label_24;
	}
	}
label_21:;
	{
	LINE_NUMBER(204);
	frame[4].i = ((jint)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeAttr);
	LINE_NUMBER(205);
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(207);
	frame[4].i = ((jint)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerAttr);
	LINE_NUMBER(208);
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(210);
	frame[4].i = ((jint)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_lengthAttr);
	LINE_NUMBER(211);
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(213);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(215);
	jint temp0 = (jint)SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(ctx, (frame[4].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getInstanceIdName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(222);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"callee"_j)));
	}
label_2:;
	{
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"length"_j)));
	}
label_3:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"caller"_j)));
	}
label_4:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getInstanceIdValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(235);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeObj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_lengthObj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerObj;
	frame[2].o = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = frame[2].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(243);
	frame[2].o = (jobject(nullptr));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(244);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_activation;
	sp[0].o = (jobject)((rhino_NativeCall *) NULL_CHECK(sp[0].o))->F_parentActivationCall;
	frame[3].o = sp[0].o;
	LINE_NUMBER(246);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_NativeCall_get_java_lang_String_rhino_Scriptable_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"arguments"_j))), (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(258);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(260);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeObj = (jref) (frame[2].o);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(263);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_lengthObj = (jref) (frame[2].o);
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_7;
	}
	INST_ALOAD(2);
	goto label_8;
label_7:;
	clinit_rhino_UniqueTag(ctx);
	(sp++)->o = SF_rhino_UniqueTag_NULL_VALUE;
label_8:;
	{
	sp -= 2;
	((rhino_Arguments *) NULL_CHECK(sp[0].o))->F_callerObj = (jref) sp[1].o;
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(269);
	M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:setInstanceIdAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(274);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(276);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeAttr = (frame[2].i);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(279);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_lengthAttr = (frame[2].i);
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(282);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerAttr = (frame[2].i);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(285);
	M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getIds", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(291);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_2;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(294);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) == (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(295);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(296);
	if ((isInstance(ctx, (frame[7].o), &class_java_lang_Integer)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[7].o))))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, (frame[7].o))));
	frame[8].i = temp0;
	LINE_NUMBER(298);
	if ((jint(0)) > (frame[8].i)) goto label_10;
	}
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(299);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[8].i))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(300);
	ARRAY_ACCESS(jbyte, (frame[4].o), (frame[8].i)) = (jint(1));
	LINE_NUMBER(301);
	INST_IINC(5, -1);
	}
label_10:;
	{
	LINE_NUMBER(294);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(306);
	if ((frame[1].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(307);
	frame[6].i = (jint(0));
	}
label_18:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(308);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i))) != 0) goto label_20;
	}
	{
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[6].i), (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(309);
	ARRAY_ACCESS(jbyte, (frame[4].o), (frame[6].i)) = (jint(1));
	LINE_NUMBER(310);
	INST_IINC(5, -1);
	}
label_20:;
	{
	LINE_NUMBER(307);
	INST_IINC(6, 1);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(314);
	if ((frame[5].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[5].i) + (((jarray) nullCheck(ctx, (frame[3].o)))->length)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(316);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[6].o), (frame[5].i), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(317);
	frame[3].o = (frame[6].o);
	LINE_NUMBER(318);
	frame[7].i = (jint(0));
	LINE_NUMBER(319);
	frame[8].i = (jint(0));
	}
label_28:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_args;
	if (temp0 == (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(320);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[8].i))) != 0) goto label_31;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = frame[3].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[8].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(322);
	INST_IINC(7, 1);
	}
label_31:;
	{
	LINE_NUMBER(319);
	INST_IINC(8, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(325);
	if ((frame[7].i) == (frame[5].i)) goto label_2;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_Arguments_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:getOwnPropertyDescriptor", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(333);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Scriptable)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(337);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	frame[3].d = temp0;
	LINE_NUMBER(338);
	frame[5].i = (jint((frame[3].d)));
	LINE_NUMBER(339);
	if ((doubleCompare((frame[3].d), (jdouble((frame[5].i))), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)M_rhino_Arguments_arg_int_R_java_lang_Object(ctx, (frame[0].o), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(343);
	sp[0].o = frame[6].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)M_rhino_Arguments_sharedWithActivation_int_R_boolean(ctx, (frame[0].o), (frame[5].i));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)M_rhino_Arguments_getFromActivation_int_R_java_lang_Object(ctx, (frame[0].o), (frame[5].i));
	frame[6].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[5].i), (frame[0].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(351);
	((func_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"value"_j))), (frame[7].o), (frame[6].o));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_12:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((func_rhino_Arguments_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Arguments_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(355);
	if ((frame[7].o) != nullptr) goto label_17;
	}
	INST_ALOAD(0);
	INST_ASTORE(7);
label_17:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(ctx, (frame[7].o), (frame[6].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_Arguments_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:defineOwnProperty", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(363);
	M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(364);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	LINE_NUMBER(365);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(368);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	frame[5].d = temp0;
	LINE_NUMBER(369);
	frame[7].i = (jint((frame[5].d)));
	LINE_NUMBER(370);
	if ((doubleCompare((frame[5].d), (jdouble((frame[7].i))), -1)) == 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)M_rhino_Arguments_arg_int_R_java_lang_Object(ctx, (frame[0].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(373);
	sp[0].o = frame[8].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(375);
	jint temp0 = (jint)((func_rhino_Arguments_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Arguments_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(376);
	M_rhino_Arguments_removeArg_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = frame[9].o;
	clinit_rhino_Arguments(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(383);
	M_rhino_Arguments_replaceArg_int_java_lang_Object(ctx, (frame[0].o), (frame[7].i), (frame[9].o));
	LINE_NUMBER(385);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"writable"_j))));
	jint temp0 = (jint)SM_rhino_ScriptableObject_isFalse_java_lang_Object_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(386);
	M_rhino_Arguments_removeArg_int(ctx, (frame[0].o), (frame[7].i));
	}
label_15:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Arguments_defineAttributesForStrictMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:defineAttributesForStrictMode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(398);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	LINE_NUMBER(399);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"caller"_j));
	jint temp0 = jint(0);
	clinit_rhino_Arguments$ThrowTypeError(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_Arguments$ThrowTypeError);
	init_rhino_Arguments$ThrowTypeError_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"caller"_j))));
	((func_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (jint(1)));
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"caller"_j));
	jint temp1 = jint(0);
	clinit_rhino_Arguments$ThrowTypeError(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_Arguments$ThrowTypeError);
	init_rhino_Arguments$ThrowTypeError_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"caller"_j))));
	((func_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, (jint(0)));
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"callee"_j));
	jint temp2 = jint(0);
	clinit_rhino_Arguments$ThrowTypeError(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_Arguments$ThrowTypeError);
	init_rhino_Arguments$ThrowTypeError_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"callee"_j))));
	((func_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, (jint(1)));
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"callee"_j));
	jint temp3 = jint(0);
	clinit_rhino_Arguments$ThrowTypeError(ctx);
	sp[2].o = gcAlloc(ctx, &class_rhino_Arguments$ThrowTypeError);
	init_rhino_Arguments$ThrowTypeError_java_lang_String(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"callee"_j))));
	((func_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Arguments_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, (jint(0)));
	LINE_NUMBER(405);
	((func_rhino_Arguments_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Arguments_setAttributes_java_lang_String_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"caller"_j))), (6));
	LINE_NUMBER(406);
	((func_rhino_Arguments_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Arguments_setAttributes_java_lang_String_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"callee"_j))), (6));
	LINE_NUMBER(407);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_callerObj = (jref) (jobject(nullptr));
	LINE_NUMBER(408);
	((rhino_Arguments *) NULL_CHECK((frame[0].o)))->F_calleeObj = (jref) (jobject(nullptr));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_Arguments(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_IdScriptableObject(ctx);
	SF_rhino_Arguments_FTAG = ((jobject) createStringLiteral(ctx, u8"Arguments"_j));
	SF_rhino_Arguments_Id_callee = jint(1);
	SF_rhino_Arguments_Id_length = jint(2);
	SF_rhino_Arguments_Id_caller = jint(3);
	SF_rhino_Arguments_MAX_INSTANCE_ID = jint(3);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Arguments:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Arguments(ctx);
	{
	LINE_NUMBER(411);
	clinit_rhino_Arguments$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Arguments$1);
	init_rhino_Arguments$1(ctx, sp[0].o);
	clinit_rhino_Arguments(ctx);
	SF_rhino_Arguments_iteratorMethod = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Arguments[] {
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
	(void *) M_rhino_Arguments_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_Arguments_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Arguments_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_Arguments_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_Arguments_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_Arguments_delete_int,
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
	(void *) M_rhino_Arguments_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
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
	(void *) M_rhino_Arguments_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_Arguments_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_Arguments_getMaxInstanceId_R_int,
	(void *) M_rhino_Arguments_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_Arguments_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_Arguments_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_Arguments_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_Arguments_setInstanceIdAttributes_int_int,
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
	(void *) M_rhino_Arguments_arg_int_R_java_lang_Object,
	(void *) M_rhino_Arguments_putIntoActivation_int_java_lang_Object,
	(void *) M_rhino_Arguments_getFromActivation_int_R_java_lang_Object,
	(void *) M_rhino_Arguments_replaceArg_int_java_lang_Object,
	(void *) M_rhino_Arguments_removeArg_int,
	(void *) M_rhino_Arguments_sharedWithActivation_int_R_boolean,
	(void *) M_rhino_Arguments_defineAttributesForStrictMode,
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
	{ "arg", "(I)Ljava/lang/Object;" },
	{ "putIntoActivation", "(ILjava/lang/Object;)V" },
	{ "getFromActivation", "(I)Ljava/lang/Object;" },
	{ "replaceArg", "(ILjava/lang/Object;)V" },
	{ "removeArg", "(I)V" },
	{ "sharedWithActivation", "(I)Z" },
	{ "defineAttributesForStrictMode", "()V" },
};

static jclass innerClasses[] {
	&class_rhino_Arguments$ThrowTypeError,
};

static FieldMetadata fields[] {
	{ "FTAG", &class_java_lang_String, (intptr_t) &SF_rhino_Arguments_FTAG, "Ljava/lang/String;", 26 },
	{ "Id_callee", &class_int, (intptr_t) &SF_rhino_Arguments_Id_callee, "I", 26 },
	{ "Id_length", &class_int, (intptr_t) &SF_rhino_Arguments_Id_length, "I", 26 },
	{ "Id_caller", &class_int, (intptr_t) &SF_rhino_Arguments_Id_caller, "I", 26 },
	{ "MAX_INSTANCE_ID", &class_int, (intptr_t) &SF_rhino_Arguments_MAX_INSTANCE_ID, "I", 26 },
	{ "iteratorMethod", &class_rhino_BaseFunction, (intptr_t) &SF_rhino_Arguments_iteratorMethod, "Lrhino/BaseFunction;", 26 },
	{ "callerObj", &class_java_lang_Object, offsetof(rhino_Arguments, F_callerObj), "Ljava/lang/Object;", 2 },
	{ "calleeObj", &class_java_lang_Object, offsetof(rhino_Arguments, F_calleeObj), "Ljava/lang/Object;", 2 },
	{ "lengthObj", &class_java_lang_Object, offsetof(rhino_Arguments, F_lengthObj), "Ljava/lang/Object;", 2 },
	{ "callerAttr", &class_int, offsetof(rhino_Arguments, F_callerAttr), "I", 2 },
	{ "calleeAttr", &class_int, offsetof(rhino_Arguments, F_calleeAttr), "I", 2 },
	{ "lengthAttr", &class_int, offsetof(rhino_Arguments, F_lengthAttr), "I", 2 },
	{ "activation", &class_rhino_NativeCall, offsetof(rhino_Arguments, F_activation), "Lrhino/NativeCall;", 18 },
	{ "args", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_Arguments, F_args), "[Ljava/lang/Object;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Arguments_rhino_NativeCall, 0, "(Lrhino/NativeCall;)V", 1 },
	{ "getClassName", (intptr_t) M_rhino_Arguments_getClassName_R_java_lang_String, VTABLE_rhino_Arguments_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "arg", (intptr_t) M_rhino_Arguments_arg_int_R_java_lang_Object, VTABLE_rhino_Arguments_arg_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 2 },
	{ "putIntoActivation", (intptr_t) M_rhino_Arguments_putIntoActivation_int_java_lang_Object, VTABLE_rhino_Arguments_putIntoActivation_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "getFromActivation", (intptr_t) M_rhino_Arguments_getFromActivation_int_R_java_lang_Object, VTABLE_rhino_Arguments_getFromActivation_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 2 },
	{ "replaceArg", (intptr_t) M_rhino_Arguments_replaceArg_int_java_lang_Object, VTABLE_rhino_Arguments_replaceArg_int_java_lang_Object, "(ILjava/lang/Object;)V", 2 },
	{ "removeArg", (intptr_t) M_rhino_Arguments_removeArg_int, VTABLE_rhino_Arguments_removeArg_int, "(I)V", 2 },
	{ "has", (intptr_t) M_rhino_Arguments_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_Arguments_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_Arguments_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_Arguments_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "sharedWithActivation", (intptr_t) M_rhino_Arguments_sharedWithActivation_int_R_boolean, VTABLE_rhino_Arguments_sharedWithActivation_int_R_boolean, "(I)Z", 2 },
	{ "put", (intptr_t) M_rhino_Arguments_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_Arguments_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_Arguments_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_Arguments_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_Arguments_delete_int, VTABLE_rhino_Arguments_delete_int, "(I)V", 1 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_Arguments_getMaxInstanceId_R_int, VTABLE_rhino_Arguments_getMaxInstanceId_R_int, "()I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_Arguments_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_Arguments_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_Arguments_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_Arguments_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_Arguments_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_Arguments_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_Arguments_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_Arguments_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_Arguments_setInstanceIdAttributes_int_int, VTABLE_rhino_Arguments_setInstanceIdAttributes_int_int, "(II)V", 4 },
	{ "getIds", (intptr_t) M_rhino_Arguments_getIds_boolean_boolean_R_Array1_java_lang_Object, VTABLE_rhino_Arguments_getIds_boolean_boolean_R_Array1_java_lang_Object, "(ZZ)[Ljava/lang/Object;", 0 },
	{ "getOwnPropertyDescriptor", (intptr_t) M_rhino_Arguments_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_Arguments_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;", 4 },
	{ "defineOwnProperty", (intptr_t) M_rhino_Arguments_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, VTABLE_rhino_Arguments_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V", 4 },
	{ "defineAttributesForStrictMode", (intptr_t) M_rhino_Arguments_defineAttributesForStrictMode, VTABLE_rhino_Arguments_defineAttributesForStrictMode, "()V", 0 },
	{ "<clinit>", (intptr_t) clinit_rhino_Arguments, 0, "()V", 8 },
};

Class class_rhino_Arguments{
		.nativeName = (intptr_t) "rhino/Arguments",
		.parentClass = (intptr_t) &class_rhino_IdScriptableObject,
		.size = sizeof(rhino_Arguments),
		.classVtable = (intptr_t) vtable_rhino_Arguments,
		.staticInitializer = (intptr_t) clinit_rhino_Arguments,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Arguments,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 120,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Arguments = registerClass(&class_rhino_Arguments);

}
