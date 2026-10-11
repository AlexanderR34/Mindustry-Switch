#include "arc/scene/utils/Elem.h"
#include "arc/scene/ui/TextField.h"
#include "arc/scene/utils/Elem_invoke_java_lang_Runnable_1.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/utils/Elem_invoke_java_lang_Runnable_0.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/ui/Button.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/TextButton.h"
#include "arc/func/Boolc.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "arc/scene/ui/CheckBox.h"

extern "C" {


void mark_arc_scene_utils_Elem(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_utils_Elem *) object;
}

void clinit_arc_scene_utils_Elem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_utils_Elem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newCheck", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(13);
	clinit_arc_scene_ui_CheckBox(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_CheckBox);
	init_arc_scene_ui_CheckBox_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(14);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(15);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_utils_Elem_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_utils_Elem_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_utils_Elem_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_CheckBox_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newButton_java_lang_String_java_lang_Runnable_R_arc_scene_ui_TextButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newButton", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(21);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(22);
	((func_arc_scene_ui_TextButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TextButton_changed_java_lang_Runnable])(ctx, (frame[2].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_TextButton(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newButton", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(28);
	clinit_arc_scene_ui_TextButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextButton);
	init_arc_scene_ui_TextButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(29);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(30);
	((func_arc_scene_ui_TextButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TextButton_changed_java_lang_Runnable])(ctx, (frame[3].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newImageButton", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(36);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(37);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(38);
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, (frame[2].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newImageButton", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(43);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(44);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(45);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(46);
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, (frame[3].o), (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newImageButton", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(51);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(52);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[4].o), (frame[2].f));
	LINE_NUMBER(53);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(54);
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, (frame[4].o), (frame[3].o));
	}
label_3:;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_arc_graphics_Color_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newImageButton", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(59);
	clinit_arc_scene_ui_ImageButton(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ImageButton);
	init_arc_scene_ui_ImageButton_arc_scene_style_Drawable(ctx, sp[0].o, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(60);
	((func_arc_scene_ui_ImageButton_resizeImage_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_resizeImage_float])(ctx, (frame[4].o), (frame[1].f));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getImage_R_arc_scene_ui_Image])(ctx, (frame[4].o));
	((func_arc_scene_ui_Image_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setColor_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(62);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(63);
	((func_arc_scene_ui_ImageButton_changed_java_lang_Runnable) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_changed_java_lang_Runnable])(ctx, (frame[4].o), (frame[3].o));
	}
label_4:;
	{
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:newField", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(68);
	clinit_arc_scene_ui_TextField(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_TextField);
	init_arc_scene_ui_TextField_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(69);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_utils_Elem_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (arc_scene_utils_Elem_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_arc_scene_utils_Elem_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_ui_TextField_changed_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_changed_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void SM_arc_scene_utils_Elem_lambda$newField$0_arc_scene_ui_TextField_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:lambda$newField$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	jint temp0 = (jint)((func_arc_scene_ui_TextField_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_scene_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TextField_getText_R_java_lang_String])(ctx, (frame[0].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(74);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_utils_Elem_lambda$newCheck$0_arc_func_Boolc_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/utils/Elem:lambda$newCheck$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_utils_Elem(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_CheckBox_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_CheckBox_isChecked_R_boolean])(ctx, (frame[1].o));
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_utils_Elem[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_utils_Elem, 0, "()V", 1 },
	{ "newCheck", (intptr_t) SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox, 0, "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/CheckBox;", 9 },
	{ "newButton", (intptr_t) SM_arc_scene_utils_Elem_newButton_java_lang_String_java_lang_Runnable_R_arc_scene_ui_TextButton, 0, "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/TextButton;", 9 },
	{ "newButton", (intptr_t) SM_arc_scene_utils_Elem_newButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_TextButton, 0, "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/TextButton;", 9 },
	{ "newImageButton", (intptr_t) SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_ImageButton, 0, "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/ImageButton;", 9 },
	{ "newImageButton", (intptr_t) SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton, 0, "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/ImageButton;", 9 },
	{ "newImageButton", (intptr_t) SM_arc_scene_utils_Elem_newImageButton_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton, 0, "(Larc/scene/ui/ImageButton$ImageButtonStyle;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/ImageButton;", 9 },
	{ "newImageButton", (intptr_t) SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_arc_graphics_Color_java_lang_Runnable_R_arc_scene_ui_ImageButton, 0, "(Larc/scene/style/Drawable;FLarc/graphics/Color;Ljava/lang/Runnable;)Larc/scene/ui/ImageButton;", 9 },
	{ "newField", (intptr_t) SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField, 0, "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/TextField;", 9 },
	{ "lambda$newField$0", (intptr_t) SM_arc_scene_utils_Elem_lambda$newField$0_arc_scene_ui_TextField_arc_func_Cons, 0, "(Larc/scene/ui/TextField;Larc/func/Cons;)V", 4106 },
	{ "lambda$newCheck$0", (intptr_t) SM_arc_scene_utils_Elem_lambda$newCheck$0_arc_func_Boolc_arc_scene_ui_CheckBox, 0, "(Larc/func/Boolc;Larc/scene/ui/CheckBox;)V", 4106 },
};

Class class_arc_scene_utils_Elem{
		.nativeName = (intptr_t) "arc/scene/utils/Elem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_utils_Elem),
		.classVtable = (intptr_t) vtable_arc_scene_utils_Elem,
		.staticInitializer = (intptr_t) clinit_arc_scene_utils_Elem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_utils_Elem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_utils_Elem = registerClass(&class_arc_scene_utils_Elem);

}
