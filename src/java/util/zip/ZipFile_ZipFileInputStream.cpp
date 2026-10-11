#include "java/util/zip/ZipFile_ZipFileInputStream.h"
#include "java/io/InputStream.h"
#include "java/util/zip/ZipFile_ZipFileInputStream.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipEntry.h"
#include "java/lang/String.h"
#include "java/util/zip/ZipFile.h"
#include "java/lang/IllegalStateException.h"
#include "java/io/IOException.h"

extern "C" {


void mark_java_util_zip_ZipFile$ZipFileInputStream(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_io_InputStream(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_zip_ZipFile$ZipFileInputStream *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_zip_ZipFile$ZipFileInputStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_io_InputStream(ctx);
}

void init_java_util_zip_ZipFile$ZipFileInputStream_java_util_zip_ZipFile_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile$ZipFileInputStream:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile$ZipFileInputStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(97);
	((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_io_InputStream(ctx, (frame[0].o));
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_util_zip_ZipFile_access$000_java_util_zip_ZipFile_R_long(ctx, (frame[1].o));
	sp[1].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[2].o)))->F_name;
	jlong temp1 = (jlong)SM_java_util_zip_ZipFile_access$100_long_java_lang_String_R_long(ctx, temp0, sp[1].o);
	((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK(sp[0].o))->F_entryHandle = temp1;
	LINE_NUMBER(99);
	if ((longCompare(((jlong)((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(100);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed to open ZipEntry InputStream"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_util_zip_ZipFile$ZipFileInputStream_read_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile$ZipFileInputStream:read", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	if ((longCompare(((jlong)((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle), (jlong(0)))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(106);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ZipFileStream is closed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)SM_java_util_zip_ZipFile_access$200_long_R_int(ctx, ((jlong)((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipFile$ZipFileInputStream_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile$ZipFileInputStream:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	if ((longCompare(((jlong)((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle), (jlong(0)))) != 0) goto label_1;
	}
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(114);
	SM_java_util_zip_ZipFile_access$300_long(ctx, ((jlong)((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle));
	LINE_NUMBER(115);
	((java_util_zip_ZipFile$ZipFileInputStream *) NULL_CHECK((frame[0].o)))->F_entryHandle = (jlong(0));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipFile$ZipFileInputStream[] {
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
	(void *) M_java_util_zip_ZipFile$ZipFileInputStream_close,
	(void *) M_java_io_InputStream_available_R_int,
	(void *) M_java_io_InputStream_mark_int,
	(void *) M_java_io_InputStream_markSupported_R_boolean,
	(void *) M_java_util_zip_ZipFile$ZipFileInputStream_read_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_R_int,
	(void *) M_java_io_InputStream_read_Array1_byte_int_int_R_int,
	(void *) M_java_io_InputStream_reset,
	(void *) M_java_io_InputStream_skip_long_R_long,
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
	{ "close", "()V" },
	{ "available", "()I" },
	{ "mark", "(I)V" },
	{ "markSupported", "()Z" },
	{ "read", "()I" },
	{ "read", "([B)I" },
	{ "read", "([BII)I" },
	{ "reset", "()V" },
	{ "skip", "(J)J" },
};

static FieldMetadata fields[] {
	{ "entryHandle", &class_long, offsetof(java_util_zip_ZipFile$ZipFileInputStream, F_entryHandle), "J", 2 },
	{ "this$0", &class_java_util_zip_ZipFile, offsetof(java_util_zip_ZipFile$ZipFileInputStream, F_this$0), "Ljava/util/zip/ZipFile;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile$ZipFileInputStream_java_util_zip_ZipFile_java_util_zip_ZipEntry, 0, "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;)V", 1 },
	{ "read", (intptr_t) M_java_util_zip_ZipFile$ZipFileInputStream_read_R_int, VTABLE_java_util_zip_ZipFile$ZipFileInputStream_read_R_int, "()I", 1 },
	{ "close", (intptr_t) M_java_util_zip_ZipFile$ZipFileInputStream_close, VTABLE_java_util_zip_ZipFile$ZipFileInputStream_close, "()V", 1 },
};

Class class_java_util_zip_ZipFile$ZipFileInputStream{
		.nativeName = (intptr_t) "java/util/zip/ZipFile$ZipFileInputStream",
		.parentClass = (intptr_t) &class_java_io_InputStream,
		.size = sizeof(java_util_zip_ZipFile$ZipFileInputStream),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipFile$ZipFileInputStream,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipFile$ZipFileInputStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipFile$ZipFileInputStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_zip_ZipFile,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipFile$ZipFileInputStream = registerClass(&class_java_util_zip_ZipFile$ZipFileInputStream);

}

