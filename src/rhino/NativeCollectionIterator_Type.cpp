#include "rhino/NativeCollectionIterator_Type.h"
#include "java/lang/Object.h"
#include "rhino/NativeCollectionIterator.h"
#include "java/lang/String.h"
#include "rhino/NativeCollectionIterator_Type.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_NativeCollectionIterator$Type_KEYS;
jobject SF_rhino_NativeCollectionIterator$Type_VALUES;
jobject SF_rhino_NativeCollectionIterator$Type_BOTH;
jobject SF_rhino_NativeCollectionIterator$Type_$VALUES;

void mark_rhino_NativeCollectionIterator$Type(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeCollectionIterator$Type_KEYS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCollectionIterator$Type_KEYS)->clazz)->markFunction)((jobject) SF_rhino_NativeCollectionIterator$Type_KEYS, mark, depth + 1);
		if (SF_rhino_NativeCollectionIterator$Type_VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCollectionIterator$Type_VALUES)->clazz)->markFunction)((jobject) SF_rhino_NativeCollectionIterator$Type_VALUES, mark, depth + 1);
		if (SF_rhino_NativeCollectionIterator$Type_BOTH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCollectionIterator$Type_BOTH)->clazz)->markFunction)((jobject) SF_rhino_NativeCollectionIterator$Type_BOTH, mark, depth + 1);
		if (SF_rhino_NativeCollectionIterator$Type_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeCollectionIterator$Type_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_NativeCollectionIterator$Type_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeCollectionIterator$Type *) object;
}

jobject SM_rhino_NativeCollectionIterator$Type_values_R_Array1_rhino_NativeCollectionIterator$Type(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCollectionIterator$Type:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCollectionIterator$Type(ctx);
	{
	LINE_NUMBER(10);
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[0].o = (jobject)SF_rhino_NativeCollectionIterator$Type_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_NativeCollectionIterator$Type, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeCollectionIterator$Type_valueOf_java_lang_String_R_rhino_NativeCollectionIterator$Type(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCollectionIterator$Type:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCollectionIterator$Type(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_NativeCollectionIterator$Type)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_NativeCollectionIterator$Type, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_NativeCollectionIterator$Type_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCollectionIterator$Type:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCollectionIterator$Type(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(10);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeCollectionIterator$Type(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeCollectionIterator$Type:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeCollectionIterator$Type(ctx);
	{
	LINE_NUMBER(10);
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCollectionIterator$Type);
	init_rhino_NativeCollectionIterator$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"KEYS"_j))), (jint(0)));
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	SF_rhino_NativeCollectionIterator$Type_KEYS = sp[0].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCollectionIterator$Type);
	init_rhino_NativeCollectionIterator$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"VALUES"_j))), (jint(1)));
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	SF_rhino_NativeCollectionIterator$Type_VALUES = sp[0].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_NativeCollectionIterator$Type);
	init_rhino_NativeCollectionIterator$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BOTH"_j))), (jint(2)));
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	SF_rhino_NativeCollectionIterator$Type_BOTH = sp[0].o;
	sp[0].o = (jobject)createArray(ctx, &class_rhino_NativeCollectionIterator$Type, (jint(3)));
	jint temp0 = jint(0);
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[1].o = (jobject)SF_rhino_NativeCollectionIterator$Type_KEYS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[1].o = (jobject)SF_rhino_NativeCollectionIterator$Type_VALUES;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	sp[1].o = (jobject)SF_rhino_NativeCollectionIterator$Type_BOTH;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_rhino_NativeCollectionIterator$Type(ctx);
	SF_rhino_NativeCollectionIterator$Type_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeCollectionIterator$Type[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "KEYS", &class_rhino_NativeCollectionIterator$Type, (intptr_t) &SF_rhino_NativeCollectionIterator$Type_KEYS, "Lrhino/NativeCollectionIterator$Type;", 16409 },
	{ "VALUES", &class_rhino_NativeCollectionIterator$Type, (intptr_t) &SF_rhino_NativeCollectionIterator$Type_VALUES, "Lrhino/NativeCollectionIterator$Type;", 16409 },
	{ "BOTH", &class_rhino_NativeCollectionIterator$Type, (intptr_t) &SF_rhino_NativeCollectionIterator$Type_BOTH, "Lrhino/NativeCollectionIterator$Type;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_NativeCollectionIterator$Type, 1), (intptr_t) &SF_rhino_NativeCollectionIterator$Type_$VALUES, "[Lrhino/NativeCollectionIterator$Type;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_NativeCollectionIterator$Type_values_R_Array1_rhino_NativeCollectionIterator$Type, 0, "()[Lrhino/NativeCollectionIterator$Type;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_NativeCollectionIterator$Type_valueOf_java_lang_String_R_rhino_NativeCollectionIterator$Type, 0, "(Ljava/lang/String;)Lrhino/NativeCollectionIterator$Type;", 9 },
	{ "<init>", (intptr_t) init_rhino_NativeCollectionIterator$Type_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeCollectionIterator$Type, 0, "()V", 8 },
};

Class class_rhino_NativeCollectionIterator$Type{
		.nativeName = (intptr_t) "rhino/NativeCollectionIterator$Type",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_NativeCollectionIterator$Type),
		.classVtable = (intptr_t) vtable_rhino_NativeCollectionIterator$Type,
		.staticInitializer = (intptr_t) clinit_rhino_NativeCollectionIterator$Type,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeCollectionIterator$Type,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_NativeCollectionIterator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeCollectionIterator$Type = registerClass(&class_rhino_NativeCollectionIterator$Type);

}

