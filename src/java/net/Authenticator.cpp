#include "java/net/Authenticator.h"
#include "java/net/NetPermission.h"
#include "java/net/URL.h"
#include "java/net/Authenticator_RequestorType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/Authenticator.h"
#include "java/net/PasswordAuthentication.h"
#include "java/net/InetAddress.h"
#include "java/lang/SecurityManager.h"
#include "java/security/Permission.h"
#include "java/util/Objects.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

volatile jobject SF_java_net_Authenticator_theAuthenticator;

void mark_java_net_Authenticator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_Authenticator_theAuthenticator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_Authenticator_theAuthenticator)->clazz)->markFunction)((jobject) SF_java_net_Authenticator_theAuthenticator, mark, depth + 1);
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
	auto self = (java_net_Authenticator *) object;
	if (self->F_requestingHost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingHost)->clazz)->markFunction)((jobject) self->F_requestingHost, mark, depth + 1);
	if (self->F_requestingSite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingSite)->clazz)->markFunction)((jobject) self->F_requestingSite, mark, depth + 1);
	if (self->F_requestingProtocol)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingProtocol)->clazz)->markFunction)((jobject) self->F_requestingProtocol, mark, depth + 1);
	if (self->F_requestingPrompt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingPrompt)->clazz)->markFunction)((jobject) self->F_requestingPrompt, mark, depth + 1);
	if (self->F_requestingScheme)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingScheme)->clazz)->markFunction)((jobject) self->F_requestingScheme, mark, depth + 1);
	if (self->F_requestingURL)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingURL)->clazz)->markFunction)((jobject) self->F_requestingURL, mark, depth + 1);
	if (self->F_requestingAuthType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestingAuthType)->clazz)->markFunction)((jobject) self->F_requestingAuthType, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
}

void clinit_java_net_Authenticator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_Authenticator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(73);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_key = (jref) (((jobject) createStringLiteral(ctx, u8"KEY"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_Authenticator_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingHost = (jref) (jobject(nullptr));
	LINE_NUMBER(93);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingSite = (jref) (jobject(nullptr));
	LINE_NUMBER(94);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPort = (jint(-1));
	LINE_NUMBER(95);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingProtocol = (jref) (jobject(nullptr));
	LINE_NUMBER(96);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPrompt = (jref) (jobject(nullptr));
	LINE_NUMBER(97);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingScheme = (jref) (jobject(nullptr));
	LINE_NUMBER(98);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingURL = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[1].o = (jobject)SF_java_net_Authenticator$RequestorType_SERVER;
	((java_net_Authenticator *) NULL_CHECK(sp[0].o))->F_requestingAuthType = (jref) sp[1].o;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_net_Authenticator_setDefault_java_net_Authenticator(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:setDefault", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_net_Authenticator);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(131);
	clinit_java_net_Authenticator(ctx);
	SF_java_net_Authenticator_theAuthenticator = (frame[0].o);
	LINE_NUMBER(132);
	popStackFrame(ctx, (jobject) &class_java_net_Authenticator);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_getDefault_R_java_net_Authenticator(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getDefault", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(ctx);
	frame[0].o = sp[0].o;
	LINE_NUMBER(155);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(156);
	clinit_java_net_NetPermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetPermission);
	init_java_net_NetPermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"requestPasswordAuthentication"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(158);
	((func_java_lang_SecurityManager_checkPermission_java_security_Permission) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(160);
	clinit_java_net_Authenticator(ctx);
	sp[0].o = (jobject)SF_java_net_Authenticator_theAuthenticator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_requestPasswordAuthentication_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_R_java_net_PasswordAuthentication(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:requestPasswordAuthentication", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(199);
	clinit_java_net_NetPermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetPermission);
	init_java_net_NetPermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"requestPasswordAuthentication"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(201);
	((func_java_lang_SecurityManager_checkPermission_java_security_Permission) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission])(ctx, (frame[5].o), (frame[6].o));
	}
label_8:;
	{
	LINE_NUMBER(204);
	clinit_java_net_Authenticator(ctx);
	sp[0].o = (jobject)SF_java_net_Authenticator_theAuthenticator;
	frame[6].o = sp[0].o;
	LINE_NUMBER(205);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[6].o;
	frame[7].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(209);
	M_java_net_Authenticator_reset(ctx, (frame[6].o));
	LINE_NUMBER(210);
	((java_net_Authenticator *) NULL_CHECK((frame[6].o)))->F_requestingSite = (jref) (frame[0].o);
	LINE_NUMBER(211);
	((java_net_Authenticator *) NULL_CHECK((frame[6].o)))->F_requestingPort = (frame[1].i);
	LINE_NUMBER(212);
	((java_net_Authenticator *) NULL_CHECK((frame[6].o)))->F_requestingProtocol = (jref) (frame[2].o);
	LINE_NUMBER(213);
	((java_net_Authenticator *) NULL_CHECK((frame[6].o)))->F_requestingPrompt = (jref) (frame[3].o);
	LINE_NUMBER(214);
	((java_net_Authenticator *) NULL_CHECK((frame[6].o)))->F_requestingScheme = (jref) (frame[4].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication])(ctx, (frame[6].o));
	monitorExit(ctx, (frame[7].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(216);
	frame[8].o = sp[0].o;
	monitorExit(ctx, (frame[7].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(8);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_requestPasswordAuthentication_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_R_java_net_PasswordAuthentication(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:requestPasswordAuthentication", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(260);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(261);
	clinit_java_net_NetPermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetPermission);
	init_java_net_NetPermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"requestPasswordAuthentication"_j))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(263);
	((func_java_lang_SecurityManager_checkPermission_java_security_Permission) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission])(ctx, (frame[6].o), (frame[7].o));
	}
label_8:;
	{
	LINE_NUMBER(266);
	clinit_java_net_Authenticator(ctx);
	sp[0].o = (jobject)SF_java_net_Authenticator_theAuthenticator;
	frame[7].o = sp[0].o;
	LINE_NUMBER(267);
	if ((frame[7].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(270);
	sp[0].o = frame[7].o;
	frame[8].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(271);
	M_java_net_Authenticator_reset(ctx, (frame[7].o));
	LINE_NUMBER(272);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingHost = (jref) (frame[0].o);
	LINE_NUMBER(273);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingSite = (jref) (frame[1].o);
	LINE_NUMBER(274);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingPort = (frame[2].i);
	LINE_NUMBER(275);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingProtocol = (jref) (frame[3].o);
	LINE_NUMBER(276);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingPrompt = (jref) (frame[4].o);
	LINE_NUMBER(277);
	((java_net_Authenticator *) NULL_CHECK((frame[7].o)))->F_requestingScheme = (jref) (frame[5].o);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication])(ctx, (frame[7].o));
	monitorExit(ctx, (frame[8].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(279);
	frame[9].o = sp[0].o;
	monitorExit(ctx, (frame[8].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(9);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_requestPasswordAuthentication_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:requestPasswordAuthentication", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(ctx);
	frame[8].o = sp[0].o;
	LINE_NUMBER(327);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(328);
	clinit_java_net_NetPermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetPermission);
	init_java_net_NetPermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"requestPasswordAuthentication"_j))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(330);
	((func_java_lang_SecurityManager_checkPermission_java_security_Permission) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission])(ctx, (frame[8].o), (frame[9].o));
	}
label_8:;
	{
	LINE_NUMBER(333);
	clinit_java_net_Authenticator(ctx);
	sp[0].o = (jobject)SF_java_net_Authenticator_theAuthenticator;
	frame[9].o = sp[0].o;
	LINE_NUMBER(334);
	if ((frame[9].o) != nullptr) goto label_12;
	}
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[9].o;
	frame[10].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(338);
	M_java_net_Authenticator_reset(ctx, (frame[9].o));
	LINE_NUMBER(339);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingHost = (jref) (frame[0].o);
	LINE_NUMBER(340);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingSite = (jref) (frame[1].o);
	LINE_NUMBER(341);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingPort = (frame[2].i);
	LINE_NUMBER(342);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingProtocol = (jref) (frame[3].o);
	LINE_NUMBER(343);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingPrompt = (jref) (frame[4].o);
	LINE_NUMBER(344);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingScheme = (jref) (frame[5].o);
	LINE_NUMBER(345);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingURL = (jref) (frame[6].o);
	LINE_NUMBER(346);
	((java_net_Authenticator *) NULL_CHECK((frame[9].o)))->F_requestingAuthType = (jref) (frame[7].o);
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication])(ctx, (frame[9].o));
	monitorExit(ctx, (frame[10].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(348);
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[10].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_requestPasswordAuthentication_java_net_Authenticator_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8) {
	jtype frame[20];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:requestPasswordAuthentication", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(400);
	if ((frame[9].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(401);
	clinit_java_net_NetPermission(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_NetPermission);
	init_java_net_NetPermission_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"requestPasswordAuthentication"_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(403);
	((func_java_lang_SecurityManager_checkPermission_java_security_Permission) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission])(ctx, (frame[9].o), (frame[10].o));
	}
label_2:;
	{
	LINE_NUMBER(406);
	if ((frame[0].o) != nullptr) goto label_5;
	}
	clinit_java_net_Authenticator(ctx);
	(sp++)->o = SF_java_net_Authenticator_theAuthenticator;
	goto label_6;
label_5:;
	INST_ALOAD(0);
label_6:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(407);
	if ((frame[10].o) != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((func_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication])(ctx, (frame[10].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].o), (frame[6].o), (frame[7].o), (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:requestPasswordAuthenticationInstance", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	frame[9].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(450);
	M_java_net_Authenticator_reset(ctx, (frame[0].o));
	LINE_NUMBER(451);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingHost = (jref) (frame[1].o);
	LINE_NUMBER(452);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingSite = (jref) (frame[2].o);
	LINE_NUMBER(453);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPort = (frame[3].i);
	LINE_NUMBER(454);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingProtocol = (jref) (frame[4].o);
	LINE_NUMBER(455);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPrompt = (jref) (frame[5].o);
	LINE_NUMBER(456);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingScheme = (jref) (frame[6].o);
	LINE_NUMBER(457);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingURL = (jref) (frame[7].o);
	LINE_NUMBER(458);
	((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingAuthType = (jref) (frame[8].o);
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication])(ctx, (frame[0].o));
	monitorExit(ctx, (frame[9].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(460);
	frame[10].o = sp[0].o;
	monitorExit(ctx, (frame[9].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(10);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingHost_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingHost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingHost;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingSite_R_java_net_InetAddress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingSite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingSite;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_Authenticator_getRequestingPort_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingPort", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return ((jint)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPort);
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingProtocol_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingProtocol", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(508);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingProtocol;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingPrompt_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingPrompt", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingPrompt;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingScheme_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingScheme", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingScheme;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getPasswordAuthentication", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestingURL_R_java_net_URL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestingURL", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingURL;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_Authenticator_getRequestorType_R_java_net_Authenticator$RequestorType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getRequestorType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((java_net_Authenticator *) NULL_CHECK((frame[0].o)))->F_requestingAuthType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator_getKey_java_net_Authenticator_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator:getKey", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"KEY"_j)));
	}

	popStackFrame(ctx);
}

void *vtable_java_net_Authenticator[] {
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
	(void *) M_java_net_Authenticator_reset,
	(void *) M_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication,
	(void *) M_java_net_Authenticator_getRequestingHost_R_java_lang_String,
	(void *) M_java_net_Authenticator_getRequestingSite_R_java_net_InetAddress,
	(void *) M_java_net_Authenticator_getRequestingPort_R_int,
	(void *) M_java_net_Authenticator_getRequestingProtocol_R_java_lang_String,
	(void *) M_java_net_Authenticator_getRequestingPrompt_R_java_lang_String,
	(void *) M_java_net_Authenticator_getRequestingScheme_R_java_lang_String,
	(void *) M_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication,
	(void *) M_java_net_Authenticator_getRequestingURL_R_java_net_URL,
	(void *) M_java_net_Authenticator_getRequestorType_R_java_net_Authenticator$RequestorType,
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
	{ "reset", "()V" },
	{ "requestPasswordAuthenticationInstance", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;" },
	{ "getRequestingHost", "()Ljava/lang/String;" },
	{ "getRequestingSite", "()Ljava/net/InetAddress;" },
	{ "getRequestingPort", "()I" },
	{ "getRequestingProtocol", "()Ljava/lang/String;" },
	{ "getRequestingPrompt", "()Ljava/lang/String;" },
	{ "getRequestingScheme", "()Ljava/lang/String;" },
	{ "getPasswordAuthentication", "()Ljava/net/PasswordAuthentication;" },
	{ "getRequestingURL", "()Ljava/net/URL;" },
	{ "getRequestorType", "()Ljava/net/Authenticator$RequestorType;" },
};

static jclass innerClasses[] {
	&class_java_net_Authenticator$RequestorType,
};

static FieldMetadata fields[] {
	{ "theAuthenticator", &class_java_net_Authenticator, (intptr_t) &SF_java_net_Authenticator_theAuthenticator, "Ljava/net/Authenticator;", 74 },
	{ "requestingHost", &class_java_lang_String, offsetof(java_net_Authenticator, F_requestingHost), "Ljava/lang/String;", 2 },
	{ "requestingSite", &class_java_net_InetAddress, offsetof(java_net_Authenticator, F_requestingSite), "Ljava/net/InetAddress;", 2 },
	{ "requestingPort", &class_int, offsetof(java_net_Authenticator, F_requestingPort), "I", 2 },
	{ "requestingProtocol", &class_java_lang_String, offsetof(java_net_Authenticator, F_requestingProtocol), "Ljava/lang/String;", 2 },
	{ "requestingPrompt", &class_java_lang_String, offsetof(java_net_Authenticator, F_requestingPrompt), "Ljava/lang/String;", 2 },
	{ "requestingScheme", &class_java_lang_String, offsetof(java_net_Authenticator, F_requestingScheme), "Ljava/lang/String;", 2 },
	{ "requestingURL", &class_java_net_URL, offsetof(java_net_Authenticator, F_requestingURL), "Ljava/net/URL;", 2 },
	{ "requestingAuthType", &class_java_net_Authenticator$RequestorType, offsetof(java_net_Authenticator, F_requestingAuthType), "Ljava/net/Authenticator$RequestorType;", 2 },
	{ "key", &class_java_lang_String, offsetof(java_net_Authenticator, F_key), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_Authenticator, 0, "()V", 1 },
	{ "reset", (intptr_t) M_java_net_Authenticator_reset, VTABLE_java_net_Authenticator_reset, "()V", 2 },
	{ "setDefault", (intptr_t) SM_java_net_Authenticator_setDefault_java_net_Authenticator, 0, "(Ljava/net/Authenticator;)V", 41 },
	{ "getDefault", (intptr_t) SM_java_net_Authenticator_getDefault_R_java_net_Authenticator, 0, "()Ljava/net/Authenticator;", 9 },
	{ "requestPasswordAuthentication", (intptr_t) SM_java_net_Authenticator_requestPasswordAuthentication_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_R_java_net_PasswordAuthentication, 0, "(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;", 9 },
	{ "requestPasswordAuthentication", (intptr_t) SM_java_net_Authenticator_requestPasswordAuthentication_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_R_java_net_PasswordAuthentication, 0, "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;", 9 },
	{ "requestPasswordAuthentication", (intptr_t) SM_java_net_Authenticator_requestPasswordAuthentication_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication, 0, "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", 9 },
	{ "requestPasswordAuthentication", (intptr_t) SM_java_net_Authenticator_requestPasswordAuthentication_java_net_Authenticator_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication, 0, "(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", 9 },
	{ "requestPasswordAuthenticationInstance", (intptr_t) M_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication, VTABLE_java_net_Authenticator_requestPasswordAuthenticationInstance_java_lang_String_java_net_InetAddress_int_java_lang_String_java_lang_String_java_lang_String_java_net_URL_java_net_Authenticator$RequestorType_R_java_net_PasswordAuthentication, "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;", 1 },
	{ "getRequestingHost", (intptr_t) M_java_net_Authenticator_getRequestingHost_R_java_lang_String, VTABLE_java_net_Authenticator_getRequestingHost_R_java_lang_String, "()Ljava/lang/String;", 20 },
	{ "getRequestingSite", (intptr_t) M_java_net_Authenticator_getRequestingSite_R_java_net_InetAddress, VTABLE_java_net_Authenticator_getRequestingSite_R_java_net_InetAddress, "()Ljava/net/InetAddress;", 20 },
	{ "getRequestingPort", (intptr_t) M_java_net_Authenticator_getRequestingPort_R_int, VTABLE_java_net_Authenticator_getRequestingPort_R_int, "()I", 20 },
	{ "getRequestingProtocol", (intptr_t) M_java_net_Authenticator_getRequestingProtocol_R_java_lang_String, VTABLE_java_net_Authenticator_getRequestingProtocol_R_java_lang_String, "()Ljava/lang/String;", 20 },
	{ "getRequestingPrompt", (intptr_t) M_java_net_Authenticator_getRequestingPrompt_R_java_lang_String, VTABLE_java_net_Authenticator_getRequestingPrompt_R_java_lang_String, "()Ljava/lang/String;", 20 },
	{ "getRequestingScheme", (intptr_t) M_java_net_Authenticator_getRequestingScheme_R_java_lang_String, VTABLE_java_net_Authenticator_getRequestingScheme_R_java_lang_String, "()Ljava/lang/String;", 20 },
	{ "getPasswordAuthentication", (intptr_t) M_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication, VTABLE_java_net_Authenticator_getPasswordAuthentication_R_java_net_PasswordAuthentication, "()Ljava/net/PasswordAuthentication;", 4 },
	{ "getRequestingURL", (intptr_t) M_java_net_Authenticator_getRequestingURL_R_java_net_URL, VTABLE_java_net_Authenticator_getRequestingURL_R_java_net_URL, "()Ljava/net/URL;", 4 },
	{ "getRequestorType", (intptr_t) M_java_net_Authenticator_getRequestorType_R_java_net_Authenticator$RequestorType, VTABLE_java_net_Authenticator_getRequestorType_R_java_net_Authenticator$RequestorType, "()Ljava/net/Authenticator$RequestorType;", 4 },
	{ "getKey", (intptr_t) SM_java_net_Authenticator_getKey_java_net_Authenticator_R_java_lang_String, 0, "(Ljava/net/Authenticator;)Ljava/lang/String;", 8 },
};

Class class_java_net_Authenticator{
		.nativeName = (intptr_t) "java/net/Authenticator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_Authenticator),
		.classVtable = (intptr_t) vtable_java_net_Authenticator,
		.staticInitializer = (intptr_t) clinit_java_net_Authenticator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_Authenticator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_Authenticator = registerClass(&class_java_net_Authenticator);

}
