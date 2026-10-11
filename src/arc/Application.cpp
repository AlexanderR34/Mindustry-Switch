#include "arc/Application.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Runtime.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/audio/Audio.h"
#include "java/lang/Object.h"
#include "arc/Application_ApplicationType.h"
#include "java/lang/String.h"
#include "arc/ApplicationListener.h"
#include "arc/Application_invoke_java_lang_Runnable_0.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_arc_Application(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Application *) object;
}

void clinit_arc_Application(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_arc_Application_addListener_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:addListener", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_arc_Application_getListeners_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getListeners_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((func_arc_Application_getListeners_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getListeners_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(17);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Application_removeListener_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:removeListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Application_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_Application_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_Application_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_Application_defaultUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:defaultUpdate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_autosave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_autosave])(ctx, sp[0].o);
	LINE_NUMBER(32);
	SM_arc_util_Time_updateGlobal(ctx);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_Application_isDesktop_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isDesktop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_arc_Application_getType_R_arc_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_desktop;
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

jbool M_arc_Application_isHeadless_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isHeadless", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_arc_Application_getType_R_arc_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_headless;
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

jbool M_arc_Application_isAndroid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isAndroid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_arc_Application_getType_R_arc_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_android;
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

jbool M_arc_Application_isIOS_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isIOS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_Application_getType_R_arc_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_iOS;
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

jbool M_arc_Application_isMobile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isMobile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_arc_Application_isAndroid_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isAndroid_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_Application_isIOS_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isIOS_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jbool M_arc_Application_isWeb_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isWeb", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_arc_Application_getType_R_arc_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, (frame[0].o)))(ctx, (frame[0].o));
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_web;
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

jint M_arc_Application_getVersion_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:getVersion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_arc_Application_getJavaHeap_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:getJavaHeap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jlong temp0 = (jlong)((func_java_lang_Runtime_totalMemory_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_totalMemory_R_long])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jlong temp1 = (jlong)((func_java_lang_Runtime_freeMemory_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Runtime_freeMemory_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jlong M_arc_Application_getNativeHeap_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:getNativeHeap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_Application_getMainThread_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:getMainThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_Application_isOnMainThread_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:isOnMainThread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_Application_getMainThread_R_java_lang_Thread) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getMainThread_R_java_lang_Thread, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(88);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_Application_openFolder_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:openFolder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_Application_openURI_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:openURI", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_Application_getDnsServers_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:getDnsServers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Application_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(131);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	((func_arc_Settings_autosave) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_autosave])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(134);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(135);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_audio;
	((func_arc_audio_Audio_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Audio_dispose])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_Application_lambda$removeListener$0_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application:lambda$removeListener$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((func_arc_Application_getListeners_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getListeners_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_Application_getListeners_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getListeners_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(25);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
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
	label_8:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_Application;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getMainThread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getClipboardText
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_Application[] {
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
	(void *) M_arc_Application_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) nullptr,
	(void *) M_arc_Application_addListener_arc_ApplicationListener,
	(void *) M_arc_Application_removeListener_arc_ApplicationListener,
	(void *) M_arc_Application_defaultUpdate,
	(void *) nullptr,
	(void *) M_arc_Application_isDesktop_R_boolean,
	(void *) M_arc_Application_isHeadless_R_boolean,
	(void *) M_arc_Application_isAndroid_R_boolean,
	(void *) M_arc_Application_isIOS_R_boolean,
	(void *) M_arc_Application_isMobile_R_boolean,
	(void *) M_arc_Application_isWeb_R_boolean,
	(void *) M_arc_Application_getVersion_R_int,
	(void *) M_arc_Application_getJavaHeap_R_long,
	(void *) M_arc_Application_getNativeHeap_R_long,
	(void *) M_arc_Application_getMainThread_R_java_lang_Thread,
	(void *) M_arc_Application_isOnMainThread_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Application_openFolder_java_lang_String_R_boolean,
	(void *) M_arc_Application_openURI_java_lang_String_R_boolean,
	(void *) M_arc_Application_getDnsServers_arc_struct_Seq,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_Application_lambda$removeListener$0_arc_ApplicationListener,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addListener", "(Larc/ApplicationListener;)V" },
	{ "removeListener", "(Larc/ApplicationListener;)V" },
	{ "defaultUpdate", "()V" },
	{ "getType", "()Larc/Application$ApplicationType;" },
	{ "isDesktop", "()Z" },
	{ "isHeadless", "()Z" },
	{ "isAndroid", "()Z" },
	{ "isIOS", "()Z" },
	{ "isMobile", "()Z" },
	{ "isWeb", "()Z" },
	{ "getVersion", "()I" },
	{ "getJavaHeap", "()J" },
	{ "getNativeHeap", "()J" },
	{ "getMainThread", "()Ljava/lang/Thread;" },
	{ "isOnMainThread", "()Z" },
	{ "getClipboardText", "()Ljava/lang/String;" },
	{ "setClipboardText", "(Ljava/lang/String;)V" },
	{ "openFolder", "(Ljava/lang/String;)Z" },
	{ "openURI", "(Ljava/lang/String;)Z" },
	{ "getDnsServers", "(Larc/struct/Seq;)V" },
	{ "post", "(Ljava/lang/Runnable;)V" },
	{ "exit", "()V" },
	{ "lambda$removeListener$0", "(Larc/ApplicationListener;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_Application$ApplicationType,
};

static MethodMetadata methods[] {
	{ "getListeners", 0, INDEX_arc_Application_getListeners_R_arc_struct_Seq, "()Larc/struct/Seq;", 1025 },
	{ "addListener", (intptr_t) M_arc_Application_addListener_arc_ApplicationListener, INDEX_arc_Application_addListener_arc_ApplicationListener, "(Larc/ApplicationListener;)V", 1 },
	{ "removeListener", (intptr_t) M_arc_Application_removeListener_arc_ApplicationListener, INDEX_arc_Application_removeListener_arc_ApplicationListener, "(Larc/ApplicationListener;)V", 1 },
	{ "defaultUpdate", (intptr_t) M_arc_Application_defaultUpdate, INDEX_arc_Application_defaultUpdate, "()V", 1 },
	{ "getType", 0, INDEX_arc_Application_getType_R_arc_Application$ApplicationType, "()Larc/Application$ApplicationType;", 1025 },
	{ "isDesktop", (intptr_t) M_arc_Application_isDesktop_R_boolean, INDEX_arc_Application_isDesktop_R_boolean, "()Z", 1 },
	{ "isHeadless", (intptr_t) M_arc_Application_isHeadless_R_boolean, INDEX_arc_Application_isHeadless_R_boolean, "()Z", 1 },
	{ "isAndroid", (intptr_t) M_arc_Application_isAndroid_R_boolean, INDEX_arc_Application_isAndroid_R_boolean, "()Z", 1 },
	{ "isIOS", (intptr_t) M_arc_Application_isIOS_R_boolean, INDEX_arc_Application_isIOS_R_boolean, "()Z", 1 },
	{ "isMobile", (intptr_t) M_arc_Application_isMobile_R_boolean, INDEX_arc_Application_isMobile_R_boolean, "()Z", 1 },
	{ "isWeb", (intptr_t) M_arc_Application_isWeb_R_boolean, INDEX_arc_Application_isWeb_R_boolean, "()Z", 1 },
	{ "getVersion", (intptr_t) M_arc_Application_getVersion_R_int, INDEX_arc_Application_getVersion_R_int, "()I", 1 },
	{ "getJavaHeap", (intptr_t) M_arc_Application_getJavaHeap_R_long, INDEX_arc_Application_getJavaHeap_R_long, "()J", 1 },
	{ "getNativeHeap", (intptr_t) M_arc_Application_getNativeHeap_R_long, INDEX_arc_Application_getNativeHeap_R_long, "()J", 1 },
	{ "getMainThread", (intptr_t) M_arc_Application_getMainThread_R_java_lang_Thread, INDEX_arc_Application_getMainThread_R_java_lang_Thread, "()Ljava/lang/Thread;", 1 },
	{ "isOnMainThread", (intptr_t) M_arc_Application_isOnMainThread_R_boolean, INDEX_arc_Application_isOnMainThread_R_boolean, "()Z", 1 },
	{ "getClipboardText", 0, INDEX_arc_Application_getClipboardText_R_java_lang_String, "()Ljava/lang/String;", 1025 },
	{ "setClipboardText", 0, INDEX_arc_Application_setClipboardText_java_lang_String, "(Ljava/lang/String;)V", 1025 },
	{ "openFolder", (intptr_t) M_arc_Application_openFolder_java_lang_String_R_boolean, INDEX_arc_Application_openFolder_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "openURI", (intptr_t) M_arc_Application_openURI_java_lang_String_R_boolean, INDEX_arc_Application_openURI_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getDnsServers", (intptr_t) M_arc_Application_getDnsServers_arc_struct_Seq, INDEX_arc_Application_getDnsServers_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "post", 0, INDEX_arc_Application_post_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1025 },
	{ "exit", 0, INDEX_arc_Application_exit, "()V", 1025 },
	{ "dispose", (intptr_t) M_arc_Application_dispose, INDEX_arc_Application_dispose, "()V", 1 },
	{ "lambda$removeListener$0", (intptr_t) M_arc_Application_lambda$removeListener$0_arc_ApplicationListener, INDEX_arc_Application_lambda$removeListener$0_arc_ApplicationListener, "(Larc/ApplicationListener;)V", 4098 },
};

Class class_arc_Application{
		.nativeName = (intptr_t) "arc/Application",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Application),
		.classVtable = (intptr_t) vtable_arc_Application,
		.staticInitializer = (intptr_t) clinit_arc_Application,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_Application,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Application = registerClass(&class_arc_Application);

}
