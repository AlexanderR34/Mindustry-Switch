#include "java/util/Locale_Category.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Locale_Category.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/util/Locale.h"

extern "C" {

jobject SF_java_util_Locale$Category_DISPLAY;
jobject SF_java_util_Locale$Category_FORMAT;
jobject SF_java_util_Locale$Category_$VALUES;

void mark_java_util_Locale$Category(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_Locale$Category_DISPLAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale$Category_DISPLAY)->clazz)->markFunction)((jobject) SF_java_util_Locale$Category_DISPLAY, mark, depth + 1);
		if (SF_java_util_Locale$Category_FORMAT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale$Category_FORMAT)->clazz)->markFunction)((jobject) SF_java_util_Locale$Category_FORMAT, mark, depth + 1);
		if (SF_java_util_Locale$Category_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_Locale$Category_$VALUES)->clazz)->markFunction)((jobject) SF_java_util_Locale$Category_$VALUES, mark, depth + 1);
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
	auto self = (java_util_Locale$Category *) object;
	if (self->F_languageKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_languageKey)->clazz)->markFunction)((jobject) self->F_languageKey, mark, depth + 1);
	if (self->F_scriptKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scriptKey)->clazz)->markFunction)((jobject) self->F_scriptKey, mark, depth + 1);
	if (self->F_countryKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_countryKey)->clazz)->markFunction)((jobject) self->F_countryKey, mark, depth + 1);
	if (self->F_variantKey)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variantKey)->clazz)->markFunction)((jobject) self->F_variantKey, mark, depth + 1);
}

jobject SM_java_util_Locale$Category_values_R_Array1_java_util_Locale$Category(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale$Category:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale$Category(ctx);
	{
	LINE_NUMBER(209);
	clinit_java_util_Locale$Category(ctx);
	sp[0].o = (jobject)SF_java_util_Locale$Category_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_util_Locale$Category, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Locale$Category_valueOf_java_lang_String_R_java_util_Locale$Category(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale$Category:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale$Category(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_util_Locale$Category)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_Locale$Category, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_util_Locale$Category_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale$Category:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale$Category(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(229);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(230);
	((java_util_Locale$Category *) NULL_CHECK((frame[0].o)))->F_languageKey = (jref) (frame[3].o);
	LINE_NUMBER(231);
	((java_util_Locale$Category *) NULL_CHECK((frame[0].o)))->F_scriptKey = (jref) (frame[4].o);
	LINE_NUMBER(232);
	((java_util_Locale$Category *) NULL_CHECK((frame[0].o)))->F_countryKey = (jref) (frame[5].o);
	LINE_NUMBER(233);
	((java_util_Locale$Category *) NULL_CHECK((frame[0].o)))->F_variantKey = (jref) (frame[6].o);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Locale$Category_$values_R_Array1_java_util_Locale$Category(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale$Category:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale$Category(ctx);
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_Locale$Category, (jint(2)));
	jint temp0 = jint(0);
	clinit_java_util_Locale$Category(ctx);
	sp[1].o = (jobject)SF_java_util_Locale$Category_DISPLAY;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_util_Locale$Category(ctx);
	sp[1].o = (jobject)SF_java_util_Locale$Category_FORMAT;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_Locale$Category(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Locale$Category:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Locale$Category(ctx);
	{
	LINE_NUMBER(215);
	clinit_java_util_Locale$Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale$Category);
	init_java_util_Locale$Category_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DISPLAY"_j))), (jint(0)), (((jobject) createStringLiteral(ctx, u8"user.language.display"_j))), (((jobject) createStringLiteral(ctx, u8"user.script.display"_j))), (((jobject) createStringLiteral(ctx, u8"user.country.display"_j))), (((jobject) createStringLiteral(ctx, u8"user.variant.display"_j))));
	clinit_java_util_Locale$Category(ctx);
	SF_java_util_Locale$Category_DISPLAY = sp[0].o;
	LINE_NUMBER(224);
	clinit_java_util_Locale$Category(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Locale$Category);
	init_java_util_Locale$Category_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FORMAT"_j))), (jint(1)), (((jobject) createStringLiteral(ctx, u8"user.language.format"_j))), (((jobject) createStringLiteral(ctx, u8"user.script.format"_j))), (((jobject) createStringLiteral(ctx, u8"user.country.format"_j))), (((jobject) createStringLiteral(ctx, u8"user.variant.format"_j))));
	clinit_java_util_Locale$Category(ctx);
	SF_java_util_Locale$Category_FORMAT = sp[0].o;
	LINE_NUMBER(209);
	sp[0].o = (jobject)SM_java_util_Locale$Category_$values_R_Array1_java_util_Locale$Category(ctx);
	clinit_java_util_Locale$Category(ctx);
	SF_java_util_Locale$Category_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Locale$Category[] {
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
	{ "DISPLAY", &class_java_util_Locale$Category, (intptr_t) &SF_java_util_Locale$Category_DISPLAY, "Ljava/util/Locale$Category;", 16409 },
	{ "FORMAT", &class_java_util_Locale$Category, (intptr_t) &SF_java_util_Locale$Category_FORMAT, "Ljava/util/Locale$Category;", 16409 },
	{ "languageKey", &class_java_lang_String, offsetof(java_util_Locale$Category, F_languageKey), "Ljava/lang/String;", 16 },
	{ "scriptKey", &class_java_lang_String, offsetof(java_util_Locale$Category, F_scriptKey), "Ljava/lang/String;", 16 },
	{ "countryKey", &class_java_lang_String, offsetof(java_util_Locale$Category, F_countryKey), "Ljava/lang/String;", 16 },
	{ "variantKey", &class_java_lang_String, offsetof(java_util_Locale$Category, F_variantKey), "Ljava/lang/String;", 16 },
	{ "$VALUES", getArrayClass(&class_java_util_Locale$Category, 1), (intptr_t) &SF_java_util_Locale$Category_$VALUES, "[Ljava/util/Locale$Category;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_util_Locale$Category_values_R_Array1_java_util_Locale$Category, 0, "()[Ljava/util/Locale$Category;", 9 },
	{ "valueOf", (intptr_t) SM_java_util_Locale$Category_valueOf_java_lang_String_R_java_util_Locale$Category, 0, "(Ljava/lang/String;)Ljava/util/Locale$Category;", 9 },
	{ "<init>", (intptr_t) init_java_util_Locale$Category_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 2 },
	{ "$values", (intptr_t) SM_java_util_Locale$Category_$values_R_Array1_java_util_Locale$Category, 0, "()[Ljava/util/Locale$Category;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_util_Locale$Category, 0, "()V", 8 },
};

Class class_java_util_Locale$Category{
		.nativeName = (intptr_t) "java/util/Locale$Category",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_util_Locale$Category),
		.classVtable = (intptr_t) vtable_java_util_Locale$Category,
		.staticInitializer = (intptr_t) clinit_java_util_Locale$Category,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Locale$Category,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_Locale,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Locale$Category = registerClass(&class_java_util_Locale$Category);

}

