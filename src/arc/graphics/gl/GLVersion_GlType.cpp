#include "arc/graphics/gl/GLVersion_GlType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/gl/GLVersion.h"
#include "arc/graphics/gl/GLVersion_GlType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
jobject SF_arc_graphics_gl_GLVersion$GlType_GLES;
jobject SF_arc_graphics_gl_GLVersion$GlType_WebGL;
jobject SF_arc_graphics_gl_GLVersion$GlType_NONE;
jobject SF_arc_graphics_gl_GLVersion$GlType_$VALUES;

void mark_arc_graphics_gl_GLVersion$GlType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_gl_GLVersion$GlType_OpenGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLVersion$GlType_OpenGL)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLVersion$GlType_OpenGL, mark, depth + 1);
		if (SF_arc_graphics_gl_GLVersion$GlType_GLES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLVersion$GlType_GLES)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLVersion$GlType_GLES, mark, depth + 1);
		if (SF_arc_graphics_gl_GLVersion$GlType_WebGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLVersion$GlType_WebGL)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLVersion$GlType_WebGL, mark, depth + 1);
		if (SF_arc_graphics_gl_GLVersion$GlType_NONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLVersion$GlType_NONE)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLVersion$GlType_NONE, mark, depth + 1);
		if (SF_arc_graphics_gl_GLVersion$GlType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_gl_GLVersion$GlType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_graphics_gl_GLVersion$GlType_$VALUES, mark, depth + 1);
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
	auto self = (arc_graphics_gl_GLVersion$GlType *) object;
}

jobject SM_arc_graphics_gl_GLVersion$GlType_values_R_Array1_arc_graphics_gl_GLVersion$GlType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion$GlType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	{
	LINE_NUMBER(98);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[0].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_graphics_gl_GLVersion$GlType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_gl_GLVersion$GlType_valueOf_java_lang_String_R_arc_graphics_gl_GLVersion$GlType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion$GlType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_graphics_gl_GLVersion$GlType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_gl_GLVersion$GlType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion$GlType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(98);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_gl_GLVersion$GlType_$values_R_Array1_arc_graphics_gl_GLVersion$GlType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion$GlType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_gl_GLVersion$GlType, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_OpenGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_GLES;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_WebGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_GLVersion$GlType_NONE;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_gl_GLVersion$GlType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/GLVersion$GlType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	{
	LINE_NUMBER(99);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLVersion$GlType);
	init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OpenGL"_j))), (jint(0)));
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	SF_arc_graphics_gl_GLVersion$GlType_OpenGL = sp[0].o;
	LINE_NUMBER(100);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLVersion$GlType);
	init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GLES"_j))), (jint(1)));
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	SF_arc_graphics_gl_GLVersion$GlType_GLES = sp[0].o;
	LINE_NUMBER(101);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLVersion$GlType);
	init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WebGL"_j))), (jint(2)));
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	SF_arc_graphics_gl_GLVersion$GlType_WebGL = sp[0].o;
	LINE_NUMBER(102);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_GLVersion$GlType);
	init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NONE"_j))), (jint(3)));
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	SF_arc_graphics_gl_GLVersion$GlType_NONE = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_arc_graphics_gl_GLVersion$GlType_$values_R_Array1_arc_graphics_gl_GLVersion$GlType(ctx);
	clinit_arc_graphics_gl_GLVersion$GlType(ctx);
	SF_arc_graphics_gl_GLVersion$GlType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_GLVersion$GlType[] {
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
	{ "OpenGL", &class_arc_graphics_gl_GLVersion$GlType, (intptr_t) &SF_arc_graphics_gl_GLVersion$GlType_OpenGL, "Larc/graphics/gl/GLVersion$GlType;", 16409 },
	{ "GLES", &class_arc_graphics_gl_GLVersion$GlType, (intptr_t) &SF_arc_graphics_gl_GLVersion$GlType_GLES, "Larc/graphics/gl/GLVersion$GlType;", 16409 },
	{ "WebGL", &class_arc_graphics_gl_GLVersion$GlType, (intptr_t) &SF_arc_graphics_gl_GLVersion$GlType_WebGL, "Larc/graphics/gl/GLVersion$GlType;", 16409 },
	{ "NONE", &class_arc_graphics_gl_GLVersion$GlType, (intptr_t) &SF_arc_graphics_gl_GLVersion$GlType_NONE, "Larc/graphics/gl/GLVersion$GlType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_graphics_gl_GLVersion$GlType, 1), (intptr_t) &SF_arc_graphics_gl_GLVersion$GlType_$VALUES, "[Larc/graphics/gl/GLVersion$GlType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_graphics_gl_GLVersion$GlType_values_R_Array1_arc_graphics_gl_GLVersion$GlType, 0, "()[Larc/graphics/gl/GLVersion$GlType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_graphics_gl_GLVersion$GlType_valueOf_java_lang_String_R_arc_graphics_gl_GLVersion$GlType, 0, "(Ljava/lang/String;)Larc/graphics/gl/GLVersion$GlType;", 9 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_GLVersion$GlType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_graphics_gl_GLVersion$GlType_$values_R_Array1_arc_graphics_gl_GLVersion$GlType, 0, "()[Larc/graphics/gl/GLVersion$GlType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_gl_GLVersion$GlType, 0, "()V", 8 },
};

Class class_arc_graphics_gl_GLVersion$GlType{
		.nativeName = (intptr_t) "arc/graphics/gl/GLVersion$GlType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_graphics_gl_GLVersion$GlType),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_GLVersion$GlType,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_GLVersion$GlType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_GLVersion$GlType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_gl_GLVersion,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_GLVersion$GlType = registerClass(&class_arc_graphics_gl_GLVersion$GlType);

}

