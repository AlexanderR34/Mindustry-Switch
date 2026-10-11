#include "java/util/zip/ZipFile.h"
#include "java/util/zip/ZipFile_ZipFileInputStream.h"
#include "java/nio/charset/StandardCharsets.h"
#include "java/util/Iterator.h"
#include "java/util/zip/ZipEntry.h"
#include "java/nio/charset/Charset.h"
#include "java/util/zip/ZipFile.h"
#include "java/util/zip/ZipConstants.h"
#include "java/util/ArrayList.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Collections.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/IllegalStateException.h"
#include "java/io/IOException.h"
#include "java/util/Enumeration.h"
#include "java/io/Closeable.h"
#include "java/io/File.h"
#include "java/util/List.h"

extern "C" {

jint SF_java_util_zip_ZipFile_OPEN_READ;
jint SF_java_util_zip_ZipFile_OPEN_DELETE;

void mark_java_util_zip_ZipFile(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_zip_ZipFile *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_entries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_entries)->clazz)->markFunction)((jobject) self->F_entries, mark, depth + 1);
}

void clinit_java_util_zip_ZipFile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_zip_ZipFile_OPEN_READ = jint(1);
	SF_java_util_zip_ZipFile_OPEN_DELETE = jint(4);
}

void init_java_util_zip_ZipFile_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	init_java_util_zip_ZipFile_java_io_File_int(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipFile_java_io_File_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_java_nio_charset_StandardCharsets(ctx);
	sp[2].o = (jobject)SF_java_nio_charset_StandardCharsets_UTF_8;
	init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipFile_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_java_util_zip_ZipFile_java_io_File_int(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipFile_java_lang_String_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, (jint(1)), (frame[2].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipFile_java_io_File_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[2].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((java_util_zip_ZipFile *) NULL_CHECK(sp[0].o))->F_entries = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, (frame[1].o));
	((java_util_zip_ZipFile *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_entries;
	jlong temp0 = (jlong)SM_java_util_zip_ZipFile_open_java_lang_String_java_util_ArrayList_R_long(ctx, sp[1].o, sp[2].o);
	((java_util_zip_ZipFile *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	LINE_NUMBER(45);
	if ((longCompare(((jlong)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(46);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed to open ZipFile"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipFile_getComment_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:getComment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:getEntry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)((func_java_util_ArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_util_zip_ZipEntry, sp[0].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((java_util_zip_ZipEntry *) NULL_CHECK((frame[3].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
	LINE_NUMBER(55);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:getInputStream", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(62);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"entry"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(63);
	if ((longCompare(((jlong)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(64);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ZipFile is closed"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(65);
	clinit_java_util_zip_ZipFile$ZipFileInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_zip_ZipFile$ZipFileInputStream);
	init_java_util_zip_ZipFile$ZipFileInputStream_java_util_zip_ZipFile_java_util_zip_ZipEntry(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipFile_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_zip_ZipFile_entries_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:entries", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_entries;
	sp[0].o = (jobject)SM_java_util_Collections_enumeration_java_util_Collection_R_java_util_Enumeration(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_zip_ZipFile_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_entries;
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_zip_ZipFile_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:close", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	if ((longCompare(((jlong)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(83);
	SM_java_util_zip_ZipFile_close0_long(ctx, ((jlong)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle));
	LINE_NUMBER(84);
	((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(0));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipFile_access$000_java_util_zip_ZipFile_R_long(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:access$000", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return ((jlong)((java_util_zip_ZipFile *) NULL_CHECK((frame[0].o)))->F_handle);
	}

	popStackFrame(ctx);
}

jlong SM_java_util_zip_ZipFile_access$100_long_java_lang_String_R_long(jcontext ctx, jlong param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:access$100", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(13);
	jlong temp0 = (jlong)SM_java_util_zip_ZipFile_openEntry_long_java_lang_String_R_long(ctx, (frame[0].l), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_zip_ZipFile_access$200_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:access$200", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(13);
	jint temp0 = (jint)SM_java_util_zip_ZipFile_readEntry_long_R_int(ctx, (frame[0].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_java_util_zip_ZipFile_access$300_long(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/zip/ZipFile:access$300", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_zip_ZipFile(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(13);
	SM_java_util_zip_ZipFile_closeEntry_long(ctx, (frame[0].l));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_zip_ZipFile[] {
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
	(void *) M_java_util_zip_ZipFile_close,
	(void *) M_java_util_zip_ZipFile_getComment_R_java_lang_String,
	(void *) M_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry,
	(void *) M_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream,
	(void *) M_java_util_zip_ZipFile_getName_R_java_lang_String,
	(void *) M_java_util_zip_ZipFile_entries_R_java_util_Enumeration,
	(void *) M_java_util_zip_ZipFile_size_R_int,
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
	{ "getComment", "()Ljava/lang/String;" },
	{ "getEntry", "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;" },
	{ "getInputStream", "(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "entries", "()Ljava/util/Enumeration;" },
	{ "size", "()I" },
};

static jclass interfaces[] { &class_java_util_zip_ZipConstants, &class_java_io_Closeable, };

static jclass innerClasses[] {
	&class_java_util_zip_ZipFile$ZipFileInputStream,
};

static FieldMetadata fields[] {
	{ "OPEN_READ", &class_int, (intptr_t) &SF_java_util_zip_ZipFile_OPEN_READ, "I", 25 },
	{ "OPEN_DELETE", &class_int, (intptr_t) &SF_java_util_zip_ZipFile_OPEN_DELETE, "I", 25 },
	{ "handle", &class_long, offsetof(java_util_zip_ZipFile, F_handle), "J", 2 },
	{ "name", &class_java_lang_String, offsetof(java_util_zip_ZipFile, F_name), "Ljava/lang/String;", 18 },
	{ "entries", &class_java_util_ArrayList, offsetof(java_util_zip_ZipFile, F_entries), "Ljava/util/ArrayList;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_io_File_int, 0, "(Ljava/io/File;I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_io_File, 0, "(Ljava/io/File;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_lang_String_java_nio_charset_Charset, 0, "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_io_File_java_nio_charset_Charset, 0, "(Ljava/io/File;Ljava/nio/charset/Charset;)V", 1 },
	{ "<init>", (intptr_t) init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset, 0, "(Ljava/io/File;ILjava/nio/charset/Charset;)V", 1 },
	{ "getComment", (intptr_t) M_java_util_zip_ZipFile_getComment_R_java_lang_String, VTABLE_java_util_zip_ZipFile_getComment_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getEntry", (intptr_t) M_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry, VTABLE_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry, "(Ljava/lang/String;)Ljava/util/zip/ZipEntry;", 1 },
	{ "getInputStream", (intptr_t) M_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream, VTABLE_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream, "(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;", 1 },
	{ "getName", (intptr_t) M_java_util_zip_ZipFile_getName_R_java_lang_String, VTABLE_java_util_zip_ZipFile_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "entries", (intptr_t) M_java_util_zip_ZipFile_entries_R_java_util_Enumeration, VTABLE_java_util_zip_ZipFile_entries_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "size", (intptr_t) M_java_util_zip_ZipFile_size_R_int, VTABLE_java_util_zip_ZipFile_size_R_int, "()I", 1 },
	{ "close", (intptr_t) M_java_util_zip_ZipFile_close, VTABLE_java_util_zip_ZipFile_close, "()V", 1 },
	{ "open", (intptr_t) SM_java_util_zip_ZipFile_open_java_lang_String_java_util_ArrayList_R_long, 0, "(Ljava/lang/String;Ljava/util/ArrayList;)J", 266 },
	{ "close0", (intptr_t) SM_java_util_zip_ZipFile_close0_long, 0, "(J)V", 266 },
	{ "openEntry", (intptr_t) SM_java_util_zip_ZipFile_openEntry_long_java_lang_String_R_long, 0, "(JLjava/lang/String;)J", 266 },
	{ "readEntry", (intptr_t) SM_java_util_zip_ZipFile_readEntry_long_R_int, 0, "(J)I", 266 },
	{ "closeEntry", (intptr_t) SM_java_util_zip_ZipFile_closeEntry_long, 0, "(J)V", 266 },
	{ "access$000", (intptr_t) SM_java_util_zip_ZipFile_access$000_java_util_zip_ZipFile_R_long, 0, "(Ljava/util/zip/ZipFile;)J", 4104 },
	{ "access$100", (intptr_t) SM_java_util_zip_ZipFile_access$100_long_java_lang_String_R_long, 0, "(JLjava/lang/String;)J", 4104 },
	{ "access$200", (intptr_t) SM_java_util_zip_ZipFile_access$200_long_R_int, 0, "(J)I", 4104 },
	{ "access$300", (intptr_t) SM_java_util_zip_ZipFile_access$300_long, 0, "(J)V", 4104 },
};

Class class_java_util_zip_ZipFile{
		.nativeName = (intptr_t) "java/util/zip/ZipFile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_zip_ZipFile),
		.classVtable = (intptr_t) vtable_java_util_zip_ZipFile,
		.staticInitializer = (intptr_t) clinit_java_util_zip_ZipFile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_zip_ZipFile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_zip_ZipFile = registerClass(&class_java_util_zip_ZipFile);

}
