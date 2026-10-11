#include "mindustry/ui/Elems.h"
#include "mindustry/ui/Elems.h"
#include "mindustry/gen/Tex.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/func/Boolp.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/ui/Elems_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/Elems_invoke_java_lang_Runnable_2.h"
#include "mindustry/ui/Elems_invoke_arc_func_Cons_1.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/Button.h"
#include "arc/scene/ui/Image.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/func/Boolc.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

extern "C" {


void mark_mindustry_ui_Elems(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_Elems *) object;
}

void clinit_mindustry_ui_Elems(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_Elems(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Elems_check_java_lang_String_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:check", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(ctx, sp[0].o, sp[1].i, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:check", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:check", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(22);
	clinit_arc_scene_ui_Button(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_Button);
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayt;
	init_arc_scene_ui_Button_arc_scene_ui_Button$ButtonStyle(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = frame[4].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_grayPanel;
	sp[0].o = (jobject)((func_arc_scene_ui_Button_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o), (jfloat(10.0f)));
	LINE_NUMBER(26);
	sp[0].o = frame[4].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	init_arc_scene_ui_Image(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Elems_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_Elems_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_Elems_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(32.0f);
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-4.0f)));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(30);
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, (frame[4].o), (frame[1].i));
	LINE_NUMBER(32);
	if ((frame[2].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Elems_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_Elems_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_Elems_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Elems_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_Elems_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_Elems_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Elems_lambda$check$2_arc_func_Boolc_arc_scene_ui_Button(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:lambda$check$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[1].o));
	((func_arc_func_Boolc_get_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolc, INDEX_arc_func_Boolc_get_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Elems_lambda$check$1_arc_scene_ui_Button_arc_func_Boolp(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:lambda$check$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_scene_ui_Button_setChecked_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_setChecked_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Elems_lambda$check$0_arc_scene_ui_Button_arc_scene_ui_Image(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Elems:lambda$check$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Elems(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_scene_ui_Button_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isOver_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_checkOnOver;
	goto label_3;
label_2:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_checkOver;
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)((func_arc_scene_ui_Button_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Button_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_checkOn;
	goto label_3;
label_4:;
	clinit_mindustry_gen_Tex(ctx);
	(sp++)->o = SF_mindustry_gen_Tex_checkOff;
label_3:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Elems[] {
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
	{ "<init>", (intptr_t) init_mindustry_ui_Elems, 0, "()V", 1 },
	{ "check", (intptr_t) SM_mindustry_ui_Elems_check_java_lang_String_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button, 0, "(Ljava/lang/String;Larc/func/Boolp;Larc/func/Boolc;)Larc/scene/ui/Button;", 9 },
	{ "check", (intptr_t) SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_Button, 0, "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/Button;", 9 },
	{ "check", (intptr_t) SM_mindustry_ui_Elems_check_java_lang_String_boolean_arc_func_Boolp_arc_func_Boolc_R_arc_scene_ui_Button, 0, "(Ljava/lang/String;ZLarc/func/Boolp;Larc/func/Boolc;)Larc/scene/ui/Button;", 9 },
	{ "lambda$check$2", (intptr_t) SM_mindustry_ui_Elems_lambda$check$2_arc_func_Boolc_arc_scene_ui_Button, 0, "(Larc/func/Boolc;Larc/scene/ui/Button;)V", 4106 },
	{ "lambda$check$1", (intptr_t) SM_mindustry_ui_Elems_lambda$check$1_arc_scene_ui_Button_arc_func_Boolp, 0, "(Larc/scene/ui/Button;Larc/func/Boolp;)V", 4106 },
	{ "lambda$check$0", (intptr_t) SM_mindustry_ui_Elems_lambda$check$0_arc_scene_ui_Button_arc_scene_ui_Image, 0, "(Larc/scene/ui/Button;Larc/scene/ui/Image;)V", 4106 },
};

Class class_mindustry_ui_Elems{
		.nativeName = (intptr_t) "mindustry/ui/Elems",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Elems),
		.classVtable = (intptr_t) vtable_mindustry_ui_Elems,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Elems,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Elems,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Elems = registerClass(&class_mindustry_ui_Elems);

}
