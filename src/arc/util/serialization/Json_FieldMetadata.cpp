#include "arc/util/serialization/Json_FieldMetadata.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/serialization/Json.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/struct/ArrayMap.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "java/util/Map.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_arc_util_serialization_Json$FieldMetadata(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Json$FieldMetadata *) object;
	if (self->F_field)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field)->clazz)->markFunction)((jobject) self->F_field, mark, depth + 1);
	if (self->F_elementType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementType)->clazz)->markFunction)((jobject) self->F_elementType, mark, depth + 1);
	if (self->F_keyType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyType)->clazz)->markFunction)((jobject) self->F_keyType, mark, depth + 1);
}

void clinit_arc_util_serialization_Json$FieldMetadata(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_Json$FieldMetadata_java_lang_reflect_Field(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Json$FieldMetadata:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Json$FieldMetadata(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1351);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1352);
	sp[0].o = ((jobject) &class_arc_struct_ObjectMap);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = ((jobject) &class_java_util_Map);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = ((jobject) &class_arc_struct_ArrayMap);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1354);
	((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[0].o)))->F_field = (jref) (frame[1].o);
	LINE_NUMBER(1355);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].i) == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	sp[1].o = (jobject)SM_arc_util_serialization_Json_getElementType_java_lang_reflect_Field_int_R_java_lang_Class(ctx, sp[1].o, sp[2].i);
	((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK(sp[0].o))->F_elementType = (jref) sp[1].o;
	LINE_NUMBER(1356);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_arc_util_serialization_Json_getElementType_java_lang_reflect_Field_int_R_java_lang_Class(ctx, (frame[1].o), (jint(0)));
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 2;
	((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK(sp[0].o))->F_keyType = (jref) sp[1].o;
	LINE_NUMBER(1357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_util_serialization_Json$FieldMetadata;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field elementType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field keyType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_util_serialization_Json$FieldMetadata[] {
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
	{ "field", &class_java_lang_reflect_Field, offsetof(arc_util_serialization_Json$FieldMetadata, F_field), "Ljava/lang/reflect/Field;", 17 },
	{ "elementType", &class_java_lang_Class, offsetof(arc_util_serialization_Json$FieldMetadata, F_elementType), "Ljava/lang/Class;", 1 },
	{ "keyType", &class_java_lang_Class, offsetof(arc_util_serialization_Json$FieldMetadata, F_keyType), "Ljava/lang/Class;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Json$FieldMetadata_java_lang_reflect_Field, 0, "(Ljava/lang/reflect/Field;)V", 1 },
};

Class class_arc_util_serialization_Json$FieldMetadata{
		.nativeName = (intptr_t) "arc/util/serialization/Json$FieldMetadata",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Json$FieldMetadata),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Json$FieldMetadata,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Json$FieldMetadata,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_util_serialization_Json$FieldMetadata,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Json,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Json$FieldMetadata = registerClass(&class_arc_util_serialization_Json$FieldMetadata);

}

