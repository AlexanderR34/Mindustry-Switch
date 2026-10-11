#include "mindustry/editor/MapLocalesDialog_PropertyStatus.h"
#include "mindustry/editor/MapLocalesDialog_PropertyStatus.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/editor/MapLocalesDialog.h"

extern "C" {

jobject SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct;
jobject SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
jobject SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same;
jobject SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES;

void mark_mindustry_editor_MapLocalesDialog$PropertyStatus(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct, mark, depth + 1);
		if (SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing, mark, depth + 1);
		if (SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same, mark, depth + 1);
		if (SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_editor_MapLocalesDialog$PropertyStatus *) object;
}

jobject SM_mindustry_editor_MapLocalesDialog$PropertyStatus_values_R_Array1_mindustry_editor_MapLocalesDialog$PropertyStatus(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog$PropertyStatus:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	{
	LINE_NUMBER(769);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_editor_MapLocalesDialog$PropertyStatus, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapLocalesDialog$PropertyStatus_valueOf_java_lang_String_R_mindustry_editor_MapLocalesDialog$PropertyStatus(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog$PropertyStatus:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_editor_MapLocalesDialog$PropertyStatus)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_MapLocalesDialog$PropertyStatus, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog$PropertyStatus:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(769);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapLocalesDialog$PropertyStatus_$values_R_Array1_mindustry_editor_MapLocalesDialog$PropertyStatus(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog$PropertyStatus:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	{
	LINE_NUMBER(769);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_editor_MapLocalesDialog$PropertyStatus, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapLocalesDialog$PropertyStatus:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	{
	LINE_NUMBER(770);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog$PropertyStatus);
	init_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"correct"_j))), (jint(0)));
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct = sp[0].o;
	LINE_NUMBER(771);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog$PropertyStatus);
	init_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missing"_j))), (jint(1)));
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing = sp[0].o;
	LINE_NUMBER(772);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapLocalesDialog$PropertyStatus);
	init_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"same"_j))), (jint(2)));
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same = sp[0].o;
	LINE_NUMBER(769);
	sp[0].o = (jobject)SM_mindustry_editor_MapLocalesDialog$PropertyStatus_$values_R_Array1_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	clinit_mindustry_editor_MapLocalesDialog$PropertyStatus(ctx);
	SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapLocalesDialog$PropertyStatus[] {
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
	{ "correct", &class_mindustry_editor_MapLocalesDialog$PropertyStatus, (intptr_t) &SF_mindustry_editor_MapLocalesDialog$PropertyStatus_correct, "Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 16409 },
	{ "missing", &class_mindustry_editor_MapLocalesDialog$PropertyStatus, (intptr_t) &SF_mindustry_editor_MapLocalesDialog$PropertyStatus_missing, "Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 16409 },
	{ "same", &class_mindustry_editor_MapLocalesDialog$PropertyStatus, (intptr_t) &SF_mindustry_editor_MapLocalesDialog$PropertyStatus_same, "Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_editor_MapLocalesDialog$PropertyStatus, 1), (intptr_t) &SF_mindustry_editor_MapLocalesDialog$PropertyStatus_$VALUES, "[Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_editor_MapLocalesDialog$PropertyStatus_values_R_Array1_mindustry_editor_MapLocalesDialog$PropertyStatus, 0, "()[Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_editor_MapLocalesDialog$PropertyStatus_valueOf_java_lang_String_R_mindustry_editor_MapLocalesDialog$PropertyStatus, 0, "(Ljava/lang/String;)Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 9 },
	{ "<init>", (intptr_t) init_mindustry_editor_MapLocalesDialog$PropertyStatus_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_editor_MapLocalesDialog$PropertyStatus_$values_R_Array1_mindustry_editor_MapLocalesDialog$PropertyStatus, 0, "()[Lmindustry/editor/MapLocalesDialog$PropertyStatus;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_MapLocalesDialog$PropertyStatus, 0, "()V", 8 },
};

Class class_mindustry_editor_MapLocalesDialog$PropertyStatus{
		.nativeName = (intptr_t) "mindustry/editor/MapLocalesDialog$PropertyStatus",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_editor_MapLocalesDialog$PropertyStatus),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapLocalesDialog$PropertyStatus,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapLocalesDialog$PropertyStatus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapLocalesDialog$PropertyStatus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapLocalesDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapLocalesDialog$PropertyStatus = registerClass(&class_mindustry_editor_MapLocalesDialog$PropertyStatus);

}

