#include "arc/input/GestureDetector_GestureListener.h"
#include "arc/input/GestureDetector.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/input/GestureDetector_GestureListener.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_input_GestureDetector$GestureListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_GestureDetector$GestureListener *) object;
}

void clinit_arc_input_GestureDetector$GestureListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:tap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:longPress", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:fling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:pan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:panStop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:zoom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector$GestureListener_pinchStop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$GestureListener:pinchStop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_input_GestureDetector$GestureListener[] {
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
	(void *) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinchStop,
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
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
};

static MethodMetadata methods[] {
	{ "touchDown", (intptr_t) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "tap", (intptr_t) M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "longPress", (intptr_t) M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "fling", (intptr_t) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean, "(FFLarc/input/KeyCode;)Z", 1 },
	{ "pan", (intptr_t) M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "panStop", (intptr_t) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean, "(FFILarc/input/KeyCode;)Z", 1 },
	{ "zoom", (intptr_t) M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "pinch", (intptr_t) M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, INDEX_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 1 },
	{ "pinchStop", (intptr_t) M_arc_input_GestureDetector$GestureListener_pinchStop, INDEX_arc_input_GestureDetector$GestureListener_pinchStop, "()V", 1 },
};

Class class_arc_input_GestureDetector$GestureListener{
		.nativeName = (intptr_t) "arc/input/GestureDetector$GestureListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_input_GestureDetector$GestureListener),
		.classVtable = (intptr_t) vtable_arc_input_GestureDetector$GestureListener,
		.staticInitializer = (intptr_t) clinit_arc_input_GestureDetector$GestureListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_GestureDetector$GestureListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_input_GestureDetector,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_input_GestureDetector$GestureListener = registerClass(&class_arc_input_GestureDetector$GestureListener);

}

