#include "arc/graphics/Texture_TextureWrap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "java/lang/Enum.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_graphics_Texture$TextureWrap_mirroredRepeat;
jobject SF_arc_graphics_Texture$TextureWrap_clampToEdge;
jobject SF_arc_graphics_Texture$TextureWrap_repeat;
jobject SF_arc_graphics_Texture$TextureWrap_all;
jobject SF_arc_graphics_Texture$TextureWrap_$VALUES;

void mark_arc_graphics_Texture$TextureWrap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Texture$TextureWrap_mirroredRepeat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureWrap_mirroredRepeat)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureWrap_mirroredRepeat, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureWrap_clampToEdge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureWrap_clampToEdge)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureWrap_clampToEdge, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureWrap_repeat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureWrap_repeat)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureWrap_repeat, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureWrap_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureWrap_all)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureWrap_all, mark, depth + 1);
		if (SF_arc_graphics_Texture$TextureWrap_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Texture$TextureWrap_$VALUES)->clazz)->markFunction)((jobject) SF_arc_graphics_Texture$TextureWrap_$VALUES, mark, depth + 1);
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
	auto self = (arc_graphics_Texture$TextureWrap *) object;
}

jobject SM_arc_graphics_Texture$TextureWrap_values_R_Array1_arc_graphics_Texture$TextureWrap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureWrap(ctx);
	{
	LINE_NUMBER(166);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Texture$TextureWrap_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_Texture$TextureWrap, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Texture$TextureWrap_valueOf_java_lang_String_R_arc_graphics_Texture$TextureWrap(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureWrap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_graphics_Texture$TextureWrap)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_Texture$TextureWrap, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureWrap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(173);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(174);
	((arc_graphics_Texture$TextureWrap *) NULL_CHECK((frame[0].o)))->F_glEnum = (frame[3].i);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_Texture$TextureWrap_getGLEnum_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:getGLEnum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_Texture$TextureWrap *) NULL_CHECK((frame[0].o)))->F_glEnum);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Texture$TextureWrap_$values_R_Array1_arc_graphics_Texture$TextureWrap(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureWrap(ctx);
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Texture$TextureWrap, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_mirroredRepeat;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_clampToEdge;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Texture$TextureWrap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Texture$TextureWrap:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Texture$TextureWrap(ctx);
	{
	LINE_NUMBER(167);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureWrap);
	init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mirroredRepeat"_j))), (jint(0)), (jint(33648)));
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	SF_arc_graphics_Texture$TextureWrap_mirroredRepeat = sp[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureWrap);
	init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"clampToEdge"_j))), (jint(1)), (jint(33071)));
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	SF_arc_graphics_Texture$TextureWrap_clampToEdge = sp[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture$TextureWrap);
	init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"repeat"_j))), (jint(2)), (10497));
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	SF_arc_graphics_Texture$TextureWrap_repeat = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_arc_graphics_Texture$TextureWrap_$values_R_Array1_arc_graphics_Texture$TextureWrap(ctx);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	SF_arc_graphics_Texture$TextureWrap_$VALUES = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_arc_graphics_Texture$TextureWrap_values_R_Array1_arc_graphics_Texture$TextureWrap(ctx);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	SF_arc_graphics_Texture$TextureWrap_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Texture$TextureWrap[] {
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
	(void *) M_arc_graphics_Texture$TextureWrap_getGLEnum_R_int,
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
	{ "getGLEnum", "()I" },
};

static FieldMetadata fields[] {
	{ "mirroredRepeat", &class_arc_graphics_Texture$TextureWrap, (intptr_t) &SF_arc_graphics_Texture$TextureWrap_mirroredRepeat, "Larc/graphics/Texture$TextureWrap;", 16409 },
	{ "clampToEdge", &class_arc_graphics_Texture$TextureWrap, (intptr_t) &SF_arc_graphics_Texture$TextureWrap_clampToEdge, "Larc/graphics/Texture$TextureWrap;", 16409 },
	{ "repeat", &class_arc_graphics_Texture$TextureWrap, (intptr_t) &SF_arc_graphics_Texture$TextureWrap_repeat, "Larc/graphics/Texture$TextureWrap;", 16409 },
	{ "all", getArrayClass(&class_arc_graphics_Texture$TextureWrap, 1), (intptr_t) &SF_arc_graphics_Texture$TextureWrap_all, "[Larc/graphics/Texture$TextureWrap;", 25 },
	{ "glEnum", &class_int, offsetof(arc_graphics_Texture$TextureWrap, F_glEnum), "I", 16 },
	{ "$VALUES", getArrayClass(&class_arc_graphics_Texture$TextureWrap, 1), (intptr_t) &SF_arc_graphics_Texture$TextureWrap_$VALUES, "[Larc/graphics/Texture$TextureWrap;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_graphics_Texture$TextureWrap_values_R_Array1_arc_graphics_Texture$TextureWrap, 0, "()[Larc/graphics/Texture$TextureWrap;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_Texture$TextureWrap_valueOf_java_lang_String_R_arc_graphics_Texture$TextureWrap, 0, "(Ljava/lang/String;)Larc/graphics/Texture$TextureWrap;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_Texture$TextureWrap_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "getGLEnum", (intptr_t) M_arc_graphics_Texture$TextureWrap_getGLEnum_R_int, VTABLE_arc_graphics_Texture$TextureWrap_getGLEnum_R_int, "()I", 1 },
	{ "$values", (intptr_t) SM_arc_graphics_Texture$TextureWrap_$values_R_Array1_arc_graphics_Texture$TextureWrap, 0, "()[Larc/graphics/Texture$TextureWrap;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Texture$TextureWrap, 0, "()V", 8 },
};

Class class_arc_graphics_Texture$TextureWrap{
		.nativeName = (intptr_t) "arc/graphics/Texture$TextureWrap",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_graphics_Texture$TextureWrap),
		.classVtable = (intptr_t) vtable_arc_graphics_Texture$TextureWrap,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Texture$TextureWrap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Texture$TextureWrap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_Texture,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Texture$TextureWrap = registerClass(&class_arc_graphics_Texture$TextureWrap);

}

