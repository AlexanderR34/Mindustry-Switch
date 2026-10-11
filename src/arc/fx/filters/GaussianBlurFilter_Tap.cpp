#include "arc/fx/filters/GaussianBlurFilter_Tap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/fx/filters/GaussianBlurFilter.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/fx/filters/GaussianBlurFilter_Tap.h"

extern "C" {

jobject SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3;
jobject SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5;
jobject SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES;

void mark_arc_fx_filters_GaussianBlurFilter$Tap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5, mark, depth + 1);
		if (SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES)->clazz)->markFunction)((jobject) SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES, mark, depth + 1);
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
	auto self = (arc_fx_filters_GaussianBlurFilter$Tap *) object;
}

jobject SM_arc_fx_filters_GaussianBlurFilter$Tap_values_R_Array1_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$Tap:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	{
	LINE_NUMBER(235);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[0].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_fx_filters_GaussianBlurFilter$Tap, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_filters_GaussianBlurFilter$Tap_valueOf_java_lang_String_R_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$Tap:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_fx_filters_GaussianBlurFilter$Tap)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_fx_filters_GaussianBlurFilter$Tap, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_fx_filters_GaussianBlurFilter$Tap_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$Tap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(243);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(244);
	((arc_fx_filters_GaussianBlurFilter$Tap *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].i);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_fx_filters_GaussianBlurFilter$Tap_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$Tap:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)createArray(ctx, &class_arc_fx_filters_GaussianBlurFilter$Tap, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_fx_filters_GaussianBlurFilter$Tap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter$Tap:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	{
	LINE_NUMBER(236);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$Tap);
	init_arc_fx_filters_GaussianBlurFilter$Tap_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tap3x3"_j))), (jint(0)), (jint(1)));
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3 = sp[0].o;
	LINE_NUMBER(237);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_fx_filters_GaussianBlurFilter$Tap);
	init_arc_fx_filters_GaussianBlurFilter$Tap_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tap5x5"_j))), (jint(1)), (jint(2)));
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5 = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)SM_arc_fx_filters_GaussianBlurFilter$Tap_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	clinit_arc_fx_filters_GaussianBlurFilter$Tap(ctx);
	SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_GaussianBlurFilter$Tap[] {
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
	{ "tap3x3", &class_arc_fx_filters_GaussianBlurFilter$Tap, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$Tap_tap3x3, "Larc/fx/filters/GaussianBlurFilter$Tap;", 16409 },
	{ "tap5x5", &class_arc_fx_filters_GaussianBlurFilter$Tap, (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$Tap_tap5x5, "Larc/fx/filters/GaussianBlurFilter$Tap;", 16409 },
	{ "radius", &class_int, offsetof(arc_fx_filters_GaussianBlurFilter$Tap, F_radius), "I", 17 },
	{ "$VALUES", getArrayClass(&class_arc_fx_filters_GaussianBlurFilter$Tap, 1), (intptr_t) &SF_arc_fx_filters_GaussianBlurFilter$Tap_$VALUES, "[Larc/fx/filters/GaussianBlurFilter$Tap;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$Tap_values_R_Array1_arc_fx_filters_GaussianBlurFilter$Tap, 0, "()[Larc/fx/filters/GaussianBlurFilter$Tap;", 9 },
	{ "valueOf", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$Tap_valueOf_java_lang_String_R_arc_fx_filters_GaussianBlurFilter$Tap, 0, "(Ljava/lang/String;)Larc/fx/filters/GaussianBlurFilter$Tap;", 9 },
	{ "<init>", (intptr_t) init_arc_fx_filters_GaussianBlurFilter$Tap_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "$values", (intptr_t) SM_arc_fx_filters_GaussianBlurFilter$Tap_$values_R_Array1_arc_fx_filters_GaussianBlurFilter$Tap, 0, "()[Larc/fx/filters/GaussianBlurFilter$Tap;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_fx_filters_GaussianBlurFilter$Tap, 0, "()V", 8 },
};

Class class_arc_fx_filters_GaussianBlurFilter$Tap{
		.nativeName = (intptr_t) "arc/fx/filters/GaussianBlurFilter$Tap",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_fx_filters_GaussianBlurFilter$Tap),
		.classVtable = (intptr_t) vtable_arc_fx_filters_GaussianBlurFilter$Tap,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_GaussianBlurFilter$Tap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_GaussianBlurFilter$Tap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_fx_filters_GaussianBlurFilter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_GaussianBlurFilter$Tap = registerClass(&class_arc_fx_filters_GaussianBlurFilter$Tap);

}

