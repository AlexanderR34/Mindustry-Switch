#include "mindustry/net/Packets_AdminAction.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/net/Packets.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_net_Packets$AdminAction_kick;
jobject SF_mindustry_net_Packets$AdminAction_ban;
jobject SF_mindustry_net_Packets$AdminAction_trace;
jobject SF_mindustry_net_Packets$AdminAction_wave;
jobject SF_mindustry_net_Packets$AdminAction_switchTeam;
jobject SF_mindustry_net_Packets$AdminAction_all;
jobject SF_mindustry_net_Packets$AdminAction_$VALUES;

void mark_mindustry_net_Packets$AdminAction(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Packets$AdminAction_kick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_kick)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_kick, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_ban)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_ban)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_ban, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_trace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_trace)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_trace, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_wave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_wave)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_wave, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_switchTeam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_switchTeam)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_switchTeam, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_all)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_all, mark, depth + 1);
		if (SF_mindustry_net_Packets$AdminAction_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$AdminAction_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$AdminAction_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_net_Packets$AdminAction *) object;
}

jobject SM_mindustry_net_Packets$AdminAction_values_R_Array1_mindustry_net_Packets$AdminAction(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AdminAction:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AdminAction(ctx);
	{
	LINE_NUMBER(44);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packets$AdminAction_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_net_Packets$AdminAction, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Packets$AdminAction_valueOf_java_lang_String_R_mindustry_net_Packets$AdminAction(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AdminAction:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AdminAction(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_net_Packets$AdminAction)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Packets$AdminAction, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Packets$AdminAction_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AdminAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AdminAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Packets$AdminAction_$values_R_Array1_mindustry_net_Packets$AdminAction(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AdminAction:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AdminAction(ctx);
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_net_Packets$AdminAction, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_kick;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_ban;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_trace;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_wave;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$AdminAction_switchTeam;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Packets$AdminAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$AdminAction:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$AdminAction(ctx);
	{
	LINE_NUMBER(45);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$AdminAction);
	init_mindustry_net_Packets$AdminAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"kick"_j))), (jint(0)));
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_kick = sp[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$AdminAction);
	init_mindustry_net_Packets$AdminAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ban"_j))), (jint(1)));
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_ban = sp[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$AdminAction);
	init_mindustry_net_Packets$AdminAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"trace"_j))), (jint(2)));
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_trace = sp[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$AdminAction);
	init_mindustry_net_Packets$AdminAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave"_j))), (jint(3)));
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_wave = sp[0].o;
	clinit_mindustry_net_Packets$AdminAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$AdminAction);
	init_mindustry_net_Packets$AdminAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"switchTeam"_j))), (jint(4)));
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_switchTeam = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_mindustry_net_Packets$AdminAction_$values_R_Array1_mindustry_net_Packets$AdminAction(ctx);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_$VALUES = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_mindustry_net_Packets$AdminAction_values_R_Array1_mindustry_net_Packets$AdminAction(ctx);
	clinit_mindustry_net_Packets$AdminAction(ctx);
	SF_mindustry_net_Packets$AdminAction_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packets$AdminAction[] {
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
	{ "kick", &class_mindustry_net_Packets$AdminAction, (intptr_t) &SF_mindustry_net_Packets$AdminAction_kick, "Lmindustry/net/Packets$AdminAction;", 16409 },
	{ "ban", &class_mindustry_net_Packets$AdminAction, (intptr_t) &SF_mindustry_net_Packets$AdminAction_ban, "Lmindustry/net/Packets$AdminAction;", 16409 },
	{ "trace", &class_mindustry_net_Packets$AdminAction, (intptr_t) &SF_mindustry_net_Packets$AdminAction_trace, "Lmindustry/net/Packets$AdminAction;", 16409 },
	{ "wave", &class_mindustry_net_Packets$AdminAction, (intptr_t) &SF_mindustry_net_Packets$AdminAction_wave, "Lmindustry/net/Packets$AdminAction;", 16409 },
	{ "switchTeam", &class_mindustry_net_Packets$AdminAction, (intptr_t) &SF_mindustry_net_Packets$AdminAction_switchTeam, "Lmindustry/net/Packets$AdminAction;", 16409 },
	{ "all", getArrayClass(&class_mindustry_net_Packets$AdminAction, 1), (intptr_t) &SF_mindustry_net_Packets$AdminAction_all, "[Lmindustry/net/Packets$AdminAction;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_net_Packets$AdminAction, 1), (intptr_t) &SF_mindustry_net_Packets$AdminAction_$VALUES, "[Lmindustry/net/Packets$AdminAction;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_net_Packets$AdminAction_values_R_Array1_mindustry_net_Packets$AdminAction, 0, "()[Lmindustry/net/Packets$AdminAction;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_net_Packets$AdminAction_valueOf_java_lang_String_R_mindustry_net_Packets$AdminAction, 0, "(Ljava/lang/String;)Lmindustry/net/Packets$AdminAction;", 9 },
	{ "<init>", (intptr_t) init_mindustry_net_Packets$AdminAction_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_net_Packets$AdminAction_$values_R_Array1_mindustry_net_Packets$AdminAction, 0, "()[Lmindustry/net/Packets$AdminAction;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Packets$AdminAction, 0, "()V", 8 },
};

Class class_mindustry_net_Packets$AdminAction{
		.nativeName = (intptr_t) "mindustry/net/Packets$AdminAction",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_net_Packets$AdminAction),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets$AdminAction,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets$AdminAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packets$AdminAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Packets,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets$AdminAction = registerClass(&class_mindustry_net_Packets$AdminAction);

}

