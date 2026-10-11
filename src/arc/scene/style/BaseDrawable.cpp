#include "arc/scene/style/BaseDrawable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/style/BaseDrawable.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_scene_style_BaseDrawable(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_style_BaseDrawable *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_arc_scene_style_BaseDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_style_BaseDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_BaseDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_style_BaseDrawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_style_BaseDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_style_BaseDrawable)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_style_BaseDrawable_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_style_BaseDrawable, (frame[1].o))))->vtable)[VTABLE_arc_scene_style_BaseDrawable_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_arc_scene_style_BaseDrawable, (frame[1].o))));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_leftWidth = temp0;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_rightWidth = temp1;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_topHeight = temp2;
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp3;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_minWidth = temp4;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_scene_style_BaseDrawable *) NULL_CHECK(sp[0].o))->F_minHeight = temp5;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_draw_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:draw", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_draw_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getLeftWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_leftWidth);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setLeftWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setLeftWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(41);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_leftWidth = (frame[1].f);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getRightWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_rightWidth);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setRightWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setRightWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(51);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_rightWidth = (frame[1].f);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getTopHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_topHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setTopHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setTopHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(61);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_topHeight = (frame[1].f);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getBottomHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_bottomHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setBottomHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setBottomHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(71);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_bottomHeight = (frame[1].f);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minWidth);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setMinWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setMinWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(81);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minWidth = (frame[1].f);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_style_BaseDrawable_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setMinHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setMinHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(91);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minHeight = (frame[1].f);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_BaseDrawable_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_style_BaseDrawable_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_style_BaseDrawable_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/BaseDrawable:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_scene_style_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_style_BaseDrawable[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_style_BaseDrawable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_style_BaseDrawable_draw_float_float_float_float,
	(void *) M_arc_scene_style_BaseDrawable_draw_float_float_float_float_float_float_float_float_float,
	(void *) M_arc_scene_style_BaseDrawable_getLeftWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setLeftWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getRightWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setRightWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getTopHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setTopHeight_float,
	(void *) M_arc_scene_style_BaseDrawable_getBottomHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setBottomHeight_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinWidth_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinWidth_float,
	(void *) M_arc_scene_style_BaseDrawable_getMinHeight_R_float,
	(void *) M_arc_scene_style_BaseDrawable_setMinHeight_float,
	(void *) M_arc_scene_style_Drawable_imageSize_R_float,
	(void *) M_arc_scene_style_BaseDrawable_getName_R_java_lang_String,
	(void *) M_arc_scene_style_BaseDrawable_setName_java_lang_String,
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
	{ "draw", "(FFFF)V" },
	{ "draw", "(FFFFFFFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "imageSize", "()F" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_arc_scene_style_Drawable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(arc_scene_style_BaseDrawable, F_name), "Ljava/lang/String;", 2 },
	{ "leftWidth", &class_float, offsetof(arc_scene_style_BaseDrawable, F_leftWidth), "F", 2 },
	{ "rightWidth", &class_float, offsetof(arc_scene_style_BaseDrawable, F_rightWidth), "F", 2 },
	{ "topHeight", &class_float, offsetof(arc_scene_style_BaseDrawable, F_topHeight), "F", 2 },
	{ "bottomHeight", &class_float, offsetof(arc_scene_style_BaseDrawable, F_bottomHeight), "F", 2 },
	{ "minWidth", &class_float, offsetof(arc_scene_style_BaseDrawable, F_minWidth), "F", 2 },
	{ "minHeight", &class_float, offsetof(arc_scene_style_BaseDrawable, F_minHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_style_BaseDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_style_BaseDrawable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_BaseDrawable_draw_float_float_float_float, VTABLE_arc_scene_style_BaseDrawable_draw_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_style_BaseDrawable_draw_float_float_float_float_float_float_float_float_float, VTABLE_arc_scene_style_BaseDrawable_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1 },
	{ "getLeftWidth", (intptr_t) M_arc_scene_style_BaseDrawable_getLeftWidth_R_float, VTABLE_arc_scene_style_BaseDrawable_getLeftWidth_R_float, "()F", 1 },
	{ "setLeftWidth", (intptr_t) M_arc_scene_style_BaseDrawable_setLeftWidth_float, VTABLE_arc_scene_style_BaseDrawable_setLeftWidth_float, "(F)V", 1 },
	{ "getRightWidth", (intptr_t) M_arc_scene_style_BaseDrawable_getRightWidth_R_float, VTABLE_arc_scene_style_BaseDrawable_getRightWidth_R_float, "()F", 1 },
	{ "setRightWidth", (intptr_t) M_arc_scene_style_BaseDrawable_setRightWidth_float, VTABLE_arc_scene_style_BaseDrawable_setRightWidth_float, "(F)V", 1 },
	{ "getTopHeight", (intptr_t) M_arc_scene_style_BaseDrawable_getTopHeight_R_float, VTABLE_arc_scene_style_BaseDrawable_getTopHeight_R_float, "()F", 1 },
	{ "setTopHeight", (intptr_t) M_arc_scene_style_BaseDrawable_setTopHeight_float, VTABLE_arc_scene_style_BaseDrawable_setTopHeight_float, "(F)V", 1 },
	{ "getBottomHeight", (intptr_t) M_arc_scene_style_BaseDrawable_getBottomHeight_R_float, VTABLE_arc_scene_style_BaseDrawable_getBottomHeight_R_float, "()F", 1 },
	{ "setBottomHeight", (intptr_t) M_arc_scene_style_BaseDrawable_setBottomHeight_float, VTABLE_arc_scene_style_BaseDrawable_setBottomHeight_float, "(F)V", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_style_BaseDrawable_getMinWidth_R_float, VTABLE_arc_scene_style_BaseDrawable_getMinWidth_R_float, "()F", 1 },
	{ "setMinWidth", (intptr_t) M_arc_scene_style_BaseDrawable_setMinWidth_float, VTABLE_arc_scene_style_BaseDrawable_setMinWidth_float, "(F)V", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_style_BaseDrawable_getMinHeight_R_float, VTABLE_arc_scene_style_BaseDrawable_getMinHeight_R_float, "()F", 1 },
	{ "setMinHeight", (intptr_t) M_arc_scene_style_BaseDrawable_setMinHeight_float, VTABLE_arc_scene_style_BaseDrawable_setMinHeight_float, "(F)V", 1 },
	{ "getName", (intptr_t) M_arc_scene_style_BaseDrawable_getName_R_java_lang_String, VTABLE_arc_scene_style_BaseDrawable_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_arc_scene_style_BaseDrawable_setName_java_lang_String, VTABLE_arc_scene_style_BaseDrawable_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toString", (intptr_t) M_arc_scene_style_BaseDrawable_toString_R_java_lang_String, VTABLE_arc_scene_style_BaseDrawable_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_scene_style_BaseDrawable{
		.nativeName = (intptr_t) "arc/scene/style/BaseDrawable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_style_BaseDrawable),
		.classVtable = (intptr_t) vtable_arc_scene_style_BaseDrawable,
		.staticInitializer = (intptr_t) clinit_arc_scene_style_BaseDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_style_BaseDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_style_BaseDrawable = registerClass(&class_arc_scene_style_BaseDrawable);

}
