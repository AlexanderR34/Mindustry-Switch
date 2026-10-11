#include "rhino/ScriptableObject_SlotAccess.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "rhino/ScriptableObject_SlotAccess.h"

extern "C" {

jobject SF_rhino_ScriptableObject$SlotAccess_QUERY;
jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY;
jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
jobject SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
jobject SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
jobject SF_rhino_ScriptableObject$SlotAccess_$VALUES;

void mark_rhino_ScriptableObject$SlotAccess(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_ScriptableObject$SlotAccess_QUERY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_QUERY)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_QUERY, mark, depth + 1);
		if (SF_rhino_ScriptableObject$SlotAccess_MODIFY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY, mark, depth + 1);
		if (SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST, mark, depth + 1);
		if (SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER, mark, depth + 1);
		if (SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA, mark, depth + 1);
		if (SF_rhino_ScriptableObject$SlotAccess_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_ScriptableObject$SlotAccess_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_ScriptableObject$SlotAccess_$VALUES, mark, depth + 1);
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
	auto self = (rhino_ScriptableObject$SlotAccess *) object;
}

jobject SM_rhino_ScriptableObject$SlotAccess_values_R_Array1_rhino_ScriptableObject$SlotAccess(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$SlotAccess:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	{
	LINE_NUMBER(93);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_ScriptableObject$SlotAccess, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_ScriptableObject$SlotAccess_valueOf_java_lang_String_R_rhino_ScriptableObject$SlotAccess(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$SlotAccess:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_ScriptableObject$SlotAccess)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_ScriptableObject$SlotAccess, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$SlotAccess:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(93);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_ScriptableObject$SlotAccess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ScriptableObject$SlotAccess:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	{
	LINE_NUMBER(94);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$SlotAccess);
	init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"QUERY"_j))), (jint(0)));
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_QUERY = sp[0].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$SlotAccess);
	init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MODIFY"_j))), (jint(1)));
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_MODIFY = sp[0].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$SlotAccess);
	init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MODIFY_CONST"_j))), (jint(2)));
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST = sp[0].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$SlotAccess);
	init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MODIFY_GETTER_SETTER"_j))), (jint(3)));
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER = sp[0].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ScriptableObject$SlotAccess);
	init_rhino_ScriptableObject$SlotAccess_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CONVERT_ACCESSOR_TO_DATA"_j))), (jint(4)));
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_ScriptableObject$SlotAccess, (jint(5)));
	jint temp0 = jint(0);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_QUERY;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	sp[1].o = (jobject)SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_rhino_ScriptableObject$SlotAccess(ctx);
	SF_rhino_ScriptableObject$SlotAccess_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ScriptableObject$SlotAccess[] {
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
	{ "QUERY", &class_rhino_ScriptableObject$SlotAccess, (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_QUERY, "Lrhino/ScriptableObject$SlotAccess;", 16409 },
	{ "MODIFY", &class_rhino_ScriptableObject$SlotAccess, (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_MODIFY, "Lrhino/ScriptableObject$SlotAccess;", 16409 },
	{ "MODIFY_CONST", &class_rhino_ScriptableObject$SlotAccess, (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_MODIFY_CONST, "Lrhino/ScriptableObject$SlotAccess;", 16409 },
	{ "MODIFY_GETTER_SETTER", &class_rhino_ScriptableObject$SlotAccess, (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_MODIFY_GETTER_SETTER, "Lrhino/ScriptableObject$SlotAccess;", 16409 },
	{ "CONVERT_ACCESSOR_TO_DATA", &class_rhino_ScriptableObject$SlotAccess, (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_CONVERT_ACCESSOR_TO_DATA, "Lrhino/ScriptableObject$SlotAccess;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_ScriptableObject$SlotAccess, 1), (intptr_t) &SF_rhino_ScriptableObject$SlotAccess_$VALUES, "[Lrhino/ScriptableObject$SlotAccess;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_ScriptableObject$SlotAccess_values_R_Array1_rhino_ScriptableObject$SlotAccess, 0, "()[Lrhino/ScriptableObject$SlotAccess;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_ScriptableObject$SlotAccess_valueOf_java_lang_String_R_rhino_ScriptableObject$SlotAccess, 0, "(Ljava/lang/String;)Lrhino/ScriptableObject$SlotAccess;", 9 },
	{ "<init>", (intptr_t) init_rhino_ScriptableObject$SlotAccess_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_ScriptableObject$SlotAccess, 0, "()V", 8 },
};

Class class_rhino_ScriptableObject$SlotAccess{
		.nativeName = (intptr_t) "rhino/ScriptableObject$SlotAccess",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_ScriptableObject$SlotAccess),
		.classVtable = (intptr_t) vtable_rhino_ScriptableObject$SlotAccess,
		.staticInitializer = (intptr_t) clinit_rhino_ScriptableObject$SlotAccess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ScriptableObject$SlotAccess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ScriptableObject,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ScriptableObject$SlotAccess = registerClass(&class_rhino_ScriptableObject$SlotAccess);

}

