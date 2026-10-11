#include "net/jpountz/util/Native_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/FilenameFilter.h"
#include "java/io/File.h"
#include "net/jpountz/util/Native_1.h"

extern "C" {


void mark_net_jpountz_util_Native$1(jobject object, jint mark, jint depth) {
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
	auto self = (net_jpountz_util_Native$1 *) object;
	if (self->F_searchPattern)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_searchPattern)->clazz)->markFunction)((jobject) self->F_searchPattern, mark, depth + 1);
}

void clinit_net_jpountz_util_Native$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_net_jpountz_util_Native$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$1:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_Native$1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(76);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(77);
	((net_jpountz_util_Native$1 *) NULL_CHECK((frame[0].o)))->F_searchPattern = (jref) (((jobject) createStringLiteral(ctx, u8"liblz4-java-"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/Native$1:accept", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"liblz4-java-"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".lck"_j))));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_Native$1[] {
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
	(void *) M_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean,
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
	{ "accept", "(Ljava/io/File;Ljava/lang/String;)Z" },
};

static jclass interfaces[] { &class_java_io_FilenameFilter, };

static FieldMetadata fields[] {
	{ "searchPattern", &class_java_lang_String, offsetof(net_jpountz_util_Native$1, F_searchPattern), "Ljava/lang/String;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_net_jpountz_util_Native$1, 0, "()V", 0 },
	{ "accept", (intptr_t) M_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean, VTABLE_net_jpountz_util_Native$1_accept_java_io_File_java_lang_String_R_boolean, "(Ljava/io/File;Ljava/lang/String;)Z", 1 },
};

Class class_net_jpountz_util_Native$1{
		.nativeName = (intptr_t) "net/jpountz/util/Native$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_util_Native$1),
		.classVtable = (intptr_t) vtable_net_jpountz_util_Native$1,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_Native$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_Native$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_net_jpountz_util_Native$1 = registerClass(&class_net_jpountz_util_Native$1);

}

