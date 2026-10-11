#include "mindustry/logic/LExecutor_SenseI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/Senseable.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/logic/LExecutor_SenseI.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SenseI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SenseI *) object;
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_to)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_to)->clazz)->markFunction)((jobject) self->F_to, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SenseI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SenseI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SenseI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SenseI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(674);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(675);
	((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[1].o);
	LINE_NUMBER(676);
	((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to = (jref) (frame[2].o);
	LINE_NUMBER(677);
	((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[3].o);
	LINE_NUMBER(678);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SenseI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SenseI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SenseI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(680);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SenseI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SenseI:run", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_from;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(686);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(688);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_dead;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(1)));
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(694);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_logic_Senseable)) == 0) goto label_6;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_logic_Senseable, (frame[2].o)));
	LINE_NUMBER(695);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ctype_Content)) == 0) goto label_8;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_ctype_Content, (frame[3].o)));
	LINE_NUMBER(696);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	jdouble temp0 = (jdouble)((func_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_Senseable, INDEX_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double, (frame[4].o)))(ctx, (frame[4].o), (frame[5].o));
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp0);
	LINE_NUMBER(697);
	popStackFrame(ctx);
	return;
	}
label_8:;
	{
	LINE_NUMBER(698);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_logic_LAccess)) == 0) goto label_11;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_logic_LAccess, (frame[3].o)));
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_13;
	}
	{
	if (((jint)((mindustry_logic_LAccess *) NULL_CHECK((frame[6].o)))->F_privileged) != 0) goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((func_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_logic_Senseable, INDEX_mindustry_logic_Senseable_senseObject_mindustry_logic_LAccess_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(701);
	sp[0].o = frame[7].o;
	clinit_mindustry_logic_Senseable(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	jdouble temp0 = (jdouble)((func_mindustry_logic_Senseable_sense_mindustry_logic_LAccess_R_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_Senseable, INDEX_mindustry_logic_Senseable_sense_mindustry_logic_LAccess_R_double, (frame[4].o)))(ctx, (frame[4].o), (frame[6].o));
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, temp0);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(706);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_17:;
	LINE_NUMBER(708);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	goto label_18;
label_6:;
	{
	LINE_NUMBER(711);
	sp[0].o = frame[3].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_size;
	if (sp[0].o == sp[1].o) goto label_19;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bufferSize;
	if (sp[0].o != sp[1].o) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(712);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_CharSequence)) == 0) goto label_20;
	}
	{
	frame[5].o = (checkCast(ctx, &class_java_lang_CharSequence, (frame[2].o)));
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[5].o)))(ctx, (frame[5].o));
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(temp0)));
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(715);
	if ((isInstance(ctx, (frame[2].o), &class_arc_struct_Seq)) == 0) goto label_18;
	}
	{
	frame[6].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[2].o)));
	LINE_NUMBER(716);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size))));
	LINE_NUMBER(717);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SenseI *) NULL_CHECK((frame[0].o)))->F_to;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SenseI[] {
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
	(void *) M_mindustry_logic_LExecutor$SenseI_run_mindustry_logic_LExecutor,
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
	{ "from", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SenseI, F_from), "Lmindustry/logic/LVar;", 1 },
	{ "to", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SenseI, F_to), "Lmindustry/logic/LVar;", 1 },
	{ "type", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SenseI, F_type), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SenseI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SenseI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SenseI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SenseI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SenseI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SenseI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SenseI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SenseI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SenseI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SenseI,
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
static bool registered_mindustry_logic_LExecutor$SenseI = registerClass(&class_mindustry_logic_LExecutor$SenseI);

}

