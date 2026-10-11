#include "mindustry/logic/QueryShape.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/logic/QueryShape.h"

extern "C" {

jobject SF_mindustry_logic_QueryShape_circle;
jobject SF_mindustry_logic_QueryShape_rect;
jobject SF_mindustry_logic_QueryShape_$VALUES;

void mark_mindustry_logic_QueryShape(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_QueryShape_circle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_QueryShape_circle)->clazz)->markFunction)((jobject) SF_mindustry_logic_QueryShape_circle, mark, depth + 1);
		if (SF_mindustry_logic_QueryShape_rect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_QueryShape_rect)->clazz)->markFunction)((jobject) SF_mindustry_logic_QueryShape_rect, mark, depth + 1);
		if (SF_mindustry_logic_QueryShape_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_QueryShape_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_QueryShape_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_QueryShape *) object;
}

jobject SM_mindustry_logic_QueryShape_values_R_Array1_mindustry_logic_QueryShape(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/QueryShape:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_QueryShape(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_QueryShape(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_QueryShape_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_QueryShape, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_QueryShape_valueOf_java_lang_String_R_mindustry_logic_QueryShape(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/QueryShape:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_QueryShape(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_QueryShape)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_QueryShape, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_QueryShape_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/QueryShape:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_QueryShape(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_QueryShape_$values_R_Array1_mindustry_logic_QueryShape(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/QueryShape:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_QueryShape(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_QueryShape, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_circle;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_QueryShape(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_QueryShape_rect;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_QueryShape(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/QueryShape:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_QueryShape(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_QueryShape(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_QueryShape);
	init_mindustry_logic_QueryShape_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circle"_j))), (jint(0)));
	clinit_mindustry_logic_QueryShape(ctx);
	SF_mindustry_logic_QueryShape_circle = sp[0].o;
	clinit_mindustry_logic_QueryShape(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_QueryShape);
	init_mindustry_logic_QueryShape_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rect"_j))), (jint(1)));
	clinit_mindustry_logic_QueryShape(ctx);
	SF_mindustry_logic_QueryShape_rect = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_QueryShape_$values_R_Array1_mindustry_logic_QueryShape(ctx);
	clinit_mindustry_logic_QueryShape(ctx);
	SF_mindustry_logic_QueryShape_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_QueryShape[] {
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
	{ "circle", &class_mindustry_logic_QueryShape, (intptr_t) &SF_mindustry_logic_QueryShape_circle, "Lmindustry/logic/QueryShape;", 16409 },
	{ "rect", &class_mindustry_logic_QueryShape, (intptr_t) &SF_mindustry_logic_QueryShape_rect, "Lmindustry/logic/QueryShape;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_QueryShape, 1), (intptr_t) &SF_mindustry_logic_QueryShape_$VALUES, "[Lmindustry/logic/QueryShape;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_QueryShape_values_R_Array1_mindustry_logic_QueryShape, 0, "()[Lmindustry/logic/QueryShape;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_QueryShape_valueOf_java_lang_String_R_mindustry_logic_QueryShape, 0, "(Ljava/lang/String;)Lmindustry/logic/QueryShape;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_QueryShape_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_QueryShape_$values_R_Array1_mindustry_logic_QueryShape, 0, "()[Lmindustry/logic/QueryShape;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_QueryShape, 0, "()V", 8 },
};

Class class_mindustry_logic_QueryShape{
		.nativeName = (intptr_t) "mindustry/logic/QueryShape",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_QueryShape),
		.classVtable = (intptr_t) vtable_mindustry_logic_QueryShape,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_QueryShape,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_QueryShape,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_QueryShape = registerClass(&class_mindustry_logic_QueryShape);

}
