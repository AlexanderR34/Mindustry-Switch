#include "rhino/ES6Generator_YieldStarResult.h"
#include "java/lang/Object.h"
#include "rhino/ES6Generator.h"
#include "rhino/ES6Generator_YieldStarResult.h"

extern "C" {


void mark_rhino_ES6Generator$YieldStarResult(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ES6Generator$YieldStarResult *) object;
	if (self->F_result)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_result)->clazz)->markFunction)((jobject) self->F_result, mark, depth + 1);
}

void clinit_rhino_ES6Generator$YieldStarResult(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ES6Generator$YieldStarResult_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator$YieldStarResult:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ES6Generator$YieldStarResult(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(431);
	((rhino_ES6Generator$YieldStarResult *) NULL_CHECK((frame[0].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ES6Generator$YieldStarResult:getResult", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((rhino_ES6Generator$YieldStarResult *) NULL_CHECK((frame[0].o)))->F_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ES6Generator$YieldStarResult[] {
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
	(void *) M_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object,
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
	{ "getResult", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "result", &class_java_lang_Object, offsetof(rhino_ES6Generator$YieldStarResult, F_result), "Ljava/lang/Object;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ES6Generator$YieldStarResult_java_lang_Object, 0, "(Ljava/lang/Object;)V", 1 },
	{ "getResult", (intptr_t) M_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object, VTABLE_rhino_ES6Generator$YieldStarResult_getResult_R_java_lang_Object, "()Ljava/lang/Object;", 0 },
};

Class class_rhino_ES6Generator$YieldStarResult{
		.nativeName = (intptr_t) "rhino/ES6Generator$YieldStarResult",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ES6Generator$YieldStarResult),
		.classVtable = (intptr_t) vtable_rhino_ES6Generator$YieldStarResult,
		.staticInitializer = (intptr_t) clinit_rhino_ES6Generator$YieldStarResult,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ES6Generator$YieldStarResult,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_ES6Generator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ES6Generator$YieldStarResult = registerClass(&class_rhino_ES6Generator$YieldStarResult);

}

