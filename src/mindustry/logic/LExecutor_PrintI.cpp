#include "mindustry/logic/LExecutor_PrintI.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PrintI(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LExecutor$PrintI *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PrintI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PrintI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1054);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1055);
	((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PrintI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1058);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PrintI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintI:run", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 < (400)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	jint temp2 = 400;
	sp[2].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp3 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[2].o);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (temp2 - temp3));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, temp0, temp4);
	LINE_NUMBER(1070);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp1 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval));
	jdouble temp2 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (temp0 - (jdouble(temp1))));
	if ((doubleCompare(temp2, (jdouble(1,000000e-05)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(1073);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp0 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PrintI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval));
	}
label_6:;
	LINE_NUMBER(1078);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintI:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1082);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_1:;
	{
	LINE_NUMBER(1083);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_3;
	}
	{
	frame[6].o = (checkCast(ctx, &class_java_lang_String, (frame[0].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1084);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_5;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[5].o)))->F_name;
	sp += 1;
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1085);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_ctype_Content)) == 0) goto label_7;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[content]"_j));
	goto label_2;
label_7:;
	{
	LINE_NUMBER(1086);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Building)) == 0) goto label_8;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(1087);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Unit)) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_type;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(1088);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Enum)) == 0) goto label_12;
	}
	{
	frame[2].o = (checkCast(ctx, &class_java_lang_Enum, (frame[0].o)));
	sp[0].o = (jobject)((func_java_lang_Enum_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Enum_name_R_java_lang_String])(ctx, (frame[2].o));
	sp += 1;
	goto label_2;
	}
label_12:;
	{
	LINE_NUMBER(1089);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_game_Team)) == 0) goto label_14;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[0].o)));
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_name;
	sp += 1;
	goto label_2;
	}
label_14:;
	LINE_NUMBER(1090);
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[object]"_j));
label_2:;
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PrintI[] {
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
	(void *) M_mindustry_logic_LExecutor$PrintI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static FieldMetadata fields[] {
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PrintI, F_value), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PrintI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PrintI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
	{ "toString", (intptr_t) SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 9 },
};

Class class_mindustry_logic_LExecutor$PrintI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PrintI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PrintI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PrintI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PrintI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PrintI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$PrintI = registerClass(&class_mindustry_logic_LExecutor$PrintI);

}

