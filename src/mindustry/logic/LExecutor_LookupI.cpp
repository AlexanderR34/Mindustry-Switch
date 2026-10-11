#include "mindustry/logic/LExecutor_LookupI.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LExecutor_LookupI.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/Vars.h"
#include "mindustry/logic/GlobalVars.h"

extern "C" {


void mark_mindustry_logic_LExecutor$LookupI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$LookupI *) object;
	if (self->F_dest)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dest)->clazz)->markFunction)((jobject) self->F_dest, mark, depth + 1);
	if (self->F_from)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_from)->clazz)->markFunction)((jobject) self->F_from, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$LookupI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$LookupI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_ctype_ContentType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LookupI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$LookupI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1277);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1278);
	((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_dest = (jref) (frame[1].o);
	LINE_NUMBER(1279);
	((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_from = (jref) (frame[2].o);
	LINE_NUMBER(1280);
	((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[3].o);
	LINE_NUMBER(1281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$LookupI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LookupI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$LookupI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1283);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$LookupI:run", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1288);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_dest;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_logicVars;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_type;
	sp[3].o = (jobject)((mindustry_logic_LExecutor$LookupI *) NULL_CHECK((frame[0].o)))->F_from;
	jint temp0 = (jint)((func_mindustry_logic_LVar_numi_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_logic_LVar_numi_R_int])(ctx, sp[3].o);
	sp[1].o = (jobject)((func_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_GlobalVars_lookupContent_mindustry_ctype_ContentType_int_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, temp0);
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$LookupI[] {
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
	(void *) M_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor,
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
	{ "dest", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$LookupI, F_dest), "Lmindustry/logic/LVar;", 1 },
	{ "from", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$LookupI, F_from), "Lmindustry/logic/LVar;", 1 },
	{ "type", &class_mindustry_ctype_ContentType, offsetof(mindustry_logic_LExecutor$LookupI, F_type), "Lmindustry/ctype/ContentType;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$LookupI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_ctype_ContentType, 0, "(Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/ctype/ContentType;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$LookupI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$LookupI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$LookupI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$LookupI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$LookupI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$LookupI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$LookupI,
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
static bool registered_mindustry_logic_LExecutor$LookupI = registerClass(&class_mindustry_logic_LExecutor$LookupI);

}

