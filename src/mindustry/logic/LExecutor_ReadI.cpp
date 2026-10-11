#include "mindustry/logic/LExecutor_ReadI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LReadable.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_ReadI.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_logic_LExecutor$ReadI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$ReadI *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_output)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_output)->clazz)->markFunction)((jobject) self->F_output, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$ReadI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$ReadI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ReadI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ReadI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(618);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(619);
	((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(620);
	((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_position = (jref) (frame[2].o);
	LINE_NUMBER(621);
	((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output = (jref) (frame[3].o);
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$ReadI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ReadI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$ReadI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(624);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$ReadI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$ReadI:run", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(629);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(630);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_logic_LReadable)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_logic_LReadable, (frame[2].o)));
	LINE_NUMBER(631);
	jint temp0 = (jint)((func_mindustry_logic_LReadable_readable_mindustry_logic_LExecutor_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_logic_LReadable, INDEX_mindustry_logic_LReadable_readable_mindustry_logic_LExecutor_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(635);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_position;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_logic_LReadable_read_mindustry_logic_LVar_mindustry_logic_LVar) resolveInterfaceMethod(ctx, &class_mindustry_logic_LReadable, INDEX_mindustry_logic_LReadable_read_mindustry_logic_LVar_mindustry_logic_LVar, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_position;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(638);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_CharSequence, (frame[2].o)));
	LINE_NUMBER(639);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output;
	sp += 1;
	if ((frame[4].i) < 0) goto label_11;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 < temp1) goto label_12;
	}
label_11:;
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_13;
label_12:;
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[5].o)))(ctx, (frame[5].o), (frame[4].i));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	}
label_13:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, sp[1].d);
	goto label_7;
label_9:;
	{
	LINE_NUMBER(640);
	if ((isInstance(ctx, (frame[2].o), &class_arc_struct_Seq)) == 0) goto label_14;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[2].o)));
	LINE_NUMBER(641);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output;
	sp += 1;
	if ((frame[4].i) < 0) goto label_16;
	}
	{
	if ((frame[4].i) < ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_17;
	}
label_16:;
	INST_ACONST_NULL();
	goto label_18;
label_17:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[4].i));
	sp += 1;
	}
label_18:;
	POP_N(2); // Pop method args
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_7;
label_14:;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$ReadI *) NULL_CHECK((frame[0].o)))->F_output;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_7:;
	LINE_NUMBER(646);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$ReadI[] {
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
	(void *) M_mindustry_logic_LExecutor$ReadI_run_mindustry_logic_LExecutor,
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
	{ "target", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ReadI, F_target), "Lmindustry/logic/LVar;", 1 },
	{ "position", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ReadI, F_position), "Lmindustry/logic/LVar;", 1 },
	{ "output", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$ReadI, F_output), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ReadI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$ReadI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$ReadI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$ReadI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$ReadI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$ReadI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$ReadI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$ReadI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$ReadI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$ReadI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$ReadI = registerClass(&class_mindustry_logic_LExecutor$ReadI);

}

