#include "rhino/Parser_ConditionData.h"
#include "rhino/Parser_ConditionData.h"
#include "java/lang/Object.h"
#include "rhino/ast/AstNode.h"
#include "rhino/Parser.h"
#include "rhino/Parser_1.h"

extern "C" {


void mark_rhino_Parser$ConditionData(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Parser$ConditionData *) object;
	if (self->F_condition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_condition)->clazz)->markFunction)((jobject) self->F_condition, mark, depth + 1);
}

void clinit_rhino_Parser$ConditionData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Parser$ConditionData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$ConditionData:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser$ConditionData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(967);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(969);
	((rhino_Parser$ConditionData *) NULL_CHECK((frame[0].o)))->F_lp = (jint(-1));
	LINE_NUMBER(970);
	((rhino_Parser$ConditionData *) NULL_CHECK((frame[0].o)))->F_rp = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_Parser$ConditionData_rhino_Parser$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Parser$ConditionData:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Parser$ConditionData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	init_rhino_Parser$ConditionData(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Parser$ConditionData[] {
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
	{ "condition", &class_rhino_ast_AstNode, offsetof(rhino_Parser$ConditionData, F_condition), "Lrhino/ast/AstNode;", 0 },
	{ "lp", &class_int, offsetof(rhino_Parser$ConditionData, F_lp), "I", 0 },
	{ "rp", &class_int, offsetof(rhino_Parser$ConditionData, F_rp), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Parser$ConditionData, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_rhino_Parser$ConditionData_rhino_Parser$1, 0, "(Lrhino/Parser$1;)V", 4096 },
};

Class class_rhino_Parser$ConditionData{
		.nativeName = (intptr_t) "rhino/Parser$ConditionData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Parser$ConditionData),
		.classVtable = (intptr_t) vtable_rhino_Parser$ConditionData,
		.staticInitializer = (intptr_t) clinit_rhino_Parser$ConditionData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Parser$ConditionData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Parser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Parser$ConditionData = registerClass(&class_rhino_Parser$ConditionData);

}

