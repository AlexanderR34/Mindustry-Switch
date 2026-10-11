#include "mindustry/logic/LExecutor_LocalePrintI.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/type/MapLocales.h"
#include "java/lang/String.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LocalePrintI.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_PrintI.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_logic_LExecutor$LocalePrintI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$LocalePrintI *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$LocalePrintI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$LocalePrintI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LocalePrintI:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$LocalePrintI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2394);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2395);
	((mindustry_logic_LExecutor$LocalePrintI *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(2396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$LocalePrintI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LocalePrintI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$LocalePrintI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2398);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2399);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LocalePrintI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2403);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	if (temp0 < (400)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2406);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$LocalePrintI *) NULL_CHECK((frame[0].o)))->F_name;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2407);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$LocalePrintI *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval;
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$PrintI_toString_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2411);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mobile"_j.string, 1, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2413);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mobile"_j.string, 1, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(2414);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_9:;
	INST_ASTORE(3);
	goto label_11;
label_5:;
	{
	LINE_NUMBER(2416);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_mapLocales;
	sp[0].o = (jobject)((func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(2419);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_textBuffer;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	}
label_2:;
	LINE_NUMBER(2421);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$LocalePrintI[] {
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
	(void *) M_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor,
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
	{ "name", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$LocalePrintI, F_name), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$LocalePrintI_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$LocalePrintI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$LocalePrintI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$LocalePrintI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$LocalePrintI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$LocalePrintI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$LocalePrintI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$LocalePrintI,
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
static bool registered_mindustry_logic_LExecutor$LocalePrintI = registerClass(&class_mindustry_logic_LExecutor$LocalePrintI);

}

