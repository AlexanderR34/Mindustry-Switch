#include "mindustry/ui/builder/UiStyleLookup.h"
#include "java/lang/Exception.h"
#include "arc/func/Prov.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/ui/Styles.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/builder/UiStyleLookup.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/builder/UiStyleLookup_invoke_arc_func_Prov_2.h"
#include "mindustry/ui/builder/UiStyleLookup_invoke_arc_func_Prov_3.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_mindustry_ui_builder_UiStyleLookup_styles;

void mark_mindustry_ui_builder_UiStyleLookup(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_builder_UiStyleLookup_styles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_builder_UiStyleLookup_styles)->clazz)->markFunction)((jobject) SF_mindustry_ui_builder_UiStyleLookup_styles, mark, depth + 1);
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
	auto self = (mindustry_ui_builder_UiStyleLookup *) object;
}

void init_mindustry_ui_builder_UiStyleLookup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiStyleLookup:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiStyleLookup_get_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiStyleLookup:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(12);
	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiStyleLookup_styles;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	SM_mindustry_ui_builder_UiStyleLookup_init(ctx);
label_1:;
	{
	LINE_NUMBER(13);
	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiStyleLookup_styles;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiStyleLookup_init(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiStyleLookup:init", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((func_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_ui_Styles)))->vtable)[VTABLE_java_lang_Class_getFields_R_Array1_java_lang_reflect_Field])(ctx, (((jobject) &class_mindustry_ui_Styles)));
	frame[0].o = sp[0].o;
	frame[1].i = (((jarray) nullCheck(ctx, (frame[0].o)))->length);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_6;
	}
	{
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(19);
	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiStyleLookup_styles;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[3].o));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ui_builder_UiStyleLookup_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectMap, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[3].o));
	sp[2].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (jobject(nullptr)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(22);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(20);
	frame[4].o = sp[0].o;
	LINE_NUMBER(21);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[4].o));
	}
label_7:;
	{
	LINE_NUMBER(17);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ui_builder_UiStyleLookup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiStyleLookup:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_ui_builder_UiStyleLookup(ctx);
	SF_mindustry_ui_builder_UiStyleLookup_styles = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_builder_UiStyleLookup;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method get
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ui_builder_UiStyleLookup[] {
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
	{ "styles", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_ui_builder_UiStyleLookup_styles, "Larc/struct/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiStyleLookup, 0, "()V", 1 },
	{ "get", (intptr_t) SM_mindustry_ui_builder_UiStyleLookup_get_java_lang_Class_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "init", (intptr_t) SM_mindustry_ui_builder_UiStyleLookup_init, 0, "()V", 10 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_builder_UiStyleLookup, 0, "()V", 8 },
};

Class class_mindustry_ui_builder_UiStyleLookup{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiStyleLookup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiStyleLookup),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiStyleLookup,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiStyleLookup,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiStyleLookup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiStyleLookup = registerClass(&class_mindustry_ui_builder_UiStyleLookup);

}
