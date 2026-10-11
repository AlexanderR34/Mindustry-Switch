#include "arc/Files_FileType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/Files.h"
#include "java/lang/Enum.h"
#include "arc/Files_FileType.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_Files$FileType_classpath;
jobject SF_arc_Files$FileType_internal;
jobject SF_arc_Files$FileType_external;
jobject SF_arc_Files$FileType_absolute;
jobject SF_arc_Files$FileType_local;
jobject SF_arc_Files$FileType_$VALUES;

void mark_arc_Files$FileType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Files$FileType_classpath)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_classpath)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_classpath, mark, depth + 1);
		if (SF_arc_Files$FileType_internal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_internal)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_internal, mark, depth + 1);
		if (SF_arc_Files$FileType_external)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_external)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_external, mark, depth + 1);
		if (SF_arc_Files$FileType_absolute)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_absolute)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_absolute, mark, depth + 1);
		if (SF_arc_Files$FileType_local)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_local)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_local, mark, depth + 1);
		if (SF_arc_Files$FileType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Files$FileType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_Files$FileType_$VALUES, mark, depth + 1);
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
	auto self = (arc_Files$FileType *) object;
}

jobject SM_arc_Files$FileType_values_R_Array1_arc_Files$FileType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files$FileType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Files$FileType(ctx);
	{
	LINE_NUMBER(87);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = (jobject)SF_arc_Files$FileType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_Files$FileType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_Files$FileType_valueOf_java_lang_String_R_arc_Files$FileType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files$FileType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Files$FileType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_Files$FileType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_Files$FileType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_Files$FileType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files$FileType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Files$FileType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(87);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Files$FileType_$values_R_Array1_arc_Files$FileType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files$FileType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Files$FileType(ctx);
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)createArray(ctx, &class_arc_Files$FileType, (jint(5)));
	jint temp0 = jint(0);
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_classpath;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_internal;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_external;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_absolute;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_Files$FileType(ctx);
	sp[1].o = (jobject)SF_arc_Files$FileType_local;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_Files$FileType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Files$FileType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Files$FileType(ctx);
	{
	LINE_NUMBER(93);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Files$FileType);
	init_arc_Files$FileType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"classpath"_j))), (jint(0)));
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_classpath = sp[0].o;
	LINE_NUMBER(100);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Files$FileType);
	init_arc_Files$FileType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"internal"_j))), (jint(1)));
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_internal = sp[0].o;
	LINE_NUMBER(103);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Files$FileType);
	init_arc_Files$FileType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"external"_j))), (jint(2)));
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_external = sp[0].o;
	LINE_NUMBER(109);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Files$FileType);
	init_arc_Files$FileType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"absolute"_j))), (jint(3)));
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_absolute = sp[0].o;
	LINE_NUMBER(112);
	clinit_arc_Files$FileType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Files$FileType);
	init_arc_Files$FileType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"local"_j))), (jint(4)));
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_local = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_arc_Files$FileType_$values_R_Array1_arc_Files$FileType(ctx);
	clinit_arc_Files$FileType(ctx);
	SF_arc_Files$FileType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Files$FileType[] {
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
	{ "classpath", &class_arc_Files$FileType, (intptr_t) &SF_arc_Files$FileType_classpath, "Larc/Files$FileType;", 16409 },
	{ "internal", &class_arc_Files$FileType, (intptr_t) &SF_arc_Files$FileType_internal, "Larc/Files$FileType;", 16409 },
	{ "external", &class_arc_Files$FileType, (intptr_t) &SF_arc_Files$FileType_external, "Larc/Files$FileType;", 16409 },
	{ "absolute", &class_arc_Files$FileType, (intptr_t) &SF_arc_Files$FileType_absolute, "Larc/Files$FileType;", 16409 },
	{ "local", &class_arc_Files$FileType, (intptr_t) &SF_arc_Files$FileType_local, "Larc/Files$FileType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_Files$FileType, 1), (intptr_t) &SF_arc_Files$FileType_$VALUES, "[Larc/Files$FileType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_Files$FileType_values_R_Array1_arc_Files$FileType, 0, "()[Larc/Files$FileType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_Files$FileType_valueOf_java_lang_String_R_arc_Files$FileType, 0, "(Ljava/lang/String;)Larc/Files$FileType;", 9 },
	{ "<init>", (intptr_t) init_arc_Files$FileType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_Files$FileType_$values_R_Array1_arc_Files$FileType, 0, "()[Larc/Files$FileType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_Files$FileType, 0, "()V", 8 },
};

Class class_arc_Files$FileType{
		.nativeName = (intptr_t) "arc/Files$FileType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_Files$FileType),
		.classVtable = (intptr_t) vtable_arc_Files$FileType,
		.staticInitializer = (intptr_t) clinit_arc_Files$FileType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Files$FileType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Files,
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
static bool registered_arc_Files$FileType = registerClass(&class_arc_Files$FileType);

}

