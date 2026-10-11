#include "arc/Application_ApplicationType.h"
#include "java/lang/Object.h"
#include "arc/Application_ApplicationType.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/Application.h"

extern "C" {

jobject SF_arc_Application$ApplicationType_android;
jobject SF_arc_Application$ApplicationType_desktop;
jobject SF_arc_Application$ApplicationType_headless;
jobject SF_arc_Application$ApplicationType_web;
jobject SF_arc_Application$ApplicationType_iOS;
jobject SF_arc_Application$ApplicationType_$VALUES;

void mark_arc_Application$ApplicationType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Application$ApplicationType_android)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_android)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_android, mark, depth + 1);
		if (SF_arc_Application$ApplicationType_desktop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_desktop)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_desktop, mark, depth + 1);
		if (SF_arc_Application$ApplicationType_headless)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_headless)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_headless, mark, depth + 1);
		if (SF_arc_Application$ApplicationType_web)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_web)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_web, mark, depth + 1);
		if (SF_arc_Application$ApplicationType_iOS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_iOS)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_iOS, mark, depth + 1);
		if (SF_arc_Application$ApplicationType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Application$ApplicationType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_Application$ApplicationType_$VALUES, mark, depth + 1);
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
	auto self = (arc_Application$ApplicationType *) object;
}

jobject SM_arc_Application$ApplicationType_values_R_Array1_arc_Application$ApplicationType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application$ApplicationType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Application$ApplicationType(ctx);
	{
	LINE_NUMBER(140);
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = (jobject)SF_arc_Application$ApplicationType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_Application$ApplicationType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_Application$ApplicationType_valueOf_java_lang_String_R_arc_Application$ApplicationType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application$ApplicationType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Application$ApplicationType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_Application$ApplicationType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_Application$ApplicationType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_Application$ApplicationType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application$ApplicationType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Application$ApplicationType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(140);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Application$ApplicationType_$values_R_Array1_arc_Application$ApplicationType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application$ApplicationType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Application$ApplicationType(ctx);
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)createArray(ctx, &class_arc_Application$ApplicationType, (jint(5)));
	jint temp0 = jint(0);
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_android;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_desktop;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_headless;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_web;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_arc_Application$ApplicationType_iOS;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_Application$ApplicationType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Application$ApplicationType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Application$ApplicationType(ctx);
	{
	LINE_NUMBER(141);
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Application$ApplicationType);
	init_arc_Application$ApplicationType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"android"_j))), (jint(0)));
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_android = sp[0].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Application$ApplicationType);
	init_arc_Application$ApplicationType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"desktop"_j))), (jint(1)));
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_desktop = sp[0].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Application$ApplicationType);
	init_arc_Application$ApplicationType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"headless"_j))), (jint(2)));
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_headless = sp[0].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Application$ApplicationType);
	init_arc_Application$ApplicationType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"web"_j))), (jint(3)));
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_web = sp[0].o;
	clinit_arc_Application$ApplicationType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Application$ApplicationType);
	init_arc_Application$ApplicationType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOS"_j))), (jint(4)));
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_iOS = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_arc_Application$ApplicationType_$values_R_Array1_arc_Application$ApplicationType(ctx);
	clinit_arc_Application$ApplicationType(ctx);
	SF_arc_Application$ApplicationType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Application$ApplicationType[] {
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
	{ "android", &class_arc_Application$ApplicationType, (intptr_t) &SF_arc_Application$ApplicationType_android, "Larc/Application$ApplicationType;", 16409 },
	{ "desktop", &class_arc_Application$ApplicationType, (intptr_t) &SF_arc_Application$ApplicationType_desktop, "Larc/Application$ApplicationType;", 16409 },
	{ "headless", &class_arc_Application$ApplicationType, (intptr_t) &SF_arc_Application$ApplicationType_headless, "Larc/Application$ApplicationType;", 16409 },
	{ "web", &class_arc_Application$ApplicationType, (intptr_t) &SF_arc_Application$ApplicationType_web, "Larc/Application$ApplicationType;", 16409 },
	{ "iOS", &class_arc_Application$ApplicationType, (intptr_t) &SF_arc_Application$ApplicationType_iOS, "Larc/Application$ApplicationType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_Application$ApplicationType, 1), (intptr_t) &SF_arc_Application$ApplicationType_$VALUES, "[Larc/Application$ApplicationType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_Application$ApplicationType_values_R_Array1_arc_Application$ApplicationType, 0, "()[Larc/Application$ApplicationType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_Application$ApplicationType_valueOf_java_lang_String_R_arc_Application$ApplicationType, 0, "(Ljava/lang/String;)Larc/Application$ApplicationType;", 9 },
	{ "<init>", (intptr_t) init_arc_Application$ApplicationType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_Application$ApplicationType_$values_R_Array1_arc_Application$ApplicationType, 0, "()[Larc/Application$ApplicationType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_Application$ApplicationType, 0, "()V", 8 },
};

Class class_arc_Application$ApplicationType{
		.nativeName = (intptr_t) "arc/Application$ApplicationType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_Application$ApplicationType),
		.classVtable = (intptr_t) vtable_arc_Application$ApplicationType,
		.staticInitializer = (intptr_t) clinit_arc_Application$ApplicationType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Application$ApplicationType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Application,
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
static bool registered_arc_Application$ApplicationType = registerClass(&class_arc_Application$ApplicationType);

}

