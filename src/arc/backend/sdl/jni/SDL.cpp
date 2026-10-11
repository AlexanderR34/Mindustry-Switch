#include "arc/backend/sdl/jni/SDL.h"
#include "java/nio/ByteBuffer.h"
#include "arc/util/SharedLibraryLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/backend/sdl/jni/SDL_1.h"

extern "C" {

jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_TIMER;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_AUDIO;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_VIDEO;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_JOYSTICK;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_HAPTIC;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_GAMECONTROLLER;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVENTS;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_NOPARACHUTE;
jint SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVERYTHING;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_OPENGL;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_SHOWN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_HIDDEN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_BORDERLESS;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_RESIZABLE;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MINIMIZED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MAXIMIZED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_GRABBED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_FOCUS;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_FOCUS;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN_DESKTOP;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FOREIGN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_ALLOW_HIGHDPI;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_CAPTURE;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_NONE;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SHOWN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_HIDDEN;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_EXPOSED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MOVED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESIZED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SIZE_CHANGED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MINIMIZED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MAXIMIZED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESTORED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_ENTER;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_LEAVE;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_GAINED;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_LOST;
jint SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_CLOSE;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_ARROW;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_IBEAM;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAIT;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_CROSSHAIR;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAITARROW;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENWSE;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENESW;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEWE;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENS;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEALL;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_NO;
jint SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_HAND;
jint SF_arc_backend_sdl_jni_SDL_SDL_NUM_SYSTEM_CURSORS;
jint SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_ERROR;
jint SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_WARNING;
jint SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_INFORMATION;
jint SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_LEFT;
jint SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_MIDDLE;
jint SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_RIGHT;
jint SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X1;
jint SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X2;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_QUIT;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_WINDOW;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_MOTION;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_BUTTON;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_WHEEL;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_KEYBOARD;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_INPUT;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_EDIT;
jint SF_arc_backend_sdl_jni_SDL_SDL_EVENT_OTHER;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_RED_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_GREEN_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_BLUE_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_ALPHA_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_BUFFER_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_DOUBLEBUFFER;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_DEPTH_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_STENCIL_SIZE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MAJOR_VERSION;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MINOR_VERSION;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLEBUFFERS;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLESAMPLES;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_CORE;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_COMPATIBILITY;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_MASK;
jint SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_FLAGS;

void mark_arc_backend_sdl_jni_SDL(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_jni_SDL *) object;
}

void init_arc_backend_sdl_jni_SDL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/jni/SDL:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_jni_SDL(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_backend_sdl_jni_SDL(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_TIMER = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_AUDIO = jint(16);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_VIDEO = jint(32);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_JOYSTICK = jint(512);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_HAPTIC = jint(4096);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_GAMECONTROLLER = jint(8192);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVENTS = jint(16384);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_NOPARACHUTE = jint(1048576);
	SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVERYTHING = jint(29233);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_OPENGL = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_SHOWN = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_HIDDEN = jint(8);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_BORDERLESS = jint(16);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_RESIZABLE = jint(32);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MINIMIZED = jint(64);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MAXIMIZED = jint(128);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_GRABBED = jint(256);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_FOCUS = jint(512);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_FOCUS = jint(1024);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN_DESKTOP = jint(4097);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FOREIGN = jint(2048);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_ALLOW_HIGHDPI = jint(8192);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_CAPTURE = jint(16384);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_NONE = jint(0);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SHOWN = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_HIDDEN = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_EXPOSED = jint(3);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MOVED = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESIZED = jint(5);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SIZE_CHANGED = jint(6);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MINIMIZED = jint(7);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MAXIMIZED = jint(8);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESTORED = jint(9);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_ENTER = jint(10);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_LEAVE = jint(11);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_GAINED = jint(12);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_LOST = jint(13);
	SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_CLOSE = jint(14);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_ARROW = jint(0);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_IBEAM = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAIT = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_CROSSHAIR = jint(3);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAITARROW = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENWSE = jint(5);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENESW = jint(6);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEWE = jint(7);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENS = jint(8);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEALL = jint(9);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_NO = jint(10);
	SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_HAND = jint(11);
	SF_arc_backend_sdl_jni_SDL_SDL_NUM_SYSTEM_CURSORS = jint(12);
	SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_ERROR = jint(16);
	SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_WARNING = jint(32);
	SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_INFORMATION = jint(64);
	SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_LEFT = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_MIDDLE = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_RIGHT = jint(3);
	SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X1 = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X2 = jint(5);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_QUIT = jint(0);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_WINDOW = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_MOTION = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_BUTTON = jint(3);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_WHEEL = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_KEYBOARD = jint(5);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_INPUT = jint(6);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_EDIT = jint(8);
	SF_arc_backend_sdl_jni_SDL_SDL_EVENT_OTHER = jint(7);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_RED_SIZE = jint(0);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_GREEN_SIZE = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_BLUE_SIZE = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_ALPHA_SIZE = jint(3);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_BUFFER_SIZE = jint(4);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_DOUBLEBUFFER = jint(5);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_DEPTH_SIZE = jint(6);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_STENCIL_SIZE = jint(7);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MAJOR_VERSION = jint(17);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MINOR_VERSION = jint(18);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLEBUFFERS = jint(13);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLESAMPLES = jint(14);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_CORE = jint(1);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_COMPATIBILITY = jint(2);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_MASK = jint(21);
	SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_FLAGS = jint(20);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/jni/SDL:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_jni_SDL(ctx);
	{
	LINE_NUMBER(114);
	clinit_arc_backend_sdl_jni_SDL$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_backend_sdl_jni_SDL$1);
	init_arc_backend_sdl_jni_SDL$1(ctx, sp[0].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sdl-arc"_j));
	LINE_NUMBER(130);
	((func_arc_backend_sdl_jni_SDL$1_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_backend_sdl_jni_SDL$1_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_jni_SDL[] {
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
};

static FieldMetadata fields[] {
	{ "SDL_INIT_TIMER", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_TIMER, "I", 25 },
	{ "SDL_INIT_AUDIO", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_AUDIO, "I", 25 },
	{ "SDL_INIT_VIDEO", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_VIDEO, "I", 25 },
	{ "SDL_INIT_JOYSTICK", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_JOYSTICK, "I", 25 },
	{ "SDL_INIT_HAPTIC", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_HAPTIC, "I", 25 },
	{ "SDL_INIT_GAMECONTROLLER", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_GAMECONTROLLER, "I", 25 },
	{ "SDL_INIT_EVENTS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVENTS, "I", 25 },
	{ "SDL_INIT_NOPARACHUTE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_NOPARACHUTE, "I", 25 },
	{ "SDL_INIT_EVERYTHING", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_INIT_EVERYTHING, "I", 25 },
	{ "SDL_WINDOW_FULLSCREEN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN, "I", 25 },
	{ "SDL_WINDOW_OPENGL", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_OPENGL, "I", 25 },
	{ "SDL_WINDOW_SHOWN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_SHOWN, "I", 25 },
	{ "SDL_WINDOW_HIDDEN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_HIDDEN, "I", 25 },
	{ "SDL_WINDOW_BORDERLESS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_BORDERLESS, "I", 25 },
	{ "SDL_WINDOW_RESIZABLE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_RESIZABLE, "I", 25 },
	{ "SDL_WINDOW_MINIMIZED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MINIMIZED, "I", 25 },
	{ "SDL_WINDOW_MAXIMIZED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MAXIMIZED, "I", 25 },
	{ "SDL_WINDOW_INPUT_GRABBED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_GRABBED, "I", 25 },
	{ "SDL_WINDOW_INPUT_FOCUS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_INPUT_FOCUS, "I", 25 },
	{ "SDL_WINDOW_MOUSE_FOCUS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_FOCUS, "I", 25 },
	{ "SDL_WINDOW_FULLSCREEN_DESKTOP", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FULLSCREEN_DESKTOP, "I", 25 },
	{ "SDL_WINDOW_FOREIGN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_FOREIGN, "I", 25 },
	{ "SDL_WINDOW_ALLOW_HIGHDPI", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_ALLOW_HIGHDPI, "I", 25 },
	{ "SDL_WINDOW_MOUSE_CAPTURE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOW_MOUSE_CAPTURE, "I", 25 },
	{ "SDL_WINDOWEVENT_NONE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_NONE, "I", 25 },
	{ "SDL_WINDOWEVENT_SHOWN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SHOWN, "I", 25 },
	{ "SDL_WINDOWEVENT_HIDDEN", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_HIDDEN, "I", 25 },
	{ "SDL_WINDOWEVENT_EXPOSED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_EXPOSED, "I", 25 },
	{ "SDL_WINDOWEVENT_MOVED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MOVED, "I", 25 },
	{ "SDL_WINDOWEVENT_RESIZED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESIZED, "I", 25 },
	{ "SDL_WINDOWEVENT_SIZE_CHANGED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_SIZE_CHANGED, "I", 25 },
	{ "SDL_WINDOWEVENT_MINIMIZED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MINIMIZED, "I", 25 },
	{ "SDL_WINDOWEVENT_MAXIMIZED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_MAXIMIZED, "I", 25 },
	{ "SDL_WINDOWEVENT_RESTORED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_RESTORED, "I", 25 },
	{ "SDL_WINDOWEVENT_ENTER", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_ENTER, "I", 25 },
	{ "SDL_WINDOWEVENT_LEAVE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_LEAVE, "I", 25 },
	{ "SDL_WINDOWEVENT_FOCUS_GAINED", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_GAINED, "I", 25 },
	{ "SDL_WINDOWEVENT_FOCUS_LOST", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_FOCUS_LOST, "I", 25 },
	{ "SDL_WINDOWEVENT_CLOSE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_WINDOWEVENT_CLOSE, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_ARROW", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_ARROW, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_IBEAM", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_IBEAM, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_WAIT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAIT, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_CROSSHAIR", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_CROSSHAIR, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_WAITARROW", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_WAITARROW, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_SIZENWSE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENWSE, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_SIZENESW", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENESW, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_SIZEWE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEWE, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_SIZENS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZENS, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_SIZEALL", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_SIZEALL, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_NO", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_NO, "I", 25 },
	{ "SDL_SYSTEM_CURSOR_HAND", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_SYSTEM_CURSOR_HAND, "I", 25 },
	{ "SDL_NUM_SYSTEM_CURSORS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_NUM_SYSTEM_CURSORS, "I", 25 },
	{ "SDL_MESSAGEBOX_ERROR", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_ERROR, "I", 25 },
	{ "SDL_MESSAGEBOX_WARNING", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_WARNING, "I", 25 },
	{ "SDL_MESSAGEBOX_INFORMATION", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_MESSAGEBOX_INFORMATION, "I", 25 },
	{ "SDL_BUTTON_LEFT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_LEFT, "I", 25 },
	{ "SDL_BUTTON_MIDDLE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_MIDDLE, "I", 25 },
	{ "SDL_BUTTON_RIGHT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_RIGHT, "I", 25 },
	{ "SDL_BUTTON_X1", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X1, "I", 25 },
	{ "SDL_BUTTON_X2", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_BUTTON_X2, "I", 25 },
	{ "SDL_EVENT_QUIT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_QUIT, "I", 25 },
	{ "SDL_EVENT_WINDOW", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_WINDOW, "I", 25 },
	{ "SDL_EVENT_MOUSE_MOTION", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_MOTION, "I", 25 },
	{ "SDL_EVENT_MOUSE_BUTTON", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_BUTTON, "I", 25 },
	{ "SDL_EVENT_MOUSE_WHEEL", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_MOUSE_WHEEL, "I", 25 },
	{ "SDL_EVENT_KEYBOARD", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_KEYBOARD, "I", 25 },
	{ "SDL_EVENT_TEXT_INPUT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_INPUT, "I", 25 },
	{ "SDL_EVENT_TEXT_EDIT", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_TEXT_EDIT, "I", 25 },
	{ "SDL_EVENT_OTHER", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_EVENT_OTHER, "I", 25 },
	{ "SDL_GL_RED_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_RED_SIZE, "I", 25 },
	{ "SDL_GL_GREEN_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_GREEN_SIZE, "I", 25 },
	{ "SDL_GL_BLUE_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_BLUE_SIZE, "I", 25 },
	{ "SDL_GL_ALPHA_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_ALPHA_SIZE, "I", 25 },
	{ "SDL_GL_BUFFER_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_BUFFER_SIZE, "I", 25 },
	{ "SDL_GL_DOUBLEBUFFER", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_DOUBLEBUFFER, "I", 25 },
	{ "SDL_GL_DEPTH_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_DEPTH_SIZE, "I", 25 },
	{ "SDL_GL_STENCIL_SIZE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_STENCIL_SIZE, "I", 25 },
	{ "SDL_GL_CONTEXT_MAJOR_VERSION", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MAJOR_VERSION, "I", 25 },
	{ "SDL_GL_CONTEXT_MINOR_VERSION", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_MINOR_VERSION, "I", 25 },
	{ "SDL_GL_MULTISAMPLEBUFFERS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLEBUFFERS, "I", 25 },
	{ "SDL_GL_MULTISAMPLESAMPLES", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_MULTISAMPLESAMPLES, "I", 25 },
	{ "SDL_GL_CONTEXT_PROFILE_CORE", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_CORE, "I", 25 },
	{ "SDL_GL_CONTEXT_PROFILE_COMPATIBILITY", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_COMPATIBILITY, "I", 25 },
	{ "SDL_GL_CONTEXT_PROFILE_MASK", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_PROFILE_MASK, "I", 25 },
	{ "SDL_GL_CONTEXT_FLAGS", &class_int, (intptr_t) &SF_arc_backend_sdl_jni_SDL_SDL_GL_CONTEXT_FLAGS, "I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_jni_SDL, 0, "()V", 1 },
	{ "SDL_Init", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_Init_int_R_int, 0, "(I)I", 265 },
	{ "SDL_InitSubSystem", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_InitSubSystem_int_R_int, 0, "(I)I", 265 },
	{ "SDL_QuitSubSystem", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_QuitSubSystem_int, 0, "(I)V", 265 },
	{ "SDL_WasInit", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_WasInit_int_R_int, 0, "(I)I", 265 },
	{ "SDL_Quit", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_Quit, 0, "()V", 265 },
	{ "SDL_SetHint", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetHint_java_lang_String_java_lang_String_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;)Z", 265 },
	{ "SDL_GetCompiledVersion", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetCompiledVersion_Array1_int, 0, "([I)V", 265 },
	{ "SDL_GetVersion", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetVersion_Array1_int, 0, "([I)V", 265 },
	{ "SDL_GetError", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetError_R_java_lang_String, 0, "()Ljava/lang/String;", 265 },
	{ "SDL_SetClipboardText", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetClipboardText_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 265 },
	{ "SDL_GetClipboardText", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetClipboardText_R_java_lang_String, 0, "()Ljava/lang/String;", 265 },
	{ "SDL_CreateWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_CreateWindow_java_lang_String_int_int_int_R_long, 0, "(Ljava/lang/String;III)J", 265 },
	{ "SDL_DestroyWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_DestroyWindow_long, 0, "(J)V", 265 },
	{ "SDL_SetWindowIcon", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowIcon_long_long, 0, "(JJ)V", 265 },
	{ "SDL_RestoreWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_RestoreWindow_long, 0, "(J)V", 265 },
	{ "SDL_MaximizeWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_MaximizeWindow_long, 0, "(J)V", 265 },
	{ "SDL_MinimizeWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_MinimizeWindow_long, 0, "(J)V", 265 },
	{ "SDL_SetWindowFullscreen", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowFullscreen_long_int_R_int, 0, "(JI)I", 265 },
	{ "SDL_SetWindowBordered", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowBordered_long_boolean, 0, "(JZ)V", 265 },
	{ "SDL_SetWindowSize", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowSize_long_int_int, 0, "(JII)V", 265 },
	{ "SDL_SetWindowPosition", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowPosition_long_int_int, 0, "(JII)V", 265 },
	{ "SDL_GetWindowDisplayIndex", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetWindowDisplayIndex_long_R_int, 0, "(J)I", 265 },
	{ "SDL_GetDisplayUsableBounds", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetDisplayUsableBounds_int_Array1_int_R_int, 0, "(I[I)I", 265 },
	{ "SDL_GetDisplayBounds", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetDisplayBounds_int_Array1_int_R_int, 0, "(I[I)I", 265 },
	{ "SDL_GetCurrentDisplayMode", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetCurrentDisplayMode_int_Array1_int_R_int, 0, "(I[I)I", 265 },
	{ "SDL_GetDesktopDisplayMode", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetDesktopDisplayMode_int_Array1_int_R_int, 0, "(I[I)I", 265 },
	{ "SDL_SetWindowAlwaysOnTop", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowAlwaysOnTop_long_boolean, 0, "(JZ)V", 265 },
	{ "SDL_GetNumVideoDisplays", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetNumVideoDisplays_R_int, 0, "()I", 265 },
	{ "SDL_GetWindowFlags", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GetWindowFlags_long_R_int, 0, "(J)I", 265 },
	{ "SDL_SetWindowTitle", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetWindowTitle_long_java_lang_String, 0, "(JLjava/lang/String;)V", 265 },
	{ "SDL_CreateRGBSurfaceFrom", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_CreateRGBSurfaceFrom_java_nio_ByteBuffer_int_int_R_long, 0, "(Ljava/nio/ByteBuffer;II)J", 265 },
	{ "SDL_CreateColorCursor", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_CreateColorCursor_long_int_int_R_long, 0, "(JII)J", 265 },
	{ "SDL_CreateSystemCursor", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_CreateSystemCursor_int_R_long, 0, "(I)J", 265 },
	{ "SDL_SetCursor", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetCursor_long, 0, "(J)V", 265 },
	{ "SDL_FreeCursor", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_FreeCursor_long, 0, "(J)V", 265 },
	{ "SDL_FreeSurface", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_FreeSurface_long, 0, "(J)V", 265 },
	{ "SDL_ShowSimpleMessageBox", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_ShowSimpleMessageBox_int_java_lang_String_java_lang_String_R_int, 0, "(ILjava/lang/String;Ljava/lang/String;)I", 265 },
	{ "SDL_StartTextInput", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_StartTextInput, 0, "()V", 265 },
	{ "SDL_StopTextInput", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_StopTextInput, 0, "()V", 265 },
	{ "SDL_SetTextInputRect", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_SetTextInputRect_int_int_int_int, 0, "(IIII)V", 265 },
	{ "SDL_IsTextInputActive", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_IsTextInputActive_R_boolean, 0, "()Z", 266 },
	{ "SDL_PollEvent", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_PollEvent_Array1_int_R_boolean, 0, "([I)Z", 265 },
	{ "SDL_GL_SetAttribute", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_SetAttribute_int_int_R_int, 0, "(II)I", 265 },
	{ "SDL_GL_ExtensionSupported", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_ExtensionSupported_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 265 },
	{ "SDL_GL_CreateContext", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_CreateContext_long_R_long, 0, "(J)J", 265 },
	{ "SDL_GL_SetSwapInterval", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_SetSwapInterval_int_R_int, 0, "(I)I", 265 },
	{ "SDL_GL_SwapWindow", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_SwapWindow_long, 0, "(J)V", 265 },
	{ "SDL_GL_GetDrawableSize", (intptr_t) SM_arc_backend_sdl_jni_SDL_SDL_GL_GetDrawableSize_long_Array1_int, 0, "(J[I)V", 265 },
	{ "<clinit>", (intptr_t) clinit_arc_backend_sdl_jni_SDL, 0, "()V", 8 },
};

Class class_arc_backend_sdl_jni_SDL{
		.nativeName = (intptr_t) "arc/backend/sdl/jni/SDL",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_jni_SDL),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_jni_SDL,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_jni_SDL,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_jni_SDL,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 85,
		.nativeFields = (intptr_t) fields,
		.methodCount = 50,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_jni_SDL = registerClass(&class_arc_backend_sdl_jni_SDL);

}
