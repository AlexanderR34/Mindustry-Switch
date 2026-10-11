#include "mindustry/logic/LExecutor_SetPropI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_SetPropI.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LExecutor.h"

extern "C" {


void mark_mindustry_logic_LExecutor$SetPropI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$SetPropI *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_of)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_of)->clazz)->markFunction)((jobject) self->F_of, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$SetPropI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$SetPropI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetPropI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetPropI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(2204);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2205);
	((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2206);
	((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_of = (jref) (frame[2].o);
	LINE_NUMBER(2207);
	((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(2208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$SetPropI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetPropI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$SetPropI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2210);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$SetPropI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$SetPropI:run", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2215);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_of;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_logic_Settable)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_Settable, (frame[3].o)));
	LINE_NUMBER(2216);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2217);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_logic_LAccess)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_logic_LAccess, (frame[3].o)));
	LINE_NUMBER(2218);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_value;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_isobj) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2219);
	sp[0].o = frame[2].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_value;
	sp[2].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK(sp[2].o))->F_objval;
	((func_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_logic_Settable, INDEX_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_1;
	}
label_6:;
	{
	LINE_NUMBER(2221);
	sp[0].o = frame[2].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_value;
	((func_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_Settable, INDEX_mindustry_logic_Settable_setProp_mindustry_logic_LAccess_double, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK(sp[2].o))->F_numval));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(2223);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[3].o)));
	LINE_NUMBER(2224);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$SetPropI *) NULL_CHECK((frame[0].o)))->F_value;
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, sp[2].o);
	((func_mindustry_logic_Settable_setProp_mindustry_ctype_UnlockableContent_double) resolveInterfaceMethod(ctx, &class_mindustry_logic_Settable, INDEX_mindustry_logic_Settable_setProp_mindustry_ctype_UnlockableContent_double, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	}
label_1:;
	LINE_NUMBER(2227);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$SetPropI[] {
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
	(void *) M_mindustry_logic_LExecutor$SetPropI_run_mindustry_logic_LExecutor,
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
	{ "type", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetPropI, F_type), "Lmindustry/logic/LVar;", 1 },
	{ "of", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetPropI, F_of), "Lmindustry/logic/LVar;", 1 },
	{ "value", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$SetPropI, F_value), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetPropI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$SetPropI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$SetPropI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$SetPropI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$SetPropI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$SetPropI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$SetPropI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$SetPropI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$SetPropI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$SetPropI,
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
static bool registered_mindustry_logic_LExecutor$SetPropI = registerClass(&class_mindustry_logic_LExecutor$SetPropI);

}

