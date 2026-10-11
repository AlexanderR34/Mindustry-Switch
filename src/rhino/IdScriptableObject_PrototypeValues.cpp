#include "rhino/IdScriptableObject_PrototypeValues.h"
#include "rhino/IdScriptableObject_PrototypeValues.h"
#include "rhino/Symbol.h"
#include "java/lang/StringBuilder.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/Scriptable.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/UniqueTag.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_IdScriptableObject$PrototypeValues_NAME_SLOT;
jint SF_rhino_IdScriptableObject$PrototypeValues_SLOT_SPAN;

void mark_rhino_IdScriptableObject$PrototypeValues(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_IdScriptableObject$PrototypeValues *) object;
	if (self->F_obj)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_obj)->clazz)->markFunction)((jobject) self->F_obj, mark, depth + 1);
	if (self->F_valueArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valueArray)->clazz)->markFunction)((jobject) self->F_valueArray, mark, depth + 1);
	if (self->F_attributeArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributeArray)->clazz)->markFunction)((jobject) self->F_attributeArray, mark, depth + 1);
	if (self->F_constructor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructor)->clazz)->markFunction)((jobject) self->F_constructor, mark, depth + 1);
}

void clinit_rhino_IdScriptableObject$PrototypeValues(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_IdScriptableObject$PrototypeValues_NAME_SLOT = jint(1);
	SF_rhino_IdScriptableObject$PrototypeValues_SLOT_SPAN = jint(2);
}

void init_rhino_IdScriptableObject$PrototypeValues_rhino_IdScriptableObject_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdScriptableObject$PrototypeValues(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(44);
	if ((frame[2].i) >= (jint(1))) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(45);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj = (jref) (frame[1].o);
	LINE_NUMBER(46);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId = (frame[2].i);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:getMaxId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId);
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:initValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(54);
	if ((jint(1)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(55);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(56);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(57);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(59);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(60);
	SM_rhino_ScriptableObject_checkValidAttributes_int(ctx, (frame[4].i));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(62);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(64);
	if ((frame[1].i) != ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId)) goto label_10;
	}
	{
	LINE_NUMBER(65);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_IdFunctionObject)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(66);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"consructor should be initialized with IdFunctionObject"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(68);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor = (jref) (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[3].o)));
	LINE_NUMBER(69);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorAttrs = (jshort((frame[4].i)));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(73);
	M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:initValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(77);
	if ((jint(1)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) <= ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(78);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(79);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(80);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(82);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(83);
	SM_rhino_ScriptableObject_checkValidAttributes_int(ctx, (frame[4].i));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(87);
	if ((frame[1].i) != ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId)) goto label_10;
	}
	{
	LINE_NUMBER(88);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_IdFunctionObject)) != 0) goto label_12;
	}
	{
	LINE_NUMBER(89);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"consructor should be initialized with IdFunctionObject"_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(91);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor = (jref) (checkCast(ctx, &class_rhino_IdFunctionObject, (frame[3].o)));
	LINE_NUMBER(92);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorAttrs = (jshort((frame[4].i)));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(96);
	M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:initSlot", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[5].o = sp[0].o;
	LINE_NUMBER(102);
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(103);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(105);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(106);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[3].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(108);
	frame[6].i = (((frame[1].i) - (jint(1))) * (jint(2)));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(110);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(111);
	if ((frame[8].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(112);
	ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)) = (frame[3].o);
	LINE_NUMBER(113);
	ARRAY_ACCESS(jobject, (frame[5].o), ((frame[6].i) + (jint(1)))) = (frame[2].o);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))) = (jshort((frame[4].i)));
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), ((frame[6].i) + (jint(1))))));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(117);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(119);
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	label_20:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:createPrecachedConstructor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	if (((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"constructor"_j))));
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK(sp[0].o))->F_constructorId = temp0;
	LINE_NUMBER(125);
	if (((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId) != 0) goto label_3;
	}
	{
	LINE_NUMBER(126);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No id for constructor property"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	((func_rhino_IdScriptableObject_initPrototypeId_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_initPrototypeId_int])(ctx, sp[0].o, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(131);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	LINE_NUMBER(132);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".initPrototypeId() did not initialize id="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[1].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	sp[1].o = (jobject)((func_rhino_IdScriptableObject_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IdScriptableObject_getClassName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	LINE_NUMBER(136);
	sp[2].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, sp[2].o);
	LINE_NUMBER(135);
	((func_rhino_IdFunctionObject_initFunction_java_lang_String_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_initFunction_java_lang_String_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[1].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	((func_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdFunctionObject_markAsConstructor_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:findId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:findId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:has", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[2].o = sp[0].o;
	LINE_NUMBER(151);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(155);
	frame[3].i = (((frame[1].i) - (jint(1))) * (jint(2)));
	LINE_NUMBER(156);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(157);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[4].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = frame[2].o;
	clinit_rhino_UniqueTag(ctx);
	sp[1].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(167);
	frame[2].o = (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:set", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(173);
	sp[0].o = frame[3].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	frame[4].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))));
	LINE_NUMBER(176);
	if (((frame[4].i) & (jint(1))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(178);
	if ((frame[3].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(179);
	clinit_rhino_UniqueTag(ctx);
	sp[0].o = (jobject)SF_rhino_UniqueTag_NULL_VALUE;
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(181);
	frame[5].i = (((frame[1].i) - (jint(1))) * (jint(2)));
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	frame[6].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)) = (frame[3].o);
	LINE_NUMBER(184);
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	goto label_18;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	monitorExit(ctx, (frame[6].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(7);
	INST_ATHROW();
	label_18:;
	LINE_NUMBER(185);
	goto label_10;
label_12:;
	{
	LINE_NUMBER(186);
	frame[5].i = ((((frame[1].i) - (jint(1))) * (jint(2))) + (jint(1)));
	LINE_NUMBER(187);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(188);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_Symbol)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(189);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_SymbolScriptable)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(190);
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[2].o)))))(ctx, (checkCast(ctx, &class_rhino_SymbolScriptable, (frame[2].o))), (checkCast(ctx, &class_rhino_Symbol, (frame[6].o))), (frame[2].o), (frame[3].o));
	goto label_10;
	}
label_21:;
	{
	LINE_NUMBER(193);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (checkCast(ctx, &class_java_lang_String, (frame[6].o))), (frame[2].o), (frame[3].o));
	}
label_10:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_delete_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:delete", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	frame[2].i = ((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))));
	LINE_NUMBER(203);
	if (((frame[2].i) & (jint(4))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(206);
	frame[4].i = ((((frame[1].i) - (jint(1))) * (jint(2))) + (jint(1)));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[5].o = (checkCast(ctx, &class_java_lang_String, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))));
	LINE_NUMBER(208);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.delete.property.with.configurable.false"_j))), (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(210);
	goto label_16;
label_9:;
	{
	LINE_NUMBER(211);
	frame[3].i = (((frame[1].i) - (jint(1))) * (jint(2)));
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	jint temp0 = frame[3].i;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))) = (jint(0));
	LINE_NUMBER(215);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_16;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(6);
	INST_ATHROW();
	label_16:;
	LINE_NUMBER(217);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:getAttributes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))));
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:setAttributes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(225);
	SM_rhino_ScriptableObject_checkValidAttributes_int(ctx, (frame[2].i));
	LINE_NUMBER(226);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) - (jint(1)))) = (jshort((frame[2].i)));
	LINE_NUMBER(229);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
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
	label_10:;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:getNames", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(233);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(234);
	frame[5].i = (jint(0));
	LINE_NUMBER(235);
	frame[6].i = (jint(1));
	}
label_3:;
	{
	if ((frame[6].i) > ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId)) goto label_4;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(ctx, (frame[0].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(237);
	if ((frame[1].i) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_attributeArray;
	if ((((jint)ARRAY_ACCESS(jshort, sp[0].o, ((frame[6].i) - (jint(1))))) & (jint(2))) != 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(238);
	sp[0].o = frame[7].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(239);
	frame[8].i = ((((frame[6].i) - (jint(1))) * (jint(2))) + (jint(1)));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	LINE_NUMBER(241);
	if ((isInstance(ctx, (frame[9].o), &class_java_lang_String)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(242);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId));
	frame[4].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[9].o);
	goto label_8;
	}
label_12:;
	{
	LINE_NUMBER(246);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	if ((isInstance(ctx, (frame[9].o), &class_rhino_Symbol)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(247);
	if ((frame[4].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId));
	frame[4].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	INST_IINC(5, 1);
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[9].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(235);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(255);
	if ((frame[5].i) != 0) goto label_19;
	}
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_19:;
	{
	LINE_NUMBER(257);
	if ((frame[3].o) == nullptr) goto label_21;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(258);
	if ((frame[5].i) == (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_23;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(260);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[6].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(261);
	frame[4].o = (frame[6].o);
	}
label_23:;
	{
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_22:;
	{
	LINE_NUMBER(265);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(266);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((frame[6].i) + (frame[5].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(267);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[7].o), (jint(0)), (frame[6].i));
	LINE_NUMBER(268);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[7].o), (frame[6].i), (frame[5].i));
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject$PrototypeValues:ensureId", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[2].o = sp[0].o;
	LINE_NUMBER(275);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray;
	frame[2].o = sp[0].o;
	LINE_NUMBER(278);
	if ((frame[2].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId) * (jint(2))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(280);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_valueArray = (jref) (frame[2].o);
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_short, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_maxId));
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK(sp[0].o))->F_attributeArray = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(283);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	{
	LINE_NUMBER(285);
	frame[3].i = (((frame[1].i) - (jint(1))) * (jint(2)));
	LINE_NUMBER(286);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(287);
	if ((frame[4].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(288);
	if ((frame[1].i) != ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId)) goto label_19;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorId;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"constructor"_j));
	sp[2].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor;
	M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructorAttrs));
	LINE_NUMBER(291);
	((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_constructor = (jref) (jobject(nullptr));
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	((func_rhino_IdScriptableObject_initPrototypeId_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_initPrototypeId_int])(ctx, sp[0].o, (frame[1].i));
	}
label_22:;
	{
	LINE_NUMBER(295);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(296);
	if ((frame[4].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(297);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK((frame[0].o)))->F_obj;
	LINE_NUMBER(298);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".initPrototypeId(int id) did not initialize id="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IdScriptableObject$PrototypeValues[] {
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
	(void *) M_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_delete_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object,
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
	{ "getMaxId", "()I" },
	{ "initValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initSlot", "(ILjava/lang/Object;Ljava/lang/Object;I)V" },
	{ "createPrecachedConstructor", "()Lrhino/IdFunctionObject;" },
	{ "findId", "(Ljava/lang/String;)I" },
	{ "findId", "(Lrhino/Symbol;)I" },
	{ "has", "(I)Z" },
	{ "get", "(I)Ljava/lang/Object;" },
	{ "set", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(I)V" },
	{ "getAttributes", "(I)I" },
	{ "setAttributes", "(II)V" },
	{ "getNames", "(ZZ[Ljava/lang/Object;)[Ljava/lang/Object;" },
	{ "ensureId", "(I)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "NAME_SLOT", &class_int, (intptr_t) &SF_rhino_IdScriptableObject$PrototypeValues_NAME_SLOT, "I", 26 },
	{ "SLOT_SPAN", &class_int, (intptr_t) &SF_rhino_IdScriptableObject$PrototypeValues_SLOT_SPAN, "I", 26 },
	{ "obj", &class_rhino_IdScriptableObject, offsetof(rhino_IdScriptableObject$PrototypeValues, F_obj), "Lrhino/IdScriptableObject;", 18 },
	{ "maxId", &class_int, offsetof(rhino_IdScriptableObject$PrototypeValues, F_maxId), "I", 18 },
	{ "valueArray", getArrayClass(&class_java_lang_Object, 1), offsetof(rhino_IdScriptableObject$PrototypeValues, F_valueArray), "[Ljava/lang/Object;", 2 },
	{ "attributeArray", getArrayClass(&class_short, 1), offsetof(rhino_IdScriptableObject$PrototypeValues, F_attributeArray), "[S", 2 },
	{ "constructorId", &class_int, offsetof(rhino_IdScriptableObject$PrototypeValues, F_constructorId), "I", 0 },
	{ "constructor", &class_rhino_IdFunctionObject, offsetof(rhino_IdScriptableObject$PrototypeValues, F_constructor), "Lrhino/IdFunctionObject;", 2 },
	{ "constructorAttrs", &class_short, offsetof(rhino_IdScriptableObject$PrototypeValues, F_constructorAttrs), "S", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IdScriptableObject$PrototypeValues_rhino_IdScriptableObject_int, 0, "(Lrhino/IdScriptableObject;I)V", 0 },
	{ "getMaxId", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_getMaxId_R_int, "()I", 16 },
	{ "initValue", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int, "(ILjava/lang/String;Ljava/lang/Object;I)V", 16 },
	{ "initValue", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int, "(ILrhino/Symbol;Ljava/lang/Object;I)V", 16 },
	{ "initSlot", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_initSlot_int_java_lang_Object_java_lang_Object_int, "(ILjava/lang/Object;Ljava/lang/Object;I)V", 2 },
	{ "createPrecachedConstructor", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject, "()Lrhino/IdFunctionObject;", 16 },
	{ "findId", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int, "(Ljava/lang/String;)I", 16 },
	{ "findId", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 16 },
	{ "has", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean, VTABLE_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean, "(I)Z", 16 },
	{ "get", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object, VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 16 },
	{ "set", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object, VTABLE_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object, "(ILrhino/Scriptable;Ljava/lang/Object;)V", 16 },
	{ "delete", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_delete_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_delete_int, "(I)V", 16 },
	{ "getAttributes", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int, "(I)I", 16 },
	{ "setAttributes", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int, VTABLE_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int, "(II)V", 16 },
	{ "getNames", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object, VTABLE_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object, "(ZZ[Ljava/lang/Object;)[Ljava/lang/Object;", 16 },
	{ "ensureId", (intptr_t) M_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object, VTABLE_rhino_IdScriptableObject$PrototypeValues_ensureId_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 2 },
};

Class class_rhino_IdScriptableObject$PrototypeValues{
		.nativeName = (intptr_t) "rhino/IdScriptableObject$PrototypeValues",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_IdScriptableObject$PrototypeValues),
		.classVtable = (intptr_t) vtable_rhino_IdScriptableObject$PrototypeValues,
		.staticInitializer = (intptr_t) clinit_rhino_IdScriptableObject$PrototypeValues,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IdScriptableObject$PrototypeValues,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_IdScriptableObject,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IdScriptableObject$PrototypeValues = registerClass(&class_rhino_IdScriptableObject$PrototypeValues);

}

