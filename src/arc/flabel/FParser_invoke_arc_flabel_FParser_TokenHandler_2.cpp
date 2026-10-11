#include "arc/flabel/FParser_invoke_arc_flabel_FParser_TokenHandler_2.h"
#include "java/lang/Object.h"
#include "arc/flabel/FParser.h"
#include "java/lang/String.h"
#include "arc/flabel/FParser_TokenHandler.h"
#include "arc/flabel/FParser_invoke_arc_flabel_FParser_TokenHandler_2.h"

extern "C" {


void mark_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2(jobject object, jint mark, jint depth) {
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
	auto self = (arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2 *) object;
}

void clinit_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2_handle_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "arc/flabel/FParser_invoke_arc_flabel_FParser$TokenHandler_2:handle", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2 *) self;
	auto object = SM_arc_flabel_FParser_lambda$stripTokens$0_java_lang_String_int_R_java_lang_String(ctx, param0, param1);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2[] {
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
	(void *) M_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2_handle_java_lang_String_int_R_java_lang_String,
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
	{ "handle", "(Ljava/lang/String;I)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_flabel_FParser$TokenHandler, };

static MethodMetadata methods[] {
	{ "handle", (intptr_t) M_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2_handle_java_lang_String_int_R_java_lang_String, VTABLE_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2_handle_java_lang_String_int_R_java_lang_String, "(Ljava/lang/String;I)Ljava/lang/String;", 0 },
};

Class class_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2{
		.nativeName = (intptr_t) "arc/flabel/FParser_invoke_arc_flabel_FParser$TokenHandler_2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2),
		.classVtable = (intptr_t) vtable_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2 = registerClass(&class_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2);

}

