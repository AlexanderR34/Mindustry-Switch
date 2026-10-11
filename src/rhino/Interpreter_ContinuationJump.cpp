#include "rhino/Interpreter_ContinuationJump.h"
#include "rhino/NativeContinuation.h"
#include "rhino/Interpreter_CallFrame.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/Interpreter.h"
#include "rhino/Interpreter_ContinuationJump.h"
#include "java/lang/RuntimeException.h"

extern "C" {


void mark_rhino_Interpreter$ContinuationJump(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Interpreter$ContinuationJump *) object;
	if (self->F_capturedFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capturedFrame)->clazz)->markFunction)((jobject) self->F_capturedFrame, mark, depth + 1);
	if (self->F_branchFrame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_branchFrame)->clazz)->markFunction)((jobject) self->F_branchFrame, mark, depth + 1);
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_rhino_Interpreter$ContinuationJump(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_Interpreter$ContinuationJump_rhino_NativeContinuation_rhino_Interpreter$CallFrame(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Interpreter$ContinuationJump:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Interpreter$ContinuationJump(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(288);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(289);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_NativeContinuation_getImplementation_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_NativeContinuation_getImplementation_R_java_lang_Object])(ctx, (frame[1].o));
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK(sp[0].o))->F_capturedFrame = (jref) (checkCast(ctx, &class_rhino_Interpreter$CallFrame, sp[1].o));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_capturedFrame;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(294);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_branchFrame = (jref) (jobject(nullptr));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_capturedFrame;
	frame[3].o = sp[0].o;
	LINE_NUMBER(299);
	frame[4].o = (frame[2].o);
	LINE_NUMBER(303);
	frame[5].i = (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_frameIndex) - ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_frameIndex));
	LINE_NUMBER(304);
	if ((frame[5].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(305);
	if ((frame[5].i) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(308);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(309);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_capturedFrame;
	frame[4].o = sp[0].o;
	LINE_NUMBER(310);
	frame[5].i = (-(frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_parentFrame;
	frame[3].o = sp[0].o;
	LINE_NUMBER(314);
	INST_IINC(5, -1);
	if ((frame[5].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(315);
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_frameIndex) == ((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_frameIndex)) goto label_9;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_9:;
	{
	LINE_NUMBER(320);
	if ((frame[3].o) == (frame[4].o)) goto label_17;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_17;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[3].o)))->F_parentFrame;
	frame[3].o = sp[0].o;
	LINE_NUMBER(322);
	sp[0].o = (jobject)((rhino_Interpreter$CallFrame *) NULL_CHECK((frame[4].o)))->F_parentFrame;
	frame[4].o = sp[0].o;
	goto label_9;
	}
label_17:;
	{
	LINE_NUMBER(325);
	((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_branchFrame = (jref) (frame[3].o);
	LINE_NUMBER(326);
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_branchFrame;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((rhino_Interpreter$ContinuationJump *) NULL_CHECK((frame[0].o)))->F_branchFrame;
	if (((jint)((rhino_Interpreter$CallFrame *) NULL_CHECK(sp[0].o))->F_frozen) != 0) goto label_5;
	}
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_5:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_Interpreter$ContinuationJump[] {
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
	{ "capturedFrame", &class_rhino_Interpreter$CallFrame, offsetof(rhino_Interpreter$ContinuationJump, F_capturedFrame), "Lrhino/Interpreter$CallFrame;", 0 },
	{ "branchFrame", &class_rhino_Interpreter$CallFrame, offsetof(rhino_Interpreter$ContinuationJump, F_branchFrame), "Lrhino/Interpreter$CallFrame;", 0 },
	{ "result", &class_java_lang_Object, offsetof(rhino_Interpreter$ContinuationJump, F_result), "Ljava/lang/Object;", 0 },
	{ "resultDbl", &class_double, offsetof(rhino_Interpreter$ContinuationJump, F_resultDbl), "D", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Interpreter$ContinuationJump_rhino_NativeContinuation_rhino_Interpreter$CallFrame, 0, "(Lrhino/NativeContinuation;Lrhino/Interpreter$CallFrame;)V", 0 },
};

Class class_rhino_Interpreter$ContinuationJump{
		.nativeName = (intptr_t) "rhino/Interpreter$ContinuationJump",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Interpreter$ContinuationJump),
		.classVtable = (intptr_t) vtable_rhino_Interpreter$ContinuationJump,
		.staticInitializer = (intptr_t) clinit_rhino_Interpreter$ContinuationJump,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Interpreter$ContinuationJump,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_Interpreter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Interpreter$ContinuationJump = registerClass(&class_rhino_Interpreter$ContinuationJump);

}

