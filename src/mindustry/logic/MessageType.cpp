#include "mindustry/logic/MessageType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/logic/MessageType.h"

extern "C" {

jobject SF_mindustry_logic_MessageType_notify;
jobject SF_mindustry_logic_MessageType_announce;
jobject SF_mindustry_logic_MessageType_toast;
jobject SF_mindustry_logic_MessageType_mission;
jobject SF_mindustry_logic_MessageType_all;
jobject SF_mindustry_logic_MessageType_$VALUES;

void mark_mindustry_logic_MessageType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_MessageType_notify)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_notify)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_notify, mark, depth + 1);
		if (SF_mindustry_logic_MessageType_announce)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_announce)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_announce, mark, depth + 1);
		if (SF_mindustry_logic_MessageType_toast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_toast)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_toast, mark, depth + 1);
		if (SF_mindustry_logic_MessageType_mission)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_mission)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_mission, mark, depth + 1);
		if (SF_mindustry_logic_MessageType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_all, mark, depth + 1);
		if (SF_mindustry_logic_MessageType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_MessageType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_MessageType_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_MessageType *) object;
}

jobject SM_mindustry_logic_MessageType_values_R_Array1_mindustry_logic_MessageType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/MessageType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_MessageType(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_MessageType(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_MessageType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_MessageType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_MessageType_valueOf_java_lang_String_R_mindustry_logic_MessageType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/MessageType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_MessageType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_MessageType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_MessageType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_MessageType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/MessageType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_MessageType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_MessageType_$values_R_Array1_mindustry_logic_MessageType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/MessageType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_MessageType(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_MessageType, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_notify;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_announce;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_toast;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_MessageType(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_MessageType_mission;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_MessageType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/MessageType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_MessageType(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_MessageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_MessageType);
	init_mindustry_logic_MessageType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"notify"_j))), (jint(0)));
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_notify = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_MessageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_MessageType);
	init_mindustry_logic_MessageType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"announce"_j))), (jint(1)));
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_announce = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_MessageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_MessageType);
	init_mindustry_logic_MessageType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"toast"_j))), (jint(2)));
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_toast = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_MessageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_MessageType);
	init_mindustry_logic_MessageType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mission"_j))), (jint(3)));
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_mission = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_MessageType_$values_R_Array1_mindustry_logic_MessageType(ctx);
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_$VALUES = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_mindustry_logic_MessageType_values_R_Array1_mindustry_logic_MessageType(ctx);
	clinit_mindustry_logic_MessageType(ctx);
	SF_mindustry_logic_MessageType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_MessageType[] {
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
	{ "notify", &class_mindustry_logic_MessageType, (intptr_t) &SF_mindustry_logic_MessageType_notify, "Lmindustry/logic/MessageType;", 16409 },
	{ "announce", &class_mindustry_logic_MessageType, (intptr_t) &SF_mindustry_logic_MessageType_announce, "Lmindustry/logic/MessageType;", 16409 },
	{ "toast", &class_mindustry_logic_MessageType, (intptr_t) &SF_mindustry_logic_MessageType_toast, "Lmindustry/logic/MessageType;", 16409 },
	{ "mission", &class_mindustry_logic_MessageType, (intptr_t) &SF_mindustry_logic_MessageType_mission, "Lmindustry/logic/MessageType;", 16409 },
	{ "all", getArrayClass(&class_mindustry_logic_MessageType, 1), (intptr_t) &SF_mindustry_logic_MessageType_all, "[Lmindustry/logic/MessageType;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_MessageType, 1), (intptr_t) &SF_mindustry_logic_MessageType_$VALUES, "[Lmindustry/logic/MessageType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_MessageType_values_R_Array1_mindustry_logic_MessageType, 0, "()[Lmindustry/logic/MessageType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_MessageType_valueOf_java_lang_String_R_mindustry_logic_MessageType, 0, "(Ljava/lang/String;)Lmindustry/logic/MessageType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_MessageType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_MessageType_$values_R_Array1_mindustry_logic_MessageType, 0, "()[Lmindustry/logic/MessageType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_MessageType, 0, "()V", 8 },
};

Class class_mindustry_logic_MessageType{
		.nativeName = (intptr_t) "mindustry/logic/MessageType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_MessageType),
		.classVtable = (intptr_t) vtable_mindustry_logic_MessageType,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_MessageType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_MessageType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
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
static bool registered_mindustry_logic_MessageType = registerClass(&class_mindustry_logic_MessageType);

}
