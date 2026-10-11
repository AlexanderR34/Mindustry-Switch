#include "java/net/Authenticator_RequestorType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/Authenticator.h"
#include "java/net/Authenticator_RequestorType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_net_Authenticator$RequestorType_PROXY;
jobject SF_java_net_Authenticator$RequestorType_SERVER;
jobject SF_java_net_Authenticator$RequestorType_$VALUES;

void mark_java_net_Authenticator$RequestorType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_Authenticator$RequestorType_PROXY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_Authenticator$RequestorType_PROXY)->clazz)->markFunction)((jobject) SF_java_net_Authenticator$RequestorType_PROXY, mark, depth + 1);
		if (SF_java_net_Authenticator$RequestorType_SERVER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_Authenticator$RequestorType_SERVER)->clazz)->markFunction)((jobject) SF_java_net_Authenticator$RequestorType_SERVER, mark, depth + 1);
		if (SF_java_net_Authenticator$RequestorType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_Authenticator$RequestorType_$VALUES)->clazz)->markFunction)((jobject) SF_java_net_Authenticator$RequestorType_$VALUES, mark, depth + 1);
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
	auto self = (java_net_Authenticator$RequestorType *) object;
}

jobject SM_java_net_Authenticator$RequestorType_values_R_Array1_java_net_Authenticator$RequestorType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator$RequestorType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator$RequestorType(ctx);
	{
	LINE_NUMBER(80);
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[0].o = (jobject)SF_java_net_Authenticator$RequestorType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_net_Authenticator$RequestorType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator$RequestorType_valueOf_java_lang_String_R_java_net_Authenticator$RequestorType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator$RequestorType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator$RequestorType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_net_Authenticator$RequestorType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_net_Authenticator$RequestorType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_net_Authenticator$RequestorType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator$RequestorType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator$RequestorType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(80);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_net_Authenticator$RequestorType_$values_R_Array1_java_net_Authenticator$RequestorType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator$RequestorType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator$RequestorType(ctx);
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)createArray(ctx, &class_java_net_Authenticator$RequestorType, (jint(2)));
	jint temp0 = jint(0);
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[1].o = (jobject)SF_java_net_Authenticator$RequestorType_PROXY;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[1].o = (jobject)SF_java_net_Authenticator$RequestorType_SERVER;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_net_Authenticator$RequestorType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/Authenticator$RequestorType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_Authenticator$RequestorType(ctx);
	{
	LINE_NUMBER(84);
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Authenticator$RequestorType);
	init_java_net_Authenticator$RequestorType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PROXY"_j))), (jint(0)));
	clinit_java_net_Authenticator$RequestorType(ctx);
	SF_java_net_Authenticator$RequestorType_PROXY = sp[0].o;
	LINE_NUMBER(88);
	clinit_java_net_Authenticator$RequestorType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_Authenticator$RequestorType);
	init_java_net_Authenticator$RequestorType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SERVER"_j))), (jint(1)));
	clinit_java_net_Authenticator$RequestorType(ctx);
	SF_java_net_Authenticator$RequestorType_SERVER = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_java_net_Authenticator$RequestorType_$values_R_Array1_java_net_Authenticator$RequestorType(ctx);
	clinit_java_net_Authenticator$RequestorType(ctx);
	SF_java_net_Authenticator$RequestorType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_Authenticator$RequestorType[] {
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
	{ "PROXY", &class_java_net_Authenticator$RequestorType, (intptr_t) &SF_java_net_Authenticator$RequestorType_PROXY, "Ljava/net/Authenticator$RequestorType;", 16409 },
	{ "SERVER", &class_java_net_Authenticator$RequestorType, (intptr_t) &SF_java_net_Authenticator$RequestorType_SERVER, "Ljava/net/Authenticator$RequestorType;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_net_Authenticator$RequestorType, 1), (intptr_t) &SF_java_net_Authenticator$RequestorType_$VALUES, "[Ljava/net/Authenticator$RequestorType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_net_Authenticator$RequestorType_values_R_Array1_java_net_Authenticator$RequestorType, 0, "()[Ljava/net/Authenticator$RequestorType;", 9 },
	{ "valueOf", (intptr_t) SM_java_net_Authenticator$RequestorType_valueOf_java_lang_String_R_java_net_Authenticator$RequestorType, 0, "(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;", 9 },
	{ "<init>", (intptr_t) init_java_net_Authenticator$RequestorType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_net_Authenticator$RequestorType_$values_R_Array1_java_net_Authenticator$RequestorType, 0, "()[Ljava/net/Authenticator$RequestorType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_net_Authenticator$RequestorType, 0, "()V", 8 },
};

Class class_java_net_Authenticator$RequestorType{
		.nativeName = (intptr_t) "java/net/Authenticator$RequestorType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_net_Authenticator$RequestorType),
		.classVtable = (intptr_t) vtable_java_net_Authenticator$RequestorType,
		.staticInitializer = (intptr_t) clinit_java_net_Authenticator$RequestorType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_Authenticator$RequestorType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_Authenticator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
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
static bool registered_java_net_Authenticator$RequestorType = registerClass(&class_java_net_Authenticator$RequestorType);

}

