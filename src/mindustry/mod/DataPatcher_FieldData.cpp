#include "mindustry/mod/DataPatcher_FieldData.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/mod/DataPatcher.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "mindustry/mod/DataPatcher_FieldData.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_mod_DataPatcher$FieldData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_DataPatcher$FieldData *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_elementType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elementType)->clazz)->markFunction)((jobject) self->F_elementType, mark, depth + 1);
	if (self->F_keyType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyType)->clazz)->markFunction)((jobject) self->F_keyType, mark, depth + 1);
}

void clinit_mindustry_mod_DataPatcher$FieldData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$FieldData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(873);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(874);
	((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(875);
	((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_elementType = (jref) (frame[2].o);
	LINE_NUMBER(876);
	((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_keyType = (jref) (frame[3].o);
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$FieldData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_DataPatcher$FieldData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(880);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_elementType;
	sp[3].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_keyType;
	init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_DataPatcher$FieldData_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/DataPatcher$FieldData:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(885);
	sp[0].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_elementType;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_mod_DataPatcher$FieldData *) NULL_CHECK((frame[0].o)))->F_keyType;
	sp[2].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"FieldData{type=\u0001, elementType=\u0001, keyType=\u0001}"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_DataPatcher$FieldData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_DataPatcher$FieldData_toString_R_java_lang_String,
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
	{ "type", &class_java_lang_Class, offsetof(mindustry_mod_DataPatcher$FieldData, F_type), "Ljava/lang/Class;", 0 },
	{ "elementType", &class_java_lang_Class, offsetof(mindustry_mod_DataPatcher$FieldData, F_elementType), "Ljava/lang/Class;", 0 },
	{ "keyType", &class_java_lang_Class, offsetof(mindustry_mod_DataPatcher$FieldData, F_keyType), "Ljava/lang/Class;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher$FieldData_java_lang_Class_java_lang_Class_java_lang_Class, 0, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_mod_DataPatcher$FieldData_arc_util_serialization_Json$FieldMetadata, 0, "(Larc/util/serialization/Json$FieldMetadata;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_DataPatcher$FieldData_toString_R_java_lang_String, VTABLE_mindustry_mod_DataPatcher$FieldData_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_mod_DataPatcher$FieldData{
		.nativeName = (intptr_t) "mindustry/mod/DataPatcher$FieldData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_DataPatcher$FieldData),
		.classVtable = (intptr_t) vtable_mindustry_mod_DataPatcher$FieldData,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_DataPatcher$FieldData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_DataPatcher$FieldData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_DataPatcher,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_DataPatcher$FieldData = registerClass(&class_mindustry_mod_DataPatcher$FieldData);

}

