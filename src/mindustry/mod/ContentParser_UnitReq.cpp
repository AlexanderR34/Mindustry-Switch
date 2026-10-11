#include "mindustry/mod/ContentParser_UnitReq.h"
#include "mindustry/mod/ContentParser_UnitReq.h"
#include "java/lang/Object.h"
#include "mindustry/mod/ContentParser.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/Block.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_mod_ContentParser$UnitReq(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ContentParser$UnitReq *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_requirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requirements)->clazz)->markFunction)((jobject) self->F_requirements, mark, depth + 1);
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser$UnitReq(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_ContentParser$UnitReq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$UnitReq:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$UnitReq(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1484);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1486);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(0)));
	((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK(sp[0].o))->F_requirements = (jref) sp[1].o;
	LINE_NUMBER(1489);
	((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(600.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_ContentParser$UnitReq;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field previous
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_ContentParser$UnitReq[] {
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
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_mod_ContentParser$UnitReq, F_block), "Lmindustry/world/Block;", 1 },
	{ "requirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_mod_ContentParser$UnitReq, F_requirements), "[Lmindustry/type/ItemStack;", 1 },
	{ "previous", &class_mindustry_type_UnitType, offsetof(mindustry_mod_ContentParser$UnitReq, F_previous), "Lmindustry/type/UnitType;", 1 },
	{ "time", &class_float, offsetof(mindustry_mod_ContentParser$UnitReq, F_time), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ContentParser$UnitReq, 0, "()V", 0 },
};

Class class_mindustry_mod_ContentParser$UnitReq{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser$UnitReq",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ContentParser$UnitReq),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser$UnitReq,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser$UnitReq,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser$UnitReq,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_ContentParser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser$UnitReq = registerClass(&class_mindustry_mod_ContentParser$UnitReq);

}

