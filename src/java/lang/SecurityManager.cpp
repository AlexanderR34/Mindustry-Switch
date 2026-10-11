#include "java/lang/SecurityManager.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/InetAddress.h"
#include "java/lang/reflect/Method.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/SecurityManager.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"
#include "java/lang/Thread.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_java_lang_SecurityManager(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_SecurityManager *) object;
}

void clinit_java_lang_SecurityManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_java_lang_SecurityManager_hasAllPermission_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:hasAllPermission", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_SecurityManager_getInCheck_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:getInCheck", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return ((jint)((java_lang_SecurityManager *) NULL_CHECK((frame[0].o)))->F_inCheck);
	}

	popStackFrame(ctx);
}

void init_java_lang_SecurityManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_SecurityManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(286);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(241);
	((java_lang_SecurityManager *) NULL_CHECK((frame[0].o)))->F_initialized = (jint(0));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:getClassContext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:currentClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getContextClassLoader_R_java_lang_ClassLoader])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:currentLoadedClass", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_lang_SecurityManager_classDepth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:classDepth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint M_java_lang_SecurityManager_classLoaderDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:classLoaderDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_java_lang_SecurityManager_inClass_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:inClass", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_java_lang_SecurityManager_classDepth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_SecurityManager_classDepth_java_lang_String_R_int])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 < 0) goto label_1;
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

jbool M_java_lang_SecurityManager_inClassLoader_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:inClassLoader", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader])(ctx, (frame[0].o));
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

jobject M_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:getSecurityContext", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPermission_java_security_Permission(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPermission", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPermission", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkCreateClassLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkCreateClassLoader", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkAccess_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(633);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(678);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkExit_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkExit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(706);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkExec_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkExec", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(738);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkLink_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkLink", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(768);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkRead_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(793);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkRead_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkRead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(816);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkRead", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(849);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(874);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkWrite_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(897);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkDelete_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkDelete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(923);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkConnect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkConnect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(955);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkConnect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	LINE_NUMBER(997);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkListen_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkListen", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(1018);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkAccept_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkAccept", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkMulticast", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte(jcontext ctx, jobject self, jobject param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkMulticast", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPropertiesAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPropertiesAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPropertyAccess_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPropertyAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkTopLevelWindow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1174);
	jint temp0 = (jint)M_java_lang_SecurityManager_hasAllPermission_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPrintJobAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPrintJobAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkSystemClipboardAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkSystemClipboardAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkAwtEventQueueAccess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkAwtEventQueueAccess", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1230);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPackageAccess_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPackageAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1270);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkPackageDefinition_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkPackageDefinition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkSetFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkSetFactory", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkMemberAccess", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(1372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_lang_SecurityManager_checkSecurityAccess_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:checkSecurityAccess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/SecurityManager:getThreadGroup", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1420);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getThreadGroup_R_java_lang_ThreadGroup])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_lang_SecurityManager;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field inCheck
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getInCheck
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method currentClassLoader
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	{ // Method currentLoadedClass
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	{ // Method classDepth
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	{ // Method classLoaderDepth
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	{ // Method inClass
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	{ // Method inClassLoader
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.2"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method checkMulticast
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.4"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method checkTopLevelWindow
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8"1.8"_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 1;
	}

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_lang_SecurityManager[] {
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
	(void *) M_java_lang_SecurityManager_hasAllPermission_R_boolean,
	(void *) M_java_lang_SecurityManager_getInCheck_R_boolean,
	(void *) M_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class,
	(void *) M_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader,
	(void *) M_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class,
	(void *) M_java_lang_SecurityManager_classDepth_java_lang_String_R_int,
	(void *) M_java_lang_SecurityManager_classLoaderDepth_R_int,
	(void *) M_java_lang_SecurityManager_inClass_java_lang_String_R_boolean,
	(void *) M_java_lang_SecurityManager_inClassLoader_R_boolean,
	(void *) M_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object,
	(void *) M_java_lang_SecurityManager_checkPermission_java_security_Permission,
	(void *) M_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object,
	(void *) M_java_lang_SecurityManager_checkCreateClassLoader,
	(void *) M_java_lang_SecurityManager_checkAccess_java_lang_Thread,
	(void *) M_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup,
	(void *) M_java_lang_SecurityManager_checkExit_int,
	(void *) M_java_lang_SecurityManager_checkExec_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkLink_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkRead_java_io_FileDescriptor,
	(void *) M_java_lang_SecurityManager_checkRead_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object,
	(void *) M_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor,
	(void *) M_java_lang_SecurityManager_checkWrite_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkDelete_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkConnect_java_lang_String_int,
	(void *) M_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object,
	(void *) M_java_lang_SecurityManager_checkListen_int,
	(void *) M_java_lang_SecurityManager_checkAccept_java_lang_String_int,
	(void *) M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress,
	(void *) M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte,
	(void *) M_java_lang_SecurityManager_checkPropertiesAccess,
	(void *) M_java_lang_SecurityManager_checkPropertyAccess_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean,
	(void *) M_java_lang_SecurityManager_checkPrintJobAccess,
	(void *) M_java_lang_SecurityManager_checkSystemClipboardAccess,
	(void *) M_java_lang_SecurityManager_checkAwtEventQueueAccess,
	(void *) M_java_lang_SecurityManager_checkPackageAccess_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkPackageDefinition_java_lang_String,
	(void *) M_java_lang_SecurityManager_checkSetFactory,
	(void *) M_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int,
	(void *) M_java_lang_SecurityManager_checkSecurityAccess_java_lang_String,
	(void *) M_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup,
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
	{ "hasAllPermission", "()Z" },
	{ "getInCheck", "()Z" },
	{ "getClassContext", "()[Ljava/lang/Class;" },
	{ "currentClassLoader", "()Ljava/lang/ClassLoader;" },
	{ "currentLoadedClass", "()Ljava/lang/Class;" },
	{ "classDepth", "(Ljava/lang/String;)I" },
	{ "classLoaderDepth", "()I" },
	{ "inClass", "(Ljava/lang/String;)Z" },
	{ "inClassLoader", "()Z" },
	{ "getSecurityContext", "()Ljava/lang/Object;" },
	{ "checkPermission", "(Ljava/security/Permission;)V" },
	{ "checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V" },
	{ "checkCreateClassLoader", "()V" },
	{ "checkAccess", "(Ljava/lang/Thread;)V" },
	{ "checkAccess", "(Ljava/lang/ThreadGroup;)V" },
	{ "checkExit", "(I)V" },
	{ "checkExec", "(Ljava/lang/String;)V" },
	{ "checkLink", "(Ljava/lang/String;)V" },
	{ "checkRead", "(Ljava/io/FileDescriptor;)V" },
	{ "checkRead", "(Ljava/lang/String;)V" },
	{ "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "checkWrite", "(Ljava/io/FileDescriptor;)V" },
	{ "checkWrite", "(Ljava/lang/String;)V" },
	{ "checkDelete", "(Ljava/lang/String;)V" },
	{ "checkConnect", "(Ljava/lang/String;I)V" },
	{ "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V" },
	{ "checkListen", "(I)V" },
	{ "checkAccept", "(Ljava/lang/String;I)V" },
	{ "checkMulticast", "(Ljava/net/InetAddress;)V" },
	{ "checkMulticast", "(Ljava/net/InetAddress;B)V" },
	{ "checkPropertiesAccess", "()V" },
	{ "checkPropertyAccess", "(Ljava/lang/String;)V" },
	{ "checkTopLevelWindow", "(Ljava/lang/Object;)Z" },
	{ "checkPrintJobAccess", "()V" },
	{ "checkSystemClipboardAccess", "()V" },
	{ "checkAwtEventQueueAccess", "()V" },
	{ "checkPackageAccess", "(Ljava/lang/String;)V" },
	{ "checkPackageDefinition", "(Ljava/lang/String;)V" },
	{ "checkSetFactory", "()V" },
	{ "checkMemberAccess", "(Ljava/lang/Class;I)V" },
	{ "checkSecurityAccess", "(Ljava/lang/String;)V" },
	{ "getThreadGroup", "()Ljava/lang/ThreadGroup;" },
};

static FieldMetadata fields[] {
	{ "inCheck", &class_boolean, offsetof(java_lang_SecurityManager, F_inCheck), "Z", 131076 },
	{ "initialized", &class_boolean, offsetof(java_lang_SecurityManager, F_initialized), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "hasAllPermission", (intptr_t) M_java_lang_SecurityManager_hasAllPermission_R_boolean, VTABLE_java_lang_SecurityManager_hasAllPermission_R_boolean, "()Z", 2 },
	{ "getInCheck", (intptr_t) M_java_lang_SecurityManager_getInCheck_R_boolean, VTABLE_java_lang_SecurityManager_getInCheck_R_boolean, "()Z", 131073 },
	{ "<init>", (intptr_t) init_java_lang_SecurityManager, 0, "()V", 1 },
	{ "getClassContext", (intptr_t) M_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class, VTABLE_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class, "()[Ljava/lang/Class;", 4 },
	{ "currentClassLoader", (intptr_t) M_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader, VTABLE_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader, "()Ljava/lang/ClassLoader;", 131076 },
	{ "currentLoadedClass", (intptr_t) M_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class, VTABLE_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class, "()Ljava/lang/Class;", 131076 },
	{ "classDepth", (intptr_t) M_java_lang_SecurityManager_classDepth_java_lang_String_R_int, VTABLE_java_lang_SecurityManager_classDepth_java_lang_String_R_int, "(Ljava/lang/String;)I", 131076 },
	{ "classLoaderDepth", (intptr_t) M_java_lang_SecurityManager_classLoaderDepth_R_int, VTABLE_java_lang_SecurityManager_classLoaderDepth_R_int, "()I", 131076 },
	{ "inClass", (intptr_t) M_java_lang_SecurityManager_inClass_java_lang_String_R_boolean, VTABLE_java_lang_SecurityManager_inClass_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 131076 },
	{ "inClassLoader", (intptr_t) M_java_lang_SecurityManager_inClassLoader_R_boolean, VTABLE_java_lang_SecurityManager_inClassLoader_R_boolean, "()Z", 131076 },
	{ "getSecurityContext", (intptr_t) M_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object, VTABLE_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "checkPermission", (intptr_t) M_java_lang_SecurityManager_checkPermission_java_security_Permission, VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission, "(Ljava/security/Permission;)V", 1 },
	{ "checkPermission", (intptr_t) M_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object, VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object, "(Ljava/security/Permission;Ljava/lang/Object;)V", 1 },
	{ "checkCreateClassLoader", (intptr_t) M_java_lang_SecurityManager_checkCreateClassLoader, VTABLE_java_lang_SecurityManager_checkCreateClassLoader, "()V", 1 },
	{ "checkAccess", (intptr_t) M_java_lang_SecurityManager_checkAccess_java_lang_Thread, VTABLE_java_lang_SecurityManager_checkAccess_java_lang_Thread, "(Ljava/lang/Thread;)V", 1 },
	{ "checkAccess", (intptr_t) M_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup, VTABLE_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup, "(Ljava/lang/ThreadGroup;)V", 1 },
	{ "checkExit", (intptr_t) M_java_lang_SecurityManager_checkExit_int, VTABLE_java_lang_SecurityManager_checkExit_int, "(I)V", 1 },
	{ "checkExec", (intptr_t) M_java_lang_SecurityManager_checkExec_java_lang_String, VTABLE_java_lang_SecurityManager_checkExec_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkLink", (intptr_t) M_java_lang_SecurityManager_checkLink_java_lang_String, VTABLE_java_lang_SecurityManager_checkLink_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkRead", (intptr_t) M_java_lang_SecurityManager_checkRead_java_io_FileDescriptor, VTABLE_java_lang_SecurityManager_checkRead_java_io_FileDescriptor, "(Ljava/io/FileDescriptor;)V", 1 },
	{ "checkRead", (intptr_t) M_java_lang_SecurityManager_checkRead_java_lang_String, VTABLE_java_lang_SecurityManager_checkRead_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkRead", (intptr_t) M_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object, VTABLE_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "checkWrite", (intptr_t) M_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor, VTABLE_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor, "(Ljava/io/FileDescriptor;)V", 1 },
	{ "checkWrite", (intptr_t) M_java_lang_SecurityManager_checkWrite_java_lang_String, VTABLE_java_lang_SecurityManager_checkWrite_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkDelete", (intptr_t) M_java_lang_SecurityManager_checkDelete_java_lang_String, VTABLE_java_lang_SecurityManager_checkDelete_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkConnect", (intptr_t) M_java_lang_SecurityManager_checkConnect_java_lang_String_int, VTABLE_java_lang_SecurityManager_checkConnect_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "checkConnect", (intptr_t) M_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object, VTABLE_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object, "(Ljava/lang/String;ILjava/lang/Object;)V", 1 },
	{ "checkListen", (intptr_t) M_java_lang_SecurityManager_checkListen_int, VTABLE_java_lang_SecurityManager_checkListen_int, "(I)V", 1 },
	{ "checkAccept", (intptr_t) M_java_lang_SecurityManager_checkAccept_java_lang_String_int, VTABLE_java_lang_SecurityManager_checkAccept_java_lang_String_int, "(Ljava/lang/String;I)V", 1 },
	{ "checkMulticast", (intptr_t) M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress, VTABLE_java_lang_SecurityManager_checkMulticast_java_net_InetAddress, "(Ljava/net/InetAddress;)V", 1 },
	{ "checkMulticast", (intptr_t) M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte, VTABLE_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte, "(Ljava/net/InetAddress;B)V", 131073 },
	{ "checkPropertiesAccess", (intptr_t) M_java_lang_SecurityManager_checkPropertiesAccess, VTABLE_java_lang_SecurityManager_checkPropertiesAccess, "()V", 1 },
	{ "checkPropertyAccess", (intptr_t) M_java_lang_SecurityManager_checkPropertyAccess_java_lang_String, VTABLE_java_lang_SecurityManager_checkPropertyAccess_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkTopLevelWindow", (intptr_t) M_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean, VTABLE_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 131073 },
	{ "checkPrintJobAccess", (intptr_t) M_java_lang_SecurityManager_checkPrintJobAccess, VTABLE_java_lang_SecurityManager_checkPrintJobAccess, "()V", 1 },
	{ "checkSystemClipboardAccess", (intptr_t) M_java_lang_SecurityManager_checkSystemClipboardAccess, VTABLE_java_lang_SecurityManager_checkSystemClipboardAccess, "()V", 131073 },
	{ "checkAwtEventQueueAccess", (intptr_t) M_java_lang_SecurityManager_checkAwtEventQueueAccess, VTABLE_java_lang_SecurityManager_checkAwtEventQueueAccess, "()V", 131073 },
	{ "checkPackageAccess", (intptr_t) M_java_lang_SecurityManager_checkPackageAccess_java_lang_String, VTABLE_java_lang_SecurityManager_checkPackageAccess_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkPackageDefinition", (intptr_t) M_java_lang_SecurityManager_checkPackageDefinition_java_lang_String, VTABLE_java_lang_SecurityManager_checkPackageDefinition_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "checkSetFactory", (intptr_t) M_java_lang_SecurityManager_checkSetFactory, VTABLE_java_lang_SecurityManager_checkSetFactory, "()V", 1 },
	{ "checkMemberAccess", (intptr_t) M_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int, VTABLE_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int, "(Ljava/lang/Class;I)V", 131073 },
	{ "checkSecurityAccess", (intptr_t) M_java_lang_SecurityManager_checkSecurityAccess_java_lang_String, VTABLE_java_lang_SecurityManager_checkSecurityAccess_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getThreadGroup", (intptr_t) M_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup, VTABLE_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup, "()Ljava/lang/ThreadGroup;", 1 },
};

Class class_java_lang_SecurityManager{
		.nativeName = (intptr_t) "java/lang/SecurityManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_SecurityManager),
		.classVtable = (intptr_t) vtable_java_lang_SecurityManager,
		.staticInitializer = (intptr_t) clinit_java_lang_SecurityManager,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_lang_SecurityManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 53,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_SecurityManager = registerClass(&class_java_lang_SecurityManager);

}
