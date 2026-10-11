#include "arc/fx/filters/GaussianBlurFilter_BlurType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/fx/filters/GaussianBlurFilter.h"
#include "arc/fx/filters/GaussianBlurFilter_BlurType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/fx/filters/GaussianBlurFilter_Tap.h"

extern "C" {

jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3;
jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b;
jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5;
jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b;
jobject SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES;

void mark_arc_fx_filters_GaussianBlurFilter$BlurType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES, mark, depth + 1);
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
	auto self = (arc_fx_filters_GaussianBlurFilter$BlurType *) object;
	if (self->F_tap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tap)->clazz)->markFunction)((jobject) self->F_tap, mark, depth + 1);
}

jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$BlurType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	{
	LINE_NUMBER(248);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[0].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_fx_filters_GaussianBlurFilter$BlurType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_valueOf_java_lang_String_R_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$BlurType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_fx_filters_GaussianBlurFilter$BlurType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$BlurType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(255);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(256);
	((arc_fx_filters_GaussianBlurFilter$BlurType *) NULL_CHECK((frame[0].o)))->F_tap = (jref) (frame[3].o);
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_filters_GaussianBlurFilter$BlurType_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$BlurType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)createArray(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$BlurType:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	{
	LINE_NUMBER(249);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gaussian3x3"_j));
	jint temp0 = jint(0);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[2].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3;
	init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3 = sp[0].o;
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gaussian3x3b"_j));
	jint temp1 = jint(1);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[2].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3;
	init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b = sp[0].o;
	LINE_NUMBER(250);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gaussian5x5"_j));
	jint temp2 = jint(2);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[2].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5;
	init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5 = sp[0].o;
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$BlurType);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gaussian5x5b"_j));
	jint temp3 = jint(3);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[2].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5;
	init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b = sp[0].o;
	LINE_NUMBER(248);
	sp[0].o = (jobject)SM_arc_fx_filters_GaussianBlurFilter$BlurType_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_GaussianBlurFilter$BlurType[] {
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
	{ "gaussian3x3", &class_arc_fx_filters_GaussianBlurFilter$BlurType, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3, "Larc/fx/filters/GaussianBlurFilter$BlurType;", 16409 },
	{ "gaussian3x3b", &class_arc_fx_filters_GaussianBlurFilter$BlurType, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian3x3b, "Larc/fx/filters/GaussianBlurFilter$BlurType;", 16409 },
	{ "gaussian5x5", &class_arc_fx_filters_GaussianBlurFilter$BlurType, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5, "Larc/fx/filters/GaussianBlurFilter$BlurType;", 16409 },
	{ "gaussian5x5b", &class_arc_fx_filters_GaussianBlurFilter$BlurType, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5b, "Larc/fx/filters/GaussianBlurFilter$BlurType;", 16409 },
	{ "tap", &class_arc_fx_filters_GaussianBlurFilter$Tap, offsetof(arc_fx_filters_GaussianBlurFilter$BlurType, F_tap), "Larc/fx/filters/GaussianBlurFilter$Tap;", 17 },
	{ "$VALUES", getArrayClass(&class_arc_fx_filters_GaussianBlurFilter$BlurType, 1), (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$BlurType_$VALUES, "[Larc/fx/filters/GaussianBlurFilter$BlurType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$BlurType_values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType, 0, "()[Larc/fx/filters/GaussianBlurFilter$BlurType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$BlurType_valueOf_java_lang_String_R_arc_fx_filters_GaussianBlurFilter$BlurType, 0, "(Ljava/lang/String;)Larc/fx/filters/GaussianBlurFilter$BlurType;", 9 },
	{ "<init>", (intptr_t) init_arc_fx_filters_GaussianBlurFilter$BlurType_java_lang_String_int_arc_fx_filters_GaussianBlurFilter$Tap, 0, "(Ljava/lang/String;ILarc/fx/filters/GaussianBlurFilter$Tap;)V", 2 },
	{ "$values", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$BlurType_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$BlurType, 0, "()[Larc/fx/filters/GaussianBlurFilter$BlurType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_fx_filters_GaussianBlurFilter$BlurType, 0, "()V", 8 },
};

Class class_arc_fx_filters_GaussianBlurFilter$BlurType{
		.nativeName = (intptr_t) "arc/fx/filters/GaussianBlurFilter$BlurType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_fx_filters_GaussianBlurFilter$BlurType),
		.classVtable = (intptr_t) vtable_arc_fx_filters_GaussianBlurFilter$BlurType,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_GaussianBlurFilter$BlurType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_GaussianBlurFilter$BlurType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_fx_filters_GaussianBlurFilter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_GaussianBlurFilter$BlurType = registerClass(&class_arc_fx_filters_GaussianBlurFilter$BlurType);

}

