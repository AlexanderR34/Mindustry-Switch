#include "mindustry/world/meta/BlockStatus.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/String.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/graphics/Color.h"

extern "C" {

jobject SF_mindustry_world_meta_BlockStatus_active;
jobject SF_mindustry_world_meta_BlockStatus_noOutput;
jobject SF_mindustry_world_meta_BlockStatus_noInput;
jobject SF_mindustry_world_meta_BlockStatus_logicDisable;
jobject SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
jobject SF_mindustry_world_meta_BlockStatus_inactive;
jobject SF_mindustry_world_meta_BlockStatus_$VALUES;

void mark_mindustry_world_meta_BlockStatus(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_BlockStatus_active)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_active)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_active, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_noOutput)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_noOutput)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_noOutput, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_noInput)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_noInput)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_noInput, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_logicDisable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_logicDisable)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_logicDisable, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_inactive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_inactive)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_inactive, mark, depth + 1);
		if (SF_mindustry_world_meta_BlockStatus_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BlockStatus_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BlockStatus_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_world_meta_BlockStatus *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

jobject SM_mindustry_world_meta_BlockStatus_values_R_Array1_mindustry_world_meta_BlockStatus(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockStatus:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockStatus(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_BlockStatus_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_meta_BlockStatus, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockStatus_valueOf_java_lang_String_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockStatus:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockStatus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_meta_BlockStatus)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_meta_BlockStatus, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockStatus:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockStatus(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(16);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(17);
	((mindustry_world_meta_BlockStatus *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[3].o);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_meta_BlockStatus_$values_R_Array1_mindustry_world_meta_BlockStatus(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockStatus:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockStatus(ctx);
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockStatus, (6));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_active;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_noOutput;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_logicDisable;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_inactive;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_BlockStatus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BlockStatus:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BlockStatus(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"active"_j));
	jint temp0 = jint(0);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"5ce677"_j))));
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_active = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"noOutput"_j));
	jint temp1 = jint(1);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_orange;
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_noOutput = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"noInput"_j));
	jint temp2 = jint(2);
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_noInput = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logicDisable"_j));
	jint temp3 = jint(3);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8a73c6"_j))));
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_logicDisable = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inactiveUnitFactory"_j));
	jint temp4 = jint(4);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lightGray;
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BlockStatus);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inactive"_j));
	jint temp5 = jint(5);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_lightGray;
	init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_inactive = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_mindustry_world_meta_BlockStatus_$values_R_Array1_mindustry_world_meta_BlockStatus(ctx);
	clinit_mindustry_world_meta_BlockStatus(ctx);
	SF_mindustry_world_meta_BlockStatus_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_BlockStatus[] {
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
	{ "active", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_active, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "noOutput", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_noOutput, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "noInput", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_noInput, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "logicDisable", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_logicDisable, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "inactiveUnitFactory", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_inactiveUnitFactory, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "inactive", &class_mindustry_world_meta_BlockStatus, (intptr_t) &SF_mindustry_world_meta_BlockStatus_inactive, "Lmindustry/world/meta/BlockStatus;", 16409 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_world_meta_BlockStatus, F_color), "Larc/graphics/Color;", 17 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_meta_BlockStatus, 1), (intptr_t) &SF_mindustry_world_meta_BlockStatus_$VALUES, "[Lmindustry/world/meta/BlockStatus;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_meta_BlockStatus_values_R_Array1_mindustry_world_meta_BlockStatus, 0, "()[Lmindustry/world/meta/BlockStatus;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_meta_BlockStatus_valueOf_java_lang_String_R_mindustry_world_meta_BlockStatus, 0, "(Ljava/lang/String;)Lmindustry/world/meta/BlockStatus;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_BlockStatus_java_lang_String_int_arc_graphics_Color, 0, "(Ljava/lang/String;ILarc/graphics/Color;)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_meta_BlockStatus_$values_R_Array1_mindustry_world_meta_BlockStatus, 0, "()[Lmindustry/world/meta/BlockStatus;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_BlockStatus, 0, "()V", 8 },
};

Class class_mindustry_world_meta_BlockStatus{
		.nativeName = (intptr_t) "mindustry/world/meta/BlockStatus",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_meta_BlockStatus),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_BlockStatus,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_BlockStatus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_BlockStatus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_BlockStatus = registerClass(&class_mindustry_world_meta_BlockStatus);

}
