#include "arc/graphics/Pixmap_Format.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/graphics/Pixmap_Format.h"

extern "C" {

jobject SF_arc_graphics_Pixmap$Format_alpha;
jobject SF_arc_graphics_Pixmap$Format_intensity;
jobject SF_arc_graphics_Pixmap$Format_luminanceAlpha;
jobject SF_arc_graphics_Pixmap$Format_rgb565;
jobject SF_arc_graphics_Pixmap$Format_rgba4444;
jobject SF_arc_graphics_Pixmap$Format_rgb888;
jobject SF_arc_graphics_Pixmap$Format_rgba8888;
jobject SF_arc_graphics_Pixmap$Format_all;
jobject SF_arc_graphics_Pixmap$Format_$VALUES;

void mark_arc_graphics_Pixmap$Format(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Pixmap$Format_alpha)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_alpha)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_alpha, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_intensity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_intensity)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_intensity, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_luminanceAlpha)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_luminanceAlpha)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_luminanceAlpha, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_rgb565)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_rgb565)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_rgb565, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_rgba4444)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_rgba4444)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_rgba4444, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_rgb888)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_rgb888)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_rgb888, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_rgba8888)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_rgba8888)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_rgba8888, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_all)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_all, mark, depth + 1);
		if (SF_arc_graphics_Pixmap$Format_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmap$Format_$VALUES)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmap$Format_$VALUES, mark, depth + 1);
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
	auto self = (arc_graphics_Pixmap$Format *) object;
}

jobject SM_arc_graphics_Pixmap$Format_values_R_Array1_arc_graphics_Pixmap$Format(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap$Format:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(804);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmap$Format_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_Pixmap$Format, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmap$Format_valueOf_java_lang_String_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap$Format:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap$Format(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_graphics_Pixmap$Format)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Pixmap$Format, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap$Format:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap$Format(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(816);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(817);
	((arc_graphics_Pixmap$Format *) NULL_CHECK((frame[0].o)))->F_glFormat = (frame[4].i);
	LINE_NUMBER(818);
	((arc_graphics_Pixmap$Format *) NULL_CHECK((frame[0].o)))->F_glType = (frame[3].i);
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmap$Format_$values_R_Array1_arc_graphics_Pixmap$Format(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap$Format:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Pixmap$Format, (7));
	jint temp0 = jint(0);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_alpha;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_intensity;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_luminanceAlpha;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgb565;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba4444;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgb888;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmap$Format_rgba8888;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Pixmap$Format(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmap$Format:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmap$Format(ctx);
	{
	LINE_NUMBER(805);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"alpha"_j))), (jint(0)), (5121), (6406));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_alpha = sp[0].o;
	LINE_NUMBER(806);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"intensity"_j))), (jint(1)), (5121), (6406));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_intensity = sp[0].o;
	LINE_NUMBER(807);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"luminanceAlpha"_j))), (jint(2)), (5121), (6410));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_luminanceAlpha = sp[0].o;
	LINE_NUMBER(808);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rgb565"_j))), (jint(3)), (jint(33635)), (6407));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_rgb565 = sp[0].o;
	LINE_NUMBER(809);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rgba4444"_j))), (jint(4)), (jint(32819)), (6408));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_rgba4444 = sp[0].o;
	LINE_NUMBER(810);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rgb888"_j))), (jint(5)), (5121), (6407));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_rgb888 = sp[0].o;
	LINE_NUMBER(811);
	clinit_arc_graphics_Pixmap$Format(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap$Format);
	init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rgba8888"_j))), (6), (5121), (6408));
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_rgba8888 = sp[0].o;
	LINE_NUMBER(804);
	sp[0].o = (jobject)SM_arc_graphics_Pixmap$Format_$values_R_Array1_arc_graphics_Pixmap$Format(ctx);
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_$VALUES = sp[0].o;
	LINE_NUMBER(813);
	sp[0].o = (jobject)SM_arc_graphics_Pixmap$Format_values_R_Array1_arc_graphics_Pixmap$Format(ctx);
	clinit_arc_graphics_Pixmap$Format(ctx);
	SF_arc_graphics_Pixmap$Format_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Pixmap$Format[] {
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
	{ "alpha", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_alpha, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "intensity", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_intensity, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "luminanceAlpha", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_luminanceAlpha, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "rgb565", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_rgb565, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "rgba4444", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_rgba4444, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "rgb888", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_rgb888, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "rgba8888", &class_arc_graphics_Pixmap$Format, (intptr_t) &SF_arc_graphics_Pixmap$Format_rgba8888, "Larc/graphics/Pixmap$Format;", 16409 },
	{ "all", getArrayClass(&class_arc_graphics_Pixmap$Format, 1), (intptr_t) &SF_arc_graphics_Pixmap$Format_all, "[Larc/graphics/Pixmap$Format;", 25 },
	{ "glFormat", &class_int, offsetof(arc_graphics_Pixmap$Format, F_glFormat), "I", 17 },
	{ "glType", &class_int, offsetof(arc_graphics_Pixmap$Format, F_glType), "I", 17 },
	{ "$VALUES", getArrayClass(&class_arc_graphics_Pixmap$Format, 1), (intptr_t) &SF_arc_graphics_Pixmap$Format_$VALUES, "[Larc/graphics/Pixmap$Format;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_graphics_Pixmap$Format_values_R_Array1_arc_graphics_Pixmap$Format, 0, "()[Larc/graphics/Pixmap$Format;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Pixmap$Format_valueOf_java_lang_String_R_arc_graphics_Pixmap$Format, 0, "(Ljava/lang/String;)Larc/graphics/Pixmap$Format;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int, 0, "(Ljava/lang/String;III)V", 2 },
	{ "$values", (intptr_t) SM_arc_graphics_Pixmap$Format_$values_R_Array1_arc_graphics_Pixmap$Format, 0, "()[Larc/graphics/Pixmap$Format;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Pixmap$Format, 0, "()V", 8 },
};

Class class_arc_graphics_Pixmap$Format{
		.nativeName = (intptr_t) "arc/graphics/Pixmap$Format",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_graphics_Pixmap$Format),
		.classVtable = (intptr_t) vtable_arc_graphics_Pixmap$Format,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Pixmap$Format,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Pixmap$Format,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_Pixmap,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Pixmap$Format = registerClass(&class_arc_graphics_Pixmap$Format);

}

