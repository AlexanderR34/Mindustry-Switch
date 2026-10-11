#include "mindustry/logic/LExecutor_FormatI.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "mindustry/logic/LExecutor_FormatI.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$FormatI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$FormatI *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$FormatI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$FormatI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FormatI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FormatI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1120);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1121);
	((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$FormatI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FormatI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$FormatI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1124);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$FormatI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$FormatI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1129);
	frame[2].i = (jint(-1));
	LINE_NUMBER(1130);
	frame[3].i = (10);
	LINE_NUMBER(1132);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (frame[4].i));
	if (temp0 != (123)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if ((temp0 - (frame[4].i)) <= (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, ((frame[4].i) + (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(1136);
	if ((frame[5].i) < (48)) goto label_6;
	}
	{
	if ((frame[5].i) > (57)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, ((frame[4].i) + (jint(2))));
	if (temp0 != (125)) goto label_6;
	}
	{
	LINE_NUMBER(1137);
	if (((frame[5].i) - (48)) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(1138);
	frame[3].i = ((frame[5].i) - (48));
	LINE_NUMBER(1139);
	frame[2].i = (frame[4].i);
	}
label_6:;
	{
	LINE_NUMBER(1132);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1145);
	if ((frame[2].i) != (jint(-1))) goto label_12;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1151);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i), ((frame[2].i) + (jint(3))), (frame[4].o));
	LINE_NUMBER(1152);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp1 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval));
	jdouble temp2 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (temp0 - (jdouble(temp1))));
	if ((doubleCompare(temp2, (jdouble(1,000000e-05)), 1)) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(1155);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = frame[2].i;
	jint temp1 = (frame[2].i) + (jint(3));
	sp[1].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	jlong temp2 = (jlong)SM_java_lang_Math_round_double_R_long(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxLong(ctx, temp2));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = frame[2].i;
	jint temp1 = (frame[2].i) + (jint(3));
	sp[1].o = (jobject)((mindustry_logic_LExecutor$FormatI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxDouble(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (400)) goto label_20;
	}
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (400));
	}
label_20:;
	LINE_NUMBER(1164);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$FormatI[] {
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
	(void *) M_mindustry_logic_LExecutor$FormatI_run_mindustry_logic_LExecutor,
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
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$FormatI, F_value), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FormatI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$FormatI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$FormatI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$FormatI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$FormatI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$FormatI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$FormatI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$FormatI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$FormatI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$FormatI,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$FormatI = registerClass(&class_mindustry_logic_LExecutor$FormatI);

}

