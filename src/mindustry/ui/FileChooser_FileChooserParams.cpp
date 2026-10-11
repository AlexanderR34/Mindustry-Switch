#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "mindustry/ui/FileChooser_FileChooserParams.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/Platform.h"
#include "arc/files/Fi.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ui/FileChooser.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_FileChooser$FileChooserParams(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_FileChooser$FileChooserParams *) object;
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
	if (self->F_extensions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extensions)->clazz)->markFunction)((jobject) self->F_extensions, mark, depth + 1);
	if (self->F_handler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_handler)->clazz)->markFunction)((jobject) self->F_handler, mark, depth + 1);
	if (self->F_multipleHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_multipleHandler)->clazz)->markFunction)((jobject) self->F_multipleHandler, mark, depth + 1);
}

void clinit_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_FileChooser$FileChooserParams(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(63);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_FileChooser$FileChooserParams_checkParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:checkParams", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Extension types must be defined."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_title;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_open) == 0) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"open"_j))));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"save"_j))));
	sp += 1;
	}
label_6:;
	sp -= 2;
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	goto label_7;
label_3:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_title;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_title;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, (jint(1)));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_fileName;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"file.\u0001"_j.string, 1, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[1].o = (jobject)SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:submit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	((func_mindustry_ui_FileChooser$FileChooserParams_checkParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_checkParams])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_handler = (jref) (frame[1].o);
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:submitMulti", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((func_mindustry_ui_FileChooser$FileChooserParams_checkParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_FileChooser$FileChooserParams_checkParams])(ctx, (frame[0].o));
	LINE_NUMBER(97);
	if (((jint)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_open) != 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Saving in a file chooser with multiple choices does not make sense."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(99);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_multipleHandler = (jref) (frame[1].o);
	LINE_NUMBER(100);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_allowMultiple = (jint(1));
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	((func_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_fileName = (jref) (frame[1].o);
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:extensions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_extensions = (jref) (frame[1].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:open", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(115);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_open = (frame[1].i);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:title", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/FileChooser$FileChooserParams:handleChooseResult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_handler;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_handler;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_multipleHandler;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_FileChooser$FileChooserParams *) NULL_CHECK((frame[0].o)))->F_multipleHandler;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_FileChooser$FileChooserParams;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field handler
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field multipleHandler
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_FileChooser$FileChooserParams[] {
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
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_checkParams,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams,
	(void *) M_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi,
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
	{ "checkParams", "()V" },
	{ "submit", "(Larc/func/Cons;)V" },
	{ "submitMulti", "(Larc/func/Cons;)V" },
	{ "name", "(Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;" },
	{ "extensions", "([Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;" },
	{ "open", "(Z)Lmindustry/ui/FileChooser$FileChooserParams;" },
	{ "title", "(Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;" },
	{ "handleChooseResult", "([Larc/files/Fi;)V" },
};

static FieldMetadata fields[] {
	{ "open", &class_boolean, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_open), "Z", 1 },
	{ "allowMultiple", &class_boolean, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_allowMultiple), "Z", 1 },
	{ "title", &class_java_lang_String, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_title), "Ljava/lang/String;", 1 },
	{ "fileName", &class_java_lang_String, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_fileName), "Ljava/lang/String;", 1 },
	{ "extensions", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_ui_FileChooser$FileChooserParams, F_extensions), "[Ljava/lang/String;", 1 },
	{ "handler", &class_arc_func_Cons, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_handler), "Larc/func/Cons;", 1 },
	{ "multipleHandler", &class_arc_func_Cons, offsetof(mindustry_ui_FileChooser$FileChooserParams, F_multipleHandler), "Larc/func/Cons;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_FileChooser$FileChooserParams, 0, "()V", 1 },
	{ "checkParams", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_checkParams, VTABLE_mindustry_ui_FileChooser$FileChooserParams_checkParams, "()V", 2 },
	{ "submit", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons, VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "submitMulti", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons, VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "name", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, VTABLE_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, "(Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;", 1 },
	{ "extensions", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, VTABLE_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, "([Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;", 129 },
	{ "open", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams, VTABLE_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams, "(Z)Lmindustry/ui/FileChooser$FileChooserParams;", 1 },
	{ "title", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, VTABLE_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams, "(Ljava/lang/String;)Lmindustry/ui/FileChooser$FileChooserParams;", 1 },
	{ "handleChooseResult", (intptr_t) M_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi, VTABLE_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi, "([Larc/files/Fi;)V", 129 },
};

Class class_mindustry_ui_FileChooser$FileChooserParams{
		.nativeName = (intptr_t) "mindustry/ui/FileChooser$FileChooserParams",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_FileChooser$FileChooserParams),
		.classVtable = (intptr_t) vtable_mindustry_ui_FileChooser$FileChooserParams,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_FileChooser$FileChooserParams,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_FileChooser$FileChooserParams,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_FileChooser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_FileChooser$FileChooserParams = registerClass(&class_mindustry_ui_FileChooser$FileChooserParams);

}

