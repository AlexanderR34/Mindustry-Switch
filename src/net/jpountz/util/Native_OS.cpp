#include "net/jpountz/util/Native_OS.h"
#include "java/lang/Object.h"
#include "net/jpountz/util/Native.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "net/jpountz/util/Native_OS.h"

extern "C" {

jobject SF_net_jpountz_util_Native$OS_WINDOWS;
jobject SF_net_jpountz_util_Native$OS_LINUX;
jobject SF_net_jpountz_util_Native$OS_MAC;
jobject SF_net_jpountz_util_Native$OS_SOLARIS;
jobject SF_net_jpountz_util_Native$OS_$VALUES;

void mark_net_jpountz_util_Native$OS(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_util_Native$OS_WINDOWS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native$OS_WINDOWS)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native$OS_WINDOWS, mark, depth + 1);
		if (SF_net_jpountz_util_Native$OS_LINUX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native$OS_LINUX)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native$OS_LINUX, mark, depth + 1);
		if (SF_net_jpountz_util_Native$OS_MAC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native$OS_MAC)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native$OS_MAC, mark, depth + 1);
		if (SF_net_jpountz_util_Native$OS_SOLARIS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native$OS_SOLARIS)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native$OS_SOLARIS, mark, depth + 1);
		if (SF_net_jpountz_util_Native$OS_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Native$OS_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Native$OS_$VALUES, mark, depth + 1);
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
	auto self = (net_jpountz_util_Native$OS *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_libExtension)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_libExtension)->clazz)->markFunction)((jobject) self->F_libExtension, mark, depth + 1);
}

jobject SM_net_jpountz_util_Native$OS_values_R_Array1_net_jpountz_util_Native$OS(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$OS:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native$OS(ctx);
	{
	LINE_NUMBER(29);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Native$OS_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_util_Native$OS, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Native$OS_valueOf_java_lang_String_R_net_jpountz_util_Native$OS(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$OS:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native$OS(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_util_Native$OS)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_util_Native$OS, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$OS:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native$OS(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(33);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(34);
	((net_jpountz_util_Native$OS *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(35);
	((net_jpountz_util_Native$OS *) NULL_CHECK((frame[0].o)))->F_libExtension = (jref) (frame[4].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_util_Native$OS(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$OS:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native$OS(ctx);
	{
	LINE_NUMBER(30);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_util_Native$OS);
	init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WINDOWS"_j))), (jint(0)), (((jobject) createStringLiteral(ctx, u8"windows"_j))), (((jobject) createStringLiteral(ctx, u8"dll"_j))));
	clinit_net_jpountz_util_Native$OS(ctx);
	SF_net_jpountz_util_Native$OS_WINDOWS = sp[0].o;
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_util_Native$OS);
	init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LINUX"_j))), (jint(1)), (((jobject) createStringLiteral(ctx, u8"linux"_j))), (((jobject) createStringLiteral(ctx, u8"so"_j))));
	clinit_net_jpountz_util_Native$OS(ctx);
	SF_net_jpountz_util_Native$OS_LINUX = sp[0].o;
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_util_Native$OS);
	init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MAC"_j))), (jint(2)), (((jobject) createStringLiteral(ctx, u8"darwin"_j))), (((jobject) createStringLiteral(ctx, u8"dylib"_j))));
	clinit_net_jpountz_util_Native$OS(ctx);
	SF_net_jpountz_util_Native$OS_MAC = sp[0].o;
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_util_Native$OS);
	init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SOLARIS"_j))), (jint(3)), (((jobject) createStringLiteral(ctx, u8"solaris"_j))), (((jobject) createStringLiteral(ctx, u8"so"_j))));
	clinit_net_jpountz_util_Native$OS(ctx);
	SF_net_jpountz_util_Native$OS_SOLARIS = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_util_Native$OS, (jint(4)));
	jint temp0 = jint(0);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Native$OS_WINDOWS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Native$OS_LINUX;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Native$OS_MAC;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_net_jpountz_util_Native$OS(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Native$OS_SOLARIS;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_net_jpountz_util_Native$OS(ctx);
	SF_net_jpountz_util_Native$OS_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_Native$OS[] {
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
	{ "WINDOWS", &class_net_jpountz_util_Native$OS, (intptr_t) &SF_net_jpountz_util_Native$OS_WINDOWS, "Lnet/jpountz/util/Native$OS;", 16409 },
	{ "LINUX", &class_net_jpountz_util_Native$OS, (intptr_t) &SF_net_jpountz_util_Native$OS_LINUX, "Lnet/jpountz/util/Native$OS;", 16409 },
	{ "MAC", &class_net_jpountz_util_Native$OS, (intptr_t) &SF_net_jpountz_util_Native$OS_MAC, "Lnet/jpountz/util/Native$OS;", 16409 },
	{ "SOLARIS", &class_net_jpountz_util_Native$OS, (intptr_t) &SF_net_jpountz_util_Native$OS_SOLARIS, "Lnet/jpountz/util/Native$OS;", 16409 },
	{ "name", &class_java_lang_String, offsetof(net_jpountz_util_Native$OS, F_name), "Ljava/lang/String;", 17 },
	{ "libExtension", &class_java_lang_String, offsetof(net_jpountz_util_Native$OS, F_libExtension), "Ljava/lang/String;", 17 },
	{ "$VALUES", getArrayClass(&class_net_jpountz_util_Native$OS, 1), (intptr_t) &SF_net_jpountz_util_Native$OS_$VALUES, "[Lnet/jpountz/util/Native$OS;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_util_Native$OS_values_R_Array1_net_jpountz_util_Native$OS, 0, "()[Lnet/jpountz/util/Native$OS;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_util_Native$OS_valueOf_java_lang_String_R_net_jpountz_util_Native$OS, 0, "(Ljava/lang/String;)Lnet/jpountz/util/Native$OS;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", 2 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_util_Native$OS, 0, "()V", 8 },
};

Class class_net_jpountz_util_Native$OS{
		.nativeName = (intptr_t) "net/jpountz/util/Native$OS",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_util_Native$OS),
		.classVtable = (intptr_t) vtable_net_jpountz_util_Native$OS,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_Native$OS,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_Native$OS,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_net_jpountz_util_Native,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_util_Native$OS = registerClass(&class_net_jpountz_util_Native$OS);

}

