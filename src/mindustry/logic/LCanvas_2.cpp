#include "mindustry/logic/LCanvas_2.h"
#include "arc/scene/ui/Tooltip.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "mindustry/logic/LCanvas.h"
#include "mindustry/logic/LCanvas_2.h"

extern "C" {


void mark_mindustry_logic_LCanvas$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ElementGestureListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LCanvas$2 *) object;
	if (self->F_val$tip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$tip)->clazz)->markFunction)((jobject) self->F_val$tip, mark, depth + 1);
	if (self->F_val$cell)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$cell)->clazz)->markFunction)((jobject) self->F_val$cell, mark, depth + 1);
}

void clinit_mindustry_logic_LCanvas$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_mindustry_logic_LCanvas$2_float_float_float_float_arc_scene_ui_Tooltip_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$2:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$2(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(78);
	((mindustry_logic_LCanvas$2 *) NULL_CHECK((frame[0].o)))->F_val$tip = (jref) (frame[5].o);
	((mindustry_logic_LCanvas$2 *) NULL_CHECK((frame[0].o)))->F_val$cell = (jref) (frame[6].o);
	init_arc_scene_event_ElementGestureListener_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$2:longPress", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$2 *) NULL_CHECK((frame[0].o)))->F_val$tip;
	((func_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Tooltip_show_arc_scene_Element_float_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(82);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_tooltips;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$2 *) NULL_CHECK((frame[0].o)))->F_val$tip;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$2 *) NULL_CHECK((frame[0].o)))->F_val$cell;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_Element_getListeners_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getListeners_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_scene_event_EventListener, sp[0].o));
	LINE_NUMBER(85);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_event_ClickListener)) == 0) goto label_6;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_scene_event_ClickListener, (frame[5].o)));
	LINE_NUMBER(86);
	((func_arc_scene_event_ClickListener_cancel) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_event_ClickListener_cancel])(ctx, (frame[6].o));
	}
label_6:;
	LINE_NUMBER(88);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LCanvas$2[] {
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
	(void *) M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector,
	(void *) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "tap", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "longPress", "(Larc/scene/Element;FF)Z" },
	{ "fling", "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V" },
	{ "pan", "(Larc/scene/event/InputEvent;FFFF)V" },
	{ "zoom", "(Larc/scene/event/InputEvent;FF)V" },
	{ "pinch", "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "getGestureDetector", "()Larc/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Larc/scene/Element;" },
};

static FieldMetadata fields[] {
	{ "val$tip", &class_arc_scene_ui_Tooltip, offsetof(mindustry_logic_LCanvas$2, F_val$tip), "Larc/scene/ui/Tooltip;", 4112 },
	{ "val$cell", &class_arc_scene_ui_layout_Cell, offsetof(mindustry_logic_LCanvas$2, F_val$cell), "Larc/scene/ui/layout/Cell;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCanvas$2_float_float_float_float_arc_scene_ui_Tooltip_arc_scene_ui_layout_Cell, 0, "(FFFFLarc/scene/ui/Tooltip;Larc/scene/ui/layout/Cell;)V", 0 },
	{ "longPress", (intptr_t) M_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean, VTABLE_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean, "(Larc/scene/Element;FF)Z", 1 },
};

Class class_mindustry_logic_LCanvas$2{
		.nativeName = (intptr_t) "mindustry/logic/LCanvas$2",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(mindustry_logic_LCanvas$2),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCanvas$2,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCanvas$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LCanvas$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCanvas$2 = registerClass(&class_mindustry_logic_LCanvas$2);

}

