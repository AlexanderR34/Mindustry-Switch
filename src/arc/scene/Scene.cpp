#include "arc/scene/Scene.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/scene/ui/TextField.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/Scene_2.h"
#include "arc/scene/event/FocusListener_FocusEvent_Type.h"
#include "arc/scene/Scene_1.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/viewport/Viewport.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/input/InputProcessor.h"
#include "arc/math/Mat.h"
#include "arc/util/Nullable.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_10.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_12.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_11.h"
#include "arc/scene/Scene_TouchFocus.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_14.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_13.h"
#include "arc/scene/Scene_invoke_arc_func_Boolf_2.h"
#include "arc/scene/Scene_invoke_arc_func_Boolf_1.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "arc/scene/Scene_invoke_arc_func_Boolf_0.h"
#include "arc/graphics/Camera.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/scene/event/FocusListener_FocusEvent.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_16.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_15.h"
#include "arc/scene/Action.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_8.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_9.h"
#include "arc/scene/Group.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_4.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_5.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_6.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_7.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_0.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_1.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_2.h"
#include "arc/scene/Scene_invoke_arc_func_Prov_3.h"
#include "arc/util/Reflect.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/EventListener.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Class.h"
#include "arc/scene/Scene_invoke_arc_func_Cons_0.h"
#include "arc/scene/Scene_invoke_arc_func_Cons_1.h"

extern "C" {


void mark_arc_scene_Scene(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_Scene *) object;
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_styleDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_styleDefaults)->clazz)->markFunction)((jobject) self->F_styleDefaults, mark, depth + 1);
	if (self->F_tempCoords)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempCoords)->clazz)->markFunction)((jobject) self->F_tempCoords, mark, depth + 1);
	if (self->F_pointerOverActors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerOverActors)->clazz)->markFunction)((jobject) self->F_pointerOverActors, mark, depth + 1);
	if (self->F_pointerTouched)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerTouched)->clazz)->markFunction)((jobject) self->F_pointerTouched, mark, depth + 1);
	if (self->F_pointerScreenX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerScreenX)->clazz)->markFunction)((jobject) self->F_pointerScreenX, mark, depth + 1);
	if (self->F_pointerScreenY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointerScreenY)->clazz)->markFunction)((jobject) self->F_pointerScreenY, mark, depth + 1);
	if (self->F_touchFocuses)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchFocuses)->clazz)->markFunction)((jobject) self->F_touchFocuses, mark, depth + 1);
	if (self->F_viewport)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_viewport)->clazz)->markFunction)((jobject) self->F_viewport, mark, depth + 1);
	if (self->F_mouseOverElement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mouseOverElement)->clazz)->markFunction)((jobject) self->F_mouseOverElement, mark, depth + 1);
	if (self->F_keyboardFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyboardFocus)->clazz)->markFunction)((jobject) self->F_keyboardFocus, mark, depth + 1);
	if (self->F_scrollFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scrollFocus)->clazz)->markFunction)((jobject) self->F_scrollFocus, mark, depth + 1);
}

void clinit_arc_scene_Scene(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_Scene(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_styleDefaults = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_tempCoords = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (20));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_pointerOverActors = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (20));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_pointerTouched = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_pointerScreenX = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (20));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_pointerScreenY = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_SnapshotSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_SnapshotSeq);
	init_arc_struct_SnapshotSeq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(1)), (jint(4)), (((jobject) &class_arc_scene_Scene$TouchFocus)));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_touchFocuses = (jref) sp[1].o;
	LINE_NUMBER(41);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering = (jint(1));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Scene$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Scene$1);
	init_arc_scene_Scene$1_arc_scene_Scene(ctx, sp[1].o, (frame[0].o));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_viewport = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Scene$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Scene$2);
	init_arc_scene_Scene$2_arc_scene_Scene(ctx, sp[1].o, (frame[0].o));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_root = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_setScene_arc_scene_Scene])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_util_viewport_Viewport_update_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_update_int_int_boolean])(ctx, sp[0].o, temp0, temp1, (jint(1)));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_Scene_arc_util_viewport_Viewport(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	init_arc_scene_Scene(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport = (jref) (frame[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_styleDefaults;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_styleDefaults;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:addStyle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_styleDefaults;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_registerStyles_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:registerStyles", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Boolf_0);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_registerStyles_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:registerStyles", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(93);
	((func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getHoverElement_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getHoverElement", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseOverElement;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_hasField_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_hasMouse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasMouse", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_arc_scene_Scene_getHoverElement_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element])(ctx, (frame[0].o));
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

jbool M_arc_scene_Scene_hasMouse_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasMouse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(1)));
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

jbool M_arc_scene_Scene_hasDialog_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasDialog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_arc_scene_Scene_hasKeyboard_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasKeyboard", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
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

jbool M_arc_scene_Scene_hasScroll_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hasScroll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[0].o));
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

jobject M_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getDialog", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_Dialog, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_Dialog)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_Dialog, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(135);
	((func_arc_graphics_Camera_update) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Camera_update])(ctx, (frame[1].o));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(139);
	SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(ctx, (frame[1].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_draw])(ctx, sp[0].o);
	LINE_NUMBER(142);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_act(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:act", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jfloat temp0 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((func_arc_scene_Scene_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_act_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:act", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginBottom);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginLeft);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, (frame[0].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height = ((temp0 - ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginBottom)) - ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginTop));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, (frame[0].o));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width = ((temp1 - ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginLeft)) - ((jfloat)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_marginRight));
	LINE_NUMBER(162);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_6:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(166);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[2].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	jfloat temp0 = jfloat(((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))));
	sp[2].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, (jfloat(((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(170);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(171);
	sp[0].o = frame[5].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_exit;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(172);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(173);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(174);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_relatedActor = (jref) (frame[4].o);
	LINE_NUMBER(175);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_pointer = (frame[2].i);
	LINE_NUMBER(176);
	jint temp1 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(177);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[5].o));
	LINE_NUMBER(178);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerOverActors;
	jint temp0 = frame[2].i;
	sp[1].o = frame[0].o;
	sp[2].o = frame[4].o;
	sp[3].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	jint temp1 = (jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i));
	sp[3].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	sp[1].o = (jobject)M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element(ctx, sp[1].o, sp[2].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[2].i))), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(162);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(185);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isDesktop_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isDesktop_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_24;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isWeb_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isWeb_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseOverElement;
	sp[1].o = (jobject)M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element(ctx, sp[1].o, sp[2].o, ((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenX), ((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenY), (jint(-1)));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_mouseOverElement = (jref) sp[1].o;
	goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, (frame[0].o), (jfloat(((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenX))), (jfloat(((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenY))), (jint(1)));
	((arc_scene_Scene *) NULL_CHECK(sp[0].o))->F_mouseOverElement = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_27;
	}
label_28:;
	{
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus = (jref) (jobject(nullptr));
	}
label_27:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (((jint)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible) == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_29;
	}
label_30:;
	{
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus = (jref) (jobject(nullptr));
	}
label_29:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	frame[2].o = sp[0].o;
	}
label_33:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(197);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_visible) != 0) goto label_35;
	}
	{
	LINE_NUMBER(198);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(199);
	goto label_31;
	}
label_35:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_act_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_act_float])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:find", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:findVisible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:find", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((func_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_table_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:table", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(223);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(224);
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:table", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(231);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(232);
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(233);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:table", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(239);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(240);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(241);
	((func_arc_scene_Scene_add_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_add_arc_scene_Element])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(242);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:fireEnterAndExit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[5].o) != (frame[1].o)) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(253);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(255);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(256);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(257);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[6].o)))->F_pointer = (frame[4].i);
	LINE_NUMBER(258);
	sp[0].o = frame[6].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_exit;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(259);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[6].o)))->F_relatedActor = (jref) (frame[5].o);
	LINE_NUMBER(260);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(261);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	}
label_4:;
	{
	LINE_NUMBER(264);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_3(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(266);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(267);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(268);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[6].o)))->F_pointer = (frame[4].i);
	LINE_NUMBER(269);
	sp[0].o = frame[6].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_enter;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(270);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[6].o)))->F_relatedActor = (jref) (frame[1].o);
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(272);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	}
label_13:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:touchDown", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(283);
	jint temp0 = (jint)((func_arc_scene_Scene_isInsideViewport_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_isInsideViewport_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(1));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(291);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_4(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(292);
	sp[0].o = frame[5].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDown;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(293);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(294);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(295);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_pointer = (frame[3].i);
	LINE_NUMBER(296);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_keyCode = (jref) (frame[4].o);
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(299);
	if ((frame[6].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_arc_scene_Group_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, (frame[5].o));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(302);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[6].o), (frame[5].o));
	}
label_15:;
	{
	LINE_NUMBER(305);
	frame[7].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[5].o)))->F_handled);
	LINE_NUMBER(306);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[5].o));
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:touchDragged", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(318);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenX = (frame[1].i);
	LINE_NUMBER(319);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenY = (frame[2].i);
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(325);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_5(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(326);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDragged;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(327);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(328);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(329);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[4].o)))->F_pointer = (frame[3].i);
	LINE_NUMBER(331);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[5].o = sp[0].o;
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Scene$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(333);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_15:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_16;
	}
	{
	LINE_NUMBER(334);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(335);
	if (((jint)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[9].o)))->F_pointer) == (frame[3].i)) goto label_19;
	}
	goto label_20;
label_19:;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_contains_java_lang_Object_boolean_R_boolean])(ctx, (frame[5].o), (frame[9].o), (jint(1)));
	if (temp0 != 0) goto label_21;
	}
	goto label_20;
label_21:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[9].o)))->F_target;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_targetActor = (jref) sp[1].o;
	LINE_NUMBER(338);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[9].o)))->F_listenerActor;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_listenerActor = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[9].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_event_EventListener, INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_arc_scene_event_InputEvent_handle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputEvent_handle])(ctx, sp[0].o);
label_20:;
	{
	LINE_NUMBER(333);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(341);
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, (frame[5].o));
	LINE_NUMBER(343);
	frame[7].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[4].o)))->F_handled);
	LINE_NUMBER(344);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (frame[7].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:touchUp", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerTouched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[1].i);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_pointerScreenY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[2].i);
	LINE_NUMBER(358);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(360);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(362);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_6(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(363);
	sp[0].o = frame[5].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchUp;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(364);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(365);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(366);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_pointer = (frame[3].i);
	LINE_NUMBER(367);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[5].o)))->F_keyCode = (jref) (frame[4].o);
	LINE_NUMBER(369);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[6].o = sp[0].o;
	LINE_NUMBER(370);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Scene$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(371);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size);
	}
label_15:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_16;
	}
	{
	LINE_NUMBER(372);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(373);
	if (((jint)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[10].o)))->F_pointer) != (frame[3].i)) goto label_19;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[10].o)))->F_button;
	if (sp[0].o == (frame[4].o)) goto label_20;
	}
	goto label_19;
label_20:;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[6].o), (frame[10].o), (jint(1)));
	if (temp0 != 0) goto label_21;
	}
	goto label_19;
label_21:;
	{
	LINE_NUMBER(375);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[10].o)))->F_target;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_targetActor = (jref) sp[1].o;
	LINE_NUMBER(376);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[10].o)))->F_listenerActor;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_listenerActor = (jref) sp[1].o;
	LINE_NUMBER(377);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[10].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_event_EventListener, INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	if (temp0 == 0) goto label_24;
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	((func_arc_scene_event_InputEvent_handle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputEvent_handle])(ctx, sp[0].o);
label_24:;
	{
	LINE_NUMBER(378);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[10].o));
	}
label_19:;
	{
	LINE_NUMBER(371);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(380);
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, (frame[6].o));
	LINE_NUMBER(382);
	frame[8].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[5].o)))->F_handled);
	LINE_NUMBER(383);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[5].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[8].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:mouseMoved", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(393);
	jint temp0 = (jint)((func_arc_scene_Scene_isInsideViewport_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_isInsideViewport_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(395);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenX = (frame[1].i);
	LINE_NUMBER(396);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenY = (frame[2].i);
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(400);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_7(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(401);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_mouseMoved;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(402);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(403);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(406);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(409);
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[3].o)))->F_handled);
	LINE_NUMBER(410);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:scrolled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_scene_Scene *) NULL_CHECK(sp[-1].o))->F_scrollFocus;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat(((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenX))), (jfloat(((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_mouseScreenY))));
	sp[0].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(424);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_8(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(425);
	sp[0].o = frame[4].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_scrolled;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(426);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[4].o)))->F_scrollAmountX = (frame[1].f);
	LINE_NUMBER(427);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[4].o)))->F_scrollAmountY = (frame[2].f);
	LINE_NUMBER(428);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageX = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(429);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_stageY = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(430);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(431);
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[4].o)))->F_handled);
	LINE_NUMBER(432);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:keyDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_scene_Scene *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(443);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_9(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(444);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyDown;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(445);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_keyCode = (jref) (frame[1].o);
	LINE_NUMBER(446);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(447);
	frame[4].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[3].o)))->F_handled);
	LINE_NUMBER(448);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:keyUp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_scene_Scene *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(459);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_10(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_10);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(460);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyUp;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(461);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_keyCode = (jref) (frame[1].o);
	LINE_NUMBER(462);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(463);
	frame[4].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[3].o)))->F_handled);
	LINE_NUMBER(464);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:keyTyped", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_scene_Scene *) NULL_CHECK(sp[-1].o))->F_keyboardFocus;
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(475);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_11(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(476);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyTyped;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(477);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_character = (frame[1].i);
	LINE_NUMBER(478);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(479);
	frame[4].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[3].o)))->F_handled);
	LINE_NUMBER(480);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:addTouchFocus", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(486);
	sp[0].o = ((jobject) &class_arc_scene_Scene$TouchFocus);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_12(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_12);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_Scene$TouchFocus, sp[0].o));
	LINE_NUMBER(487);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[6].o)))->F_listenerActor = (jref) (frame[2].o);
	LINE_NUMBER(488);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[6].o)))->F_target = (jref) (frame[3].o);
	LINE_NUMBER(489);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[6].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(490);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[6].o)))->F_pointer = (frame[4].i);
	LINE_NUMBER(491);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[6].o)))->F_button = (jref) (frame[5].o);
	LINE_NUMBER(492);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:removeTouchFocus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[6].o = sp[0].o;
	LINE_NUMBER(501);
	frame[7].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(7);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_arc_scene_Scene$TouchFocus, sp[0].o));
	LINE_NUMBER(503);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	if (sp[0].o != (frame[1].o)) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	if (sp[0].o != (frame[2].o)) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_target;
	if (sp[0].o != (frame[3].o)) goto label_6;
	}
	{
	if (((jint)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_pointer) != (frame[4].i)) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_button;
	if (sp[0].o != (frame[5].o)) goto label_6;
	}
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(506);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[8].o));
	}
label_6:;
	{
	LINE_NUMBER(501);
	INST_IINC(7, -1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(509);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Scene_cancelTouchFocus_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:cancelTouchFocus", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(516);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_13(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_13);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(517);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchUp;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(518);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageX = (jfloat(-2,147484e+09f));
	LINE_NUMBER(519);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_stageY = (jfloat(-2,147484e+09f));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[3].o = sp[0].o;
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Scene$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(525);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_9;
	}
	{
	LINE_NUMBER(526);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)));
	LINE_NUMBER(527);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listenerActor;
	if (sp[0].o == (frame[1].o)) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[3].o), (frame[7].o), (jint(1)));
	if (temp0 != 0) goto label_14;
	}
	goto label_13;
label_14:;
	{
	LINE_NUMBER(529);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_target;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_targetActor = (jref) sp[1].o;
	LINE_NUMBER(530);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listenerActor;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_listenerActor = (jref) sp[1].o;
	LINE_NUMBER(531);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[2].o)))->F_pointer = ((jint)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_pointer);
	LINE_NUMBER(532);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_button;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_keyCode = (jref) sp[1].o;
	LINE_NUMBER(533);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[7].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_event_EventListener, INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(525);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(536);
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, (frame[3].o));
	LINE_NUMBER(538);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_cancelTouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:cancelTouchFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(548);
	((func_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element])(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:cancelTouchFocusExcept", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(556);
	sp[0].o = ((jobject) &class_arc_scene_event_InputEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_14(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_14);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, sp[0].o));
	LINE_NUMBER(557);
	sp[0].o = frame[3].o;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchUp;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(558);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_stageX = (jfloat(-2,147484e+09f));
	LINE_NUMBER(559);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_stageY = (jfloat(-2,147484e+09f));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_touchFocuses;
	frame[4].o = sp[0].o;
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Scene$TouchFocus, 1), sp[0].o));
	LINE_NUMBER(565);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size);
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(566);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	if (sp[0].o != (frame[1].o)) goto label_12;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	if (sp[0].o != (frame[2].o)) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[4].o), (frame[8].o), (jint(1)));
	if (temp0 != 0) goto label_14;
	}
	goto label_13;
label_14:;
	{
	LINE_NUMBER(569);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_target;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_targetActor = (jref) sp[1].o;
	LINE_NUMBER(570);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listenerActor;
	((arc_scene_event_SceneEvent *) NULL_CHECK(sp[0].o))->F_listenerActor = (jref) sp[1].o;
	LINE_NUMBER(571);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[3].o)))->F_pointer = ((jint)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_pointer);
	LINE_NUMBER(572);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_button;
	((arc_scene_event_InputEvent *) NULL_CHECK(sp[0].o))->F_keyCode = (jref) sp[1].o;
	LINE_NUMBER(573);
	sp[0].o = (jobject)((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[8].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_event_EventListener, INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[3].o));
	}
label_13:;
	{
	LINE_NUMBER(565);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(576);
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, (frame[4].o));
	LINE_NUMBER(578);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[3].o));
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_add_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_addAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addAction_arc_scene_Action])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(595);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getElements_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getElements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK(sp[0].o))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:addListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_arc_scene_Group_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:removeListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_arc_scene_Group_removeListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:addCaptureListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_arc_scene_Group_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:removeCaptureListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	jint temp0 = (jint)((func_arc_scene_Group_removeCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(639);
	((func_arc_scene_Scene_unfocusAll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_unfocusAll])(ctx, (frame[0].o));
	LINE_NUMBER(640);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	((func_arc_scene_Group_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_clear])(ctx, sp[0].o);
	LINE_NUMBER(641);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_unfocusAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:unfocusAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(646);
	jint temp1 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(647);
	((func_arc_scene_Scene_cancelTouchFocus) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_cancelTouchFocus])(ctx, (frame[0].o));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_unfocus_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:unfocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(652);
	((func_arc_scene_Scene_cancelTouchFocus_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_cancelTouchFocus_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(653);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_2:;
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3:;
	LINE_NUMBER(655);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:setKeyboardFocus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(665);
	sp[0].o = ((jobject) &class_arc_scene_event_FocusListener$FocusEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_15(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_15);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_FocusListener$FocusEvent, sp[0].o));
	LINE_NUMBER(666);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard;
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(667);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	frame[3].o = sp[0].o;
	LINE_NUMBER(668);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(669);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused = (jint(0));
	LINE_NUMBER(670);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor = (jref) (frame[1].o);
	LINE_NUMBER(671);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(673);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_cancelled) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(674);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(675);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus = (jref) (frame[1].o);
	LINE_NUMBER(676);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(677);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused = (jint(1));
	LINE_NUMBER(678);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor = (jref) (frame[3].o);
	LINE_NUMBER(679);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(680);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_cancelled) != 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(681);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	}
label_12:;
	{
	LINE_NUMBER(684);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getKeyboardFocus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_keyboardFocus;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:setScrollFocus", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(703);
	sp[0].o = ((jobject) &class_arc_scene_event_FocusListener$FocusEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_Scene_invoke_arc_func_Prov_16(ctx);
		auto proxy = (arc_scene_Scene_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_arc_scene_Scene_invoke_arc_func_Prov_16);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_FocusListener$FocusEvent, sp[0].o));
	LINE_NUMBER(704);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll;
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(705);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	frame[3].o = sp[0].o;
	LINE_NUMBER(706);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(707);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused = (jint(0));
	LINE_NUMBER(708);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor = (jref) (frame[1].o);
	LINE_NUMBER(709);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[3].o), (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(711);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_cancelled) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(712);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(713);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus = (jref) (frame[1].o);
	LINE_NUMBER(714);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(715);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused = (jint(1));
	LINE_NUMBER(716);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_relatedActor = (jref) (frame[3].o);
	LINE_NUMBER(717);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(718);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[2].o)))->F_cancelled) != 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(719);
	if ((frame[4].i) != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, (frame[0].o), (frame[3].o));
	}
label_12:;
	{
	LINE_NUMBER(722);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getScrollFocus_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getScrollFocus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_scrollFocus;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getViewport", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_setViewport_arc_util_viewport_Viewport(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:setViewport", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(739);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport = (jref) (frame[1].o);
	LINE_NUMBER(740);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Scene_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jfloat temp0 = (jfloat)((func_arc_util_viewport_Viewport_getWorldWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getWorldWidth_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Scene_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(749);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jfloat temp0 = (jfloat)((func_arc_util_viewport_Viewport_getWorldHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getWorldHeight_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_getCamera_R_arc_graphics_Camera(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getCamera", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getCamera_R_arc_graphics_Camera])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(765);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_Group_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(766);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_tempCoords;
	sp[0].o = (jobject)((func_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:screenToStageCoordinates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(774);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:stageToScreenCoordinates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(784);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp0 = (jint)((func_arc_util_viewport_Viewport_getScreenHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getScreenHeight_R_int])(ctx, sp[1].o);
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat(temp0)) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(785);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:toScreenCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:calculateScissors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(800);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	((func_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_calculateScissors_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect])(ctx, sp[0].o, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_getActionsRequestRendering_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:getActionsRequestRendering", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return ((jint)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_setActionsRequestRendering_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:setActionsRequestRendering", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(813);
	((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_actionsRequestRendering = (frame[1].i);
	LINE_NUMBER(814);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Scene_isInsideViewport_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:isInsideViewport", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(818);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp0 = (jint)((func_arc_util_viewport_Viewport_getScreenX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getScreenX_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(819);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp2 = (jint)((func_arc_util_viewport_Viewport_getScreenWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getScreenWidth_R_int])(ctx, sp[0].o);
	frame[4].i = (temp1 + temp2);
	LINE_NUMBER(820);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp3 = (jint)((func_arc_util_viewport_Viewport_getScreenY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getScreenY_R_int])(ctx, sp[0].o);
	frame[5].i = temp3;
	LINE_NUMBER(821);
	jint temp4 = frame[5].i;
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	jint temp5 = (jint)((func_arc_util_viewport_Viewport_getScreenHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_getScreenHeight_R_int])(ctx, sp[0].o);
	frame[6].i = (temp4 + temp5);
	LINE_NUMBER(822);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[2].i = (temp6 - (frame[2].i));
	LINE_NUMBER(823);
	if ((frame[1].i) < (frame[3].i)) goto label_6;
	}
	{
	if ((frame[1].i) >= (frame[4].i)) goto label_6;
	}
	{
	if ((frame[2].i) < (frame[5].i)) goto label_6;
	}
	{
	if ((frame[2].i) >= (frame[6].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Scene_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:resize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(828);
	sp[0].o = (jobject)((arc_scene_Scene *) NULL_CHECK((frame[0].o)))->F_viewport;
	((func_arc_util_viewport_Viewport_update_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_viewport_Viewport_update_int_int_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (jint(1)));
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_Scene_lambda$addTouchFocus$0_R_arc_scene_Scene$TouchFocus(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$addTouchFocus$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	{
	LINE_NUMBER(486);
	clinit_arc_scene_Scene$TouchFocus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_Scene$TouchFocus);
	init_arc_scene_Scene$TouchFocus_arc_scene_Scene$1(ctx, sp[0].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_Scene_lambda$hasDialog$0_arc_scene_Element_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$hasDialog$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_arc_scene_ui_Dialog));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$registerStyles$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[2].o));
	sp[2].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, (frame[1].o), (frame[2].o));
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_Scene_lambda$registerStyles$2_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$registerStyles$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"default"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$registerStyles$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	sp[2].o = (jobject)SM_arc_util_Reflect_get_java_lang_reflect_Field_R_java_lang_Object(ctx, (frame[1].o));
	((func_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_Scene_lambda$registerStyles$0_java_lang_reflect_Field_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$registerStyles$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"default"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_Scene_lambda$getStyle$0_java_lang_Class_R_java_lang_RuntimeException(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene:lambda$getStyle$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No default style for type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_scene_Scene;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getHoverElement
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_scene_Scene[] {
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
	(void *) M_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_Scene_keyTyped_char_R_boolean,
	(void *) M_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_Scene_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_scene_Scene_mouseMoved_int_int_R_boolean,
	(void *) M_arc_scene_Scene_scrolled_float_float_R_boolean,
	(void *) M_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object,
	(void *) M_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean,
	(void *) M_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object,
	(void *) M_arc_scene_Scene_registerStyles_java_lang_Class,
	(void *) M_arc_scene_Scene_registerStyles_java_lang_Object,
	(void *) M_arc_scene_Scene_getHoverElement_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_hasField_R_boolean,
	(void *) M_arc_scene_Scene_hasMouse_R_boolean,
	(void *) M_arc_scene_Scene_hasMouse_float_float_R_boolean,
	(void *) M_arc_scene_Scene_hasDialog_R_boolean,
	(void *) M_arc_scene_Scene_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Scene_hasScroll_R_boolean,
	(void *) M_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_Scene_draw,
	(void *) M_arc_scene_Scene_act,
	(void *) M_arc_scene_Scene_act_float,
	(void *) M_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_table_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode,
	(void *) M_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode,
	(void *) M_arc_scene_Scene_cancelTouchFocus_arc_scene_Element,
	(void *) M_arc_scene_Scene_cancelTouchFocus,
	(void *) M_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element,
	(void *) M_arc_scene_Scene_add_arc_scene_Element,
	(void *) M_arc_scene_Scene_addAction_arc_scene_Action,
	(void *) M_arc_scene_Scene_getElements_R_arc_struct_Seq,
	(void *) M_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Scene_clear,
	(void *) M_arc_scene_Scene_unfocusAll,
	(void *) M_arc_scene_Scene_unfocus_arc_scene_Element,
	(void *) M_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Scene_getScrollFocus_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport,
	(void *) M_arc_scene_Scene_setViewport_arc_util_viewport_Viewport,
	(void *) M_arc_scene_Scene_getWidth_R_float,
	(void *) M_arc_scene_Scene_getHeight_R_float,
	(void *) M_arc_scene_Scene_getCamera_R_arc_graphics_Camera,
	(void *) M_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect,
	(void *) M_arc_scene_Scene_getActionsRequestRendering_R_boolean,
	(void *) M_arc_scene_Scene_setActionsRequestRendering_boolean,
	(void *) M_arc_scene_Scene_isInsideViewport_int_int_R_boolean,
	(void *) M_arc_scene_Scene_resize_int_int,
	(void *) M_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field,
	(void *) M_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "getStyle", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasStyle", "(Ljava/lang/Class;)Z" },
	{ "addStyle", "(Ljava/lang/Class;Ljava/lang/Object;)V" },
	{ "registerStyles", "(Ljava/lang/Class;)V" },
	{ "registerStyles", "(Ljava/lang/Object;)V" },
	{ "getHoverElement", "()Larc/scene/Element;" },
	{ "hasField", "()Z" },
	{ "hasMouse", "()Z" },
	{ "hasMouse", "(FF)Z" },
	{ "hasDialog", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "getDialog", "()Larc/scene/ui/Dialog;" },
	{ "draw", "()V" },
	{ "act", "()V" },
	{ "act", "(F)V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "table", "()Larc/scene/ui/layout/Table;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Table;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Table;" },
	{ "fireEnterAndExit", "(Larc/scene/Element;III)Larc/scene/Element;" },
	{ "addTouchFocus", "(Larc/scene/event/EventListener;Larc/scene/Element;Larc/scene/Element;ILarc/input/KeyCode;)V" },
	{ "removeTouchFocus", "(Larc/scene/event/EventListener;Larc/scene/Element;Larc/scene/Element;ILarc/input/KeyCode;)V" },
	{ "cancelTouchFocus", "(Larc/scene/Element;)V" },
	{ "cancelTouchFocus", "()V" },
	{ "cancelTouchFocusExcept", "(Larc/scene/event/EventListener;Larc/scene/Element;)V" },
	{ "add", "(Larc/scene/Element;)V" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "getElements", "()Larc/struct/Seq;" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "clear", "()V" },
	{ "unfocusAll", "()V" },
	{ "unfocus", "(Larc/scene/Element;)V" },
	{ "setKeyboardFocus", "(Larc/scene/Element;)Z" },
	{ "getKeyboardFocus", "()Larc/scene/Element;" },
	{ "setScrollFocus", "(Larc/scene/Element;)Z" },
	{ "getScrollFocus", "()Larc/scene/Element;" },
	{ "getViewport", "()Larc/util/viewport/Viewport;" },
	{ "setViewport", "(Larc/util/viewport/Viewport;)V" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getCamera", "()Larc/graphics/Camera;" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "screenToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToScreenCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toScreenCoordinates", "(Larc/math/geom/Vec2;Larc/math/Mat;)Larc/math/geom/Vec2;" },
	{ "calculateScissors", "(Larc/math/geom/Rect;Larc/math/geom/Rect;)V" },
	{ "getActionsRequestRendering", "()Z" },
	{ "setActionsRequestRendering", "(Z)V" },
	{ "isInsideViewport", "(II)Z" },
	{ "resize", "(II)V" },
	{ "lambda$registerStyles$3", "(Ljava/lang/Object;Ljava/lang/reflect/Field;)V" },
	{ "lambda$registerStyles$1", "(Ljava/lang/reflect/Field;)V" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, };

static jclass innerClasses[] {
	&class_arc_scene_Scene$TouchFocus,
};

static FieldMetadata fields[] {
	{ "root", &class_arc_scene_Group, offsetof(arc_scene_Scene, F_root), "Larc/scene/Group;", 17 },
	{ "marginLeft", &class_float, offsetof(arc_scene_Scene, F_marginLeft), "F", 1 },
	{ "marginRight", &class_float, offsetof(arc_scene_Scene, F_marginRight), "F", 1 },
	{ "marginTop", &class_float, offsetof(arc_scene_Scene, F_marginTop), "F", 1 },
	{ "marginBottom", &class_float, offsetof(arc_scene_Scene, F_marginBottom), "F", 1 },
	{ "styleDefaults", &class_arc_struct_ObjectMap, offsetof(arc_scene_Scene, F_styleDefaults), "Larc/struct/ObjectMap;", 18 },
	{ "tempCoords", &class_arc_math_geom_Vec2, offsetof(arc_scene_Scene, F_tempCoords), "Larc/math/geom/Vec2;", 18 },
	{ "pointerOverActors", getArrayClass(&class_arc_scene_Element, 1), offsetof(arc_scene_Scene, F_pointerOverActors), "[Larc/scene/Element;", 18 },
	{ "pointerTouched", getArrayClass(&class_boolean, 1), offsetof(arc_scene_Scene, F_pointerTouched), "[Z", 18 },
	{ "pointerScreenX", getArrayClass(&class_int, 1), offsetof(arc_scene_Scene, F_pointerScreenX), "[I", 18 },
	{ "pointerScreenY", getArrayClass(&class_int, 1), offsetof(arc_scene_Scene, F_pointerScreenY), "[I", 18 },
	{ "touchFocuses", &class_arc_struct_SnapshotSeq, offsetof(arc_scene_Scene, F_touchFocuses), "Larc/struct/SnapshotSeq;", 18 },
	{ "viewport", &class_arc_util_viewport_Viewport, offsetof(arc_scene_Scene, F_viewport), "Larc/util/viewport/Viewport;", 2 },
	{ "mouseScreenX", &class_int, offsetof(arc_scene_Scene, F_mouseScreenX), "I", 2 },
	{ "mouseScreenY", &class_int, offsetof(arc_scene_Scene, F_mouseScreenY), "I", 2 },
	{ "mouseOverElement", &class_arc_scene_Element, offsetof(arc_scene_Scene, F_mouseOverElement), "Larc/scene/Element;", 2 },
	{ "keyboardFocus", &class_arc_scene_Element, offsetof(arc_scene_Scene, F_keyboardFocus), "Larc/scene/Element;", 2 },
	{ "scrollFocus", &class_arc_scene_Element, offsetof(arc_scene_Scene, F_scrollFocus), "Larc/scene/Element;", 2 },
	{ "actionsRequestRendering", &class_boolean, offsetof(arc_scene_Scene, F_actionsRequestRendering), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Scene, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_Scene_arc_util_viewport_Viewport, 0, "(Larc/util/viewport/Viewport;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object, VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "hasStyle", (intptr_t) M_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean, VTABLE_arc_scene_Scene_hasStyle_java_lang_Class_R_boolean, "(Ljava/lang/Class;)Z", 1 },
	{ "addStyle", (intptr_t) M_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object, VTABLE_arc_scene_Scene_addStyle_java_lang_Class_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/Object;)V", 1 },
	{ "registerStyles", (intptr_t) M_arc_scene_Scene_registerStyles_java_lang_Class, VTABLE_arc_scene_Scene_registerStyles_java_lang_Class, "(Ljava/lang/Class;)V", 1 },
	{ "registerStyles", (intptr_t) M_arc_scene_Scene_registerStyles_java_lang_Object, VTABLE_arc_scene_Scene_registerStyles_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getHoverElement", (intptr_t) M_arc_scene_Scene_getHoverElement_R_arc_scene_Element, VTABLE_arc_scene_Scene_getHoverElement_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "hasField", (intptr_t) M_arc_scene_Scene_hasField_R_boolean, VTABLE_arc_scene_Scene_hasField_R_boolean, "()Z", 1 },
	{ "hasMouse", (intptr_t) M_arc_scene_Scene_hasMouse_R_boolean, VTABLE_arc_scene_Scene_hasMouse_R_boolean, "()Z", 1 },
	{ "hasMouse", (intptr_t) M_arc_scene_Scene_hasMouse_float_float_R_boolean, VTABLE_arc_scene_Scene_hasMouse_float_float_R_boolean, "(FF)Z", 1 },
	{ "hasDialog", (intptr_t) M_arc_scene_Scene_hasDialog_R_boolean, VTABLE_arc_scene_Scene_hasDialog_R_boolean, "()Z", 1 },
	{ "hasKeyboard", (intptr_t) M_arc_scene_Scene_hasKeyboard_R_boolean, VTABLE_arc_scene_Scene_hasKeyboard_R_boolean, "()Z", 1 },
	{ "hasScroll", (intptr_t) M_arc_scene_Scene_hasScroll_R_boolean, VTABLE_arc_scene_Scene_hasScroll_R_boolean, "()Z", 1 },
	{ "getDialog", (intptr_t) M_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog, VTABLE_arc_scene_Scene_getDialog_R_arc_scene_ui_Dialog, "()Larc/scene/ui/Dialog;", 1 },
	{ "draw", (intptr_t) M_arc_scene_Scene_draw, VTABLE_arc_scene_Scene_draw, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_Scene_act, VTABLE_arc_scene_Scene_act, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_Scene_act_float, VTABLE_arc_scene_Scene_act_float, "(F)V", 1 },
	{ "find", (intptr_t) M_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element, VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element, "(Ljava/lang/String;)Larc/scene/Element;", 1 },
	{ "findVisible", (intptr_t) M_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element, VTABLE_arc_scene_Scene_findVisible_java_lang_String_R_arc_scene_Element, "(Ljava/lang/String;)Larc/scene/Element;", 1 },
	{ "find", (intptr_t) M_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element, VTABLE_arc_scene_Scene_find_arc_func_Boolf_R_arc_scene_Element, "(Larc/func/Boolf;)Larc/scene/Element;", 1 },
	{ "table", (intptr_t) M_arc_scene_Scene_table_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_Scene_table_R_arc_scene_ui_layout_Table, "()Larc/scene/ui/layout/Table;", 1 },
	{ "table", (intptr_t) M_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_Scene_table_arc_func_Cons_R_arc_scene_ui_layout_Table, "(Larc/func/Cons;)Larc/scene/ui/layout/Table;", 1 },
	{ "table", (intptr_t) M_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table, VTABLE_arc_scene_Scene_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Table, "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Table;", 1 },
	{ "fireEnterAndExit", (intptr_t) M_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element, VTABLE_arc_scene_Scene_fireEnterAndExit_arc_scene_Element_int_int_int_R_arc_scene_Element, "(Larc/scene/Element;III)Larc/scene/Element;", 2 },
	{ "touchDown", (intptr_t) M_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_Scene_touchDown_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_Scene_touchDragged_int_int_int_R_boolean, VTABLE_arc_scene_Scene_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_Scene_touchUp_int_int_int_arc_input_KeyCode_R_boolean, "(IIILarc/input/KeyCode;)Z", 1 },
	{ "mouseMoved", (intptr_t) M_arc_scene_Scene_mouseMoved_int_int_R_boolean, VTABLE_arc_scene_Scene_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_arc_scene_Scene_scrolled_float_float_R_boolean, VTABLE_arc_scene_Scene_scrolled_float_float_R_boolean, "(FF)Z", 1 },
	{ "keyDown", (intptr_t) M_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_Scene_keyDown_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyUp", (intptr_t) M_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_Scene_keyUp_arc_input_KeyCode_R_boolean, "(Larc/input/KeyCode;)Z", 1 },
	{ "keyTyped", (intptr_t) M_arc_scene_Scene_keyTyped_char_R_boolean, VTABLE_arc_scene_Scene_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "addTouchFocus", (intptr_t) M_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode, VTABLE_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode, "(Larc/scene/event/EventListener;Larc/scene/Element;Larc/scene/Element;ILarc/input/KeyCode;)V", 1 },
	{ "removeTouchFocus", (intptr_t) M_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode, VTABLE_arc_scene_Scene_removeTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode, "(Larc/scene/event/EventListener;Larc/scene/Element;Larc/scene/Element;ILarc/input/KeyCode;)V", 1 },
	{ "cancelTouchFocus", (intptr_t) M_arc_scene_Scene_cancelTouchFocus_arc_scene_Element, VTABLE_arc_scene_Scene_cancelTouchFocus_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "cancelTouchFocus", (intptr_t) M_arc_scene_Scene_cancelTouchFocus, VTABLE_arc_scene_Scene_cancelTouchFocus, "()V", 1 },
	{ "cancelTouchFocusExcept", (intptr_t) M_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element, VTABLE_arc_scene_Scene_cancelTouchFocusExcept_arc_scene_event_EventListener_arc_scene_Element, "(Larc/scene/event/EventListener;Larc/scene/Element;)V", 1 },
	{ "add", (intptr_t) M_arc_scene_Scene_add_arc_scene_Element, VTABLE_arc_scene_Scene_add_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "addAction", (intptr_t) M_arc_scene_Scene_addAction_arc_scene_Action, VTABLE_arc_scene_Scene_addAction_arc_scene_Action, "(Larc/scene/Action;)V", 1 },
	{ "getElements", (intptr_t) M_arc_scene_Scene_getElements_R_arc_struct_Seq, VTABLE_arc_scene_Scene_getElements_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "addListener", (intptr_t) M_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Scene_addListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "removeListener", (intptr_t) M_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Scene_removeListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "addCaptureListener", (intptr_t) M_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Scene_addCaptureListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "removeCaptureListener", (intptr_t) M_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Scene_removeCaptureListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "clear", (intptr_t) M_arc_scene_Scene_clear, VTABLE_arc_scene_Scene_clear, "()V", 1 },
	{ "unfocusAll", (intptr_t) M_arc_scene_Scene_unfocusAll, VTABLE_arc_scene_Scene_unfocusAll, "()V", 1 },
	{ "unfocus", (intptr_t) M_arc_scene_Scene_unfocus_arc_scene_Element, VTABLE_arc_scene_Scene_unfocus_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "setKeyboardFocus", (intptr_t) M_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean, VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "getKeyboardFocus", (intptr_t) M_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element, VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "setScrollFocus", (intptr_t) M_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean, VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "getScrollFocus", (intptr_t) M_arc_scene_Scene_getScrollFocus_R_arc_scene_Element, VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "getViewport", (intptr_t) M_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport, VTABLE_arc_scene_Scene_getViewport_R_arc_util_viewport_Viewport, "()Larc/util/viewport/Viewport;", 1 },
	{ "setViewport", (intptr_t) M_arc_scene_Scene_setViewport_arc_util_viewport_Viewport, VTABLE_arc_scene_Scene_setViewport_arc_util_viewport_Viewport, "(Larc/util/viewport/Viewport;)V", 1 },
	{ "getWidth", (intptr_t) M_arc_scene_Scene_getWidth_R_float, VTABLE_arc_scene_Scene_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_arc_scene_Scene_getHeight_R_float, VTABLE_arc_scene_Scene_getHeight_R_float, "()F", 1 },
	{ "getCamera", (intptr_t) M_arc_scene_Scene_getCamera_R_arc_graphics_Camera, VTABLE_arc_scene_Scene_getCamera_R_arc_graphics_Camera, "()Larc/graphics/Camera;", 1 },
	{ "hit", (intptr_t) M_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "screenToStageCoordinates", (intptr_t) M_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "stageToScreenCoordinates", (intptr_t) M_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Scene_stageToScreenCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "toScreenCoordinates", (intptr_t) M_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2, VTABLE_arc_scene_Scene_toScreenCoordinates_arc_math_geom_Vec2_arc_math_Mat_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;Larc/math/Mat;)Larc/math/geom/Vec2;", 1 },
	{ "calculateScissors", (intptr_t) M_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect, VTABLE_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect, "(Larc/math/geom/Rect;Larc/math/geom/Rect;)V", 1 },
	{ "getActionsRequestRendering", (intptr_t) M_arc_scene_Scene_getActionsRequestRendering_R_boolean, VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean, "()Z", 1 },
	{ "setActionsRequestRendering", (intptr_t) M_arc_scene_Scene_setActionsRequestRendering_boolean, VTABLE_arc_scene_Scene_setActionsRequestRendering_boolean, "(Z)V", 1 },
	{ "isInsideViewport", (intptr_t) M_arc_scene_Scene_isInsideViewport_int_int_R_boolean, VTABLE_arc_scene_Scene_isInsideViewport_int_int_R_boolean, "(II)Z", 4 },
	{ "resize", (intptr_t) M_arc_scene_Scene_resize_int_int, VTABLE_arc_scene_Scene_resize_int_int, "(II)V", 1 },
	{ "lambda$addTouchFocus$0", (intptr_t) SM_arc_scene_Scene_lambda$addTouchFocus$0_R_arc_scene_Scene$TouchFocus, 0, "()Larc/scene/Scene$TouchFocus;", 4106 },
	{ "lambda$hasDialog$0", (intptr_t) SM_arc_scene_Scene_lambda$hasDialog$0_arc_scene_Element_R_boolean, 0, "(Larc/scene/Element;)Z", 4106 },
	{ "lambda$registerStyles$3", (intptr_t) M_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field, VTABLE_arc_scene_Scene_lambda$registerStyles$3_java_lang_Object_java_lang_reflect_Field, "(Ljava/lang/Object;Ljava/lang/reflect/Field;)V", 4098 },
	{ "lambda$registerStyles$2", (intptr_t) SM_arc_scene_Scene_lambda$registerStyles$2_java_lang_reflect_Field_R_boolean, 0, "(Ljava/lang/reflect/Field;)Z", 4106 },
	{ "lambda$registerStyles$1", (intptr_t) M_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field, VTABLE_arc_scene_Scene_lambda$registerStyles$1_java_lang_reflect_Field, "(Ljava/lang/reflect/Field;)V", 4098 },
	{ "lambda$registerStyles$0", (intptr_t) SM_arc_scene_Scene_lambda$registerStyles$0_java_lang_reflect_Field_R_boolean, 0, "(Ljava/lang/reflect/Field;)Z", 4106 },
	{ "lambda$getStyle$0", (intptr_t) SM_arc_scene_Scene_lambda$getStyle$0_java_lang_Class_R_java_lang_RuntimeException, 0, "(Ljava/lang/Class;)Ljava/lang/RuntimeException;", 4106 },
};

Class class_arc_scene_Scene{
		.nativeName = (intptr_t) "arc/scene/Scene",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_Scene),
		.classVtable = (intptr_t) vtable_arc_scene_Scene,
		.staticInitializer = (intptr_t) clinit_arc_scene_Scene,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_scene_Scene,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 73,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_Scene = registerClass(&class_arc_scene_Scene);

}
