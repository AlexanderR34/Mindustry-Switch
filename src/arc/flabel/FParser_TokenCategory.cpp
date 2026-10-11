#include "arc/flabel/FParser_TokenCategory.h"
#include "java/lang/Object.h"
#include "arc/flabel/FParser.h"
#include "java/lang/String.h"
#include "arc/flabel/FParser_TokenCategory.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_flabel_FParser$TokenCategory_wait;
jobject SF_arc_flabel_FParser$TokenCategory_speed;
jobject SF_arc_flabel_FParser$TokenCategory_color;
jobject SF_arc_flabel_FParser$TokenCategory_variable;
jobject SF_arc_flabel_FParser$TokenCategory_event;
jobject SF_arc_flabel_FParser$TokenCategory_reset;
jobject SF_arc_flabel_FParser$TokenCategory_skip;
jobject SF_arc_flabel_FParser$TokenCategory_effectStart;
jobject SF_arc_flabel_FParser$TokenCategory_effectEnd;
jobject SF_arc_flabel_FParser$TokenCategory_$VALUES;

void mark_arc_flabel_FParser$TokenCategory(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_flabel_FParser$TokenCategory_wait)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_wait)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_wait, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_speed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_speed)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_speed, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_color)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_color, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_variable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_variable)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_variable, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_event)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_event)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_event, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_reset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_reset)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_reset, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_skip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_skip)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_skip, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_effectStart)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_effectStart)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_effectStart, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_effectEnd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_effectEnd)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_effectEnd, mark, depth + 1);
		if (SF_arc_flabel_FParser$TokenCategory_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$TokenCategory_$VALUES)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$TokenCategory_$VALUES, mark, depth + 1);
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
	auto self = (arc_flabel_FParser$TokenCategory *) object;
}

jobject SM_arc_flabel_FParser$TokenCategory_values_R_Array1_arc_flabel_FParser$TokenCategory(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenCategory:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenCategory(ctx);
	{
	LINE_NUMBER(285);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$TokenCategory_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_flabel_FParser$TokenCategory, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser$TokenCategory_valueOf_java_lang_String_R_arc_flabel_FParser$TokenCategory(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenCategory:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenCategory(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_flabel_FParser$TokenCategory)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_flabel_FParser$TokenCategory, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_flabel_FParser$TokenCategory_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenCategory:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenCategory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(285);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser$TokenCategory_$values_R_Array1_arc_flabel_FParser$TokenCategory(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenCategory:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenCategory(ctx);
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)createArray(ctx, &class_arc_flabel_FParser$TokenCategory, (9));
	jint temp0 = jint(0);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_wait;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_variable;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_event;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_reset;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_skip;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_effectStart;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_effectEnd;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_flabel_FParser$TokenCategory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$TokenCategory:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$TokenCategory(ctx);
	{
	LINE_NUMBER(286);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wait"_j))), (jint(0)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_wait = sp[0].o;
	LINE_NUMBER(287);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"speed"_j))), (jint(1)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_speed = sp[0].o;
	LINE_NUMBER(288);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"color"_j))), (jint(2)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_color = sp[0].o;
	LINE_NUMBER(289);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"variable"_j))), (jint(3)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_variable = sp[0].o;
	LINE_NUMBER(290);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"event"_j))), (jint(4)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_event = sp[0].o;
	LINE_NUMBER(291);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reset"_j))), (jint(5)));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_reset = sp[0].o;
	LINE_NUMBER(292);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"skip"_j))), (6));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_skip = sp[0].o;
	LINE_NUMBER(293);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"effectStart"_j))), (7));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_effectStart = sp[0].o;
	LINE_NUMBER(294);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenCategory);
	init_arc_flabel_FParser$TokenCategory_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"effectEnd"_j))), (8));
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_effectEnd = sp[0].o;
	LINE_NUMBER(285);
	sp[0].o = (jobject)SM_arc_flabel_FParser$TokenCategory_$values_R_Array1_arc_flabel_FParser$TokenCategory(ctx);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	SF_arc_flabel_FParser$TokenCategory_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FParser$TokenCategory[] {
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
	{ "wait", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_wait, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "speed", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_speed, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "color", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_color, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "variable", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_variable, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "event", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_event, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "reset", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_reset, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "skip", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_skip, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "effectStart", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_effectStart, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "effectEnd", &class_arc_flabel_FParser$TokenCategory, (intptr_t) &SF_arc_flabel_FParser$TokenCategory_effectEnd, "Larc/flabel/FParser$TokenCategory;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_flabel_FParser$TokenCategory, 1), (intptr_t) &SF_arc_flabel_FParser$TokenCategory_$VALUES, "[Larc/flabel/FParser$TokenCategory;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_flabel_FParser$TokenCategory_values_R_Array1_arc_flabel_FParser$TokenCategory, 0, "()[Larc/flabel/FParser$TokenCategory;", 9 },
	{ "valueOf", (intptr_t) SM_arc_flabel_FParser$TokenCategory_valueOf_java_lang_String_R_arc_flabel_FParser$TokenCategory, 0, "(Ljava/lang/String;)Larc/flabel/FParser$TokenCategory;", 9 },
	{ "<init>", (intptr_t) init_arc_flabel_FParser$TokenCategory_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_flabel_FParser$TokenCategory_$values_R_Array1_arc_flabel_FParser$TokenCategory, 0, "()[Larc/flabel/FParser$TokenCategory;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_flabel_FParser$TokenCategory, 0, "()V", 8 },
};

Class class_arc_flabel_FParser$TokenCategory{
		.nativeName = (intptr_t) "arc/flabel/FParser$TokenCategory",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_flabel_FParser$TokenCategory),
		.classVtable = (intptr_t) vtable_arc_flabel_FParser$TokenCategory,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FParser$TokenCategory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FParser$TokenCategory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_flabel_FParser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FParser$TokenCategory = registerClass(&class_arc_flabel_FParser$TokenCategory);

}

