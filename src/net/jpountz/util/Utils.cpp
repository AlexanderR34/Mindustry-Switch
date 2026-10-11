#include "net/jpountz/util/Utils.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/ByteOrder.h"
#include "net/jpountz/util/Utils.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
jbool SF_net_jpountz_util_Utils_unalignedAccessAllowed;
jobject SF_net_jpountz_util_Utils_$VALUES;

void mark_net_jpountz_util_Utils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER, mark, depth + 1);
		if (SF_net_jpountz_util_Utils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_Utils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_util_Utils_$VALUES, mark, depth + 1);
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
	auto self = (net_jpountz_util_Utils *) object;
}

jobject SM_net_jpountz_util_Utils_values_R_Array1_net_jpountz_util_Utils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Utils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Utils(ctx);
	{
	LINE_NUMBER(22);
	clinit_net_jpountz_util_Utils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_Utils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_util_Utils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_Utils_valueOf_java_lang_String_R_net_jpountz_util_Utils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Utils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Utils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_util_Utils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_util_Utils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_util_Utils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Utils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Utils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(22);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_net_jpountz_util_Utils_isUnalignedAccessAllowed_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Utils:isUnalignedAccessAllowed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Utils(ctx);
	{
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (clinit_net_jpountz_util_Utils(ctx), (jint)SF_net_jpountz_util_Utils_unalignedAccessAllowed);
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_util_Utils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Utils:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Utils(ctx);
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_util_Utils, (jint(0)));
	clinit_net_jpountz_util_Utils(ctx);
	SF_net_jpountz_util_Utils_$VALUES = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	clinit_net_jpountz_util_Utils(ctx);
	SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(30);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"i386"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"x86"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"amd64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"x86_64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"aarch64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ppc64le"_j))));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	clinit_net_jpountz_util_Utils(ctx);
	SF_net_jpountz_util_Utils_unalignedAccessAllowed = sp[0].i;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_Utils[] {
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
	{ "NATIVE_BYTE_ORDER", &class_java_nio_ByteOrder, (intptr_t) &SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER, "Ljava/nio/ByteOrder;", 25 },
	{ "unalignedAccessAllowed", &class_boolean, (intptr_t) &SF_net_jpountz_util_Utils_unalignedAccessAllowed, "Z", 26 },
	{ "$VALUES", getArrayClass(&class_net_jpountz_util_Utils, 1), (intptr_t) &SF_net_jpountz_util_Utils_$VALUES, "[Lnet/jpountz/util/Utils;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_util_Utils_values_R_Array1_net_jpountz_util_Utils, 0, "()[Lnet/jpountz/util/Utils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_util_Utils_valueOf_java_lang_String_R_net_jpountz_util_Utils, 0, "(Ljava/lang/String;)Lnet/jpountz/util/Utils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_util_Utils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "isUnalignedAccessAllowed", (intptr_t) SM_net_jpountz_util_Utils_isUnalignedAccessAllowed_R_boolean, 0, "()Z", 9 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_util_Utils, 0, "()V", 8 },
};

Class class_net_jpountz_util_Utils{
		.nativeName = (intptr_t) "net/jpountz/util/Utils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_util_Utils),
		.classVtable = (intptr_t) vtable_net_jpountz_util_Utils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_Utils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_Utils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
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
static bool registered_net_jpountz_util_Utils = registerClass(&class_net_jpountz_util_Utils);

}
