#include "arc/ApplicationCore.h"
#include "arc/ApplicationCore.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"
#include "arc/files/Fi.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_ApplicationCore(jobject object, jint mark, jint depth) {
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
	auto self = (arc_ApplicationCore *) object;
	if (self->F_modules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modules)->clazz)->markFunction)((jobject) self->F_modules, mark, depth + 1);
}

void clinit_arc_ApplicationCore(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_ApplicationCore(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_ApplicationCore(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(6);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_ApplicationListener, (jint(0)));
	((arc_ApplicationCore *) NULL_CHECK(sp[0].o))->F_modules = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_add_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	sp[0].o = (jobject)createArray(ctx, &class_arc_ApplicationListener, ((((jarray) nullCheck(ctx, sp[0].o))->length) + (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(11);
	ARRAY_ACCESS(jobject, (frame[2].o), ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)))) = (frame[1].o);
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(13);
	((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules = (jref) (frame[2].o);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	((func_arc_ApplicationCore_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_ApplicationCore_setup])(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(23);
	((func_arc_ApplicationListener_init) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_init, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(22);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(30);
	((func_arc_ApplicationListener_resize_int_int) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_resize_int_int, (frame[6].o)))(ctx, (frame[6].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(29);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(37);
	((func_arc_ApplicationListener_update) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_update, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(36);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:pause", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(44);
	((func_arc_ApplicationListener_pause) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_pause, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(43);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:resume", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(51);
	((func_arc_ApplicationListener_resume) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_resume, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(50);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:dispose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(58);
	((func_arc_ApplicationListener_dispose) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_dispose, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(57);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_ApplicationCore_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/ApplicationCore:fileDropped", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_ApplicationCore *) NULL_CHECK((frame[0].o)))->F_modules;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(65);
	((func_arc_ApplicationListener_fileDropped_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_ApplicationListener, INDEX_arc_ApplicationListener_fileDropped_arc_files_Fi, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(64);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_ApplicationCore[] {
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
	(void *) M_arc_ApplicationCore_init,
	(void *) M_arc_ApplicationCore_resize_int_int,
	(void *) M_arc_ApplicationCore_update,
	(void *) M_arc_ApplicationCore_pause,
	(void *) M_arc_ApplicationCore_resume,
	(void *) M_arc_ApplicationCore_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationCore_fileDropped_arc_files_Fi,
	(void *) M_arc_ApplicationCore_add_arc_ApplicationListener,
	(void *) nullptr,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
	{ "add", "(Larc/ApplicationListener;)V" },
	{ "setup", "()V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static FieldMetadata fields[] {
	{ "modules", getArrayClass(&class_arc_ApplicationListener, 1), offsetof(arc_ApplicationCore, F_modules), "[Larc/ApplicationListener;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_ApplicationCore, 0, "()V", 1 },
	{ "add", (intptr_t) M_arc_ApplicationCore_add_arc_ApplicationListener, VTABLE_arc_ApplicationCore_add_arc_ApplicationListener, "(Larc/ApplicationListener;)V", 1 },
	{ "setup", 0, VTABLE_arc_ApplicationCore_setup, "()V", 1025 },
	{ "init", (intptr_t) M_arc_ApplicationCore_init, VTABLE_arc_ApplicationCore_init, "()V", 1 },
	{ "resize", (intptr_t) M_arc_ApplicationCore_resize_int_int, VTABLE_arc_ApplicationCore_resize_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_arc_ApplicationCore_update, VTABLE_arc_ApplicationCore_update, "()V", 1 },
	{ "pause", (intptr_t) M_arc_ApplicationCore_pause, VTABLE_arc_ApplicationCore_pause, "()V", 1 },
	{ "resume", (intptr_t) M_arc_ApplicationCore_resume, VTABLE_arc_ApplicationCore_resume, "()V", 1 },
	{ "dispose", (intptr_t) M_arc_ApplicationCore_dispose, VTABLE_arc_ApplicationCore_dispose, "()V", 1 },
	{ "fileDropped", (intptr_t) M_arc_ApplicationCore_fileDropped_arc_files_Fi, VTABLE_arc_ApplicationCore_fileDropped_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
};

Class class_arc_ApplicationCore{
		.nativeName = (intptr_t) "arc/ApplicationCore",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_ApplicationCore),
		.classVtable = (intptr_t) vtable_arc_ApplicationCore,
		.staticInitializer = (intptr_t) clinit_arc_ApplicationCore,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_ApplicationCore,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_ApplicationCore = registerClass(&class_arc_ApplicationCore);

}
