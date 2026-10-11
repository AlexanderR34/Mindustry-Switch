#include "java/util/TimeZone_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/TimeZone.h"
#include "java/util/TimeZone_1.h"
#include "java/util/Date.h"

extern "C" {


void mark_java_util_TimeZone$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_TimeZone(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_TimeZone$1 *) object;
	if (self->F_val$tzone)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$tzone)->clazz)->markFunction)((jobject) self->F_val$tzone, mark, depth + 1);
}

void clinit_java_util_TimeZone$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_TimeZone(ctx);
}

void init_java_util_TimeZone$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_TimeZone$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone = (jref) (frame[1].o);
	init_java_util_TimeZone(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone$1:getOffset", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone;
	jint temp0 = (jint)SM_java_util_TimeZone_access$000_java_lang_String_int_int_int_int_R_int(ctx, sp[0].o, (frame[2].i), ((frame[3].i) + (jint(1))), (frame[4].i), (frame[6].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_TimeZone$1_getRawOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone$1:getRawOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone;
	jint temp0 = (jint)SM_java_util_TimeZone_access$100_java_lang_String_R_int(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone$1:inDaylightTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone;
	jlong temp0 = (jlong)((func_java_util_Date_getTime_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Date_getTime_R_long])(ctx, (frame[1].o));
	jint temp1 = (jint)SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_java_util_TimeZone$1_useDaylightTime_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/TimeZone$1:useDaylightTime", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone;
	jlong temp0 = (jlong)SM_java_util_TimeZone_access$300_R_long(ctx);
	jint temp1 = (jint)SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((java_util_TimeZone$1 *) NULL_CHECK((frame[0].o)))->F_val$tzone;
	jlong temp2 = (jlong)SM_java_util_TimeZone_access$400_R_long(ctx);
	jint temp3 = (jint)SM_java_util_TimeZone_access$200_java_lang_String_long_R_boolean(ctx, sp[0].o, temp2);
	if (temp1 == temp3) goto label_1;
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

void *vtable_java_util_TimeZone$1[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_TimeZone_setID_java_lang_String,
	(void *) M_java_util_TimeZone_getDSTSavings_R_int,
	(void *) M_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean,
	(void *) M_java_util_TimeZone_getID_R_java_lang_String,
	(void *) M_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int,
	(void *) M_java_util_TimeZone$1_getRawOffset_R_int,
	(void *) M_java_util_TimeZone$1_useDaylightTime_R_boolean,
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
	{ "setID", "(Ljava/lang/String;)V" },
	{ "getDSTSavings", "()I" },
	{ "inDaylightTime", "(Ljava/util/Date;)Z" },
	{ "getID", "()Ljava/lang/String;" },
	{ "getOffset", "(IIIIII)I" },
	{ "getRawOffset", "()I" },
	{ "useDaylightTime", "()Z" },
};

static FieldMetadata fields[] {
	{ "val$tzone", &class_java_lang_String, offsetof(java_util_TimeZone$1, F_val$tzone), "Ljava/lang/String;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_TimeZone$1_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "getOffset", (intptr_t) M_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int, VTABLE_java_util_TimeZone$1_getOffset_int_int_int_int_int_int_R_int, "(IIIIII)I", 1 },
	{ "getRawOffset", (intptr_t) M_java_util_TimeZone$1_getRawOffset_R_int, VTABLE_java_util_TimeZone$1_getRawOffset_R_int, "()I", 1 },
	{ "inDaylightTime", (intptr_t) M_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean, VTABLE_java_util_TimeZone$1_inDaylightTime_java_util_Date_R_boolean, "(Ljava/util/Date;)Z", 0 },
	{ "useDaylightTime", (intptr_t) M_java_util_TimeZone$1_useDaylightTime_R_boolean, VTABLE_java_util_TimeZone$1_useDaylightTime_R_boolean, "()Z", 1 },
};

Class class_java_util_TimeZone$1{
		.nativeName = (intptr_t) "java/util/TimeZone$1",
		.parentClass = (intptr_t) &class_java_util_TimeZone,
		.size = sizeof(java_util_TimeZone$1),
		.classVtable = (intptr_t) vtable_java_util_TimeZone$1,
		.staticInitializer = (intptr_t) clinit_java_util_TimeZone$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_TimeZone$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_util_TimeZone$1 = registerClass(&class_java_util_TimeZone$1);

}

