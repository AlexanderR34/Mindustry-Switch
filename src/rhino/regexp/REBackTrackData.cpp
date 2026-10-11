#include "rhino/regexp/REBackTrackData.h"
#include "java/lang/Object.h"
#include "rhino/regexp/REGlobalData.h"
#include "rhino/regexp/REBackTrackData.h"
#include "rhino/regexp/REProgState.h"

extern "C" {


void mark_rhino_regexp_REBackTrackData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_regexp_REBackTrackData *) object;
	if (self->F_previous)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previous)->clazz)->markFunction)((jobject) self->F_previous, mark, depth + 1);
	if (self->F_parens)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parens)->clazz)->markFunction)((jobject) self->F_parens, mark, depth + 1);
	if (self->F_stateStackTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stateStackTop)->clazz)->markFunction)((jobject) self->F_stateStackTop, mark, depth + 1);
}

void clinit_rhino_regexp_REBackTrackData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_regexp_REBackTrackData_rhino_regexp_REGlobalData_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/regexp/REBackTrackData:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_regexp_REBackTrackData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(2825);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2826);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[1].o)))->F_backTrackStackTop;
	((rhino_regexp_REBackTrackData *) NULL_CHECK(sp[0].o))->F_previous = (jref) sp[1].o;
	LINE_NUMBER(2827);
	((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[0].o)))->F_op = (frame[2].i);
	LINE_NUMBER(2828);
	((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[0].o)))->F_pc = (frame[3].i);
	LINE_NUMBER(2829);
	((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[0].o)))->F_cp = (frame[4].i);
	LINE_NUMBER(2830);
	((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[0].o)))->F_continuationOp = (frame[5].i);
	LINE_NUMBER(2831);
	((rhino_regexp_REBackTrackData *) NULL_CHECK((frame[0].o)))->F_continuationPc = (frame[6].i);
	LINE_NUMBER(2832);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[1].o)))->F_parens;
	((rhino_regexp_REBackTrackData *) NULL_CHECK(sp[0].o))->F_parens = (jref) sp[1].o;
	LINE_NUMBER(2833);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_regexp_REGlobalData *) NULL_CHECK((frame[1].o)))->F_stateStackTop;
	((rhino_regexp_REBackTrackData *) NULL_CHECK(sp[0].o))->F_stateStackTop = (jref) sp[1].o;
	LINE_NUMBER(2834);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_regexp_REBackTrackData[] {
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
};

static FieldMetadata fields[] {
	{ "previous", &class_rhino_regexp_REBackTrackData, offsetof(rhino_regexp_REBackTrackData, F_previous), "Lrhino/regexp/REBackTrackData;", 16 },
	{ "op", &class_int, offsetof(rhino_regexp_REBackTrackData, F_op), "I", 16 },
	{ "pc", &class_int, offsetof(rhino_regexp_REBackTrackData, F_pc), "I", 16 },
	{ "cp", &class_int, offsetof(rhino_regexp_REBackTrackData, F_cp), "I", 16 },
	{ "continuationOp", &class_int, offsetof(rhino_regexp_REBackTrackData, F_continuationOp), "I", 16 },
	{ "continuationPc", &class_int, offsetof(rhino_regexp_REBackTrackData, F_continuationPc), "I", 16 },
	{ "parens", getArrayClass(&class_long, 1), offsetof(rhino_regexp_REBackTrackData, F_parens), "[J", 16 },
	{ "stateStackTop", &class_rhino_regexp_REProgState, offsetof(rhino_regexp_REBackTrackData, F_stateStackTop), "Lrhino/regexp/REProgState;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_regexp_REBackTrackData_rhino_regexp_REGlobalData_int_int_int_int_int, 0, "(Lrhino/regexp/REGlobalData;IIIII)V", 0 },
};

Class class_rhino_regexp_REBackTrackData{
		.nativeName = (intptr_t) "rhino/regexp/REBackTrackData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_regexp_REBackTrackData),
		.classVtable = (intptr_t) vtable_rhino_regexp_REBackTrackData,
		.staticInitializer = (intptr_t) clinit_rhino_regexp_REBackTrackData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_regexp_REBackTrackData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_regexp_REBackTrackData = registerClass(&class_rhino_regexp_REBackTrackData);

}
