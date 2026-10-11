#include "mindustry/logic/LogicFx_EffectEntry.h"
#include "mindustry/logic/LogicFx.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/logic/LogicFx_EffectEntry.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_logic_LogicFx$EffectEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LogicFx$EffectEntry *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_mindustry_logic_LogicFx$EffectEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LogicFx$EffectEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(71);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(76);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_bounds = (jfloat(-1.0f));
	LINE_NUMBER(79);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:bounds", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(83);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_bounds = (frame[1].f);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_size = (jint(1));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:rotate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:color", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_color = (jint(1));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LogicFx$EffectEntry:data", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LogicFx$EffectEntry;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field data
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LogicFx$EffectEntry[] {
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
	(void *) M_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry,
	(void *) M_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry,
	(void *) M_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry,
	(void *) M_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry,
	(void *) M_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry,
	(void *) M_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry,
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
	{ "bounds", "(F)Lmindustry/logic/LogicFx$EffectEntry;" },
	{ "name", "(Ljava/lang/String;)Lmindustry/logic/LogicFx$EffectEntry;" },
	{ "size", "()Lmindustry/logic/LogicFx$EffectEntry;" },
	{ "rotate", "()Lmindustry/logic/LogicFx$EffectEntry;" },
	{ "color", "()Lmindustry/logic/LogicFx$EffectEntry;" },
	{ "data", "(Ljava/lang/Class;)Lmindustry/logic/LogicFx$EffectEntry;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_LogicFx$EffectEntry, F_name), "Ljava/lang/String;", 1 },
	{ "effect", &class_mindustry_entities_Effect, offsetof(mindustry_logic_LogicFx$EffectEntry, F_effect), "Lmindustry/entities/Effect;", 1 },
	{ "size", &class_boolean, offsetof(mindustry_logic_LogicFx$EffectEntry, F_size), "Z", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_logic_LogicFx$EffectEntry, F_rotate), "Z", 1 },
	{ "color", &class_boolean, offsetof(mindustry_logic_LogicFx$EffectEntry, F_color), "Z", 1 },
	{ "data", &class_java_lang_Class, offsetof(mindustry_logic_LogicFx$EffectEntry, F_data), "Ljava/lang/Class;", 1 },
	{ "bounds", &class_float, offsetof(mindustry_logic_LogicFx$EffectEntry, F_bounds), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LogicFx$EffectEntry_mindustry_entities_Effect, 0, "(Lmindustry/entities/Effect;)V", 1 },
	{ "bounds", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_bounds_float_R_mindustry_logic_LogicFx$EffectEntry, "(F)Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "name", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_name_java_lang_String_R_mindustry_logic_LogicFx$EffectEntry, "(Ljava/lang/String;)Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "size", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_size_R_mindustry_logic_LogicFx$EffectEntry, "()Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "rotate", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_rotate_R_mindustry_logic_LogicFx$EffectEntry, "()Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "color", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_color_R_mindustry_logic_LogicFx$EffectEntry, "()Lmindustry/logic/LogicFx$EffectEntry;", 1 },
	{ "data", (intptr_t) M_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry, VTABLE_mindustry_logic_LogicFx$EffectEntry_data_java_lang_Class_R_mindustry_logic_LogicFx$EffectEntry, "(Ljava/lang/Class;)Lmindustry/logic/LogicFx$EffectEntry;", 1 },
};

Class class_mindustry_logic_LogicFx$EffectEntry{
		.nativeName = (intptr_t) "mindustry/logic/LogicFx$EffectEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LogicFx$EffectEntry),
		.classVtable = (intptr_t) vtable_mindustry_logic_LogicFx$EffectEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LogicFx$EffectEntry,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LogicFx$EffectEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LogicFx,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LogicFx$EffectEntry = registerClass(&class_mindustry_logic_LogicFx$EffectEntry);

}

