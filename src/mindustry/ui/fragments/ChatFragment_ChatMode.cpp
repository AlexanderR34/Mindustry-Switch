#include "mindustry/ui/fragments/ChatFragment_ChatMode.h"
#include "mindustry/ui/fragments/ChatFragment_ChatMode_invoke_arc_func_Boolp_2.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/ChatFragment_ChatMode.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/gen/Player.h"
#include "arc/func/Boolp.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/fragments/ChatFragment_ChatMode_invoke_arc_func_Boolp_3.h"

extern "C" {

jobject SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal;
jobject SF_mindustry_ui_fragments_ChatFragment$ChatMode_team;
jobject SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin;
jobject SF_mindustry_ui_fragments_ChatFragment$ChatMode_all;
jobject SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES;

void mark_mindustry_ui_fragments_ChatFragment$ChatMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal, mark, depth + 1);
		if (SF_mindustry_ui_fragments_ChatFragment$ChatMode_team)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_team)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_team, mark, depth + 1);
		if (SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin, mark, depth + 1);
		if (SF_mindustry_ui_fragments_ChatFragment$ChatMode_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_all)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_all, mark, depth + 1);
		if (SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_ui_fragments_ChatFragment$ChatMode *) object;
	if (self->F_prefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefix)->clazz)->markFunction)((jobject) self->F_prefix, mark, depth + 1);
	if (self->F_valid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_valid)->clazz)->markFunction)((jobject) self->F_valid, mark, depth + 1);
}

jobject SM_mindustry_ui_fragments_ChatFragment$ChatMode_values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	{
	LINE_NUMBER(321);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ui_fragments_ChatFragment$ChatMode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_ChatFragment$ChatMode_valueOf_java_lang_String_R_mindustry_ui_fragments_ChatFragment$ChatMode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ui_fragments_ChatFragment$ChatMode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(331);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(332);
	((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[3].o);
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK(sp[0].o))->F_valid = (jref) sp[1].o;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(336);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(337);
	((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (frame[3].o);
	LINE_NUMBER(338);
	((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_valid = (jref) (frame[4].o);
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:next", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_all;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment$ChatMode_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_ordinal_R_int])(ctx, (frame[0].o));
	jint temp1 = temp0 + (jint(1));
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp1 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:normalizedPrefix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_prefix;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:isValid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_ui_fragments_ChatFragment$ChatMode *) NULL_CHECK((frame[0].o)))->F_valid;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_ChatFragment$ChatMode_$values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_team;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_ChatFragment$ChatMode_lambda$new$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_fragments_ChatFragment$ChatMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/ChatFragment$ChatMode:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	{
	LINE_NUMBER(322);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode);
	init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"normal"_j))), (jint(0)), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal = sp[0].o;
	LINE_NUMBER(323);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode);
	init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"team"_j))), (jint(1)), (((jobject) createStringLiteral(ctx, u8"/t"_j))));
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	SF_mindustry_ui_fragments_ChatFragment$ChatMode_team = sp[0].o;
	LINE_NUMBER(324);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"admin"_j));
	jint temp0 = jint(2);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"/a"_j));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_player;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_ChatFragment$ChatMode_invoke_arc_func_Boolp_3);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin = sp[0].o;
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_mindustry_ui_fragments_ChatFragment$ChatMode_$values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES = sp[0].o;
	LINE_NUMBER(329);
	sp[0].o = (jobject)SM_mindustry_ui_fragments_ChatFragment$ChatMode_values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	clinit_mindustry_ui_fragments_ChatFragment$ChatMode(ctx);
	SF_mindustry_ui_fragments_ChatFragment$ChatMode_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_ChatFragment$ChatMode[] {
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
	(void *) M_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode,
	(void *) M_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String,
	(void *) M_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean,
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
	{ "next", "()Lmindustry/ui/fragments/ChatFragment$ChatMode;" },
	{ "normalizedPrefix", "()Ljava/lang/String;" },
	{ "isValid", "()Z" },
};

static FieldMetadata fields[] {
	{ "normal", &class_mindustry_ui_fragments_ChatFragment$ChatMode, (intptr_t) &SF_mindustry_ui_fragments_ChatFragment$ChatMode_normal, "Lmindustry/ui/fragments/ChatFragment$ChatMode;", 16409 },
	{ "team", &class_mindustry_ui_fragments_ChatFragment$ChatMode, (intptr_t) &SF_mindustry_ui_fragments_ChatFragment$ChatMode_team, "Lmindustry/ui/fragments/ChatFragment$ChatMode;", 16409 },
	{ "admin", &class_mindustry_ui_fragments_ChatFragment$ChatMode, (intptr_t) &SF_mindustry_ui_fragments_ChatFragment$ChatMode_admin, "Lmindustry/ui/fragments/ChatFragment$ChatMode;", 16409 },
	{ "prefix", &class_java_lang_String, offsetof(mindustry_ui_fragments_ChatFragment$ChatMode, F_prefix), "Ljava/lang/String;", 1 },
	{ "valid", &class_arc_func_Boolp, offsetof(mindustry_ui_fragments_ChatFragment$ChatMode, F_valid), "Larc/func/Boolp;", 1 },
	{ "all", getArrayClass(&class_mindustry_ui_fragments_ChatFragment$ChatMode, 1), (intptr_t) &SF_mindustry_ui_fragments_ChatFragment$ChatMode_all, "[Lmindustry/ui/fragments/ChatFragment$ChatMode;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_ui_fragments_ChatFragment$ChatMode, 1), (intptr_t) &SF_mindustry_ui_fragments_ChatFragment$ChatMode_$VALUES, "[Lmindustry/ui/fragments/ChatFragment$ChatMode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ui_fragments_ChatFragment$ChatMode_values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode, 0, "()[Lmindustry/ui/fragments/ChatFragment$ChatMode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ui_fragments_ChatFragment$ChatMode_valueOf_java_lang_String_R_mindustry_ui_fragments_ChatFragment$ChatMode, 0, "(Ljava/lang/String;)Lmindustry/ui/fragments/ChatFragment$ChatMode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String, 0, "(Ljava/lang/String;ILjava/lang/String;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_ChatFragment$ChatMode_java_lang_String_int_java_lang_String_arc_func_Boolp, 0, "(Ljava/lang/String;ILjava/lang/String;Larc/func/Boolp;)V", 2 },
	{ "next", (intptr_t) M_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode, VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_next_R_mindustry_ui_fragments_ChatFragment$ChatMode, "()Lmindustry/ui/fragments/ChatFragment$ChatMode;", 1 },
	{ "normalizedPrefix", (intptr_t) M_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String, VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_normalizedPrefix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isValid", (intptr_t) M_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean, VTABLE_mindustry_ui_fragments_ChatFragment$ChatMode_isValid_R_boolean, "()Z", 1 },
	{ "$values", (intptr_t) SM_mindustry_ui_fragments_ChatFragment$ChatMode_$values_R_Array1_mindustry_ui_fragments_ChatFragment$ChatMode, 0, "()[Lmindustry/ui/fragments/ChatFragment$ChatMode;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_fragments_ChatFragment$ChatMode_lambda$new$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_fragments_ChatFragment$ChatMode, 0, "()V", 8 },
};

Class class_mindustry_ui_fragments_ChatFragment$ChatMode{
		.nativeName = (intptr_t) "mindustry/ui/fragments/ChatFragment$ChatMode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ui_fragments_ChatFragment$ChatMode),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_ChatFragment$ChatMode,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_ChatFragment$ChatMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_ChatFragment$ChatMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_fragments_ChatFragment,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_ChatFragment$ChatMode = registerClass(&class_mindustry_ui_fragments_ChatFragment$ChatMode);

}

