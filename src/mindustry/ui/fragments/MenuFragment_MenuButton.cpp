#include "mindustry/ui/fragments/MenuFragment_MenuButton.h"
#include "mindustry/ui/fragments/MenuFragment_MenuButton.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ui/fragments/MenuFragment_MenuButton_invoke_java_lang_Runnable_1.h"
#include "arc/util/Nullable.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/fragments/MenuFragment.h"

extern "C" {


void mark_mindustry_ui_fragments_MenuFragment$MenuButton(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_MenuFragment$MenuButton *) object;
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_runnable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnable)->clazz)->markFunction)((jobject) self->F_runnable, mark, depth + 1);
	if (self->F_submenu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_submenu)->clazz)->markFunction)((jobject) self->F_submenu, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment$MenuButton:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(325);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(326);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(327);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(328);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_runnable = (jref) (frame[3].o);
	LINE_NUMBER(329);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_submenu = (jref) (jobject(nullptr));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment$MenuButton:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(333);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(334);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(335);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(336);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_runnable = (jref) (frame[3].o);
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (frame[4].o));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 2;
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK(sp[0].o))->F_submenu = (jref) sp[1].o;
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment$MenuButton:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(341);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(342);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(343);
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MenuFragment$MenuButton_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_ui_fragments_MenuFragment$MenuButton_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MenuFragment$MenuButton_invoke_java_lang_Runnable_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK(sp[0].o))->F_runnable = (jref) sp[1].o;
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (frame[3].o));
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ACONST_NULL();
label_6:;
	{
	sp -= 2;
	((mindustry_ui_fragments_MenuFragment$MenuButton *) NULL_CHECK(sp[0].o))->F_submenu = (jref) sp[1].o;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MenuFragment$MenuButton_lambda$new$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/fragments/MenuFragment$MenuButton:lambda$new$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_fragments_MenuFragment$MenuButton(ctx);
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_fragments_MenuFragment$MenuButton;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field submenu
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_fragments_MenuFragment$MenuButton[] {
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
	{ "icon", &class_arc_scene_style_Drawable, offsetof(mindustry_ui_fragments_MenuFragment$MenuButton, F_icon), "Larc/scene/style/Drawable;", 17 },
	{ "text", &class_java_lang_String, offsetof(mindustry_ui_fragments_MenuFragment$MenuButton, F_text), "Ljava/lang/String;", 17 },
	{ "runnable", &class_java_lang_Runnable, offsetof(mindustry_ui_fragments_MenuFragment$MenuButton, F_runnable), "Ljava/lang/Runnable;", 17 },
	{ "submenu", &class_arc_struct_Seq, offsetof(mindustry_ui_fragments_MenuFragment$MenuButton, F_submenu), "Larc/struct/Seq;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable, 0, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton, 0, "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;[Lmindustry/ui/fragments/MenuFragment$MenuButton;)V", 129 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton, 0, "(Ljava/lang/String;Larc/scene/style/Drawable;[Lmindustry/ui/fragments/MenuFragment$MenuButton;)V", 128 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_fragments_MenuFragment$MenuButton_lambda$new$0, 0, "()V", 4106 },
};

Class class_mindustry_ui_fragments_MenuFragment$MenuButton{
		.nativeName = (intptr_t) "mindustry/ui/fragments/MenuFragment$MenuButton",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_MenuFragment$MenuButton),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_MenuFragment$MenuButton,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_MenuFragment$MenuButton,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_MenuFragment$MenuButton,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_fragments_MenuFragment,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_MenuFragment$MenuButton = registerClass(&class_mindustry_ui_fragments_MenuFragment$MenuButton);

}

