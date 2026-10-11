#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/AssetDescriptor.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "arc/assets/AssetDescriptor_invoke_arc_func_Cons_1.h"
#include "arc/assets/AssetDescriptor_invoke_arc_func_Cons_0.h"

extern "C" {


void mark_arc_assets_AssetDescriptor(jobject object, jint mark, jint depth) {
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
	auto self = (arc_assets_AssetDescriptor *) object;
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_loaded)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loaded)->clazz)->markFunction)((jobject) self->F_loaded, mark, depth + 1);
	if (self->F_errored)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errored)->clazz)->markFunction)((jobject) self->F_errored, mark, depth + 1);
}

void clinit_arc_assets_AssetDescriptor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_assets_AssetDescriptor_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[1].o));
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, sp[0].o, sp[1].o, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(28);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_assets_AssetDescriptor_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_assets_AssetDescriptor_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_assets_AssetDescriptor_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(21);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_errored = (jref) (jobject(nullptr));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\\\"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	LINE_NUMBER(38);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(39);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_assets_AssetDescriptor_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_assets_AssetDescriptor_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_assets_AssetDescriptor_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(21);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_errored = (jref) (jobject(nullptr));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_path_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\\\\"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	LINE_NUMBER(45);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(46);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(47);
	((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_assets_AssetDescriptor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[1].o = (jobject)((arc_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type;
	LINE_NUMBER(54);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_assets_AssetDescriptor_lambda$new$0_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/AssetDescriptor:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_AssetDescriptor(ctx);
	frame[0].o = param0;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_assets_AssetDescriptor;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field errored
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_assets_AssetDescriptor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_assets_AssetDescriptor_toString_R_java_lang_String,
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
	{ "fileName", &class_java_lang_String, offsetof(arc_assets_AssetDescriptor, F_fileName), "Ljava/lang/String;", 17 },
	{ "type", &class_java_lang_Class, offsetof(arc_assets_AssetDescriptor, F_type), "Ljava/lang/Class;", 17 },
	{ "params", &class_arc_assets_AssetLoaderParameters, offsetof(arc_assets_AssetDescriptor, F_params), "Larc/assets/AssetLoaderParameters;", 17 },
	{ "file", &class_arc_files_Fi, offsetof(arc_assets_AssetDescriptor, F_file), "Larc/files/Fi;", 1 },
	{ "loaded", &class_arc_func_Cons, offsetof(arc_assets_AssetDescriptor, F_loaded), "Larc/func/Cons;", 1 },
	{ "errored", &class_arc_func_Cons, offsetof(arc_assets_AssetDescriptor, F_errored), "Larc/func/Cons;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_AssetDescriptor_java_lang_Class, 0, "(Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class, 0, "(Larc/files/Fi;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class_arc_assets_AssetLoaderParameters, 0, "(Ljava/lang/String;Ljava/lang/Class;Larc/assets/AssetLoaderParameters;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_AssetDescriptor_arc_files_Fi_java_lang_Class_arc_assets_AssetLoaderParameters, 0, "(Larc/files/Fi;Ljava/lang/Class;Larc/assets/AssetLoaderParameters;)V", 1 },
	{ "toString", (intptr_t) M_arc_assets_AssetDescriptor_toString_R_java_lang_String, VTABLE_arc_assets_AssetDescriptor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$new$0", (intptr_t) SM_arc_assets_AssetDescriptor_lambda$new$0_java_lang_Object, 0, "(Ljava/lang/Object;)V", 4106 },
};

Class class_arc_assets_AssetDescriptor{
		.nativeName = (intptr_t) "arc/assets/AssetDescriptor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_assets_AssetDescriptor),
		.classVtable = (intptr_t) vtable_arc_assets_AssetDescriptor,
		.staticInitializer = (intptr_t) clinit_arc_assets_AssetDescriptor,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_assets_AssetDescriptor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_AssetDescriptor = registerClass(&class_arc_assets_AssetDescriptor);

}
