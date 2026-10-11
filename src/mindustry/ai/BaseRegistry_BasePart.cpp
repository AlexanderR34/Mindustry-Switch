#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Block.h"
#include "java/lang/Comparable.h"
#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Float.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/ctype/Content.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ai/BaseRegistry.h"

extern "C" {


void mark_mindustry_ai_BaseRegistry$BasePart(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_BaseRegistry$BasePart *) object;
	if (self->F_schematic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_schematic)->clazz)->markFunction)((jobject) self->F_schematic, mark, depth + 1);
	if (self->F_required)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_required)->clazz)->markFunction)((jobject) self->F_required, mark, depth + 1);
	if (self->F_core)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_core)->clazz)->markFunction)((jobject) self->F_core, mark, depth + 1);
}

void clinit_mindustry_ai_BaseRegistry$BasePart(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_BaseRegistry$BasePart_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry$BasePart:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry$BasePart(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(129);
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_schematic = (jref) (frame[1].o);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry$BasePart:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, ((jfloat)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_tier), ((jfloat)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_tier));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry$BasePart:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_BaseRegistry$BasePart;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field required
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_BaseRegistry$BasePart[] {
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
	(void *) M_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Lmindustry/ai/BaseRegistry$BasePart;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "schematic", &class_mindustry_game_Schematic, offsetof(mindustry_ai_BaseRegistry$BasePart, F_schematic), "Lmindustry/game/Schematic;", 17 },
	{ "centerX", &class_int, offsetof(mindustry_ai_BaseRegistry$BasePart, F_centerX), "I", 1 },
	{ "centerY", &class_int, offsetof(mindustry_ai_BaseRegistry$BasePart, F_centerY), "I", 1 },
	{ "required", &class_mindustry_ctype_Content, offsetof(mindustry_ai_BaseRegistry$BasePart, F_required), "Lmindustry/ctype/Content;", 1 },
	{ "core", &class_mindustry_world_Block, offsetof(mindustry_ai_BaseRegistry$BasePart, F_core), "Lmindustry/world/Block;", 1 },
	{ "tier", &class_float, offsetof(mindustry_ai_BaseRegistry$BasePart, F_tier), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_BaseRegistry$BasePart_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;)V", 1 },
	{ "compareTo", (intptr_t) M_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int, VTABLE_mindustry_ai_BaseRegistry$BasePart_compareTo_mindustry_ai_BaseRegistry$BasePart_R_int, "(Lmindustry/ai/BaseRegistry$BasePart;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int, VTABLE_mindustry_ai_BaseRegistry$BasePart_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_ai_BaseRegistry$BasePart{
		.nativeName = (intptr_t) "mindustry/ai/BaseRegistry$BasePart",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_BaseRegistry$BasePart),
		.classVtable = (intptr_t) vtable_mindustry_ai_BaseRegistry$BasePart,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_BaseRegistry$BasePart,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_BaseRegistry$BasePart,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_BaseRegistry,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_BaseRegistry$BasePart = registerClass(&class_mindustry_ai_BaseRegistry$BasePart);

}

