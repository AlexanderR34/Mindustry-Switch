#include "arc/backend/sdl/SdlApplication.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "arc/Input.h"
#include "arc/backend/sdl/SdlConfig.h"
#include "java/lang/Runnable.h"
#include "arc/util/ArcNativesLoader.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_0.h"
#include "arc/graphics/Pixmap.h"
#include "java/security/ProtectionDomain.h"
#include "java/util/Properties.h"
#include "arc/backend/sdl/SdlApplication.h"
#include "arc/struct/Seq.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_6.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_5.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "arc/Settings.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_2.h"
#include "java/lang/Throwable.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_1.h"
#include "java/security/CodeSource.h"
#include "arc/backend/sdl/SdlApplication_invoke_java_util_function_Function_0.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_4.h"
#include "java/lang/Thread.h"
#include "arc/backend/sdl/SdlApplication_invoke_arc_func_Cons_3.h"
#include "arc/backend/sdl/SdlGraphics.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "arc/util/Disposable.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "java/net/URISyntaxException.h"
#include "arc/Graphics.h"
#include "arc/util/NativeUtils.h"
#include "java/lang/Object.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "arc/backend/sdl/SdlApplication_invoke_java_lang_Runnable_0.h"
#include "arc/backend/sdl/SdlApplication_invoke_java_lang_Runnable_1.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/stream/Stream.h"
#include "java/lang/InterruptedException.h"
#include "java/util/HashMap.h"
#include "arc/backend/sdl/SdlFiles.h"
#include "arc/Files_FileType.h"
#include "arc/files/Fi.h"
#include "java/lang/Iterable.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/nio/ByteBuffer.h"
#include "arc/audio/Audio.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "arc/Application_ApplicationType.h"
#include "java/lang/Process.h"
#include "java/io/IOException.h"
#include "arc/util/TaskQueue.h"
#include "java/util/function/IntFunction.h"
#include "java/util/function/Function.h"
#include "arc/backend/sdl/SdlApplication_invoke_java_util_function_IntFunction_0.h"
#include "java/net/URL.h"
#include "java/util/Map_Entry.h"
#include "arc/backend/sdl/SdlApplication_SdlError.h"
#include "java/lang/CharSequence.h"
#include "arc/backend/sdl/SdlApplication_1.h"
#include "arc/util/Reflect.h"
#include "arc/util/Strings.h"
#include "arc/backend/sdl/SdlInput.h"
#include "arc/util/Threads.h"
#include "arc/ApplicationListener.h"
#include "java/net/URI.h"
#include "java/lang/ProcessBuilder.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_backend_sdl_SdlApplication(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlApplication *) object;
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_runnables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnables)->clazz)->markFunction)((jobject) self->F_runnables, mark, depth + 1);
	if (self->F_inputs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputs)->clazz)->markFunction)((jobject) self->F_inputs, mark, depth + 1);
	if (self->F_graphics)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_graphics)->clazz)->markFunction)((jobject) self->F_graphics, mark, depth + 1);
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
	if (self->F_mainThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mainThread)->clazz)->markFunction)((jobject) self->F_mainThread, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlApplication(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlApplication_arc_ApplicationListener_arc_backend_sdl_SdlConfig(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlApplication(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_util_TaskQueue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_TaskQueue);
	init_arc_util_TaskQueue(ctx, sp[1].o);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_runnables = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (64));
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_inputs = (jref) sp[1].o;
	LINE_NUMBER(30);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_running = (jint(1));
	LINE_NUMBER(34);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config = (jref) (frame[2].o);
	LINE_NUMBER(35);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_mainThread = (jref) sp[1].o;
	LINE_NUMBER(39);
	M_arc_backend_sdl_SdlApplication_init(ctx, (frame[0].o));
	LINE_NUMBER(41);
	clinit_arc_Core(ctx);
	SF_arc_Core_app = (frame[0].o);
	LINE_NUMBER(42);
	clinit_arc_backend_sdl_SdlFiles(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlFiles);
	init_arc_backend_sdl_SdlFiles(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_files = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_backend_sdl_SdlGraphics(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlGraphics);
	init_arc_backend_sdl_SdlGraphics_arc_backend_sdl_SdlApplication(ctx, sp[1].o, (frame[0].o));
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_graphics = (jref) sp[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_graphics = sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_backend_sdl_SdlInput(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlInput);
	init_arc_backend_sdl_SdlInput(ctx, sp[1].o);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_input = (jref) sp[1].o;
	clinit_arc_Core(ctx);
	SF_arc_Core_input = sp[1].o;
	LINE_NUMBER(45);
	clinit_arc_Settings(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Settings);
	init_arc_Settings(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	SF_arc_Core_settings = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_audio_Audio(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Audio);
	sp[1].o = sp[0].o;
	sp += 2;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[2].o)))->F_disableAudio) != 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 3;
	init_arc_audio_Audio_boolean(ctx, sp[0].o, sp[2].i);
	clinit_arc_Core(ctx);
	SF_arc_Core_audio = sp[0].o;
	LINE_NUMBER(48);
	M_arc_backend_sdl_SdlApplication_initIcon(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_arc_backend_sdl_SdlGraphics_updateSize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_updateSize_int_int])(ctx, sp[0].o, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(53);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) != 0) goto label_4;
	}
	{
	LINE_NUMBER(54);
	M_arc_backend_sdl_SdlApplication_addTextInputListener(ctx, (frame[0].o));
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	LINE_NUMBER(58);
	M_arc_backend_sdl_SdlApplication_loop(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(62);
	M_arc_backend_sdl_SdlApplication_cleanup(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_35;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(63);
	frame[3].o = sp[0].o;
	LINE_NUMBER(64);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(66);
	goto label_35;
	}
label_5:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	LINE_NUMBER(61);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	{
	LINE_NUMBER(62);
	M_arc_backend_sdl_SdlApplication_cleanup(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(65);
	goto label_38;
label_9:;
	{
	sp -= 1;
	LINE_NUMBER(63);
	frame[5].o = sp[0].o;
	LINE_NUMBER(64);
	((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, (frame[5].o));
	}
label_38:;
	{
	LINE_NUMBER(66);
	throwException(ctx, (frame[4].o));	}
label_35:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_addTextInputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:addTextInputListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_arc_backend_sdl_SdlApplication$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication$1);
	init_arc_backend_sdl_SdlApplication$1_arc_backend_sdl_SdlApplication(ctx, sp[1].o, (frame[0].o));
	((func_arc_backend_sdl_SdlApplication_addListener_arc_ApplicationListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlApplication_addListener_arc_ApplicationListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_initIcon(jcontext ctx, jobject self) {
}

void M_arc_backend_sdl_SdlApplication_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:init", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	SM_arc_util_ArcNativesLoader_load(ctx);
	LINE_NUMBER(112);
	SM_arc_util_NativeUtils_forceUtf8Locale(ctx);
	LINE_NUMBER(114);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) == 0) goto label_7;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_backend_sdl_SdlApplication_restartMac(ctx, sp[0].o);
label_7:;
	{
	printf("[SdlApp] Initializing SDL...\n"); fflush(stdout);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_Init_int_R_int(ctx, (16416));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp0);
	printf("[SdlApp] SDL Initialized!\n"); fflush(stdout);
	LINE_NUMBER(120);
	jint temp1 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_SetHint_java_lang_String_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"SDL_IME_SHOW_UI"_j))), (((jobject) createStringLiteral(ctx, u8"1"_j))));
	LINE_NUMBER(122);
	jint temp2 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_SetHint_java_lang_String_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"SDL_WINDOWS_DPI_SCALING"_j))), (((jobject) createStringLiteral(ctx, u8"1"_j))));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jint temp3 = 21;
	sp[1].i = temp3;
	sp += 2;
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isMac) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_coreProfile) == 0) goto label_13;
	}
label_12:;
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(2);
label_14:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, sp[1].i, sp[2].i);
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp2 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp1, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_r));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp2);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jint temp3 = jint(1);
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp4 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp3, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_g));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp4);
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	jint temp5 = jint(2);
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp6 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp5, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_b));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp6);
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	jint temp7 = 6;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp8 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp7, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_depth));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp8);
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	jint temp9 = 7;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp10 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp9, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_stencil));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp10);
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	jint temp11 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, (jint(5)), (jint(1)));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp11);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_samples) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, (13), (jint(1)));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	jint temp1 = 14;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp2 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, temp1, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_samples));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp2);
	}
label_22:;
	{
	LINE_NUMBER(139);
	frame[1].i = (jint(2));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_initialVisible) == 0) goto label_26;
	}
	{
	frame[1].i = ((frame[1].i) | (jint(4)));
	}
label_26:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_decorated) != 0) goto label_27;
	}
	{
	frame[1].i = ((frame[1].i) | (16));
	}
label_27:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_resizable) == 0) goto label_28;
	}
	{
	frame[1].i = ((frame[1].i) | (32));
	}
label_28:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_maximized) == 0) goto label_29;
	}
	{
	frame[1].i = ((frame[1].i) | (128));
	}
label_29:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_fullscreen) == 0) goto label_30;
	}
	{
	frame[1].i = ((frame[1].i) | (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	sp[1].o = (jobject)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_title;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jlong temp1 = (jlong)SM_arc_backend_sdl_jni_SDL_SDL_CreateWindow_java_lang_String_int_int_int_R_long(ctx, sp[1].o, temp0, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[2].o))->F_height), (frame[1].i));
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_window = temp1;
	LINE_NUMBER(147);
	if ((longCompare(((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_window), (jlong(0)))) != 0) goto label_32;
	}
	{
	clinit_arc_backend_sdl_SdlApplication$SdlError(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication$SdlError);
	init_arc_backend_sdl_SdlApplication$SdlError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(149);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(150);
	frame[3].i = (jint(0));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	sp[0].o = (jobject)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_glVersions;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_35:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_36;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(154);
	if (((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))) != (jint(2))) goto label_38;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, (21), (jint(2)));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp0);
	}
label_38:;
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, (17), ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int(ctx, (18), ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(1)))));
	M_arc_backend_sdl_SdlApplication_check_int(ctx, sp[0].o, temp1);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_backend_sdl_SdlApplication$SdlError))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_backend_sdl_jni_SDL_SDL_GL_CreateContext_long_R_long(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_window));
	((arc_backend_sdl_SdlApplication *) NULL_CHECK(sp[0].o))->F_context = temp0;
	LINE_NUMBER(163);
	if ((longCompare(((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_context), (jlong(0)))) != 0) goto label_42;
	}
	{
	clinit_arc_backend_sdl_SdlApplication$SdlError(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication$SdlError);
	init_arc_backend_sdl_SdlApplication$SdlError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(165);
	frame[3].i = (jint(1));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(166);
	goto label_36;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(167);
	frame[8].o = sp[0].o;
	LINE_NUMBER(168);
	frame[2].o = (frame[8].o);
	LINE_NUMBER(169);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to initialize OpenGL @.@: @"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[7].o), (jint(1)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(ctx, (frame[8].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	INST_IINC(6, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(173);
	if ((frame[2].o) == nullptr) goto label_46;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_46;
	INST_ALOAD(2);
	INST_ATHROW();
	label_46:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	if (((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_vSyncEnabled) == 0) goto label_47;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_GL_SetSwapInterval_int_R_int(ctx, (jint(1)));
	}
label_47:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(180);
	SM_arc_backend_sdl_jni_SDL_SDL_GetVersion_Array1_int(ctx, (frame[4].o));
	LINE_NUMBER(181);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[Core] Initialized SDL v@.@.@"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(1)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(2)))));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_loop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:loop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_config;
	((func_arc_backend_sdl_SdlGraphics_updateSize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_updateSize_int_int])(ctx, sp[0].o, temp0, ((jint)((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	printf("[SdlApp] SdlApplication loop starting...\n"); fflush(stdout);
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(189);
	if (((jint)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_running) == 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_PollEvent_Array1_int_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(192);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_running = (jint(0));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != (jint(1))) goto label_9;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	frame[1].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))));
	LINE_NUMBER(195);
	if ((frame[1].i) != (6)) goto label_12;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[1].o, (jint(2)));
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	((func_arc_backend_sdl_SdlGraphics_updateSize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_updateSize_int_int])(ctx, sp[0].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(3)))));
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_2(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(198);
	if ((frame[1].i) != (12)) goto label_16;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_3(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(200);
	if ((frame[1].i) != (13)) goto label_15;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_4(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	}
label_15:;
	LINE_NUMBER(203);
	goto label_4;
label_9:;
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (jint(2))) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (jint(3))) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (jint(4))) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (jint(5))) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) == (6)) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))) != (8)) goto label_4;
	}
label_19:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_inputs;
	((func_arc_backend_sdl_SdlInput_handleInput_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_handleInput_Array1_int])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_graphics;
	((func_arc_backend_sdl_SdlGraphics_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlGraphics_update])(ctx, sp[0].o);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_input;
	((func_arc_backend_sdl_SdlInput_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_update])(ctx, sp[0].o);
	LINE_NUMBER(215);
	((func_arc_backend_sdl_SdlApplication_defaultUpdate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_backend_sdl_SdlApplication_defaultUpdate])(ctx, (frame[0].o));
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_5(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	((func_arc_util_TaskQueue_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_run])(ctx, sp[0].o);
	LINE_NUMBER(221);
	{
		static int sdlFrameCount = 0;
		sdlFrameCount++;
		if (sdlFrameCount <= 5 || sdlFrameCount == 10 || sdlFrameCount == 30 || sdlFrameCount % 60 == 0) {
			printf("[SdlApp] Main loop tick, frame %d\n", sdlFrameCount);
			fflush(stdout);
		}
	}
	SM_arc_backend_sdl_jni_SDL_SDL_GL_SwapWindow_long(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_window));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_input;
	((func_arc_backend_sdl_SdlInput_postUpdate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_SdlInput_postUpdate])(ctx, sp[0].o);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:listen", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_listeners;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_ApplicationListener, sp[0].o));
	LINE_NUMBER(229);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(230);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(231);
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
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_11:;
	LINE_NUMBER(232);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_cleanup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:cleanup", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_6(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	((func_arc_backend_sdl_SdlApplication_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_backend_sdl_SdlApplication_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(245);
	SM_arc_backend_sdl_jni_SDL_SDL_DestroyWindow_long(ctx, ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_window));
	LINE_NUMBER(246);
	SM_arc_backend_sdl_jni_SDL_SDL_Quit(ctx);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_check_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:check", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(250);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(251);
	clinit_arc_backend_sdl_SdlApplication$SdlError(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication$SdlError);
	init_arc_backend_sdl_SdlApplication$SdlError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_arc_backend_sdl_SdlApplication_getWindow_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:getWindow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return ((jlong)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_window);
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlApplication_getMainThread_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:getMainThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_mainThread;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlApplication_openFolder_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:openFolder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(266);
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(ctx, sp[0].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_backend_sdl_SdlApplication_openURI_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:openURI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)SM_java_net_URI_create_java_lang_String_R_java_net_URI(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(287);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(285);
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(289);
	{ /* InvokeDynamic */
		clinit_arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_backend_sdl_SdlApplication_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(ctx, sp[0].o);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlApplication_getListeners_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:getListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_listeners;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlApplication_getType_R_arc_Application$ApplicationType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = (jobject)SF_arc_Application$ApplicationType_desktop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_backend_sdl_SdlApplication_getClipboardText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:getClipboardText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)SM_arc_backend_sdl_jni_SDL_SDL_GetClipboardText_R_java_lang_String(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_setClipboardText_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:setClipboardText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)SM_arc_backend_sdl_jni_SDL_SDL_SetClipboardText_java_lang_String_R_int(ctx, (frame[1].o));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_post_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:post", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_runnables;
	((func_arc_util_TaskQueue_post_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_TaskQueue_post_java_lang_Runnable])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_exit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication:exit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	((arc_backend_sdl_SdlApplication *) NULL_CHECK((frame[0].o)))->F_running = (jint(0));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication_restartMac(jcontext ctx, jobject self) {
}

static void* vtable_arc_backend_sdl_SdlApplication[] = {
	(void*) M_java_lang_Object_hashCode_R_int, // 0
	(void*) M_java_lang_Object_equals_java_lang_Object_R_boolean, // 1
	(void*) M_java_lang_Object_clone_R_java_lang_Object, // 2
	(void*) M_java_lang_Object_getClass_R_java_lang_Class, // 3
	(void*) M_java_lang_Object_toString_R_java_lang_String, // 4
	(void*) M_java_lang_Object_finalize, // 5
	(void*) M_java_lang_Object_notify, // 6
	(void*) M_java_lang_Object_notifyAll, // 7
	(void*) M_java_lang_Object_wait, // 8
	(void*) M_java_lang_Object_wait_long, // 9
	(void*) M_java_lang_Object_wait_long_int, // 10
	(void*) M_arc_Application_dispose, // 11
	(void*) M_arc_util_Disposable_isDisposed_R_boolean, // 12
	(void*) M_arc_backend_sdl_SdlApplication_getListeners_R_arc_struct_Seq, // 13
	(void*) M_arc_Application_addListener_arc_ApplicationListener, // 14
	(void*) M_arc_Application_removeListener_arc_ApplicationListener, // 15
	(void*) M_arc_Application_defaultUpdate, // 16
	(void*) M_arc_backend_sdl_SdlApplication_getType_R_arc_Application$ApplicationType, // 17
	(void*) M_arc_Application_isDesktop_R_boolean, // 18
	(void*) M_arc_Application_isHeadless_R_boolean, // 19
	(void*) M_arc_Application_isAndroid_R_boolean, // 20
	(void*) M_arc_Application_isIOS_R_boolean, // 21
	(void*) M_arc_Application_isMobile_R_boolean, // 22
	(void*) M_arc_Application_isWeb_R_boolean, // 23
	(void*) M_arc_Application_getVersion_R_int, // 24
	(void*) M_arc_Application_getJavaHeap_R_long, // 25
	(void*) M_arc_Application_getNativeHeap_R_long, // 26
	(void*) M_arc_backend_sdl_SdlApplication_getMainThread_R_java_lang_Thread, // 27
	(void*) M_arc_Application_isOnMainThread_R_boolean, // 28
	(void*) M_arc_backend_sdl_SdlApplication_getClipboardText_R_java_lang_String, // 29
	(void*) M_arc_backend_sdl_SdlApplication_setClipboardText_java_lang_String, // 30
	(void*) M_arc_backend_sdl_SdlApplication_openFolder_java_lang_String_R_boolean, // 31
	(void*) M_arc_backend_sdl_SdlApplication_openURI_java_lang_String_R_boolean, // 32
	(void*) M_arc_Application_getDnsServers_arc_struct_Seq, // 33
	(void*) M_arc_backend_sdl_SdlApplication_post_java_lang_Runnable, // 34
	(void*) M_arc_backend_sdl_SdlApplication_exit, // 35
	(void*) M_arc_Application_lambda$removeListener$0_arc_ApplicationListener, // 36
	(void*) M_arc_backend_sdl_SdlApplication_addTextInputListener, // 37
	(void*) M_arc_backend_sdl_SdlApplication_initIcon, // 38
	(void*) M_arc_backend_sdl_SdlApplication_init, // 39
	(void*) M_arc_backend_sdl_SdlApplication_loop, // 40
	(void*) M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons, // 41
	(void*) M_arc_backend_sdl_SdlApplication_cleanup, // 42
	(void*) M_arc_backend_sdl_SdlApplication_check_int, // 43
	(void*) M_arc_backend_sdl_SdlApplication_getWindow_R_long, // 44
	(void*) M_arc_backend_sdl_SdlApplication_restartMac, // 45
	(void*) M_arc_backend_sdl_SdlApplication_lambda$loop$0_arc_ApplicationListener, // 46
};

static jclass interfaces_SdlApplication[] = {
	&class_arc_Application,
	&class_arc_util_Disposable,
};

static VtableEntry vtableEntries_SdlApplication[] = {
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
	{ "addTextInputListener", "()V" },
	{ "initIcon", "()V" },
	{ "init", "()V" },
	{ "loop", "()V" },
	{ "listen", "(Larc/func/Cons;)V" },
	{ "cleanup", "()V" },
	{ "check", "(I)V" },
	{ "getWindow", "()J" },
	{ "restartMac", "()V" },
	{ "lambda$loop$0", "(Larc/ApplicationListener;)V" },
};

Class class_arc_backend_sdl_SdlApplication = {
	.nativeName = (intptr_t) "arc/backend/sdl/SdlApplication",
	.parentClass = (intptr_t) &class_java_lang_Object,
	.size = sizeof(arc_backend_sdl_SdlApplication),
	.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlApplication,
	.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlApplication,
	.markFunction = (intptr_t) mark_arc_backend_sdl_SdlApplication,
	.access = 0x21,
	.interfaceCount = 2,
	.nativeInterfaces = (intptr_t) interfaces_SdlApplication,
	.vtableSize = 47,
	.vtableEntries = (intptr_t) vtableEntries_SdlApplication,
};
static bool registered_arc_backend_sdl_SdlApplication = registerClass(&class_arc_backend_sdl_SdlApplication);

}

