#include "mindustry/world/modules/BlockModule.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/world/modules/BlockModule.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_modules_BlockModule(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_modules_BlockModule *) object;
}

void clinit_mindustry_world_modules_BlockModule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_modules_BlockModule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/BlockModule:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_modules_BlockModule(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/BlockModule:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(10);
	((func_mindustry_world_modules_BlockModule_read_arc_util_io_Reads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/modules/BlockModule:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	((func_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_modules_BlockModule[] {
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
	(void *) nullptr,
	(void *) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean,
	(void *) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads,
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
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "read", "(Larc/util/io/Reads;Z)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_modules_BlockModule, 0, "()V", 1 },
	{ "write", 0, VTABLE_mindustry_world_modules_BlockModule_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1025 },
	{ "read", (intptr_t) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean, VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads_boolean, "(Larc/util/io/Reads;Z)V", 1 },
	{ "read", (intptr_t) M_mindustry_world_modules_BlockModule_read_arc_util_io_Reads, VTABLE_mindustry_world_modules_BlockModule_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
};

Class class_mindustry_world_modules_BlockModule{
		.nativeName = (intptr_t) "mindustry/world/modules/BlockModule",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_modules_BlockModule),
		.classVtable = (intptr_t) vtable_mindustry_world_modules_BlockModule,
		.staticInitializer = (intptr_t) clinit_mindustry_world_modules_BlockModule,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_modules_BlockModule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_modules_BlockModule = registerClass(&class_mindustry_world_modules_BlockModule);

}
