#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "java/lang/Enum.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_graphics_Texture$TextureFilter_nearest;
jobject SF_arc_graphics_Texture$TextureFilter_linear;
jobject SF_arc_graphics_Texture$TextureFilter_mipMap;
jobject SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest;
jobject SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest;
jobject SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear;
jobject SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear;
jobject SF_arc_graphics_Texture$TextureFilter_all;
jobject SF_arc_graphics_Texture$TextureFilter_$VALUES;

void mark_arc_graphics_Texture$TextureFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Texture$TextureFilter_nearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_nearest)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_nearest, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_linear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_linear)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_linear, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_mipMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_mipMap)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_mipMap, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_all)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_all, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureFilter_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureFilter_$VALUES)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureFilter_$VALUES, mark, depth + 1);
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
	auto self = (arc_graphics_Texture$TextureFilter *) object;
}

jobject SM_arc_graphics_Texture$TextureFilter_values_R_Array1_arc_graphics_Texture$TextureFilter(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(119);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureFilter_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_Texture$TextureFilter, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Texture$TextureFilter_valueOf_java_lang_String_R_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_graphics_Texture$TextureFilter)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture$TextureFilter, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(157);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(158);
	((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum = (frame[3].i);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:isMipMap", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	if (((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum) == (9728)) goto label_1;
	}
	{
	if (((jint)((arc_graphics_Texture$TextureFilter *) NULL_CHECK((frame[0].o)))->F_glEnum) == (9729)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Texture$TextureFilter_$values_R_Array1_arc_graphics_Texture$TextureFilter(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Texture$TextureFilter, (7));
	jint temp0 = jint(0);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_nearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMap;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Texture$TextureFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureFilter:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureFilter(ctx);
	{
	LINE_NUMBER(121);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nearest"_j))), (jint(0)), (9728));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_nearest = sp[0].o;
	LINE_NUMBER(124);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))), (jint(1)), (9729));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_linear = sp[0].o;
	LINE_NUMBER(127);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mipMap"_j))), (jint(2)), (9987));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_mipMap = sp[0].o;
	LINE_NUMBER(133);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mipMapNearestNearest"_j))), (jint(3)), (9984));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest = sp[0].o;
	LINE_NUMBER(139);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mipMapLinearNearest"_j))), (jint(4)), (9985));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest = sp[0].o;
	LINE_NUMBER(145);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mipMapNearestLinear"_j))), (jint(5)), (9986));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear = sp[0].o;
	LINE_NUMBER(151);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureFilter);
	init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mipMapLinearLinear"_j))), (6), (9987));
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_arc_graphics_Texture$TextureFilter_$values_R_Array1_arc_graphics_Texture$TextureFilter(ctx);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_$VALUES = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_arc_graphics_Texture$TextureFilter_values_R_Array1_arc_graphics_Texture$TextureFilter(ctx);
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	SF_arc_graphics_Texture$TextureFilter_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Texture$TextureFilter[] {
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
	(void *) M_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean,
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
	{ "isMipMap", "()Z" },
};

static FieldMetadata fields[] {
	{ "nearest", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_nearest, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "linear", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_linear, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "mipMap", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_mipMap, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "mipMapNearestNearest", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_mipMapNearestNearest, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "mipMapLinearNearest", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_mipMapLinearNearest, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "mipMapNearestLinear", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_mipMapNearestLinear, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "mipMapLinearLinear", &class_arc_graphics_Texture$TextureFilter, (intptr_t) &SF_arc_graphics_Texture$TextureFilter_mipMapLinearLinear, "Larc/graphics/Texture$TextureFilter;", 16409 },
	{ "all", getArrayClass(&class_arc_graphics_Texture$TextureFilter, 1), (intptr_t) &SF_arc_graphics_Texture$TextureFilter_all, "[Larc/graphics/Texture$TextureFilter;", 25 },
	{ "glEnum", &class_int, offsetof(arc_graphics_Texture$TextureFilter, F_glEnum), "I", 17 },
	{ "$VALUES", getArrayClass(&class_arc_graphics_Texture$TextureFilter, 1), (intptr_t) &SF_arc_graphics_Texture$TextureFilter_$VALUES, "[Larc/graphics/Texture$TextureFilter;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_graphics_Texture$TextureFilter_values_R_Array1_arc_graphics_Texture$TextureFilter, 0, "()[Larc/graphics/Texture$TextureFilter;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Texture$TextureFilter_valueOf_java_lang_String_R_arc_graphics_Texture$TextureFilter, 0, "(Ljava/lang/String;)Larc/graphics/Texture$TextureFilter;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture$TextureFilter_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "isMipMap", (intptr_t) M_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean, VTABLE_arc_graphics_Texture$TextureFilter_isMipMap_R_boolean, "()Z", 1 },
	{ "$values", (intptr_t) SM_arc_graphics_Texture$TextureFilter_$values_R_Array1_arc_graphics_Texture$TextureFilter, 0, "()[Larc/graphics/Texture$TextureFilter;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Texture$TextureFilter, 0, "()V", 8 },
};

Class class_arc_graphics_Texture$TextureFilter{
		.nativeName = (intptr_t) "arc/graphics/Texture$TextureFilter",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_graphics_Texture$TextureFilter),
		.classVtable = (intptr_t) vtable_arc_graphics_Texture$TextureFilter,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Texture$TextureFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Texture$TextureFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_Texture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Texture$TextureFilter = registerClass(&class_arc_graphics_Texture$TextureFilter);

}

