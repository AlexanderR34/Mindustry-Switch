#include "rhino/NativeJavaArray.h"
#include "java/lang/Integer.h"
#include "rhino/Symbol.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "java/lang/reflect/Array.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeJavaArray.h"
#include "rhino/Undefined.h"
#include "rhino/Wrapper.h"
#include "rhino/NativeJavaObject.h"
#include "rhino/EvaluatorException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/SymbolKey.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_rhino_NativeJavaArray(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_NativeJavaObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJavaArray *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_cls)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cls)->clazz)->markFunction)((jobject) self->F_cls, mark, depth + 1);
}

void clinit_rhino_NativeJavaArray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_NativeJavaObject(ctx);
}

jobject M_rhino_NativeJavaArray_getClassName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:getClassName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"JavaArray"_j)));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaArray_wrap_rhino_Scriptable_java_lang_Object_R_rhino_NativeJavaArray(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:wrap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaArray(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(22);
	clinit_rhino_NativeJavaArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeJavaArray);
	init_rhino_NativeJavaArray_rhino_Scriptable_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_unwrap_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:unwrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaArray_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaArray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	clinit_rhino_ScriptRuntime(ctx);
	sp[3].o = (jobject)SF_rhino_ScriptRuntime_ObjectClass;
	init_rhino_NativeJavaObject_rhino_Scriptable_java_lang_Object_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(33);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(34);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array expected"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(36);
	((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[2].o);
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[2].o));
	((rhino_NativeJavaArray *) NULL_CHECK(sp[0].o))->F_length = temp0;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[3].o));
	((rhino_NativeJavaArray *) NULL_CHECK(sp[0].o))->F_cls = (jref) sp[1].o;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_rhino_NativeJavaObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_2;
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

jbool M_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(48);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
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

jbool M_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:has", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(53);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)M_rhino_NativeJavaObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = frame[3].o;
	clinit_rhino_NativeJavaArray(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable])(ctx, sp[0].o);
	jint temp0 = (jint)SM_rhino_ScriptableObject_hasProperty_rhino_Scriptable_java_lang_String_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.java.member.not.found"_j));
	sp[1].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array;
	LINE_NUMBER(64);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[1].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)SM_java_lang_reflect_Array_get_java_lang_Object_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[3].o));
	sp[1].o = frame[3].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[4].o;
	sp[4].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_cls;
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(76);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	clinit_rhino_SymbolKey(ctx);
	sp[0].o = (jobject)SF_rhino_SymbolKey_IS_CONCAT_SPREADABLE;
	jint temp0 = (jint)((func_rhino_SymbolKey_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_SymbolKey_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(84);
	clinit_rhino_Scriptable(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"length"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.java.array.member.not.found"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(97);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) >= ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = frame[1].i;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_cls;
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(100);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.java.array.index.out.of.bounds"_j));
	jint temp0 = frame[1].i;
	LINE_NUMBER(101);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, temp0);
	jint temp1 = ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length) - (jint(1));
	LINE_NUMBER(102);
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, temp1);
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError2_java_lang_String_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_NativeJavaArray_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:delete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:getDefaultValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_StringClass;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_BooleanClass;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(116);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[1].o;
	clinit_rhino_ScriptRuntime(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptRuntime_NumberClass;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(118);
	clinit_rhino_ScriptRuntime(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptRuntime_NaNobj;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:getIds", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(125);
	frame[2].i = ((jint)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_length);
	}
label_2:;
	{
	LINE_NUMBER(126);
	INST_IINC(2, -1);
	if ((frame[2].i) < 0) goto label_3;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:hasInstance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(133);
	if ((isInstance(ctx, (frame[1].o), &class_rhino_Wrapper)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[1].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((rhino_NativeJavaArray *) NULL_CHECK((frame[0].o)))->F_cls;
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaArray:getPrototype", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(143);
	sp[1].o = (jobject)((func_rhino_NativeJavaArray_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_NativeJavaArray_getParentScope_R_rhino_Scriptable])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getArrayPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[1].o);
	((rhino_NativeJavaObject *) NULL_CHECK(sp[0].o))->F_prototype = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((rhino_NativeJavaObject *) NULL_CHECK((frame[0].o)))->F_prototype;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJavaArray[] {
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
	(void *) M_rhino_NativeJavaArray_getClassName_R_java_lang_String,
	(void *) M_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_delete_java_lang_String,
	(void *) M_rhino_NativeJavaObject_delete_int,
	(void *) M_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_NativeJavaObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeJavaArray_delete_rhino_Symbol,
	(void *) M_rhino_NativeJavaArray_unwrap_R_java_lang_Object,
	(void *) M_rhino_NativeJavaObject_initMembers,
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
	{ "unwrap", "()Ljava/lang/Object;" },
	{ "initMembers", "()V" },
};

static jclass interfaces[] { &class_rhino_SymbolScriptable, };

static FieldMetadata fields[] {
	{ "array", &class_java_lang_Object, offsetof(rhino_NativeJavaArray, F_array), "Ljava/lang/Object;", 0 },
	{ "length", &class_int, offsetof(rhino_NativeJavaArray, F_length), "I", 0 },
	{ "cls", &class_java_lang_Class, offsetof(rhino_NativeJavaArray, F_cls), "Ljava/lang/Class;", 0 },
};

static MethodMetadata methods[] {
	{ "getClassName", (intptr_t) M_rhino_NativeJavaArray_getClassName_R_java_lang_String, VTABLE_rhino_NativeJavaArray_getClassName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "wrap", (intptr_t) SM_rhino_NativeJavaArray_wrap_rhino_Scriptable_java_lang_Object_R_rhino_NativeJavaArray, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)Lrhino/NativeJavaArray;", 9 },
	{ "unwrap", (intptr_t) M_rhino_NativeJavaArray_unwrap_R_java_lang_Object, VTABLE_rhino_NativeJavaArray_unwrap_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaArray_rhino_Scriptable_java_lang_Object, 0, "(Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaArray_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaArray_has_int_rhino_Scriptable_R_boolean, "(ILrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaArray_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaArray_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaArray_get_int_rhino_Scriptable_R_java_lang_Object, "(ILrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeJavaArray_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaArray_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeJavaArray_put_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_NativeJavaArray_delete_rhino_Symbol, VTABLE_rhino_NativeJavaArray_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "getDefaultValue", (intptr_t) M_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object, VTABLE_rhino_NativeJavaArray_getDefaultValue_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "getIds", (intptr_t) M_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object, VTABLE_rhino_NativeJavaArray_getIds_R_Array1_java_lang_Object, "()[Ljava/lang/Object;", 1 },
	{ "hasInstance", (intptr_t) M_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean, VTABLE_rhino_NativeJavaArray_hasInstance_rhino_Scriptable_R_boolean, "(Lrhino/Scriptable;)Z", 1 },
	{ "getPrototype", (intptr_t) M_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable, VTABLE_rhino_NativeJavaArray_getPrototype_R_rhino_Scriptable, "()Lrhino/Scriptable;", 1 },
};

Class class_rhino_NativeJavaArray{
		.nativeName = (intptr_t) "rhino/NativeJavaArray",
		.parentClass = (intptr_t) &class_rhino_NativeJavaObject,
		.size = sizeof(rhino_NativeJavaArray),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaArray,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaArray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJavaArray,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaArray = registerClass(&class_rhino_NativeJavaArray);

}
