#include "rhino/ContextFactory.h"
#include "rhino/ContextFactory_1GlobalSetterImpl.h"
#include "rhino/ContextAction.h"
#include "rhino/Context.h"
#include "java/lang/IllegalArgumentException.h"
#include "rhino/Scriptable.h"
#include "rhino/ContextFactory_Listener.h"
#include "rhino/Callable.h"
#include "rhino/GeneratedClassLoader.h"
#include "rhino/ConsString.h"
#include "java/lang/Object.h"
#include "rhino/ContextFactory_GlobalSetter.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/ContextFactory.h"
#include "rhino/DefiningClassLoader.h"
#include "java/lang/Throwable.h"
#include "java/lang/ClassLoader.h"

extern "C" {

volatile jbool SF_rhino_ContextFactory_hasCustomGlobal;
jobject SF_rhino_ContextFactory_global;

void mark_rhino_ContextFactory(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ContextFactory_global)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ContextFactory_global)->clazz)->markFunction)((jobject) SF_rhino_ContextFactory_global, mark, depth + 1);
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
	auto self = (rhino_ContextFactory *) object;
	if (self->F_listenersLock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenersLock)->clazz)->markFunction)((jobject) self->F_listenersLock, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_applicationClassLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_applicationClassLoader)->clazz)->markFunction)((jobject) self->F_applicationClassLoader, mark, depth + 1);
}

void init_rhino_ContextFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(100);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	clinit_java_lang_Object(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[1].o);
	((rhino_ContextFactory *) NULL_CHECK(sp[0].o))->F_listenersLock = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:getGlobal", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	{
	LINE_NUMBER(133);
	clinit_rhino_ContextFactory(ctx);
	sp[0].o = (jobject)SF_rhino_ContextFactory_global;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_ContextFactory_hasExplicitGlobal_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:hasExplicitGlobal", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (clinit_rhino_ContextFactory(ctx), (jint)SF_rhino_ContextFactory_hasCustomGlobal);
	}

	popStackFrame(ctx);
}

void SM_rhino_ContextFactory_initGlobal_rhino_ContextFactory(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:initGlobal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_rhino_ContextFactory);

	clinit_rhino_ContextFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(155);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(156);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(158);
	if ((clinit_rhino_ContextFactory(ctx), (jint)SF_rhino_ContextFactory_hasCustomGlobal) == 0) goto label_3;
	}
	{
	LINE_NUMBER(159);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(161);
	clinit_rhino_ContextFactory(ctx);
	SF_rhino_ContextFactory_hasCustomGlobal = (jint(1));
	LINE_NUMBER(162);
	clinit_rhino_ContextFactory(ctx);
	SF_rhino_ContextFactory_global = (frame[0].o);
	LINE_NUMBER(163);
	popStackFrame(ctx, (jobject) &class_rhino_ContextFactory);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ContextFactory_getGlobalSetter_R_rhino_ContextFactory$GlobalSetter(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:getGlobalSetter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_rhino_ContextFactory);

	clinit_rhino_ContextFactory(ctx);
	{
	LINE_NUMBER(172);
	if ((clinit_rhino_ContextFactory(ctx), (jint)SF_rhino_ContextFactory_hasCustomGlobal) == 0) goto label_1;
	}
	{
	LINE_NUMBER(173);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(175);
	clinit_rhino_ContextFactory(ctx);
	SF_rhino_ContextFactory_hasCustomGlobal = (jint(1));
	LINE_NUMBER(187);
	clinit_rhino_ContextFactory$1GlobalSetterImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ContextFactory$1GlobalSetterImpl);
	init_rhino_ContextFactory$1GlobalSetterImpl(ctx, sp[0].o);
	popStackFrame(ctx, (jobject) &class_rhino_ContextFactory);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_makeContext_R_rhino_Context(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:makeContext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	clinit_rhino_Context(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Context);
	init_rhino_Context_rhino_ContextFactory(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:hasFeature", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(210);
	switch((frame[2].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_3;
		case 6: goto label_5;
		case 7: goto label_2;
		case 8: goto label_2;
		case 9: goto label_2;
		case 10: goto label_2;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_3;
		case 15: goto label_6;
		case 16: goto label_7;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_2;
		default: goto label_8;
	}
	}
label_1:;
	{
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(224);
	if ((frame[3].i) == (100)) goto label_10;
	}
	{
	if ((frame[3].i) == (110)) goto label_10;
	}
	{
	if ((frame[3].i) != (120)) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(260);
	if ((frame[3].i) != (120)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(264);
	if ((frame[3].i) == (200)) goto label_17;
	}
	{
	if ((frame[3].i) < (160)) goto label_18;
	}
label_17:;
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 > (170)) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_rhino_Context_getLanguageVersion_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getLanguageVersion_R_int])(ctx, (frame[1].o));
	if (temp0 < (200)) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(274);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[2].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:createClassLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(286);
	clinit_rhino_DefiningClassLoader(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_DefiningClassLoader);
	init_rhino_DefiningClassLoader_java_lang_ClassLoader(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:getApplicationClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:initApplicationClassLoader", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(304);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(305);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"loader is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)SM_rhino_Kit_testIfCanLoadRhinoClasses_java_lang_ClassLoader_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(307);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Loader can not resolve Rhino classes"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(311);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"applicationClassLoader can only be set once"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(313);
	((func_rhino_ContextFactory_checkNotSealed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_checkNotSealed])(ctx, (frame[0].o));
	LINE_NUMBER(315);
	((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_applicationClassLoader = (jref) (frame[1].o);
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:doTopCall", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Callable, INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(329);
	if ((isInstance(ctx, (frame[6].o), &class_rhino_ConsString)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[6].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(6);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_observeInstructionCount_rhino_Context_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:observeInstructionCount", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_onContextCreated_rhino_Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:onContextCreated", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(343);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)SM_rhino_Kit_getListener_java_lang_Object_int_R_java_lang_Object(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_rhino_ContextFactory$Listener, sp[0].o));
	LINE_NUMBER(345);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(346);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(347);
	((func_rhino_ContextFactory$Listener_contextCreated_rhino_Context) resolveInterfaceMethod(ctx, &class_rhino_ContextFactory$Listener, INDEX_rhino_ContextFactory$Listener_contextCreated_rhino_Context, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(343);
	INST_IINC(3, 1);
	goto label_2;
	}
label_6:;
	LINE_NUMBER(349);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_onContextReleased_rhino_Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:onContextReleased", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[2].o = sp[0].o;
	LINE_NUMBER(353);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)SM_rhino_Kit_getListener_java_lang_Object_int_R_java_lang_Object(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_rhino_ContextFactory$Listener, sp[0].o));
	LINE_NUMBER(355);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	LINE_NUMBER(356);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(357);
	((func_rhino_ContextFactory$Listener_contextReleased_rhino_Context) resolveInterfaceMethod(ctx, &class_rhino_ContextFactory$Listener, INDEX_rhino_ContextFactory$Listener_contextReleased_rhino_Context, (frame[4].o)))(ctx, (frame[4].o), (frame[1].o));
	LINE_NUMBER(353);
	INST_IINC(3, 1);
	goto label_2;
	}
label_6:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:addListener", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(362);
	((func_rhino_ContextFactory_checkNotSealed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_checkNotSealed])(ctx, (frame[0].o));
	LINE_NUMBER(363);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listenersLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(364);
	if (((jint)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_disabledListening) == 0) goto label_8;
	}
	{
	LINE_NUMBER(365);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[1].o = (jobject)SM_rhino_Kit_addListener_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	((rhino_ContextFactory *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(368);
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
	LINE_NUMBER(369);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:removeListener", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	((func_rhino_ContextFactory_checkNotSealed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_checkNotSealed])(ctx, (frame[0].o));
	LINE_NUMBER(373);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listenersLock;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(374);
	if (((jint)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_disabledListening) == 0) goto label_8;
	}
	{
	LINE_NUMBER(375);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[1].o = (jobject)SM_rhino_Kit_removeListener_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[1].o, (frame[1].o));
	((rhino_ContextFactory *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(378);
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
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_disableContextListening(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:disableContextListening", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	((func_rhino_ContextFactory_checkNotSealed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_checkNotSealed])(ctx, (frame[0].o));
	LINE_NUMBER(387);
	sp[0].o = (jobject)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listenersLock;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(388);
	((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_disabledListening = (jint(1));
	LINE_NUMBER(389);
	((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_listeners = (jref) (jobject(nullptr));
	LINE_NUMBER(390);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_10;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_10:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_ContextFactory_isSealed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:isSealed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return ((jint)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_sealed);
	}

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_seal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:seal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	((func_rhino_ContextFactory_checkNotSealed) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_checkNotSealed])(ctx, (frame[0].o));
	LINE_NUMBER(408);
	((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_sealed = (jint(1));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ContextFactory_checkNotSealed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:checkNotSealed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	if (((jint)((rhino_ContextFactory *) NULL_CHECK((frame[0].o)))->F_sealed) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(413);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:call", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)SM_rhino_Context_call_rhino_ContextFactory_rhino_ContextAction_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_enterContext_R_rhino_Context(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:enterContext", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:enterContext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)SM_rhino_Context_enter_rhino_Context_rhino_ContextFactory_R_rhino_Context(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ContextFactory_access$002_rhino_ContextFactory_R_rhino_ContextFactory(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:access$002", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_rhino_ContextFactory(ctx);
	SF_rhino_ContextFactory_global = sp[0].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ContextFactory_access$000_R_rhino_ContextFactory(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:access$000", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	{
	LINE_NUMBER(100);
	clinit_rhino_ContextFactory(ctx);
	sp[0].o = (jobject)SF_rhino_ContextFactory_global;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ContextFactory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory(ctx);
	{
	LINE_NUMBER(102);
	clinit_rhino_ContextFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ContextFactory);
	init_rhino_ContextFactory(ctx, sp[0].o);
	clinit_rhino_ContextFactory(ctx);
	SF_rhino_ContextFactory_global = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ContextFactory[] {
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
	(void *) M_rhino_ContextFactory_makeContext_R_rhino_Context,
	(void *) M_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean,
	(void *) M_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader,
	(void *) M_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader,
	(void *) M_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader,
	(void *) M_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ContextFactory_observeInstructionCount_rhino_Context_int,
	(void *) M_rhino_ContextFactory_onContextCreated_rhino_Context,
	(void *) M_rhino_ContextFactory_onContextReleased_rhino_Context,
	(void *) M_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener,
	(void *) M_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener,
	(void *) M_rhino_ContextFactory_disableContextListening,
	(void *) M_rhino_ContextFactory_isSealed_R_boolean,
	(void *) M_rhino_ContextFactory_seal,
	(void *) M_rhino_ContextFactory_checkNotSealed,
	(void *) M_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object,
	(void *) M_rhino_ContextFactory_enterContext_R_rhino_Context,
	(void *) M_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context,
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
	{ "makeContext", "()Lrhino/Context;" },
	{ "hasFeature", "(Lrhino/Context;I)Z" },
	{ "createClassLoader", "(Ljava/lang/ClassLoader;)Lrhino/GeneratedClassLoader;" },
	{ "getApplicationClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "initApplicationClassLoader", "(Ljava/lang/ClassLoader;)V" },
	{ "doTopCall", "(Lrhino/Callable;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "observeInstructionCount", "(Lrhino/Context;I)V" },
	{ "onContextCreated", "(Lrhino/Context;)V" },
	{ "onContextReleased", "(Lrhino/Context;)V" },
	{ "addListener", "(Lrhino/ContextFactory$Listener;)V" },
	{ "removeListener", "(Lrhino/ContextFactory$Listener;)V" },
	{ "disableContextListening", "()V" },
	{ "isSealed", "()Z" },
	{ "seal", "()V" },
	{ "checkNotSealed", "()V" },
	{ "call", "(Lrhino/ContextAction;)Ljava/lang/Object;" },
	{ "enterContext", "()Lrhino/Context;" },
	{ "enterContext", "(Lrhino/Context;)Lrhino/Context;" },
};

static jclass innerClasses[] {
	&class_rhino_ContextFactory$GlobalSetter,
	&class_rhino_ContextFactory$Listener,
};

static FieldMetadata fields[] {
	{ "hasCustomGlobal", &class_boolean, (intptr_t) &SF_rhino_ContextFactory_hasCustomGlobal, "Z", 74 },
	{ "global", &class_rhino_ContextFactory, (intptr_t) &SF_rhino_ContextFactory_global, "Lrhino/ContextFactory;", 10 },
	{ "sealed", &class_boolean, offsetof(rhino_ContextFactory, F_sealed), "Z", 66 },
	{ "listenersLock", &class_java_lang_Object, offsetof(rhino_ContextFactory, F_listenersLock), "Ljava/lang/Object;", 18 },
	{ "listeners", &class_java_lang_Object, offsetof(rhino_ContextFactory, F_listeners), "Ljava/lang/Object;", 66 },
	{ "disabledListening", &class_boolean, offsetof(rhino_ContextFactory, F_disabledListening), "Z", 2 },
	{ "applicationClassLoader", &class_java_lang_ClassLoader, offsetof(rhino_ContextFactory, F_applicationClassLoader), "Ljava/lang/ClassLoader;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ContextFactory, 0, "()V", 1 },
	{ "getGlobal", (intptr_t) SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory, 0, "()Lrhino/ContextFactory;", 9 },
	{ "hasExplicitGlobal", (intptr_t) SM_rhino_ContextFactory_hasExplicitGlobal_R_boolean, 0, "()Z", 9 },
	{ "initGlobal", (intptr_t) SM_rhino_ContextFactory_initGlobal_rhino_ContextFactory, 0, "(Lrhino/ContextFactory;)V", 41 },
	{ "getGlobalSetter", (intptr_t) SM_rhino_ContextFactory_getGlobalSetter_R_rhino_ContextFactory$GlobalSetter, 0, "()Lrhino/ContextFactory$GlobalSetter;", 41 },
	{ "makeContext", (intptr_t) M_rhino_ContextFactory_makeContext_R_rhino_Context, VTABLE_rhino_ContextFactory_makeContext_R_rhino_Context, "()Lrhino/Context;", 4 },
	{ "hasFeature", (intptr_t) M_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean, VTABLE_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean, "(Lrhino/Context;I)Z", 4 },
	{ "createClassLoader", (intptr_t) M_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader, VTABLE_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader, "(Ljava/lang/ClassLoader;)Lrhino/GeneratedClassLoader;", 4 },
	{ "getApplicationClassLoader", (intptr_t) M_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader, VTABLE_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 17 },
	{ "initApplicationClassLoader", (intptr_t) M_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader, VTABLE_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader, "(Ljava/lang/ClassLoader;)V", 17 },
	{ "doTopCall", (intptr_t) M_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Callable;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 4 },
	{ "observeInstructionCount", (intptr_t) M_rhino_ContextFactory_observeInstructionCount_rhino_Context_int, VTABLE_rhino_ContextFactory_observeInstructionCount_rhino_Context_int, "(Lrhino/Context;I)V", 4 },
	{ "onContextCreated", (intptr_t) M_rhino_ContextFactory_onContextCreated_rhino_Context, VTABLE_rhino_ContextFactory_onContextCreated_rhino_Context, "(Lrhino/Context;)V", 4 },
	{ "onContextReleased", (intptr_t) M_rhino_ContextFactory_onContextReleased_rhino_Context, VTABLE_rhino_ContextFactory_onContextReleased_rhino_Context, "(Lrhino/Context;)V", 4 },
	{ "addListener", (intptr_t) M_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener, VTABLE_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener, "(Lrhino/ContextFactory$Listener;)V", 17 },
	{ "removeListener", (intptr_t) M_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener, VTABLE_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener, "(Lrhino/ContextFactory$Listener;)V", 17 },
	{ "disableContextListening", (intptr_t) M_rhino_ContextFactory_disableContextListening, VTABLE_rhino_ContextFactory_disableContextListening, "()V", 16 },
	{ "isSealed", (intptr_t) M_rhino_ContextFactory_isSealed_R_boolean, VTABLE_rhino_ContextFactory_isSealed_R_boolean, "()Z", 17 },
	{ "seal", (intptr_t) M_rhino_ContextFactory_seal, VTABLE_rhino_ContextFactory_seal, "()V", 17 },
	{ "checkNotSealed", (intptr_t) M_rhino_ContextFactory_checkNotSealed, VTABLE_rhino_ContextFactory_checkNotSealed, "()V", 20 },
	{ "call", (intptr_t) M_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object, VTABLE_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object, "(Lrhino/ContextAction;)Ljava/lang/Object;", 17 },
	{ "enterContext", (intptr_t) M_rhino_ContextFactory_enterContext_R_rhino_Context, VTABLE_rhino_ContextFactory_enterContext_R_rhino_Context, "()Lrhino/Context;", 1 },
	{ "enterContext", (intptr_t) M_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context, VTABLE_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context, "(Lrhino/Context;)Lrhino/Context;", 17 },
	{ "access$002", (intptr_t) SM_rhino_ContextFactory_access$002_rhino_ContextFactory_R_rhino_ContextFactory, 0, "(Lrhino/ContextFactory;)Lrhino/ContextFactory;", 4104 },
	{ "access$000", (intptr_t) SM_rhino_ContextFactory_access$000_R_rhino_ContextFactory, 0, "()Lrhino/ContextFactory;", 4104 },
	{ "<clinit>", (intptr_t) clinit_rhino_ContextFactory, 0, "()V", 8 },
};

Class class_rhino_ContextFactory{
		.nativeName = (intptr_t) "rhino/ContextFactory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ContextFactory),
		.classVtable = (intptr_t) vtable_rhino_ContextFactory,
		.staticInitializer = (intptr_t) clinit_rhino_ContextFactory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ContextFactory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ContextFactory = registerClass(&class_rhino_ContextFactory);

}
