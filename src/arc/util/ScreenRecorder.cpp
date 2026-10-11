#include "arc/util/ScreenRecorder.h"
#include "arc/Core.h"
#include "arc/Files.h"
#include "arc/files/Fi.h"
#include "arc/util/ScreenRecorder_invoke_java_lang_Runnable_0.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/util/Reflect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/ScreenRecorder.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_util_ScreenRecorder_record;

void mark_arc_util_ScreenRecorder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_ScreenRecorder_record)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_ScreenRecorder_record)->clazz)->markFunction)((jobject) SF_arc_util_ScreenRecorder_record, mark, depth + 1);
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
	auto self = (arc_util_ScreenRecorder *) object;
}

void init_arc_util_ScreenRecorder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenRecorder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenRecorder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_ScreenRecorder_record(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenRecorder:record", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenRecorder(ctx);
	{
	LINE_NUMBER(28);
	clinit_arc_util_ScreenRecorder(ctx);
	sp[0].o = (jobject)SF_arc_util_ScreenRecorder_record;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(29);
	clinit_arc_util_ScreenRecorder(ctx);
	sp[0].o = (jobject)SF_arc_util_ScreenRecorder_record;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_ScreenRecorder_lambda$static$0_java_lang_reflect_Method_java_lang_Object_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenRecorder:lambda$static$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenRecorder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(21);
	goto label_4;
label_2:;
	INST_ASTORE(3);
label_4:;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_util_ScreenRecorder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/ScreenRecorder:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_ScreenRecorder(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (((jobject) createStringLiteral(ctx, u8"arc.gif.GifRecorder"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"exportDirectory"_j));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_files;
	sp[2].o = (jobject)((func_arc_Files_local_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi, sp[2].o))(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"../../gifs"_j))));
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"update"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(18);
	{ /* InvokeDynamic */
		clinit_arc_util_ScreenRecorder_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_util_ScreenRecorder_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_util_ScreenRecorder_invoke_java_lang_Runnable_0);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_util_ScreenRecorder(ctx);
	SF_arc_util_ScreenRecorder_record = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(24);
	goto label_9;
label_2:;
	LINE_NUMBER(23);
	INST_ASTORE(0);
label_9:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_util_ScreenRecorder[] {
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
	{ "record", &class_java_lang_Runnable, (intptr_t) &SF_arc_util_ScreenRecorder_record, "Ljava/lang/Runnable;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_ScreenRecorder, 0, "()V", 1 },
	{ "record", (intptr_t) SM_arc_util_ScreenRecorder_record, 0, "()V", 9 },
	{ "lambda$static$0", (intptr_t) SM_arc_util_ScreenRecorder_lambda$static$0_java_lang_reflect_Method_java_lang_Object_Array1_java_lang_Object, 0, "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_ScreenRecorder, 0, "()V", 8 },
};

Class class_arc_util_ScreenRecorder{
		.nativeName = (intptr_t) "arc/util/ScreenRecorder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_ScreenRecorder),
		.classVtable = (intptr_t) vtable_arc_util_ScreenRecorder,
		.staticInitializer = (intptr_t) clinit_arc_util_ScreenRecorder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_ScreenRecorder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_ScreenRecorder = registerClass(&class_arc_util_ScreenRecorder);

}
