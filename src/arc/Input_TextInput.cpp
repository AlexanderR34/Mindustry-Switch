#include "arc/Input_TextInput.h"
#include "arc/Input_TextInput.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/Input.h"
#include "arc/Input_TextInput_invoke_arc_func_Cons_0.h"
#include "arc/Input_TextInput_invoke_java_lang_Runnable_0.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_Input$TextInput(jobject object, jint mark, jint depth) {
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
	auto self = (arc_Input$TextInput *) object;
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_message)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_message)->clazz)->markFunction)((jobject) self->F_message, mark, depth + 1);
	if (self->F_accepted)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_accepted)->clazz)->markFunction)((jobject) self->F_accepted, mark, depth + 1);
	if (self->F_canceled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_canceled)->clazz)->markFunction)((jobject) self->F_canceled, mark, depth + 1);
}

void clinit_arc_Input$TextInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_Input$TextInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$TextInput:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$TextInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(380);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(381);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_multiline = (jint(0));
	LINE_NUMBER(382);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_allowEmpty = (jint(1));
	LINE_NUMBER(383);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_title = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(384);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(385);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_message = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Input$TextInput_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_Input$TextInput_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_Input$TextInput_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Input$TextInput_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_Input$TextInput_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_Input$TextInput_invoke_java_lang_Runnable_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_canceled = (jref) sp[1].o;
	LINE_NUMBER(389);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_maxLength = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_Input$TextInput_lambda$new$1(jcontext ctx) {
	FrameInfo frameInfo { "arc/Input$TextInput:lambda$new$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_arc_Input$TextInput(ctx);
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_Input$TextInput_lambda$new$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$TextInput:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$TextInput(ctx);
	frame[0].o = param0;
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_Input$TextInput[] {
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
	{ "multiline", &class_boolean, offsetof(arc_Input$TextInput, F_multiline), "Z", 1 },
	{ "allowEmpty", &class_boolean, offsetof(arc_Input$TextInput, F_allowEmpty), "Z", 1 },
	{ "title", &class_java_lang_String, offsetof(arc_Input$TextInput, F_title), "Ljava/lang/String;", 1 },
	{ "text", &class_java_lang_String, offsetof(arc_Input$TextInput, F_text), "Ljava/lang/String;", 1 },
	{ "message", &class_java_lang_String, offsetof(arc_Input$TextInput, F_message), "Ljava/lang/String;", 1 },
	{ "numeric", &class_boolean, offsetof(arc_Input$TextInput, F_numeric), "Z", 1 },
	{ "accepted", &class_arc_func_Cons, offsetof(arc_Input$TextInput, F_accepted), "Larc/func/Cons;", 1 },
	{ "canceled", &class_java_lang_Runnable, offsetof(arc_Input$TextInput, F_canceled), "Ljava/lang/Runnable;", 1 },
	{ "maxLength", &class_int, offsetof(arc_Input$TextInput, F_maxLength), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Input$TextInput, 0, "()V", 1 },
	{ "lambda$new$1", (intptr_t) SM_arc_Input$TextInput_lambda$new$1, 0, "()V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_arc_Input$TextInput_lambda$new$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
};

Class class_arc_Input$TextInput{
		.nativeName = (intptr_t) "arc/Input$TextInput",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Input$TextInput),
		.classVtable = (intptr_t) vtable_arc_Input$TextInput,
		.staticInitializer = (intptr_t) clinit_arc_Input$TextInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Input$TextInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Input$TextInput = registerClass(&class_arc_Input$TextInput);

}

