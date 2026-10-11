#include "rhino/IdScriptableObject.h"
#include "rhino/IdScriptableObject_PrototypeValues.h"
#include "rhino/Symbol.h"
#include "java/lang/StringBuilder.h"
#include "rhino/SymbolScriptable.h"
#include "rhino/NativeSymbol.h"
#include "rhino/ScriptableObject.h"
#include "rhino/Context.h"
#include "rhino/EcmaError.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/IdFunctionObjectES6.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/IdFunctionObject.h"
#include "rhino/EvaluatorException.h"
#include "rhino/IdFunctionCall.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/SymbolKey.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_IdScriptableObject(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_ScriptableObject(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_IdScriptableObject *) object;
	if (self->F_prototypeValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prototypeValues)->clazz)->markFunction)((jobject) self->F_prototypeValues, mark, depth + 1);
}

void clinit_rhino_IdScriptableObject(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_ScriptableObject(ctx);
}

void init_rhino_IdScriptableObject(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdScriptableObject(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(306);
	init_rhino_ScriptableObject(ctx, (frame[0].o));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_IdScriptableObject_rhino_Scriptable_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdScriptableObject(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(310);
	init_rhino_ScriptableObject_rhino_Scriptable_rhino_Scriptable(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:defaultHas", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:defaultGet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:defaultPut", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(322);
	M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[0].o), (frame[2].o));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:has", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(327);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(328);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(329);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (16)));
	LINE_NUMBER(330);
	if (((frame[4].i) & (jint(4))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(333);
	frame[5].i = ((frame[3].i) & (jint(65535)));
	LINE_NUMBER(334);
	clinit_rhino_IdScriptableObject(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	sp[1].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	if (sp[0].o == sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(338);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean])(ctx, sp[0].o, (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(342);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:has", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(348);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(349);
	if ((frame[3].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(350);
	frame[4].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (16)));
	LINE_NUMBER(351);
	if (((frame[4].i) & (jint(4))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(354);
	frame[5].i = ((frame[3].i) & (jint(65535)));
	LINE_NUMBER(355);
	clinit_rhino_IdScriptableObject(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	sp[1].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	if (sp[0].o == sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(359);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_has_int_R_boolean])(ctx, sp[0].o, (frame[4].i));
	popStackFrame(ctx);
	return temp0;
	}
label_10:;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)M_rhino_ScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = frame[3].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(375);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(376);
	frame[5].i = ((frame[4].i) & (jint(65535)));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(378);
	sp[0].o = frame[3].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(382);
	if ((frame[5].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_9:;
	{
	LINE_NUMBER(387);
	clinit_rhino_IdScriptableObject(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)M_rhino_ScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(393);
	sp[0].o = frame[3].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(396);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(397);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(398);
	frame[5].i = ((frame[4].i) & (jint(65535)));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(400);
	sp[0].o = frame[3].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(404);
	if ((frame[5].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_9:;
	{
	LINE_NUMBER(409);
	clinit_rhino_IdScriptableObject(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(415);
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(416);
	if ((frame[2].o) != (frame[0].o)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.sealed"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(420);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (16)));
	LINE_NUMBER(421);
	if (((frame[5].i) & (jint(1))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(422);
	if ((frame[2].o) != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(423);
	frame[6].i = ((frame[4].i) & (jint(65535)));
	LINE_NUMBER(424);
	((func_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object])(ctx, (frame[0].o), (frame[6].i), (frame[3].o));
	LINE_NUMBER(425);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(426);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_7:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(433);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(434);
	if ((frame[2].o) != (frame[0].o)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.sealed"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, (frame[5].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(442);
	M_rhino_ScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(443);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:put", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(447);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(448);
	if ((frame[4].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(449);
	if ((frame[2].o) != (frame[0].o)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.sealed"_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(452);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[4].i)) >> (16)));
	LINE_NUMBER(453);
	if (((frame[5].i) & (jint(1))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(454);
	if ((frame[2].o) != (frame[0].o)) goto label_9;
	}
	{
	LINE_NUMBER(455);
	frame[6].i = ((frame[4].i) & (jint(65535)));
	LINE_NUMBER(456);
	((func_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object])(ctx, (frame[0].o), (frame[6].i), (frame[3].o));
	LINE_NUMBER(457);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_ensureSymbolScriptable_java_lang_Object_R_rhino_SymbolScriptable(ctx, (frame[2].o));
	((func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_SymbolScriptable, INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_7:;
	LINE_NUMBER(461);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(465);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(466);
	if ((frame[2].o) != (frame[0].o)) goto label_17;
	}
	{
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError0_java_lang_String_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.modify.sealed"_j))));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, (frame[5].i), (frame[2].o), (frame[3].o));
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(473);
	M_rhino_ScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_delete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:delete", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(479);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(481);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(482);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16)));
	LINE_NUMBER(484);
	if (((frame[3].i) & (jint(4))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(486);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.delete.property.with.configurable.false"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(489);
	goto label_11;
label_6:;
	{
	LINE_NUMBER(490);
	frame[4].i = ((frame[2].i) & (jint(65535)));
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((func_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_11:;
	LINE_NUMBER(493);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(498);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_delete_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_delete_int])(ctx, sp[0].o, (frame[3].i));
	}
label_17:;
	LINE_NUMBER(502);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(505);
	M_rhino_ScriptableObject_delete_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_delete_rhino_Symbol(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:delete", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(510);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(511);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(513);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(514);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16)));
	LINE_NUMBER(516);
	if (((frame[3].i) & (jint(4))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(518);
	jint temp0 = (jint)((func_rhino_Context_isStrictMode_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_Context_isStrictMode_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError0_java_lang_String_R_rhino_EcmaError(ctx, (((jobject) createStringLiteral(ctx, u8"msg.delete.property.with.configurable.false"_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(521);
	goto label_11;
label_6:;
	{
	LINE_NUMBER(522);
	frame[4].i = ((frame[2].i) & (jint(65535)));
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	((func_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_11:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(530);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(531);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_delete_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_delete_int])(ctx, sp[0].o, (frame[3].i));
	}
label_17:;
	LINE_NUMBER(534);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(537);
	M_rhino_ScriptableObject_delete_rhino_Symbol(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(543);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(544);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16)));
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(549);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int])(ctx, sp[0].o, (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(553);
	jint temp0 = (jint)M_rhino_ScriptableObject_getAttributes_java_lang_String_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getAttributes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(559);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(560);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16)));
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(565);
	if ((frame[3].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int])(ctx, sp[0].o, (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(569);
	jint temp0 = (jint)M_rhino_ScriptableObject_getAttributes_rhino_Symbol_R_int(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_setAttributes_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:setAttributes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(574);
	SM_rhino_ScriptableObject_checkValidAttributes_int(ctx, (frame[2].i));
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(576);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(577);
	frame[4].i = ((frame[3].i) & (jint(65535)));
	LINE_NUMBER(578);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[3].i)) >> (16)));
	LINE_NUMBER(579);
	if ((frame[2].i) == (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(580);
	((func_rhino_IdScriptableObject_setInstanceIdAttributes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdAttributes_int_int])(ctx, (frame[0].o), (frame[4].i), (frame[2].i));
	}
label_7:;
	LINE_NUMBER(582);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(586);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int])(ctx, sp[0].o, (frame[4].i), (frame[2].i));
	LINE_NUMBER(588);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(591);
	M_rhino_ScriptableObject_setAttributes_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getIds", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)M_rhino_ScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getNames_boolean_boolean_Array1_java_lang_Object_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].o));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(602);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_getMaxInstanceId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getMaxInstanceId_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(603);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(604);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(605);
	frame[6].i = (jint(0));
	LINE_NUMBER(607);
	frame[7].i = (frame[4].i);
	}
label_9:;
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_10;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String])(ctx, (frame[0].o), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[8].o));
	frame[9].i = temp0;
	LINE_NUMBER(610);
	if ((frame[9].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(611);
	frame[10].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[9].i)) >> (16)));
	LINE_NUMBER(612);
	if (((frame[10].i) & (jint(4))) != 0) goto label_17;
	}
	{
	LINE_NUMBER(613);
	clinit_rhino_IdScriptableObject(ctx);
	sp[0].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	sp[1].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[7].i));
	if (sp[0].o != sp[1].o) goto label_17;
	}
	LINE_NUMBER(614);
	goto label_14;
label_17:;
	{
	LINE_NUMBER(617);
	if ((frame[1].i) != 0) goto label_20;
	}
	{
	if (((frame[10].i) & (jint(2))) != 0) goto label_14;
	}
label_20:;
	{
	LINE_NUMBER(618);
	if ((frame[6].i) != 0) goto label_21;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[7].i));
	frame[5].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	}
label_14:;
	{
	LINE_NUMBER(607);
	INST_IINC(7, -1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(626);
	if ((frame[6].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(627);
	if ((((jarray) nullCheck(ctx, (frame[3].o)))->length) != 0) goto label_24;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) != (frame[6].i)) goto label_24;
	}
	{
	LINE_NUMBER(628);
	frame[3].o = (frame[5].o);
	goto label_5;
	}
label_24:;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((((jarray) nullCheck(ctx, (frame[3].o)))->length) + (frame[6].i)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(631);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[7].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(632);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[5].o), (jint(0)), (frame[7].o), (((jarray) nullCheck(ctx, (frame[3].o)))->length), (frame[6].i));
	LINE_NUMBER(633);
	frame[3].o = (frame[7].o);
	}
label_5:;
	{
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_getMaxInstanceId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getMaxInstanceId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:instanceIdInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdScriptableObject(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (((frame[0].i) << (16)) | (frame[1].i));
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:findInstanceIdInfo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:findInstanceIdInfo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getInstanceIdName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(673);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getInstanceIdValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(684);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:setInstanceIdValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(692);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:setInstanceIdAttributes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(704);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"InternalError"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Changing attributes not supported for "_j))));
	sp[2].o = frame[0].o;
	LINE_NUMBER(705);
	sp[2].o = (jobject)((func_rhino_IdScriptableObject_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_IdScriptableObject_getClassName_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[2].o = frame[0].o;
	jint temp0 = frame[1].i;
	LINE_NUMBER(706);
	sp[2].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String])(ctx, sp[2].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" property"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(704);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_constructError_java_lang_String_java_lang_String_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:execIdCall", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(716);
	sp[0].o = (jobject)((func_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_unknown_R_java_lang_RuntimeException])(ctx, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject(jcontext ctx, jobject self, jint param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:exportAsJSClass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(723);
	if ((frame[2].o) == (frame[0].o)) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_1;
	{
	LINE_NUMBER(724);
	((func_rhino_IdScriptableObject_setParentScope_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_setParentScope_rhino_Scriptable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_ScriptableObject_getObjectPrototype_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[2].o));
	((func_rhino_IdScriptableObject_setPrototype_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_setPrototype_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(728);
	((func_rhino_IdScriptableObject_activatePrototypeMap_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_activatePrototypeMap_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(729);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_createPrecachedConstructor_R_rhino_IdFunctionObject])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(730);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(731);
	((func_rhino_IdScriptableObject_sealObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_sealObject])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(733);
	((func_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(734);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(735);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[4].o));
	}
label_9:;
	{
	LINE_NUMBER(737);
	((func_rhino_IdFunctionObject_exportAsScopeProperty) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_IdFunctionObject_exportAsScopeProperty])(ctx, (frame[4].o));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:hasPrototypeMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_1;
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

void M_rhino_IdScriptableObject_activatePrototypeMap_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:activatePrototypeMap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(746);
	clinit_rhino_IdScriptableObject$PrototypeValues(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdScriptableObject$PrototypeValues);
	init_rhino_IdScriptableObject$PrototypeValues_rhino_IdScriptableObject_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(749);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(750);
	((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues = (jref) (frame[2].o);
	LINE_NUMBER(751);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
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
	label_11:;
	LINE_NUMBER(752);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeMethod", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[3].o), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeMethod", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(761);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].i = temp0;
	sp += 3;
	if ((frame[4].o) == nullptr) goto label_2;
	}
	INST_ALOAD(4);
	goto label_3;
label_2:;
	INST_ALOAD(3);
label_3:;
	{
	sp -= 4;
	sp[0].o = (jobject)M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].o, (frame[5].i), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(765);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, (frame[2].i), (frame[3].o), (frame[7].o), (jint(2)));
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeMethod", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(772);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o), (frame[5].i), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(773);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, (frame[2].i), (frame[3].o), (frame[7].o), (jint(2)));
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeConstructor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	frame[2].i = ((jint)((rhino_IdScriptableObject$PrototypeValues *) NULL_CHECK(sp[0].o))->F_constructorId);
	LINE_NUMBER(779);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(780);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(781);
	jint temp0 = (jint)((func_rhino_IdFunctionObject_methodId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_methodId_R_int])(ctx, (frame[1].o));
	if (temp0 == (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(782);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(783);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(784);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, (frame[2].i), (((jobject) createStringLiteral(ctx, u8"constructor"_j))), (frame[1].o), (jint(2)));
	LINE_NUMBER(787);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_java_lang_String_java_lang_Object_int])(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(792);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(796);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_initValue_int_rhino_Symbol_java_lang_Object_int])(ctx, sp[0].o, (frame[1].i), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_initPrototypeId_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:initPrototypeId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(800);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[1].i));
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:findPrototypeId", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(804);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:findPrototypeId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(808);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:fillConstructorProperties", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(812);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:addIdFunctionProperty", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getTopLevelScope_rhino_Scriptable_R_rhino_Scriptable(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(817);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].i), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(818);
	((func_rhino_IdFunctionObject_addAsProperty_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_IdFunctionObject_addAsProperty_rhino_Scriptable])(ctx, (frame[7].o), (frame[1].o));
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:incompatibleCallError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_IdScriptableObject(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(843);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.incompat.call"_j));
	sp[1].o = frame[0].o;
	LINE_NUMBER(844);
	sp[1].o = (jobject)((func_rhino_IdFunctionObject_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_IdFunctionObject_getFunctionName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(843);
	sp[0].o = (jobject)SM_rhino_ScriptRuntime_typeError1_java_lang_String_java_lang_Object_R_rhino_EcmaError(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:newIdFunction", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)SM_rhino_Context_getContext_R_rhino_Context(ctx);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (200)) goto label_1;
	}
	{
	LINE_NUMBER(851);
	clinit_rhino_IdFunctionObject(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObject);
	init_rhino_IdFunctionObject_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].o));
	frame[6].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(853);
	clinit_rhino_IdFunctionObjectES6(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_IdFunctionObjectES6);
	init_rhino_IdFunctionObjectES6_rhino_IdFunctionCall_java_lang_Object_int_java_lang_String_int_rhino_Scriptable(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(856);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isSealed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isSealed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(857);
	((func_rhino_IdFunctionObject_sealObject) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_IdFunctionObject_sealObject])(ctx, (frame[6].o));
	}
label_5:;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:defineOwnProperty", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(864);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(865);
	frame[4].o = (checkCast(ctx, &class_java_lang_String, (frame[2].o)));
	LINE_NUMBER(866);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(867);
	if ((frame[5].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(868);
	frame[6].i = ((frame[5].i) & (jint(65535)));
	LINE_NUMBER(869);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(870);
	((func_rhino_IdScriptableObject_delete_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_delete_int])(ctx, (frame[0].o), (frame[6].i));
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(872);
	((func_rhino_IdScriptableObject_checkPropertyDefinition_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_checkPropertyDefinition_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(873);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(874);
	((func_rhino_IdScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[4].o), (frame[7].o), (frame[3].o));
	LINE_NUMBER(875);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (16)));
	LINE_NUMBER(876);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(877);
	sp[0].o = frame[9].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	if (((frame[8].i) & (jint(1))) != 0) goto label_15;
	}
	{
	LINE_NUMBER(878);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(879);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[9].o), (frame[10].o));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(880);
	((func_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object])(ctx, (frame[0].o), (frame[6].i), (frame[9].o));
	}
label_15:;
	{
	LINE_NUMBER(883);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	jint temp0 = (jint)((func_rhino_IdScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int])(ctx, (frame[0].o), (frame[8].i), (frame[3].o));
	((func_rhino_IdScriptableObject_setAttributes_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject_setAttributes_java_lang_String_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(887);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(889);
	if ((frame[6].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(891);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_delete_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_delete_int])(ctx, sp[0].o, (frame[6].i));
	goto label_1;
	}
label_23:;
	{
	LINE_NUMBER(893);
	((func_rhino_IdScriptableObject_checkPropertyDefinition_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_checkPropertyDefinition_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(895);
	((func_rhino_IdScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject])(ctx, (frame[0].o), (frame[4].o), (frame[7].o), (frame[3].o));
	LINE_NUMBER(896);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int])(ctx, sp[0].o, (frame[6].i));
	frame[8].i = temp0;
	LINE_NUMBER(897);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_getProperty_rhino_Scriptable_java_lang_String_R_java_lang_Object(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"value"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(898);
	sp[0].o = frame[9].o;
	clinit_rhino_IdScriptableObject(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_30;
	}
	{
	if (((frame[8].i) & (jint(1))) != 0) goto label_30;
	}
	{
	LINE_NUMBER(899);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(900);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[9].o), (frame[10].o));
	if (temp0 != 0) goto label_30;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	((func_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_set_int_rhino_Scriptable_java_lang_Object])(ctx, sp[0].o, (frame[6].i), (frame[0].o), (frame[9].o));
	}
label_30:;
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_rhino_IdScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int])(ctx, (frame[0].o), (frame[8].i), (frame[3].o));
	((func_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_setAttributes_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(908);
	jint temp2 = (jint)M_rhino_ScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean(ctx, (frame[0].o), (frame[4].o), (frame[0].o));
	if (temp2 == 0) goto label_35;
	}
	{
	LINE_NUMBER(909);
	M_rhino_ScriptableObject_delete_java_lang_String(ctx, (frame[0].o), (frame[4].o));
	}
label_35:;
	LINE_NUMBER(912);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(917);
	M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(918);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getOwnPropertyDescriptor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(923);
	sp[0].o = (jobject)M_rhino_ScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(924);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(925);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (frame[2].o))));
	frame[3].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(927);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isSymbol_java_lang_Object_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(928);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_NativeSymbol_getKey_R_rhino_SymbolKey) ((void **) nullCheck(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[2].o))))->vtable)[VTABLE_rhino_NativeSymbol_getKey_R_rhino_SymbolKey])(ctx, (checkCast(ctx, &class_rhino_NativeSymbol, (frame[2].o))));
	sp[0].o = (jobject)M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(931);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getBuiltInDescriptor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(938);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(939);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(940);
	frame[4].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(943);
	jint temp0 = (jint)((func_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(944);
	if ((frame[5].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(945);
	frame[6].i = ((frame[5].i) & (jint(65535)));
	LINE_NUMBER(946);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(947);
	frame[3].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (16)));
	LINE_NUMBER(948);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(ctx, (frame[4].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_java_lang_String_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(952);
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(954);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int])(ctx, sp[0].o, (frame[6].i));
	frame[3].i = temp0;
	LINE_NUMBER(955);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(ctx, (frame[4].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(958);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/IdScriptableObject:getBuiltInDescriptor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((func_rhino_IdScriptableObject_getParentScope_R_rhino_Scriptable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_IdScriptableObject_getParentScope_R_rhino_Scriptable])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(966);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(967);
	frame[4].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_findId_rhino_Symbol_R_int])(ctx, sp[0].o, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(972);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	sp[0].o = (jobject)((func_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(974);
	sp[0].o = (jobject)((rhino_IdScriptableObject *) NULL_CHECK((frame[0].o)))->F_prototypeValues;
	jint temp0 = (jint)((func_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_IdScriptableObject$PrototypeValues_getAttributes_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[3].i = temp0;
	LINE_NUMBER(975);
	sp[0].o = (jobject)SM_rhino_ScriptableObject_buildDataDescriptor_rhino_Scriptable_java_lang_Object_int_R_rhino_ScriptableObject(ctx, (frame[4].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(978);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_IdScriptableObject[] {
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
};

static jclass interfaces[] { &class_rhino_IdFunctionCall, };

static jclass innerClasses[] {
	&class_rhino_IdScriptableObject$PrototypeValues,
};

static FieldMetadata fields[] {
	{ "prototypeValues", &class_rhino_IdScriptableObject$PrototypeValues, offsetof(rhino_IdScriptableObject, F_prototypeValues), "Lrhino/IdScriptableObject$PrototypeValues;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_IdScriptableObject, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_IdScriptableObject_rhino_Scriptable_rhino_Scriptable, 0, "(Lrhino/Scriptable;Lrhino/Scriptable;)V", 1 },
	{ "defaultHas", (intptr_t) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean, VTABLE_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 20 },
	{ "defaultGet", (intptr_t) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object, VTABLE_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 20 },
	{ "defaultPut", (intptr_t) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object, VTABLE_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 20 },
	{ "has", (intptr_t) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean, VTABLE_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean, "(Ljava/lang/String;Lrhino/Scriptable;)Z", 1 },
	{ "has", (intptr_t) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, VTABLE_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean, "(Lrhino/Symbol;Lrhino/Scriptable;)Z", 1 },
	{ "get", (intptr_t) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "put", (intptr_t) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, VTABLE_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object, "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "put", (intptr_t) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, VTABLE_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object, "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "delete", (intptr_t) M_rhino_IdScriptableObject_delete_java_lang_String, VTABLE_rhino_IdScriptableObject_delete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "delete", (intptr_t) M_rhino_IdScriptableObject_delete_rhino_Symbol, VTABLE_rhino_IdScriptableObject_delete_rhino_Symbol, "(Lrhino/Symbol;)V", 1 },
	{ "getAttributes", (intptr_t) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int, VTABLE_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int, "(Ljava/lang/String;)I", 1 },
	{ "getAttributes", (intptr_t) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int, VTABLE_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 1 },
	{ "setAttributes", (intptr_t) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int, VTABLE_rhino_IdScriptableObject_setAttributes_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "getIds", (intptr_t) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object, VTABLE_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object, "(ZZ)[Ljava/lang/Object;", 0 },
	{ "getMaxInstanceId", (intptr_t) M_rhino_IdScriptableObject_getMaxInstanceId_R_int, VTABLE_rhino_IdScriptableObject_getMaxInstanceId_R_int, "()I", 4 },
	{ "instanceIdInfo", (intptr_t) SM_rhino_IdScriptableObject_instanceIdInfo_int_int_R_int, 0, "(II)I", 12 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int, VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "findInstanceIdInfo", (intptr_t) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int, VTABLE_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "getInstanceIdName", (intptr_t) M_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String, VTABLE_rhino_IdScriptableObject_getInstanceIdName_int_R_java_lang_String, "(I)Ljava/lang/String;", 4 },
	{ "getInstanceIdValue", (intptr_t) M_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object, VTABLE_rhino_IdScriptableObject_getInstanceIdValue_int_R_java_lang_Object, "(I)Ljava/lang/Object;", 4 },
	{ "setInstanceIdValue", (intptr_t) M_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object, VTABLE_rhino_IdScriptableObject_setInstanceIdValue_int_java_lang_Object, "(ILjava/lang/Object;)V", 4 },
	{ "setInstanceIdAttributes", (intptr_t) M_rhino_IdScriptableObject_setInstanceIdAttributes_int_int, VTABLE_rhino_IdScriptableObject_setInstanceIdAttributes_int_int, "(II)V", 4 },
	{ "execIdCall", (intptr_t) M_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_IdScriptableObject_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "exportAsJSClass", (intptr_t) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject, "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;", 17 },
	{ "hasPrototypeMap", (intptr_t) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean, VTABLE_rhino_IdScriptableObject_hasPrototypeMap_R_boolean, "()Z", 17 },
	{ "activatePrototypeMap", (intptr_t) M_rhino_IdScriptableObject_activatePrototypeMap_int, VTABLE_rhino_IdScriptableObject_activatePrototypeMap_int, "(I)V", 17 },
	{ "initPrototypeMethod", (intptr_t) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject, "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;", 17 },
	{ "initPrototypeMethod", (intptr_t) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject, "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;", 17 },
	{ "initPrototypeMethod", (intptr_t) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject, "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;", 17 },
	{ "initPrototypeConstructor", (intptr_t) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 17 },
	{ "initPrototypeValue", (intptr_t) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int, VTABLE_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int, "(ILjava/lang/String;Ljava/lang/Object;I)V", 17 },
	{ "initPrototypeValue", (intptr_t) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int, VTABLE_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int, "(ILrhino/Symbol;Ljava/lang/Object;I)V", 17 },
	{ "initPrototypeId", (intptr_t) M_rhino_IdScriptableObject_initPrototypeId_int, VTABLE_rhino_IdScriptableObject_initPrototypeId_int, "(I)V", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int, VTABLE_rhino_IdScriptableObject_findPrototypeId_java_lang_String_R_int, "(Ljava/lang/String;)I", 4 },
	{ "findPrototypeId", (intptr_t) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int, VTABLE_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int, "(Lrhino/Symbol;)I", 4 },
	{ "fillConstructorProperties", (intptr_t) M_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_fillConstructorProperties_rhino_IdFunctionObject, "(Lrhino/IdFunctionObject;)V", 4 },
	{ "addIdFunctionProperty", (intptr_t) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int, VTABLE_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int, "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V", 4 },
	{ "incompatibleCallError", (intptr_t) SM_rhino_IdScriptableObject_incompatibleCallError_rhino_IdFunctionObject_R_rhino_EcmaError, 0, "(Lrhino/IdFunctionObject;)Lrhino/EcmaError;", 12 },
	{ "newIdFunction", (intptr_t) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject, VTABLE_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject, "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;", 2 },
	{ "defineOwnProperty", (intptr_t) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject, VTABLE_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V", 1 },
	{ "getOwnPropertyDescriptor", (intptr_t) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, VTABLE_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject, "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;", 4 },
	{ "getBuiltInDescriptor", (intptr_t) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject, VTABLE_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject, "(Ljava/lang/String;)Lrhino/ScriptableObject;", 2 },
	{ "getBuiltInDescriptor", (intptr_t) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject, VTABLE_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject, "(Lrhino/Symbol;)Lrhino/ScriptableObject;", 2 },
};

Class class_rhino_IdScriptableObject{
		.nativeName = (intptr_t) "rhino/IdScriptableObject",
		.parentClass = (intptr_t) &class_rhino_ScriptableObject,
		.size = sizeof(rhino_IdScriptableObject),
		.classVtable = (intptr_t) vtable_rhino_IdScriptableObject,
		.staticInitializer = (intptr_t) clinit_rhino_IdScriptableObject,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_IdScriptableObject,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 113,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_IdScriptableObject = registerClass(&class_rhino_IdScriptableObject);

}
