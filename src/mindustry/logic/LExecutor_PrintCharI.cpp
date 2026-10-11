#include "mindustry/logic/LExecutor_PrintCharI.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_PrintCharI.h"

extern "C" {


void mark_mindustry_logic_LExecutor$PrintCharI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$PrintCharI *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$PrintCharI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$PrintCharI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintCharI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintCharI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1097);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1098);
	((mindustry_logic_LExecutor$PrintCharI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$PrintCharI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintCharI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$PrintCharI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1101);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$PrintCharI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$PrintCharI:run", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 < (400)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1107);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintCharI *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1108);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$PrintCharI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[3].o)));
	goto label_6;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_mindustry_ctype_UnlockableContent_emojiChar_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_emojiChar_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar(temp0)));
	LINE_NUMBER(1110);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$PrintCharI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[1].o))->F_numval));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jchar((jint(temp0)))));
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$PrintCharI[] {
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
	(void *) M_mindustry_logic_LExecutor$PrintCharI_run_mindustry_logic_LExecutor,
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
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$PrintCharI, F_value), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintCharI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$PrintCharI, 0, "()V", 0 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$PrintCharI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$PrintCharI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$PrintCharI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$PrintCharI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$PrintCharI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$PrintCharI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$PrintCharI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$PrintCharI,
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
static bool registered_mindustry_logic_LExecutor$PrintCharI = registerClass(&class_mindustry_logic_LExecutor$PrintCharI);

}

